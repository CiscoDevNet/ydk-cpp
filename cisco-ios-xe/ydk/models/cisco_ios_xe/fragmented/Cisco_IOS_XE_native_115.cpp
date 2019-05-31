
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_115.hpp"
#include "Cisco_IOS_XE_native_116.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::Vasiright::StormControl::Broadcast::Include::Include()
    :
    multicast{YType::empty, "multicast"}
{

    yang_name = "include"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::StormControl::Broadcast::Include::~Include()
{
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Include::has_data() const
{
    if (is_presence_container) return true;
    return multicast.is_set;
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Include::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast.yfilter);
}

std::string Native::Interface::Vasiright::StormControl::Broadcast::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StormControl::Broadcast::Include::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::StormControl::Broadcast::Include::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::StormControl::Broadcast::Include::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::StormControl::Broadcast::Include::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::StormControl::Broadcast::Include::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Include::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast")
        return true;
    return false;
}

Native::Interface::Vasiright::StormControl::Broadcast::Level::Level()
    :
    threshold(std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast::Level::Threshold>())
    , bps(std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps>())
    , pps(std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps>())
{
    threshold->parent = this;
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::has_data() const
{
    if (is_presence_container) return true;
    return (threshold !=  nullptr && threshold->has_data())
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Vasiright::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast::Level::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    if(bps != nullptr)
    {
        _children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        _children["pps"] = pps;
    }

    return _children;
}

void Native::Interface::Vasiright::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "bps" || name == "pps")
        return true;
    return false;
}

Native::Interface::Vasiright::StormControl::Broadcast::Level::Threshold::Threshold()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::StormControl::Broadcast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasiright::StormControl::Broadcast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StormControl::Broadcast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::StormControl::Broadcast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::StormControl::Broadcast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::StormControl::Broadcast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::StormControl::Broadcast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::Bps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::Pps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasiright::StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Interface::Vasiright::StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::StormControl::Multicast::~Multicast()
{
}

bool Native::Interface::Vasiright::StormControl::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vasiright::StormControl::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vasiright::StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StormControl::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::StormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vasiright::StormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::StormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level != nullptr)
    {
        _children["level"] = level;
    }

    return _children;
}

void Native::Interface::Vasiright::StormControl::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::StormControl::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::StormControl::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Vasiright::StormControl::Multicast::Level::Level()
    :
    threshold(std::make_shared<Native::Interface::Vasiright::StormControl::Multicast::Level::Threshold>())
    , bps(std::make_shared<Native::Interface::Vasiright::StormControl::Multicast::Level::Bps>())
    , pps(std::make_shared<Native::Interface::Vasiright::StormControl::Multicast::Level::Pps>())
{
    threshold->parent = this;
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::StormControl::Multicast::Level::~Level()
{
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::has_data() const
{
    if (is_presence_container) return true;
    return (threshold !=  nullptr && threshold->has_data())
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Vasiright::StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StormControl::Multicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::StormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Vasiright::StormControl::Multicast::Level::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vasiright::StormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vasiright::StormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::StormControl::Multicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    if(bps != nullptr)
    {
        _children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        _children["pps"] = pps;
    }

    return _children;
}

void Native::Interface::Vasiright::StormControl::Multicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::StormControl::Multicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "bps" || name == "pps")
        return true;
    return false;
}

Native::Interface::Vasiright::StormControl::Multicast::Level::Threshold::Threshold()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::StormControl::Multicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasiright::StormControl::Multicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StormControl::Multicast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::StormControl::Multicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::StormControl::Multicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::StormControl::Multicast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::StormControl::Multicast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::Bps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::Pps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasiright::StormControl::Unicast::Unicast()
    :
    level(std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level>())
{
    level->parent = this;

    yang_name = "unicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::StormControl::Unicast::~Unicast()
{
}

bool Native::Interface::Vasiright::StormControl::Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vasiright::StormControl::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vasiright::StormControl::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StormControl::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::StormControl::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::StormControl::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level != nullptr)
    {
        _children["level"] = level;
    }

    return _children;
}

void Native::Interface::Vasiright::StormControl::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::StormControl::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::StormControl::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Vasiright::StormControl::Unicast::Level::Level()
    :
    threshold(std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold>())
    , bps(std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level::Bps>())
    , pps(std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level::Pps>())
{
    threshold->parent = this;
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::StormControl::Unicast::Level::~Level()
{
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::has_data() const
{
    if (is_presence_container) return true;
    return (threshold !=  nullptr && threshold->has_data())
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Vasiright::StormControl::Unicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StormControl::Unicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::StormControl::Unicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::StormControl::Unicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    if(bps != nullptr)
    {
        _children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        _children["pps"] = pps;
    }

    return _children;
}

void Native::Interface::Vasiright::StormControl::Unicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::StormControl::Unicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "bps" || name == "pps")
        return true;
    return false;
}

Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::Threshold()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::Bps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::Pps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasiright::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "trust"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::Trust::~Trust()
{
}

bool Native::Interface::Vasiright::Trust::has_data() const
{
    if (is_presence_container) return true;
    return device.is_set;
}

bool Native::Interface::Vasiright::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::Vasiright::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::Vasiright::PriorityQueue::PriorityQueue()
    :
    out{YType::empty, "out"}
        ,
    cos_map(std::make_shared<Native::Interface::Vasiright::PriorityQueue::CosMap>())
{
    cos_map->parent = this;

    yang_name = "priority-queue"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::PriorityQueue::~PriorityQueue()
{
}

bool Native::Interface::Vasiright::PriorityQueue::has_data() const
{
    if (is_presence_container) return true;
    return out.is_set
	|| (cos_map !=  nullptr && cos_map->has_data());
}

bool Native::Interface::Vasiright::PriorityQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| (cos_map !=  nullptr && cos_map->has_operation());
}

std::string Native::Interface::Vasiright::PriorityQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::PriorityQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::PriorityQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        if(cos_map == nullptr)
        {
            cos_map = std::make_shared<Native::Interface::Vasiright::PriorityQueue::CosMap>();
        }
        return cos_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::PriorityQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cos_map != nullptr)
    {
        _children["cos-map"] = cos_map;
    }

    return _children;
}

void Native::Interface::Vasiright::PriorityQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::PriorityQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::PriorityQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map" || name == "out")
        return true;
    return false;
}

Native::Interface::Vasiright::PriorityQueue::CosMap::CosMap()
    :
    id{YType::uint8, "id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "priority-queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::PriorityQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Vasiright::PriorityQueue::CosMap::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::Interface::Vasiright::PriorityQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cos_values.yfilter);
}

std::string Native::Interface::Vasiright::PriorityQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::PriorityQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::PriorityQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::PriorityQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::PriorityQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

void Native::Interface::Vasiright::PriorityQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::PriorityQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::Vasiright::RcvQueue::RcvQueue()
    :
    cos_map(this, {"queue_id", "threshold_id"})
{

    yang_name = "rcv-queue"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::RcvQueue::~RcvQueue()
{
}

bool Native::Interface::Vasiright::RcvQueue::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cos_map.len(); index++)
    {
        if(cos_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vasiright::RcvQueue::has_operation() const
{
    for (std::size_t index=0; index<cos_map.len(); index++)
    {
        if(cos_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Vasiright::RcvQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::RcvQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::RcvQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        auto ent_ = std::make_shared<Native::Interface::Vasiright::RcvQueue::CosMap>();
        ent_->parent = this;
        cos_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::RcvQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cos_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Vasiright::RcvQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::RcvQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::RcvQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map")
        return true;
    return false;
}

Native::Interface::Vasiright::RcvQueue::CosMap::CosMap()
    :
    queue_id{YType::uint8, "queue-id"},
    threshold_id{YType::uint8, "threshold-id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "rcv-queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::RcvQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Vasiright::RcvQueue::CosMap::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return queue_id.is_set
	|| threshold_id.is_set;
}

bool Native::Interface::Vasiright::RcvQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(threshold_id.yfilter)
	|| ydk::is_set(cos_values.yfilter);
}

std::string Native::Interface::Vasiright::RcvQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";
    ADD_KEY_TOKEN(queue_id, "queue-id");
    ADD_KEY_TOKEN(threshold_id, "threshold-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::RcvQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (threshold_id.is_set || is_set(threshold_id.yfilter)) leaf_name_data.push_back(threshold_id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::RcvQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::RcvQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::RcvQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-id")
    {
        threshold_id = value;
        threshold_id.value_namespace = name_space;
        threshold_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

void Native::Interface::Vasiright::RcvQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "threshold-id")
    {
        threshold_id.yfilter = yfilter;
    }
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::RcvQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "threshold-id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::Vasiright::Peer::Peer()
    :
    default_(std::make_shared<Native::Interface::Vasiright::Peer::Default>())
{
    default_->parent = this;

    yang_name = "peer"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::Peer::~Peer()
{
}

bool Native::Interface::Vasiright::Peer::has_data() const
{
    if (is_presence_container) return true;
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Interface::Vasiright::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Interface::Vasiright::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Interface::Vasiright::Peer::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Interface::Vasiright::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::Vasiright::Peer::Default::Default()
    :
    ip(std::make_shared<Native::Interface::Vasiright::Peer::Default::Ip>())
{
    ip->parent = this;

    yang_name = "default"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::Peer::Default::~Default()
{
}

bool Native::Interface::Vasiright::Peer::Default::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Vasiright::Peer::Default::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Vasiright::Peer::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Peer::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::Peer::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vasiright::Peer::Default::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::Peer::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Interface::Vasiright::Peer::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Peer::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Peer::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::Vasiright::Peer::Default::Ip::Ip()
    :
    address(std::make_shared<Native::Interface::Vasiright::Peer::Default::Ip::Address>())
{
    address->parent = this;

    yang_name = "ip"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::Peer::Default::Ip::~Ip()
{
}

bool Native::Interface::Vasiright::Peer::Default::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Interface::Vasiright::Peer::Default::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Interface::Vasiright::Peer::Default::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Peer::Default::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::Peer::Default::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vasiright::Peer::Default::Ip::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::Peer::Default::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Interface::Vasiright::Peer::Default::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Peer::Default::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Peer::Default::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::Vasiright::Peer::Default::Ip::Address::Address()
    :
    dhcp{YType::empty, "dhcp"}
        ,
    dhcp_pool(nullptr) // presence node
    , pool(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::Peer::Default::Ip::Address::~Address()
{
}

bool Native::Interface::Vasiright::Peer::Default::Ip::Address::has_data() const
{
    if (is_presence_container) return true;
    return dhcp.is_set
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Interface::Vasiright::Peer::Default::Ip::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Interface::Vasiright::Peer::Default::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Peer::Default::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::Peer::Default::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-pool")
    {
        if(dhcp_pool == nullptr)
        {
            dhcp_pool = std::make_shared<Native::Interface::Vasiright::Peer::Default::Ip::Address::DhcpPool>();
        }
        return dhcp_pool;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Interface::Vasiright::Peer::Default::Ip::Address::Pool>();
        }
        return pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::Peer::Default::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp_pool != nullptr)
    {
        _children["dhcp-pool"] = dhcp_pool;
    }

    if(pool != nullptr)
    {
        _children["pool"] = pool;
    }

    return _children;
}

void Native::Interface::Vasiright::Peer::Default::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Peer::Default::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Peer::Default::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-pool" || name == "pool" || name == "dhcp")
        return true;
    return false;
}

Native::Interface::Vasiright::Peer::Default::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "dhcp-pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vasiright::Peer::Default::Ip::Address::DhcpPool::~DhcpPool()
{
}

bool Native::Interface::Vasiright::Peer::Default::Ip::Address::DhcpPool::has_data() const
{
    if (is_presence_container) return true;
    return pools.is_set;
}

bool Native::Interface::Vasiright::Peer::Default::Ip::Address::DhcpPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::Vasiright::Peer::Default::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Peer::Default::Ip::Address::DhcpPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::Peer::Default::Ip::Address::DhcpPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::Peer::Default::Ip::Address::DhcpPool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::Peer::Default::Ip::Address::DhcpPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Peer::Default::Ip::Address::DhcpPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Peer::Default::Ip::Address::DhcpPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::Vasiright::Peer::Default::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vasiright::Peer::Default::Ip::Address::Pool::~Pool()
{
}

bool Native::Interface::Vasiright::Peer::Default::Ip::Address::Pool::has_data() const
{
    if (is_presence_container) return true;
    return pools.is_set;
}

bool Native::Interface::Vasiright::Peer::Default::Ip::Address::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::Vasiright::Peer::Default::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Peer::Default::Ip::Address::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::Peer::Default::Ip::Address::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::Peer::Default::Ip::Address::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::Peer::Default::Ip::Address::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Peer::Default::Ip::Address::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Peer::Default::Ip::Address::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::Vasiright::PmPath::PmPath()
    :
    name{YType::str, "name"},
    interface_id{YType::uint8, "interface-id"}
{

    yang_name = "pm-path"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::PmPath::~PmPath()
{
}

bool Native::Interface::Vasiright::PmPath::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| interface_id.is_set;
}

bool Native::Interface::Vasiright::PmPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string Native::Interface::Vasiright::PmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::PmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::PmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::PmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::PmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::PmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::PmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "interface-id")
        return true;
    return false;
}

Native::Interface::Vasiright::EtAnalytics::EtAnalytics()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "et-analytics"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::EtAnalytics::~EtAnalytics()
{
}

bool Native::Interface::Vasiright::EtAnalytics::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Interface::Vasiright::EtAnalytics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::Vasiright::EtAnalytics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eta:et-analytics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::EtAnalytics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::EtAnalytics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::EtAnalytics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::EtAnalytics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::EtAnalytics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::EtAnalytics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::Vasiright::ServicePolicy::ServicePolicy()
    :
    history{YType::empty, "history"},
    input{YType::str, "input"},
    output{YType::str, "output"}
        ,
    type(std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Vasiright::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return history.is_set
	|| input.is_set
	|| output.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Interface::Vasiright::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Interface::Vasiright::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::Interface::Vasiright::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "history" || name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Vasiright::ServicePolicy::Type::Type()
    :
    control(std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::Control>())
    , performance_monitor(std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor>())
    , service_chain(std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain>())
{
    control->parent = this;
    performance_monitor->parent = this;
    service_chain->parent = this;

    yang_name = "type"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::ServicePolicy::Type::~Type()
{
}

bool Native::Interface::Vasiright::ServicePolicy::Type::has_data() const
{
    if (is_presence_container) return true;
    return (control !=  nullptr && control->has_data())
	|| (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (service_chain !=  nullptr && service_chain->has_data());
}

bool Native::Interface::Vasiright::ServicePolicy::Type::has_operation() const
{
    return is_set(yfilter)
	|| (control !=  nullptr && control->has_operation())
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (service_chain !=  nullptr && service_chain->has_operation());
}

std::string Native::Interface::Vasiright::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::ServicePolicy::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::Control>();
        }
        return control;
    }

    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "service-chain")
    {
        if(service_chain == nullptr)
        {
            service_chain = std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain>();
        }
        return service_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(control != nullptr)
    {
        _children["control"] = control;
    }

    if(performance_monitor != nullptr)
    {
        _children["performance-monitor"] = performance_monitor;
    }

    if(service_chain != nullptr)
    {
        _children["service-chain"] = service_chain;
    }

    return _children;
}

void Native::Interface::Vasiright::ServicePolicy::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::ServicePolicy::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::ServicePolicy::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control" || name == "performance-monitor" || name == "service-chain")
        return true;
    return false;
}

Native::Interface::Vasiright::ServicePolicy::Type::Control::Control()
    :
    subscriber{YType::str, "subscriber"}
{

    yang_name = "control"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::ServicePolicy::Type::Control::~Control()
{
}

bool Native::Interface::Vasiright::ServicePolicy::Type::Control::has_data() const
{
    if (is_presence_container) return true;
    return subscriber.is_set;
}

bool Native::Interface::Vasiright::ServicePolicy::Type::Control::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber.yfilter);
}

std::string Native::Interface::Vasiright::ServicePolicy::Type::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::ServicePolicy::Type::Control::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::ServicePolicy::Type::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::ServicePolicy::Type::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::ServicePolicy::Type::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::ServicePolicy::Type::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::ServicePolicy::Type::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber")
        return true;
    return false;
}

Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::PerformanceMonitor()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "performance-monitor"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::ServiceChain()
    :
    input(std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input>())
    , output(std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-chain"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::~ServiceChain()
{
}

bool Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::~Input()
{
}

bool Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::~Output()
{
}

bool Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Vasiright::Umbrella::Umbrella()
    :
    out{YType::empty, "out"},
    in{YType::str, "in"}
{

    yang_name = "umbrella"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::Umbrella::~Umbrella()
{
}

bool Native::Interface::Vasiright::Umbrella::has_data() const
{
    if (is_presence_container) return true;
    return out.is_set
	|| in.is_set;
}

bool Native::Interface::Vasiright::Umbrella::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Vasiright::Umbrella::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-umbrella:umbrella";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Umbrella::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::Umbrella::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::Umbrella::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::Umbrella::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Umbrella::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Umbrella::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::Vasiright::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "utd"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::Utd::~Utd()
{
}

bool Native::Interface::Vasiright::Utd::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Interface::Vasiright::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::Vasiright::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::Vasiright::ZoneMember::ZoneMember()
    :
    security{YType::str, "security"}
{

    yang_name = "zone-member"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vasiright::ZoneMember::~ZoneMember()
{
}

bool Native::Interface::Vasiright::ZoneMember::has_data() const
{
    if (is_presence_container) return true;
    return security.is_set;
}

bool Native::Interface::Vasiright::ZoneMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security.yfilter);
}

std::string Native::Interface::Vasiright::ZoneMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:zone-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::ZoneMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vasiright::ZoneMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vasiright::ZoneMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vasiright::ZoneMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::ZoneMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::ZoneMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::RouteMap::RouteMap()
    :
    name{YType::str, "name"}
        ,
    route_map_seq(this, {"ordering_seq"})
    , route_map_without_order_seq(this, {"seq_no"})
{

    yang_name = "route-map"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::RouteMap::~RouteMap()
{
}

bool Native::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_map_seq.len(); index++)
    {
        if(route_map_seq[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map_without_order_seq.len(); index++)
    {
        if(route_map_without_order_seq[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::RouteMap::has_operation() const
{
    for (std::size_t index=0; index<route_map_seq.len(); index++)
    {
        if(route_map_seq[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map_without_order_seq.len(); index++)
    {
        if(route_map_without_order_seq[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::RouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-route-map:route-map-seq")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq>();
        ent_->parent = this;
        route_map_seq.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-route-map:route-map-without-order-seq")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq>();
        ent_->parent = this;
        route_map_without_order_seq.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route_map_seq.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : route_map_without_order_seq.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map-seq" || name == "route-map-without-order-seq" || name == "name")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::RouteMapSeq()
    :
    ordering_seq{YType::str, "ordering-seq"},
    operation_{YType::enumeration, "operation"},
    sequence{YType::uint16, "sequence"},
    description{YType::str, "description"}
        ,
    set(std::make_shared<Native::RouteMap::RouteMapSeq::Set>())
    , match(std::make_shared<Native::RouteMap::RouteMapSeq::Match>())
{
    set->parent = this;
    match->parent = this;

    yang_name = "route-map-seq"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::~RouteMapSeq()
{
}

bool Native::RouteMap::RouteMapSeq::has_data() const
{
    if (is_presence_container) return true;
    return ordering_seq.is_set
	|| operation_.is_set
	|| sequence.is_set
	|| description.is_set
	|| (set !=  nullptr && set->has_data())
	|| (match !=  nullptr && match->has_data());
}

bool Native::RouteMap::RouteMapSeq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ordering_seq.yfilter)
	|| ydk::is_set(operation_.yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (set !=  nullptr && set->has_operation())
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-route-map:route-map-seq";
    ADD_KEY_TOKEN(ordering_seq, "ordering-seq");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ordering_seq.is_set || is_set(ordering_seq.yfilter)) leaf_name_data.push_back(ordering_seq.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::RouteMap::RouteMapSeq::Set>();
        }
        return set;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::RouteMap::RouteMapSeq::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(set != nullptr)
    {
        _children["set"] = set;
    }

    if(match != nullptr)
    {
        _children["match"] = match;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ordering-seq")
    {
        ordering_seq = value;
        ordering_seq.value_namespace = name_space;
        ordering_seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ordering-seq")
    {
        ordering_seq.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set" || name == "match" || name == "ordering-seq" || name == "operation" || name == "sequence" || name == "description")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Set()
    :
    attribute_set{YType::str, "attribute-set"},
    automatic_tag{YType::empty, "automatic-tag"},
    global{YType::empty, "global"},
    local_preference{YType::uint32, "local-preference"},
    metric_type{YType::enumeration, "metric-type"},
    mpls_label{YType::empty, "mpls-label"},
    weight{YType::uint32, "weight"},
    traffic_index{YType::uint8, "traffic-index"},
    vrf{YType::str, "vrf"}
        ,
    aigp_metric(std::make_shared<Native::RouteMap::RouteMapSeq::Set::AigpMetric>())
    , as_path(std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath>())
    , clns(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Clns>())
    , community(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Community>())
    , comm_list(std::make_shared<Native::RouteMap::RouteMapSeq::Set::CommList>())
    , dampening(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Dampening>())
    , default_(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default>())
    , extcomm_list(std::make_shared<Native::RouteMap::RouteMapSeq::Set::ExtcommList>())
    , extcommunity(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity>())
    , interface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface>())
    , ip(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip>())
    , ipv6(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6>())
    , level(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Level>())
    , lisp(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Lisp>())
    , metric(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Metric>())
    , nlri(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Nlri>())
    , origin(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Origin>())
    , tag(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Tag>())
{
    aigp_metric->parent = this;
    as_path->parent = this;
    clns->parent = this;
    community->parent = this;
    comm_list->parent = this;
    dampening->parent = this;
    default_->parent = this;
    extcomm_list->parent = this;
    extcommunity->parent = this;
    interface->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    level->parent = this;
    lisp->parent = this;
    metric->parent = this;
    nlri->parent = this;
    origin->parent = this;
    tag->parent = this;

    yang_name = "set"; yang_parent_name = "route-map-seq"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::~Set()
{
}

bool Native::RouteMap::RouteMapSeq::Set::has_data() const
{
    if (is_presence_container) return true;
    return attribute_set.is_set
	|| automatic_tag.is_set
	|| global.is_set
	|| local_preference.is_set
	|| metric_type.is_set
	|| mpls_label.is_set
	|| weight.is_set
	|| traffic_index.is_set
	|| vrf.is_set
	|| (aigp_metric !=  nullptr && aigp_metric->has_data())
	|| (as_path !=  nullptr && as_path->has_data())
	|| (clns !=  nullptr && clns->has_data())
	|| (community !=  nullptr && community->has_data())
	|| (comm_list !=  nullptr && comm_list->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (extcomm_list !=  nullptr && extcomm_list->has_data())
	|| (extcommunity !=  nullptr && extcommunity->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (level !=  nullptr && level->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (nlri !=  nullptr && nlri->has_data())
	|| (origin !=  nullptr && origin->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set.yfilter)
	|| ydk::is_set(automatic_tag.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (aigp_metric !=  nullptr && aigp_metric->has_operation())
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (clns !=  nullptr && clns->has_operation())
	|| (community !=  nullptr && community->has_operation())
	|| (comm_list !=  nullptr && comm_list->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (extcomm_list !=  nullptr && extcomm_list->has_operation())
	|| (extcommunity !=  nullptr && extcommunity->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (level !=  nullptr && level->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (nlri !=  nullptr && nlri->has_operation())
	|| (origin !=  nullptr && origin->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set.is_set || is_set(attribute_set.yfilter)) leaf_name_data.push_back(attribute_set.get_name_leafdata());
    if (automatic_tag.is_set || is_set(automatic_tag.yfilter)) leaf_name_data.push_back(automatic_tag.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aigp-metric")
    {
        if(aigp_metric == nullptr)
        {
            aigp_metric = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AigpMetric>();
        }
        return aigp_metric;
    }

    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Community>();
        }
        return community;
    }

    if(child_yang_name == "comm-list")
    {
        if(comm_list == nullptr)
        {
            comm_list = std::make_shared<Native::RouteMap::RouteMapSeq::Set::CommList>();
        }
        return comm_list;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default>();
        }
        return default_;
    }

    if(child_yang_name == "extcomm-list")
    {
        if(extcomm_list == nullptr)
        {
            extcomm_list = std::make_shared<Native::RouteMap::RouteMapSeq::Set::ExtcommList>();
        }
        return extcomm_list;
    }

    if(child_yang_name == "extcommunity")
    {
        if(extcommunity == nullptr)
        {
            extcommunity = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity>();
        }
        return extcommunity;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Level>();
        }
        return level;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "nlri")
    {
        if(nlri == nullptr)
        {
            nlri = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Nlri>();
        }
        return nlri;
    }

    if(child_yang_name == "origin")
    {
        if(origin == nullptr)
        {
            origin = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Origin>();
        }
        return origin;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aigp_metric != nullptr)
    {
        _children["aigp-metric"] = aigp_metric;
    }

    if(as_path != nullptr)
    {
        _children["as-path"] = as_path;
    }

    if(clns != nullptr)
    {
        _children["clns"] = clns;
    }

    if(community != nullptr)
    {
        _children["community"] = community;
    }

    if(comm_list != nullptr)
    {
        _children["comm-list"] = comm_list;
    }

    if(dampening != nullptr)
    {
        _children["dampening"] = dampening;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(extcomm_list != nullptr)
    {
        _children["extcomm-list"] = extcomm_list;
    }

    if(extcommunity != nullptr)
    {
        _children["extcommunity"] = extcommunity;
    }

    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(level != nullptr)
    {
        _children["level"] = level;
    }

    if(lisp != nullptr)
    {
        _children["lisp"] = lisp;
    }

    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    if(nlri != nullptr)
    {
        _children["nlri"] = nlri;
    }

    if(origin != nullptr)
    {
        _children["origin"] = origin;
    }

    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set")
    {
        attribute_set = value;
        attribute_set.value_namespace = name_space;
        attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "automatic-tag")
    {
        automatic_tag = value;
        automatic_tag.value_namespace = name_space;
        automatic_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set")
    {
        attribute_set.yfilter = yfilter;
    }
    if(value_path == "automatic-tag")
    {
        automatic_tag.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aigp-metric" || name == "as-path" || name == "clns" || name == "community" || name == "comm-list" || name == "dampening" || name == "default" || name == "extcomm-list" || name == "extcommunity" || name == "interface" || name == "ip" || name == "ipv6" || name == "level" || name == "lisp" || name == "metric" || name == "nlri" || name == "origin" || name == "tag" || name == "attribute-set" || name == "automatic-tag" || name == "global" || name == "local-preference" || name == "metric-type" || name == "mpls-label" || name == "weight" || name == "traffic-index" || name == "vrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::AigpMetric::AigpMetric()
    :
    value_{YType::uint32, "value"},
    igp_metric{YType::empty, "igp-metric"}
{

    yang_name = "aigp-metric"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::AigpMetric::~AigpMetric()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AigpMetric::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| igp_metric.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::AigpMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(igp_metric.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::AigpMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::AigpMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::AigpMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::AigpMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::AigpMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::AigpMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::AigpMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "igp-metric")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::AsPath()
    :
    prepend(std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend>())
    , tag(nullptr) // presence node
{
    prepend->parent = this;

    yang_name = "as-path"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::AsPath::~AsPath()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::has_data() const
{
    if (is_presence_container) return true;
    return (prepend !=  nullptr && prepend->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::has_operation() const
{
    return is_set(yfilter)
	|| (prepend !=  nullptr && prepend->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::AsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend")
    {
        if(prepend == nullptr)
        {
            prepend = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend>();
        }
        return prepend;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prepend != nullptr)
    {
        _children["prepend"] = prepend;
    }

    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend" || name == "tag")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::Prepend()
    :
    as_container(std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer>())
    , last_as_cont(std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont>())
{
    as_container->parent = this;
    last_as_cont->parent = this;

    yang_name = "prepend"; yang_parent_name = "as-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::~Prepend()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::has_data() const
{
    if (is_presence_container) return true;
    return (as_container !=  nullptr && as_container->has_data())
	|| (last_as_cont !=  nullptr && last_as_cont->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::has_operation() const
{
    return is_set(yfilter)
	|| (as_container !=  nullptr && as_container->has_operation())
	|| (last_as_cont !=  nullptr && last_as_cont->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-container")
    {
        if(as_container == nullptr)
        {
            as_container = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer>();
        }
        return as_container;
    }

    if(child_yang_name == "last-as-cont")
    {
        if(last_as_cont == nullptr)
        {
            last_as_cont = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont>();
        }
        return last_as_cont;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(as_container != nullptr)
    {
        _children["as-container"] = as_container;
    }

    if(last_as_cont != nullptr)
    {
        _children["last-as-cont"] = last_as_cont;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-container" || name == "last-as-cont")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::AsContainer()
    :
    as_number{YType::str, "as-number"}
{

    yang_name = "as-container"; yang_parent_name = "prepend"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::~AsContainer()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::LastAsCont()
    :
    last_as{YType::uint16, "last-as"}
{

    yang_name = "last-as-cont"; yang_parent_name = "prepend"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::~LastAsCont()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::has_data() const
{
    if (is_presence_container) return true;
    return last_as.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_as.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-as-cont";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_as.is_set || is_set(last_as.yfilter)) leaf_name_data.push_back(last_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-as")
    {
        last_as = value;
        last_as.value_namespace = name_space;
        last_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-as")
    {
        last_as.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-as")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::Tag()
{

    yang_name = "tag"; yang_parent_name = "as-path"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::~Tag()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Clns::Clns()
    :
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Clns::NextHop>())
{
    next_hop->parent = this;

    yang_name = "clns"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Clns::~Clns()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::has_data() const
{
    if (is_presence_container) return true;
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Clns::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "clns"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Community::Community()
    :
    none{YType::empty, "none"}
        ,
    community_well_known(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown>())
{
    community_well_known->parent = this;

    yang_name = "community"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Community::~Community()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Community::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| (community_well_known !=  nullptr && community_well_known->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| (community_well_known !=  nullptr && community_well_known->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-well-known")
    {
        if(community_well_known == nullptr)
        {
            community_well_known = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown>();
        }
        return community_well_known;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(community_well_known != nullptr)
    {
        _children["community-well-known"] = community_well_known;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-well-known" || name == "none")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::CommunityWellKnown()
    :
    community_list{YType::str, "community-list"}
{

    yang_name = "community-well-known"; yang_parent_name = "community"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::~CommunityWellKnown()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : community_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::has_operation() const
{
    for (auto const & leaf : community_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(community_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-well-known";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto community_list_name_datas = community_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_list_name_datas.begin(), community_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-list")
    {
        community_list.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-list")
    {
        community_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::CommList::CommList()
    :
    comm_list_standard{YType::uint16, "comm-list-standard"},
    comm_list_expanded{YType::uint16, "comm-list-expanded"},
    comm_list_name{YType::str, "comm-list-name"},
    delete_{YType::empty, "delete"}
{

    yang_name = "comm-list"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::CommList::~CommList()
{
}

bool Native::RouteMap::RouteMapSeq::Set::CommList::has_data() const
{
    if (is_presence_container) return true;
    return comm_list_standard.is_set
	|| comm_list_expanded.is_set
	|| comm_list_name.is_set
	|| delete_.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::CommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(comm_list_standard.yfilter)
	|| ydk::is_set(comm_list_expanded.yfilter)
	|| ydk::is_set(comm_list_name.yfilter)
	|| ydk::is_set(delete_.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::CommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "comm-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::CommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comm_list_standard.is_set || is_set(comm_list_standard.yfilter)) leaf_name_data.push_back(comm_list_standard.get_name_leafdata());
    if (comm_list_expanded.is_set || is_set(comm_list_expanded.yfilter)) leaf_name_data.push_back(comm_list_expanded.get_name_leafdata());
    if (comm_list_name.is_set || is_set(comm_list_name.yfilter)) leaf_name_data.push_back(comm_list_name.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::CommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::CommList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::CommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "comm-list-standard")
    {
        comm_list_standard = value;
        comm_list_standard.value_namespace = name_space;
        comm_list_standard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comm-list-expanded")
    {
        comm_list_expanded = value;
        comm_list_expanded.value_namespace = name_space;
        comm_list_expanded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comm-list-name")
    {
        comm_list_name = value;
        comm_list_name.value_namespace = name_space;
        comm_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::CommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "comm-list-standard")
    {
        comm_list_standard.yfilter = yfilter;
    }
    if(value_path == "comm-list-expanded")
    {
        comm_list_expanded.yfilter = yfilter;
    }
    if(value_path == "comm-list-name")
    {
        comm_list_name.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::CommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "comm-list-standard" || name == "comm-list-expanded" || name == "comm-list-name" || name == "delete")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Dampening::Dampening()
    :
    dampening_list(this, {"half_life_penalty", "restart_penalty", "suppress_penalty", "max_suppress_penalty"})
{

    yang_name = "dampening"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Dampening::~Dampening()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dampening_list.len(); index++)
    {
        if(dampening_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::has_operation() const
{
    for (std::size_t index=0; index<dampening_list.len(); index++)
    {
        if(dampening_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampening-list")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList>();
        ent_->parent = this;
        dampening_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dampening_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampening-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::DampeningList()
    :
    half_life_penalty{YType::uint8, "half-life-penalty"},
    restart_penalty{YType::uint16, "restart-penalty"},
    suppress_penalty{YType::uint16, "suppress-penalty"},
    max_suppress_penalty{YType::uint8, "max-suppress-penalty"}
{

    yang_name = "dampening-list"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::~DampeningList()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::has_data() const
{
    if (is_presence_container) return true;
    return half_life_penalty.is_set
	|| restart_penalty.is_set
	|| suppress_penalty.is_set
	|| max_suppress_penalty.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(half_life_penalty.yfilter)
	|| ydk::is_set(restart_penalty.yfilter)
	|| ydk::is_set(suppress_penalty.yfilter)
	|| ydk::is_set(max_suppress_penalty.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening-list";
    ADD_KEY_TOKEN(half_life_penalty, "half-life-penalty");
    ADD_KEY_TOKEN(restart_penalty, "restart-penalty");
    ADD_KEY_TOKEN(suppress_penalty, "suppress-penalty");
    ADD_KEY_TOKEN(max_suppress_penalty, "max-suppress-penalty");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life_penalty.is_set || is_set(half_life_penalty.yfilter)) leaf_name_data.push_back(half_life_penalty.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());
    if (suppress_penalty.is_set || is_set(suppress_penalty.yfilter)) leaf_name_data.push_back(suppress_penalty.get_name_leafdata());
    if (max_suppress_penalty.is_set || is_set(max_suppress_penalty.yfilter)) leaf_name_data.push_back(max_suppress_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "half-life-penalty")
    {
        half_life_penalty = value;
        half_life_penalty.value_namespace = name_space;
        half_life_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-penalty")
    {
        suppress_penalty = value;
        suppress_penalty.value_namespace = name_space;
        suppress_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-suppress-penalty")
    {
        max_suppress_penalty = value;
        max_suppress_penalty.value_namespace = name_space;
        max_suppress_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "half-life-penalty")
    {
        half_life_penalty.yfilter = yfilter;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
    if(value_path == "suppress-penalty")
    {
        suppress_penalty.yfilter = yfilter;
    }
    if(value_path == "max-suppress-penalty")
    {
        max_suppress_penalty.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-life-penalty" || name == "restart-penalty" || name == "suppress-penalty" || name == "max-suppress-penalty")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Default::Default()
    :
    interface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default::Interface>())
{
    interface->parent = this;

    yang_name = "default"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Default::~Default()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default::has_data() const
{
    if (is_presence_container) return true;
    return (interface !=  nullptr && interface->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Default::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Default::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Default::Interface::~Interface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default::Interface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Default::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Default::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Default::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Default::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Default::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Default::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Default::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Default::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtcommList()
    :
    ext_range(this, {"comm_list_num"})
    , excomm_list_name(this, {"name"})
{

    yang_name = "extcomm-list"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::~ExtcommList()
{
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ext_range.len(); index++)
    {
        if(ext_range[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<excomm_list_name.len(); index++)
    {
        if(excomm_list_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::has_operation() const
{
    for (std::size_t index=0; index<ext_range.len(); index++)
    {
        if(ext_range[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<excomm_list_name.len(); index++)
    {
        if(excomm_list_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::ExtcommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extcomm-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::ExtcommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::ExtcommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-range")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange>();
        ent_->parent = this;
        ext_range.append(ent_);
        return ent_;
    }

    if(child_yang_name == "excomm-list-name")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName>();
        ent_->parent = this;
        excomm_list_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::ExtcommList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ext_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : excomm_list_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::ExtcommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::ExtcommList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-range" || name == "excomm-list-name")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::ExtRange()
    :
    comm_list_num{YType::uint16, "comm-list-num"},
    delete_{YType::empty, "delete"}
{

    yang_name = "ext-range"; yang_parent_name = "extcomm-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::~ExtRange()
{
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::has_data() const
{
    if (is_presence_container) return true;
    return comm_list_num.is_set
	|| delete_.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(comm_list_num.yfilter)
	|| ydk::is_set(delete_.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-range";
    ADD_KEY_TOKEN(comm_list_num, "comm-list-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comm_list_num.is_set || is_set(comm_list_num.yfilter)) leaf_name_data.push_back(comm_list_num.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "comm-list-num")
    {
        comm_list_num = value;
        comm_list_num.value_namespace = name_space;
        comm_list_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "comm-list-num")
    {
        comm_list_num.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "comm-list-num" || name == "delete")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::ExcommListName()
    :
    name{YType::str, "name"},
    delete_{YType::empty, "delete"}
{

    yang_name = "excomm-list-name"; yang_parent_name = "extcomm-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::~ExcommListName()
{
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| delete_.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delete_.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "excomm-list-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "delete")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Extcommunity()
    :
    cost(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost>())
    , rt(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt>())
    , soo(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo>())
    , vpn_distinguisher(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher>())
{
    cost->parent = this;
    rt->parent = this;
    soo->parent = this;
    vpn_distinguisher->parent = this;

    yang_name = "extcommunity"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::~Extcommunity()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::has_data() const
{
    if (is_presence_container) return true;
    return (cost !=  nullptr && cost->has_data())
	|| (rt !=  nullptr && rt->has_data())
	|| (soo !=  nullptr && soo->has_data())
	|| (vpn_distinguisher !=  nullptr && vpn_distinguisher->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::has_operation() const
{
    return is_set(yfilter)
	|| (cost !=  nullptr && cost->has_operation())
	|| (rt !=  nullptr && rt->has_operation())
	|| (soo !=  nullptr && soo->has_operation())
	|| (vpn_distinguisher !=  nullptr && vpn_distinguisher->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extcommunity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "rt")
    {
        if(rt == nullptr)
        {
            rt = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt>();
        }
        return rt;
    }

    if(child_yang_name == "soo")
    {
        if(soo == nullptr)
        {
            soo = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo>();
        }
        return soo;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        if(vpn_distinguisher == nullptr)
        {
            vpn_distinguisher = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher>();
        }
        return vpn_distinguisher;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cost != nullptr)
    {
        _children["cost"] = cost;
    }

    if(rt != nullptr)
    {
        _children["rt"] = rt;
    }

    if(soo != nullptr)
    {
        _children["soo"] = soo;
    }

    if(vpn_distinguisher != nullptr)
    {
        _children["vpn-distinguisher"] = vpn_distinguisher;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "rt" || name == "soo" || name == "vpn-distinguisher")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Cost()
    :
    community_id(this, {"community_id", "cost_value"})
    , igp(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp>())
    , pre_bestpath(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath>())
{
    igp->parent = this;
    pre_bestpath->parent = this;

    yang_name = "cost"; yang_parent_name = "extcommunity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::~Cost()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community_id.len(); index++)
    {
        if(community_id[index]->has_data())
            return true;
    }
    return (igp !=  nullptr && igp->has_data())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::has_operation() const
{
    for (std::size_t index=0; index<community_id.len(); index++)
    {
        if(community_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (igp !=  nullptr && igp->has_operation())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-id")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId>();
        ent_->parent = this;
        community_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp>();
        }
        return igp;
    }

    if(child_yang_name == "pre-bestpath")
    {
        if(pre_bestpath == nullptr)
        {
            pre_bestpath = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath>();
        }
        return pre_bestpath;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : community_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    if(pre_bestpath != nullptr)
    {
        _children["pre-bestpath"] = pre_bestpath;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id" || name == "igp" || name == "pre-bestpath")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::CommunityId()
    :
    community_id{YType::uint8, "community-id"},
    cost_value{YType::uint32, "cost-value"}
{

    yang_name = "community-id"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::~CommunityId()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::has_data() const
{
    if (is_presence_container) return true;
    return community_id.is_set
	|| cost_value.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_id.yfilter)
	|| ydk::is_set(cost_value.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-id";
    ADD_KEY_TOKEN(community_id, "community-id");
    ADD_KEY_TOKEN(cost_value, "cost-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_id.is_set || is_set(community_id.yfilter)) leaf_name_data.push_back(community_id.get_name_leafdata());
    if (cost_value.is_set || is_set(cost_value.yfilter)) leaf_name_data.push_back(cost_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-id")
    {
        community_id = value;
        community_id.value_namespace = name_space;
        community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-value")
    {
        cost_value = value;
        cost_value.value_namespace = name_space;
        cost_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-id")
    {
        community_id.yfilter = yfilter;
    }
    if(value_path == "cost-value")
    {
        cost_value.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id" || name == "cost-value")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::Igp()
    :
    community_id(this, {"community_id", "cost_value"})
{

    yang_name = "igp"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::~Igp()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community_id.len(); index++)
    {
        if(community_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::has_operation() const
{
    for (std::size_t index=0; index<community_id.len(); index++)
    {
        if(community_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-id")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId>();
        ent_->parent = this;
        community_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : community_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::CommunityId()
    :
    community_id{YType::uint8, "community-id"},
    cost_value{YType::uint32, "cost-value"}
{

    yang_name = "community-id"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::~CommunityId()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::has_data() const
{
    if (is_presence_container) return true;
    return community_id.is_set
	|| cost_value.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_id.yfilter)
	|| ydk::is_set(cost_value.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-id";
    ADD_KEY_TOKEN(community_id, "community-id");
    ADD_KEY_TOKEN(cost_value, "cost-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_id.is_set || is_set(community_id.yfilter)) leaf_name_data.push_back(community_id.get_name_leafdata());
    if (cost_value.is_set || is_set(cost_value.yfilter)) leaf_name_data.push_back(cost_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-id")
    {
        community_id = value;
        community_id.value_namespace = name_space;
        community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-value")
    {
        cost_value = value;
        cost_value.value_namespace = name_space;
        cost_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-id")
    {
        community_id.yfilter = yfilter;
    }
    if(value_path == "cost-value")
    {
        cost_value.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id" || name == "cost-value")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::PreBestpath()
    :
    community_id(this, {"community_id", "cost_value"})
{

    yang_name = "pre-bestpath"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::~PreBestpath()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community_id.len(); index++)
    {
        if(community_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::has_operation() const
{
    for (std::size_t index=0; index<community_id.len(); index++)
    {
        if(community_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-bestpath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-id")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId>();
        ent_->parent = this;
        community_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : community_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::CommunityId()
    :
    community_id{YType::uint8, "community-id"},
    cost_value{YType::uint32, "cost-value"}
{

    yang_name = "community-id"; yang_parent_name = "pre-bestpath"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::~CommunityId()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::has_data() const
{
    if (is_presence_container) return true;
    return community_id.is_set
	|| cost_value.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_id.yfilter)
	|| ydk::is_set(cost_value.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-id";
    ADD_KEY_TOKEN(community_id, "community-id");
    ADD_KEY_TOKEN(cost_value, "cost-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_id.is_set || is_set(community_id.yfilter)) leaf_name_data.push_back(community_id.get_name_leafdata());
    if (cost_value.is_set || is_set(cost_value.yfilter)) leaf_name_data.push_back(cost_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-id")
    {
        community_id = value;
        community_id.value_namespace = name_space;
        community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-value")
    {
        cost_value = value;
        cost_value.value_namespace = name_space;
        cost_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-id")
    {
        community_id.yfilter = yfilter;
    }
    if(value_path == "cost-value")
    {
        cost_value.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id" || name == "cost-value")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Rt()
    :
    asn_nn{YType::str, "asn-nn"}
        ,
    range(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range>())
{
    range->parent = this;

    yang_name = "rt"; yang_parent_name = "extcommunity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::~Rt()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : asn_nn.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::has_operation() const
{
    for (auto const & leaf : asn_nn.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asn_nn.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto asn_nn_name_datas = asn_nn.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), asn_nn_name_datas.begin(), asn_nn_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-nn")
    {
        asn_nn.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-nn")
    {
        asn_nn.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "asn-nn")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::Range()
    :
    lower_limit{YType::str, "lower-limit"},
    high_limit{YType::str, "high-limit"},
    additive{YType::empty, "additive"}
{

    yang_name = "range"; yang_parent_name = "rt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::~Range()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::has_data() const
{
    if (is_presence_container) return true;
    return lower_limit.is_set
	|| high_limit.is_set
	|| additive.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_limit.yfilter)
	|| ydk::is_set(high_limit.yfilter)
	|| ydk::is_set(additive.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_limit.is_set || is_set(lower_limit.yfilter)) leaf_name_data.push_back(lower_limit.get_name_leafdata());
    if (high_limit.is_set || is_set(high_limit.yfilter)) leaf_name_data.push_back(high_limit.get_name_leafdata());
    if (additive.is_set || is_set(additive.yfilter)) leaf_name_data.push_back(additive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-limit")
    {
        lower_limit = value;
        lower_limit.value_namespace = name_space;
        lower_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-limit")
    {
        high_limit = value;
        high_limit.value_namespace = name_space;
        high_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additive")
    {
        additive = value;
        additive.value_namespace = name_space;
        additive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-limit")
    {
        lower_limit.yfilter = yfilter;
    }
    if(value_path == "high-limit")
    {
        high_limit.yfilter = yfilter;
    }
    if(value_path == "additive")
    {
        additive.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-limit" || name == "high-limit" || name == "additive")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::Soo()
    :
    asn_nn{YType::str, "asn-nn"}
{

    yang_name = "soo"; yang_parent_name = "extcommunity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::~Soo()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::has_data() const
{
    if (is_presence_container) return true;
    return asn_nn.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_nn.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_nn.is_set || is_set(asn_nn.yfilter)) leaf_name_data.push_back(asn_nn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-nn")
    {
        asn_nn = value;
        asn_nn.value_namespace = name_space;
        asn_nn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-nn")
    {
        asn_nn.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-nn")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::VpnDistinguisher()
    :
    asn_nn{YType::str, "asn-nn"}
        ,
    range(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range>())
{
    range->parent = this;

    yang_name = "vpn-distinguisher"; yang_parent_name = "extcommunity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::has_data() const
{
    if (is_presence_container) return true;
    return asn_nn.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_nn.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_nn.is_set || is_set(asn_nn.yfilter)) leaf_name_data.push_back(asn_nn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-nn")
    {
        asn_nn = value;
        asn_nn.value_namespace = name_space;
        asn_nn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-nn")
    {
        asn_nn.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "asn-nn")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::Range()
    :
    lower_limit{YType::str, "lower-limit"},
    high_limit{YType::str, "high-limit"},
    additive{YType::empty, "additive"}
{

    yang_name = "range"; yang_parent_name = "vpn-distinguisher"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::~Range()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::has_data() const
{
    if (is_presence_container) return true;
    return lower_limit.is_set
	|| high_limit.is_set
	|| additive.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_limit.yfilter)
	|| ydk::is_set(high_limit.yfilter)
	|| ydk::is_set(additive.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_limit.is_set || is_set(lower_limit.yfilter)) leaf_name_data.push_back(lower_limit.get_name_leafdata());
    if (high_limit.is_set || is_set(high_limit.yfilter)) leaf_name_data.push_back(high_limit.get_name_leafdata());
    if (additive.is_set || is_set(additive.yfilter)) leaf_name_data.push_back(additive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-limit")
    {
        lower_limit = value;
        lower_limit.value_namespace = name_space;
        lower_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-limit")
    {
        high_limit = value;
        high_limit.value_namespace = name_space;
        high_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additive")
    {
        additive = value;
        additive.value_namespace = name_space;
        additive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-limit")
    {
        lower_limit.yfilter = yfilter;
    }
    if(value_path == "high-limit")
    {
        high_limit.yfilter = yfilter;
    }
    if(value_path == "additive")
    {
        additive.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-limit" || name == "high-limit" || name == "additive")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Interface::~Interface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Ip()
    :
    df{YType::uint8, "df"}
        ,
    address(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Address>())
    , default_(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default>())
    , global(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Global>())
    , next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop>())
    , precedence(nullptr) // presence node
    , qos_group(nullptr) // presence node
    , tos(nullptr) // presence node
    , vrf(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Vrf>())
{
    address->parent = this;
    default_->parent = this;
    global->parent = this;
    next_hop->parent = this;
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::~Ip()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::has_data() const
{
    if (is_presence_container) return true;
    return df.is_set
	|| (address !=  nullptr && address->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (precedence !=  nullptr && precedence->has_data())
	|| (qos_group !=  nullptr && qos_group->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (precedence !=  nullptr && precedence->has_operation())
	|| (qos_group !=  nullptr && qos_group->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df.is_set || is_set(df.yfilter)) leaf_name_data.push_back(df.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default>();
        }
        return default_;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "precedence")
    {
        if(precedence == nullptr)
        {
            precedence = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Precedence>();
        }
        return precedence;
    }

    if(child_yang_name == "qos-group")
    {
        if(qos_group == nullptr)
        {
            qos_group = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup>();
        }
        return qos_group;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Tos>();
        }
        return tos;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(precedence != nullptr)
    {
        _children["precedence"] = precedence;
    }

    if(qos_group != nullptr)
    {
        _children["qos-group"] = qos_group;
    }

    if(tos != nullptr)
    {
        _children["tos"] = tos;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df")
    {
        df = value;
        df.value_namespace = name_space;
        df.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df")
    {
        df.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "default" || name == "global" || name == "next-hop" || name == "precedence" || name == "qos-group" || name == "tos" || name == "vrf" || name == "df")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Address::Address()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::Address::~Address()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Address::has_data() const
{
    if (is_presence_container) return true;
    return prefix_list.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default::Default()
    :
    global(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global>())
    , next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop>())
    , vrf(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf>())
{
    global->parent = this;
    next_hop->parent = this;
    vrf->parent = this;

    yang_name = "default"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default::~Default()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "next-hop" || name == "vrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::Global()
    :
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop>())
{
    next_hop->parent = this;

    yang_name = "global"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::~Global()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::has_data() const
{
    if (is_presence_container) return true;
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrf()
    :
    vrfs(this, {"vrf"})
{

    yang_name = "vrf"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::~Vrf()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrfs.len(); index++)
    {
        if(vrfs[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrfs.len(); index++)
    {
        if(vrfs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs>();
        ent_->parent = this;
        vrfs.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrfs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::Vrfs()
    :
    vrf{YType::str, "vrf"}
        ,
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop>())
{
    next_hop->parent = this;

    yang_name = "vrfs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::~Vrfs()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "vrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Global::Global()
    :
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop>())
{
    next_hop->parent = this;

    yang_name = "global"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::Global::~Global()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::has_data() const
{
    if (is_presence_container) return true;
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::NextHop()
    :
    address{YType::str, "address"},
    peer_address{YType::empty, "peer-address"},
    self{YType::empty, "self"}
        ,
    dynamic(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic>())
    , encapsulate(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate>())
    , recursive(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive>())
    , verify_availability(nullptr) // presence node
{
    dynamic->parent = this;
    encapsulate->parent = this;
    recursive->parent = this;

    yang_name = "next-hop"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return peer_address.is_set
	|| self.is_set
	|| (dynamic !=  nullptr && dynamic->has_data())
	|| (encapsulate !=  nullptr && encapsulate->has_data())
	|| (recursive !=  nullptr && recursive->has_data())
	|| (verify_availability !=  nullptr && verify_availability->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(self.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation())
	|| (encapsulate !=  nullptr && encapsulate->has_operation())
	|| (recursive !=  nullptr && recursive->has_operation())
	|| (verify_availability !=  nullptr && verify_availability->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (self.is_set || is_set(self.yfilter)) leaf_name_data.push_back(self.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic>();
        }
        return dynamic;
    }

    if(child_yang_name == "encapsulate")
    {
        if(encapsulate == nullptr)
        {
            encapsulate = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate>();
        }
        return encapsulate;
    }

    if(child_yang_name == "recursive")
    {
        if(recursive == nullptr)
        {
            recursive = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive>();
        }
        return recursive;
    }

    if(child_yang_name == "verify-availability")
    {
        if(verify_availability == nullptr)
        {
            verify_availability = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability>();
        }
        return verify_availability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    if(encapsulate != nullptr)
    {
        _children["encapsulate"] = encapsulate;
    }

    if(recursive != nullptr)
    {
        _children["recursive"] = recursive;
    }

    if(verify_availability != nullptr)
    {
        _children["verify-availability"] = verify_availability;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "self")
    {
        self = value;
        self.value_namespace = name_space;
        self.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "self")
    {
        self.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "encapsulate" || name == "recursive" || name == "verify-availability" || name == "address" || name == "peer-address" || name == "self")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::Dynamic()
    :
    dhcp{YType::empty, "dhcp"}
{

    yang_name = "dynamic"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::~Dynamic()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return dhcp.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::Encapsulate()
    :
    l3vpn{YType::str, "l3vpn"}
{

    yang_name = "encapsulate"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::~Encapsulate()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::has_data() const
{
    if (is_presence_container) return true;
    return l3vpn.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l3vpn.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3vpn.is_set || is_set(l3vpn.yfilter)) leaf_name_data.push_back(l3vpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l3vpn")
    {
        l3vpn = value;
        l3vpn.value_namespace = name_space;
        l3vpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l3vpn")
    {
        l3vpn.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l3vpn")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Recursive()
    :
    ipv4{YType::str, "ipv4"},
    global{YType::str, "global"}
        ,
    vrf(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf>())
{
    vrf->parent = this;

    yang_name = "recursive"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::~Recursive()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| global.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(global.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "ipv4" || name == "global")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrf()
    :
    vrfs(this, {"vrf"})
{

    yang_name = "vrf"; yang_parent_name = "recursive"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::~Vrf()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrfs.len(); index++)
    {
        if(vrfs[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrfs.len(); index++)
    {
        if(vrfs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs>();
        ent_->parent = this;
        vrfs.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrfs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::Vrfs()
    :
    vrf{YType::str, "vrf"},
    ipv4{YType::str, "ipv4"}
{

    yang_name = "vrfs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::~Vrfs()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| ipv4.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "ipv4")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::VerifyAvailability()
    :
    ipv4(this, {"ipv4"})
{

    yang_name = "verify-availability"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::~VerifyAvailability()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify-availability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::get_children() const
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

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    range{YType::uint16, "range"},
    track{YType::uint16, "track"}
{

    yang_name = "ipv4"; yang_parent_name = "verify-availability"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::~Ipv4()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| range.is_set
	|| track.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "range" || name == "track")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::Precedence()
    :
    precedence_value{YType::uint8, "precedence-value"},
    precedence_fields{YType::enumeration, "precedence-fields"}
{

    yang_name = "precedence"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::~Precedence()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::has_data() const
{
    if (is_presence_container) return true;
    return precedence_value.is_set
	|| precedence_fields.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(precedence_value.yfilter)
	|| ydk::is_set(precedence_fields.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (precedence_value.is_set || is_set(precedence_value.yfilter)) leaf_name_data.push_back(precedence_value.get_name_leafdata());
    if (precedence_fields.is_set || is_set(precedence_fields.yfilter)) leaf_name_data.push_back(precedence_fields.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "precedence-value")
    {
        precedence_value = value;
        precedence_value.value_namespace = name_space;
        precedence_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence-fields")
    {
        precedence_fields = value;
        precedence_fields.value_namespace = name_space;
        precedence_fields.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "precedence-value")
    {
        precedence_value.yfilter = yfilter;
    }
    if(value_path == "precedence-fields")
    {
        precedence_fields.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "precedence-value" || name == "precedence-fields")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::QosGroup()
    :
    qos_id{YType::uint8, "qos-id"}
{

    yang_name = "qos-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::~QosGroup()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::has_data() const
{
    if (is_presence_container) return true;
    return qos_id.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_id.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_id.is_set || is_set(qos_id.yfilter)) leaf_name_data.push_back(qos_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-id")
    {
        qos_id = value;
        qos_id.value_namespace = name_space;
        qos_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-id")
    {
        qos_id.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-id")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Tos::Tos()
    :
    service_value{YType::uint8, "service-value"},
    tos_fields{YType::enumeration, "tos-fields"}
{

    yang_name = "tos"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Tos::~Tos()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Tos::has_data() const
{
    if (is_presence_container) return true;
    return service_value.is_set
	|| tos_fields.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_value.yfilter)
	|| ydk::is_set(tos_fields.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_value.is_set || is_set(service_value.yfilter)) leaf_name_data.push_back(service_value.get_name_leafdata());
    if (tos_fields.is_set || is_set(tos_fields.yfilter)) leaf_name_data.push_back(tos_fields.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-value")
    {
        service_value = value;
        service_value.value_namespace = name_space;
        service_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-fields")
    {
        tos_fields = value;
        tos_fields.value_namespace = name_space;
        tos_fields.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-value")
    {
        service_value.yfilter = yfilter;
    }
    if(value_path == "tos-fields")
    {
        tos_fields.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-value" || name == "tos-fields")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrf()
    :
    vrfs(this, {"vrf"})
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::~Vrf()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrfs.len(); index++)
    {
        if(vrfs[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrfs.len(); index++)
    {
        if(vrfs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs>();
        ent_->parent = this;
        vrfs.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrfs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::Vrfs()
    :
    vrf{YType::str, "vrf"}
        ,
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop>())
{
    next_hop->parent = this;

    yang_name = "vrfs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::~Vrfs()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "vrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Ipv6()
    :
    precedence{YType::uint8, "precedence"}
        ,
    address(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Address>())
    , default_(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default>())
    , global(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Global>())
    , next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop>())
    , bvrf(this, {"bvrf"})
{
    address->parent = this;
    default_->parent = this;
    global->parent = this;
    next_hop->parent = this;

    yang_name = "ipv6"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::~Ipv6()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bvrf.len(); index++)
    {
        if(bvrf[index]->has_data())
            return true;
    }
    return precedence.is_set
	|| (address !=  nullptr && address->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<bvrf.len(); index++)
    {
        if(bvrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default>();
        }
        return default_;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "bvrf")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf>();
        ent_->parent = this;
        bvrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    count_ = 0;
    for (auto ent_ : bvrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "default" || name == "global" || name == "next-hop" || name == "bvrf" || name == "precedence")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::Address()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::~Address()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Default()
    :
    global(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global>())
    , next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop>())
    , dvrf(this, {"dvrf"})
{
    global->parent = this;
    next_hop->parent = this;

    yang_name = "default"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::~Default()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dvrf.len(); index++)
    {
        if(dvrf[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::has_operation() const
{
    for (std::size_t index=0; index<dvrf.len(); index++)
    {
        if(dvrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "dvrf")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf>();
        ent_->parent = this;
        dvrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    count_ = 0;
    for (auto ent_ : dvrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "next-hop" || name == "dvrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global::Global()
    :
    next_hop{YType::str, "next-hop"}
{

    yang_name = "global"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global::~Global()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global::has_data() const
{
    if (is_presence_container) return true;
    return next_hop.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"}
        ,
    ipv6s(this, {"ipv6"})
{

    yang_name = "next-hop"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6s.len(); index++)
    {
        if(ipv6s[index]->has_data())
            return true;
    }
    return next_hop_address.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::has_operation() const
{
    for (std::size_t index=0; index<ipv6s.len(); index++)
    {
        if(ipv6s[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6s")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::Ipv6s>();
        ent_->parent = this;
        ipv6s.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6s.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6s" || name == "next-hop-address")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::Ipv6s::Ipv6s()
    :
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ipv6s"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::Ipv6s::~Ipv6s()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::Ipv6s::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::Ipv6s::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::Ipv6s::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6s";
    ADD_KEY_TOKEN(ipv6, "ipv6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::Ipv6s::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::Ipv6s::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::Ipv6s::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::Ipv6s::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::Ipv6s::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::Ipv6s::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf()
    :
    dvrf{YType::str, "dvrf"}
        ,
    dvrf0(this, {"dvrf0"})
{

    yang_name = "dvrf"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::~Dvrf()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dvrf0.len(); index++)
    {
        if(dvrf0[index]->has_data())
            return true;
    }
    return dvrf.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::has_operation() const
{
    for (std::size_t index=0; index<dvrf0.len(); index++)
    {
        if(dvrf0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dvrf.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dvrf";
    ADD_KEY_TOKEN(dvrf, "dvrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dvrf.is_set || is_set(dvrf.yfilter)) leaf_name_data.push_back(dvrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dvrf0")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf0>();
        ent_->parent = this;
        dvrf0.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dvrf0.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dvrf")
    {
        dvrf = value;
        dvrf.value_namespace = name_space;
        dvrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dvrf")
    {
        dvrf.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dvrf0" || name == "dvrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf0::Dvrf0()
    :
    dvrf0{YType::str, "dvrf0"},
    next_hop{YType::empty, "next-hop"}
{

    yang_name = "dvrf0"; yang_parent_name = "dvrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf0::~Dvrf0()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf0::has_data() const
{
    if (is_presence_container) return true;
    return dvrf0.is_set
	|| next_hop.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dvrf0.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dvrf0";
    ADD_KEY_TOKEN(dvrf0, "dvrf0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dvrf0.is_set || is_set(dvrf0.yfilter)) leaf_name_data.push_back(dvrf0.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dvrf0")
    {
        dvrf0 = value;
        dvrf0.value_namespace = name_space;
        dvrf0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dvrf0")
    {
        dvrf0.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dvrf0" || name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::Global()
    :
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop>())
{
    next_hop->parent = this;

    yang_name = "global"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::~Global()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::has_data() const
{
    if (is_presence_container) return true;
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NextHop()
    :
    verify_availability{YType::str, "verify-availability"}
        ,
    nh_ipv6(this, {"nh_ipv6"})
{

    yang_name = "next-hop"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nh_ipv6.len(); index++)
    {
        if(nh_ipv6[index]->has_data())
            return true;
    }
    return verify_availability.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::has_operation() const
{
    for (std::size_t index=0; index<nh_ipv6.len(); index++)
    {
        if(nh_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(verify_availability.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (verify_availability.is_set || is_set(verify_availability.yfilter)) leaf_name_data.push_back(verify_availability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-ipv6")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6>();
        ent_->parent = this;
        nh_ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nh_ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "verify-availability")
    {
        verify_availability = value;
        verify_availability.value_namespace = name_space;
        verify_availability.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "verify-availability")
    {
        verify_availability.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-ipv6" || name == "verify-availability")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::NhIpv6()
    :
    nh_ipv6{YType::str, "nh-ipv6"},
    nh_ipv60{YType::str, "nh-ipv60"}
{

    yang_name = "nh-ipv6"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::~NhIpv6()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::has_data() const
{
    if (is_presence_container) return true;
    return nh_ipv6.is_set
	|| nh_ipv60.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nh_ipv6.yfilter)
	|| ydk::is_set(nh_ipv60.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-ipv6";
    ADD_KEY_TOKEN(nh_ipv6, "nh-ipv6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_ipv6.is_set || is_set(nh_ipv6.yfilter)) leaf_name_data.push_back(nh_ipv6.get_name_leafdata());
    if (nh_ipv60.is_set || is_set(nh_ipv60.yfilter)) leaf_name_data.push_back(nh_ipv60.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nh-ipv6")
    {
        nh_ipv6 = value;
        nh_ipv6.value_namespace = name_space;
        nh_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-ipv60")
    {
        nh_ipv60 = value;
        nh_ipv60.value_namespace = name_space;
        nh_ipv60.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nh-ipv6")
    {
        nh_ipv6.yfilter = yfilter;
    }
    if(value_path == "nh-ipv60")
    {
        nh_ipv60.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-ipv6" || name == "nh-ipv60")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NextHop()
    :
    peer_address{YType::empty, "peer-address"},
    recursive{YType::str, "recursive"}
        ,
    nha_ipv6(this, {"nha_ipv6"})
    , encapsulate(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate>())
    , verify_availability(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability>())
{
    encapsulate->parent = this;
    verify_availability->parent = this;

    yang_name = "next-hop"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nha_ipv6.len(); index++)
    {
        if(nha_ipv6[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| recursive.is_set
	|| (encapsulate !=  nullptr && encapsulate->has_data())
	|| (verify_availability !=  nullptr && verify_availability->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::has_operation() const
{
    for (std::size_t index=0; index<nha_ipv6.len(); index++)
    {
        if(nha_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(recursive.yfilter)
	|| (encapsulate !=  nullptr && encapsulate->has_operation())
	|| (verify_availability !=  nullptr && verify_availability->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (recursive.is_set || is_set(recursive.yfilter)) leaf_name_data.push_back(recursive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nha-ipv6")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6>();
        ent_->parent = this;
        nha_ipv6.append(ent_);
        return ent_;
    }

    if(child_yang_name == "encapsulate")
    {
        if(encapsulate == nullptr)
        {
            encapsulate = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate>();
        }
        return encapsulate;
    }

    if(child_yang_name == "verify-availability")
    {
        if(verify_availability == nullptr)
        {
            verify_availability = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability>();
        }
        return verify_availability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nha_ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(encapsulate != nullptr)
    {
        _children["encapsulate"] = encapsulate;
    }

    if(verify_availability != nullptr)
    {
        _children["verify-availability"] = verify_availability;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive")
    {
        recursive = value;
        recursive.value_namespace = name_space;
        recursive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "recursive")
    {
        recursive.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nha-ipv6" || name == "encapsulate" || name == "verify-availability" || name == "peer-address" || name == "recursive")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv6()
    :
    nha_ipv6{YType::str, "nha-ipv6"}
        ,
    nha_ipv60(this, {"nha_ipv60"})
{

    yang_name = "nha-ipv6"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::~NhaIpv6()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nha_ipv60.len(); index++)
    {
        if(nha_ipv60[index]->has_data())
            return true;
    }
    return nha_ipv6.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::has_operation() const
{
    for (std::size_t index=0; index<nha_ipv60.len(); index++)
    {
        if(nha_ipv60[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nha_ipv6.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nha-ipv6";
    ADD_KEY_TOKEN(nha_ipv6, "nha-ipv6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nha_ipv6.is_set || is_set(nha_ipv6.yfilter)) leaf_name_data.push_back(nha_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nha-ipv60")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60>();
        ent_->parent = this;
        nha_ipv60.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nha_ipv60.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nha-ipv6")
    {
        nha_ipv6 = value;
        nha_ipv6.value_namespace = name_space;
        nha_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nha-ipv6")
    {
        nha_ipv6.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nha-ipv60" || name == "nha-ipv6")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::NhaIpv60()
    :
    nha_ipv60{YType::str, "nha-ipv60"},
    nh_ipv6{YType::str, "nh-ipv6"}
{

    yang_name = "nha-ipv60"; yang_parent_name = "nha-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::~NhaIpv60()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::has_data() const
{
    if (is_presence_container) return true;
    return nha_ipv60.is_set
	|| nh_ipv6.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nha_ipv60.yfilter)
	|| ydk::is_set(nh_ipv6.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nha-ipv60";
    ADD_KEY_TOKEN(nha_ipv60, "nha-ipv60");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nha_ipv60.is_set || is_set(nha_ipv60.yfilter)) leaf_name_data.push_back(nha_ipv60.get_name_leafdata());
    if (nh_ipv6.is_set || is_set(nh_ipv6.yfilter)) leaf_name_data.push_back(nh_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nha-ipv60")
    {
        nha_ipv60 = value;
        nha_ipv60.value_namespace = name_space;
        nha_ipv60.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-ipv6")
    {
        nh_ipv6 = value;
        nh_ipv6.value_namespace = name_space;
        nh_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nha-ipv60")
    {
        nha_ipv60.yfilter = yfilter;
    }
    if(value_path == "nh-ipv6")
    {
        nh_ipv6.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nha-ipv60" || name == "nh-ipv6")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::Encapsulate()
    :
    l3vpn{YType::str, "l3vpn"}
{

    yang_name = "encapsulate"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::~Encapsulate()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::has_data() const
{
    if (is_presence_container) return true;
    return l3vpn.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l3vpn.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3vpn.is_set || is_set(l3vpn.yfilter)) leaf_name_data.push_back(l3vpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l3vpn")
    {
        l3vpn = value;
        l3vpn.value_namespace = name_space;
        l3vpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l3vpn")
    {
        l3vpn.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l3vpn")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VerifyAvailability()
    :
    va_ipv6(this, {"va_ipv6"})
{

    yang_name = "verify-availability"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::~VerifyAvailability()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<va_ipv6.len(); index++)
    {
        if(va_ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::has_operation() const
{
    for (std::size_t index=0; index<va_ipv6.len(); index++)
    {
        if(va_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify-availability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "va-ipv6")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6>();
        ent_->parent = this;
        va_ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : va_ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "va-ipv6")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::VaIpv6()
    :
    va_ipv6{YType::str, "va-ipv6"},
    seq_nh{YType::uint16, "seq-nh"}
{

    yang_name = "va-ipv6"; yang_parent_name = "verify-availability"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::~VaIpv6()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::has_data() const
{
    if (is_presence_container) return true;
    return va_ipv6.is_set
	|| seq_nh.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(va_ipv6.yfilter)
	|| ydk::is_set(seq_nh.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "va-ipv6";
    ADD_KEY_TOKEN(va_ipv6, "va-ipv6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (va_ipv6.is_set || is_set(va_ipv6.yfilter)) leaf_name_data.push_back(va_ipv6.get_name_leafdata());
    if (seq_nh.is_set || is_set(seq_nh.yfilter)) leaf_name_data.push_back(seq_nh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "va-ipv6")
    {
        va_ipv6 = value;
        va_ipv6.value_namespace = name_space;
        va_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-nh")
    {
        seq_nh = value;
        seq_nh.value_namespace = name_space;
        seq_nh.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "va-ipv6")
    {
        va_ipv6.yfilter = yfilter;
    }
    if(value_path == "seq-nh")
    {
        seq_nh.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "va-ipv6" || name == "seq-nh")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf()
    :
    bvrf{YType::str, "bvrf"}
        ,
    bvrf0(this, {"bvrf0"})
{

    yang_name = "bvrf"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::~Bvrf()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bvrf0.len(); index++)
    {
        if(bvrf0[index]->has_data())
            return true;
    }
    return bvrf.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::has_operation() const
{
    for (std::size_t index=0; index<bvrf0.len(); index++)
    {
        if(bvrf0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bvrf.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bvrf";
    ADD_KEY_TOKEN(bvrf, "bvrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bvrf.is_set || is_set(bvrf.yfilter)) leaf_name_data.push_back(bvrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bvrf0")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0>();
        ent_->parent = this;
        bvrf0.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bvrf0.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bvrf")
    {
        bvrf = value;
        bvrf.value_namespace = name_space;
        bvrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bvrf")
    {
        bvrf.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bvrf0" || name == "bvrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::Bvrf0()
    :
    bvrf0{YType::str, "bvrf0"}
        ,
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop>())
{
    next_hop->parent = this;

    yang_name = "bvrf0"; yang_parent_name = "bvrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::~Bvrf0()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::has_data() const
{
    if (is_presence_container) return true;
    return bvrf0.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bvrf0.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bvrf0";
    ADD_KEY_TOKEN(bvrf0, "bvrf0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bvrf0.is_set || is_set(bvrf0.yfilter)) leaf_name_data.push_back(bvrf0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bvrf0")
    {
        bvrf0 = value;
        bvrf0.value_namespace = name_space;
        bvrf0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bvrf0")
    {
        bvrf0.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "bvrf0")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::NextHop()
    :
    bipv6{YType::str, "bipv6"},
    verify_availability{YType::empty, "verify-availability"}
{

    yang_name = "next-hop"; yang_parent_name = "bvrf0"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return bipv6.is_set
	|| verify_availability.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bipv6.yfilter)
	|| ydk::is_set(verify_availability.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bipv6.is_set || is_set(bipv6.yfilter)) leaf_name_data.push_back(bipv6.get_name_leafdata());
    if (verify_availability.is_set || is_set(verify_availability.yfilter)) leaf_name_data.push_back(verify_availability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bipv6")
    {
        bipv6 = value;
        bipv6.value_namespace = name_space;
        bipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-availability")
    {
        verify_availability = value;
        verify_availability.value_namespace = name_space;
        verify_availability.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bipv6")
    {
        bipv6.yfilter = yfilter;
    }
    if(value_path == "verify-availability")
    {
        verify_availability.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bipv6" || name == "verify-availability")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Level::Level()
    :
    level_1{YType::empty, "level-1"},
    level_1_2{YType::empty, "level-1-2"},
    level_2{YType::empty, "level-2"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "level"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Level::~Level()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Level::has_data() const
{
    if (is_presence_container) return true;
    return level_1.is_set
	|| level_1_2.is_set
	|| level_2.is_set
	|| nssa_only.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_1_2.yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_1_2.is_set || is_set(level_1_2.yfilter)) leaf_name_data.push_back(level_1_2.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-1-2")
    {
        level_1_2 = value;
        level_1_2.value_namespace = name_space;
        level_1_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "level-1-2")
    {
        level_1_2.yfilter = yfilter;
    }
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-1-2" || name == "level-2" || name == "nssa-only")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Lisp::Lisp()
    :
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Lisp::~Lisp()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return locator_set.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Metric::Metric()
    :
    metric_change{YType::str, "metric-change"}
        ,
    values(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Metric::Values>())
{
    values->parent = this;

    yang_name = "metric"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Metric::~Metric()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_change.is_set
	|| (values !=  nullptr && values->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_change.yfilter)
	|| (values !=  nullptr && values->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_change.is_set || is_set(metric_change.yfilter)) leaf_name_data.push_back(metric_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "values")
    {
        if(values == nullptr)
        {
            values = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Metric::Values>();
        }
        return values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(values != nullptr)
    {
        _children["values"] = values;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-change")
    {
        metric_change = value;
        metric_change.value_namespace = name_space;
        metric_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-change")
    {
        metric_change.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "values" || name == "metric-change")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Metric::Values::Values()
    :
    value_{YType::uint32, "value"},
    delay{YType::str, "delay"},
    reliability{YType::uint8, "reliability"},
    loading{YType::uint8, "loading"},
    mtu{YType::uint32, "MTU"}
{

    yang_name = "values"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Metric::Values::~Values()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Metric::Values::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| delay.is_set
	|| reliability.is_set
	|| loading.is_set
	|| mtu.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Metric::Values::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(reliability.yfilter)
	|| ydk::is_set(loading.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Metric::Values::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Metric::Values::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());
    if (loading.is_set || is_set(loading.yfilter)) leaf_name_data.push_back(loading.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Metric::Values::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Metric::Values::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Metric::Values::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loading")
    {
        loading = value;
        loading.value_namespace = name_space;
        loading.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "MTU")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Metric::Values::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
    if(value_path == "loading")
    {
        loading.yfilter = yfilter;
    }
    if(value_path == "MTU")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Metric::Values::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "delay" || name == "reliability" || name == "loading" || name == "MTU")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Nlri::Nlri()
    :
    unicast{YType::empty, "unicast"},
    multicast{YType::empty, "multicast"}
{

    yang_name = "nlri"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Nlri::~Nlri()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Nlri::has_data() const
{
    if (is_presence_container) return true;
    return unicast.is_set
	|| multicast.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Nlri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter)
	|| ydk::is_set(multicast.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Nlri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Nlri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Nlri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Nlri::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Nlri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Nlri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Nlri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast" || name == "multicast")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Origin::Origin()
    :
    origin_value{YType::enumeration, "origin-value"},
    egp{YType::uint32, "egp"}
{

    yang_name = "origin"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Origin::~Origin()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Origin::has_data() const
{
    if (is_presence_container) return true;
    return origin_value.is_set
	|| egp.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Origin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(origin_value.yfilter)
	|| ydk::is_set(egp.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Origin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Origin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin_value.is_set || is_set(origin_value.yfilter)) leaf_name_data.push_back(origin_value.get_name_leafdata());
    if (egp.is_set || is_set(egp.yfilter)) leaf_name_data.push_back(egp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Origin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Origin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Origin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin-value")
    {
        origin_value = value;
        origin_value.value_namespace = name_space;
        origin_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egp")
    {
        egp = value;
        egp.value_namespace = name_space;
        egp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Origin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin-value")
    {
        origin_value.yfilter = yfilter;
    }
    if(value_path == "egp")
    {
        egp.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Origin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "origin-value" || name == "egp")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Tag::Tag()
    :
    tag_val{YType::uint32, "tag-val"},
    tag_ipv4{YType::str, "tag-ipv4"}
{

    yang_name = "tag"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Set::Tag::~Tag()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Tag::has_data() const
{
    if (is_presence_container) return true;
    return tag_val.is_set
	|| tag_ipv4.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Tag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag_val.yfilter)
	|| ydk::is_set(tag_ipv4.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag_val.is_set || is_set(tag_val.yfilter)) leaf_name_data.push_back(tag_val.get_name_leafdata());
    if (tag_ipv4.is_set || is_set(tag_ipv4.yfilter)) leaf_name_data.push_back(tag_ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Set::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Set::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Set::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag-val")
    {
        tag_val = value;
        tag_val.value_namespace = name_space;
        tag_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-ipv4")
    {
        tag_ipv4 = value;
        tag_ipv4.value_namespace = name_space;
        tag_ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag-val")
    {
        tag_val.yfilter = yfilter;
    }
    if(value_path == "tag-ipv4")
    {
        tag_ipv4.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag-val" || name == "tag-ipv4")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Match()
    :
    mpls_label{YType::empty, "mpls-label"},
    track{YType::uint16, "track"}
        ,
    additional_paths(std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths>())
    , as_path(std::make_shared<Native::RouteMap::RouteMapSeq::Match::AsPath>())
    , clns(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Clns>())
    , community(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Community>())
    , extcommunity(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Extcommunity>())
    , interface(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Interface>())
    , ip(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip>())
    , ipv6(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6>())
    , length(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Length>())
    , local_preference(std::make_shared<Native::RouteMap::RouteMapSeq::Match::LocalPreference>())
    , mdt_group(std::make_shared<Native::RouteMap::RouteMapSeq::Match::MdtGroup>())
    , metric(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Metric>())
    , policy_list(std::make_shared<Native::RouteMap::RouteMapSeq::Match::PolicyList>())
    , route_type(std::make_shared<Native::RouteMap::RouteMapSeq::Match::RouteType>())
    , rpki(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Rpki>())
    , source_protocol(nullptr) // presence node
    , tag(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Tag>())
{
    additional_paths->parent = this;
    as_path->parent = this;
    clns->parent = this;
    community->parent = this;
    extcommunity->parent = this;
    interface->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    length->parent = this;
    local_preference->parent = this;
    mdt_group->parent = this;
    metric->parent = this;
    policy_list->parent = this;
    route_type->parent = this;
    rpki->parent = this;
    tag->parent = this;

    yang_name = "match"; yang_parent_name = "route-map-seq"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Match::~Match()
{
}

bool Native::RouteMap::RouteMapSeq::Match::has_data() const
{
    if (is_presence_container) return true;
    return mpls_label.is_set
	|| track.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (as_path !=  nullptr && as_path->has_data())
	|| (clns !=  nullptr && clns->has_data())
	|| (community !=  nullptr && community->has_data())
	|| (extcommunity !=  nullptr && extcommunity->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (length !=  nullptr && length->has_data())
	|| (local_preference !=  nullptr && local_preference->has_data())
	|| (mdt_group !=  nullptr && mdt_group->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (policy_list !=  nullptr && policy_list->has_data())
	|| (route_type !=  nullptr && route_type->has_data())
	|| (rpki !=  nullptr && rpki->has_data())
	|| (source_protocol !=  nullptr && source_protocol->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(track.yfilter)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (clns !=  nullptr && clns->has_operation())
	|| (community !=  nullptr && community->has_operation())
	|| (extcommunity !=  nullptr && extcommunity->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (length !=  nullptr && length->has_operation())
	|| (local_preference !=  nullptr && local_preference->has_operation())
	|| (mdt_group !=  nullptr && mdt_group->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (policy_list !=  nullptr && policy_list->has_operation())
	|| (route_type !=  nullptr && route_type->has_operation())
	|| (rpki !=  nullptr && rpki->has_operation())
	|| (source_protocol !=  nullptr && source_protocol->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Community>();
        }
        return community;
    }

    if(child_yang_name == "extcommunity")
    {
        if(extcommunity == nullptr)
        {
            extcommunity = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Extcommunity>();
        }
        return extcommunity;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Length>();
        }
        return length;
    }

    if(child_yang_name == "local-preference")
    {
        if(local_preference == nullptr)
        {
            local_preference = std::make_shared<Native::RouteMap::RouteMapSeq::Match::LocalPreference>();
        }
        return local_preference;
    }

    if(child_yang_name == "mdt-group")
    {
        if(mdt_group == nullptr)
        {
            mdt_group = std::make_shared<Native::RouteMap::RouteMapSeq::Match::MdtGroup>();
        }
        return mdt_group;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "policy-list")
    {
        if(policy_list == nullptr)
        {
            policy_list = std::make_shared<Native::RouteMap::RouteMapSeq::Match::PolicyList>();
        }
        return policy_list;
    }

    if(child_yang_name == "route-type")
    {
        if(route_type == nullptr)
        {
            route_type = std::make_shared<Native::RouteMap::RouteMapSeq::Match::RouteType>();
        }
        return route_type;
    }

    if(child_yang_name == "rpki")
    {
        if(rpki == nullptr)
        {
            rpki = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Rpki>();
        }
        return rpki;
    }

    if(child_yang_name == "source-protocol")
    {
        if(source_protocol == nullptr)
        {
            source_protocol = std::make_shared<Native::RouteMap::RouteMapSeq::Match::SourceProtocol>();
        }
        return source_protocol;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(additional_paths != nullptr)
    {
        _children["additional-paths"] = additional_paths;
    }

    if(as_path != nullptr)
    {
        _children["as-path"] = as_path;
    }

    if(clns != nullptr)
    {
        _children["clns"] = clns;
    }

    if(community != nullptr)
    {
        _children["community"] = community;
    }

    if(extcommunity != nullptr)
    {
        _children["extcommunity"] = extcommunity;
    }

    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(length != nullptr)
    {
        _children["length"] = length;
    }

    if(local_preference != nullptr)
    {
        _children["local-preference"] = local_preference;
    }

    if(mdt_group != nullptr)
    {
        _children["mdt-group"] = mdt_group;
    }

    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    if(policy_list != nullptr)
    {
        _children["policy-list"] = policy_list;
    }

    if(route_type != nullptr)
    {
        _children["route-type"] = route_type;
    }

    if(rpki != nullptr)
    {
        _children["rpki"] = rpki;
    }

    if(source_protocol != nullptr)
    {
        _children["source-protocol"] = source_protocol;
    }

    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths" || name == "as-path" || name == "clns" || name == "community" || name == "extcommunity" || name == "interface" || name == "ip" || name == "ipv6" || name == "length" || name == "local-preference" || name == "mdt-group" || name == "metric" || name == "policy-list" || name == "route-type" || name == "rpki" || name == "source-protocol" || name == "tag" || name == "mpls-label" || name == "track")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdditionalPaths()
    :
    advertise_set(std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet>())
{
    advertise_set->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::has_data() const
{
    if (is_presence_container) return true;
    return (advertise_set !=  nullptr && advertise_set->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| (advertise_set !=  nullptr && advertise_set->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-set")
    {
        if(advertise_set == nullptr)
        {
            advertise_set = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet>();
        }
        return advertise_set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advertise_set != nullptr)
    {
        _children["advertise-set"] = advertise_set;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-set")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::AdvertiseSet()
    :
    all(nullptr) // presence node
    , best(std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best>())
    , best_range(std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange>())
    , group_best(nullptr) // presence node
{
    best->parent = this;
    best_range->parent = this;

    yang_name = "advertise-set"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::~AdvertiseSet()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (best_range !=  nullptr && best_range->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (best_range !=  nullptr && best_range->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All>();
        }
        return all;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best>();
        }
        return best;
    }

    if(child_yang_name == "best-range")
    {
        if(best_range == nullptr)
        {
            best_range = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange>();
        }
        return best_range;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    if(best != nullptr)
    {
        _children["best"] = best;
    }

    if(best_range != nullptr)
    {
        _children["best-range"] = best_range;
    }

    if(group_best != nullptr)
    {
        _children["group-best"] = group_best;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best" || name == "best-range" || name == "group-best")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::All()
    :
    best{YType::uint8, "best"},
    best_range{YType::uint8, "best-range"}
        ,
    group_best(nullptr) // presence node
{

    yang_name = "all"; yang_parent_name = "advertise-set"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::~All()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::has_data() const
{
    if (is_presence_container) return true;
    return best.is_set
	|| best_range.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter)
	|| ydk::is_set(best_range.yfilter)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());
    if (best_range.is_set || is_set(best_range.yfilter)) leaf_name_data.push_back(best_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_best != nullptr)
    {
        _children["group-best"] = group_best;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-range")
    {
        best_range = value;
        best_range.value_namespace = name_space;
        best_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
    if(value_path == "best-range")
    {
        best_range.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-best" || name == "best" || name == "best-range")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::GroupBest()
    :
    best{YType::empty, "best"},
    best_range{YType::empty, "best-range"}
{

    yang_name = "group-best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::~GroupBest()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return best.is_set
	|| best_range.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter)
	|| ydk::is_set(best_range.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());
    if (best_range.is_set || is_set(best_range.yfilter)) leaf_name_data.push_back(best_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-range")
    {
        best_range = value;
        best_range.value_namespace = name_space;
        best_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
    if(value_path == "best-range")
    {
        best_range.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best" || name == "best-range")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::Best()
    :
    best_range(this, {"best_range"})
{

    yang_name = "best"; yang_parent_name = "advertise-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::~Best()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<best_range.len(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.len(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-range")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange>();
        ent_->parent = this;
        best_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : best_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-range")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::BestRange()
    :
    best_range{YType::uint8, "best-range"},
    all{YType::empty, "all"},
    group_best{YType::empty, "group-best"}
{

    yang_name = "best-range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::~BestRange()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::has_data() const
{
    if (is_presence_container) return true;
    return best_range.is_set
	|| all.is_set
	|| group_best.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_range.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(group_best.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range";
    ADD_KEY_TOKEN(best_range, "best-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_range.is_set || is_set(best_range.yfilter)) leaf_name_data.push_back(best_range.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.yfilter)) leaf_name_data.push_back(group_best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-range")
    {
        best_range = value;
        best_range.value_namespace = name_space;
        best_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-best")
    {
        group_best = value;
        group_best.value_namespace = name_space;
        group_best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-range")
    {
        best_range.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "group-best")
    {
        group_best.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-range" || name == "all" || name == "group-best")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::BestRange()
    :
    adv_path(this, {"adv_path"})
{

    yang_name = "best-range"; yang_parent_name = "advertise-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::~BestRange()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adv_path.len(); index++)
    {
        if(adv_path[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::has_operation() const
{
    for (std::size_t index=0; index<adv_path.len(); index++)
    {
        if(adv_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adv-path")
    {
        auto ent_ = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath>();
        ent_->parent = this;
        adv_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : adv_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-path")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::AdvPath()
    :
    adv_path{YType::uint8, "adv-path"},
    adv_path0{YType::uint8, "adv-path0"}
{

    yang_name = "adv-path"; yang_parent_name = "best-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::~AdvPath()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::has_data() const
{
    if (is_presence_container) return true;
    return adv_path.is_set
	|| adv_path0.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_path.yfilter)
	|| ydk::is_set(adv_path0.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adv-path";
    ADD_KEY_TOKEN(adv_path, "adv-path");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_path.is_set || is_set(adv_path.yfilter)) leaf_name_data.push_back(adv_path.get_name_leafdata());
    if (adv_path0.is_set || is_set(adv_path0.yfilter)) leaf_name_data.push_back(adv_path0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-path")
    {
        adv_path = value;
        adv_path.value_namespace = name_space;
        adv_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-path0")
    {
        adv_path0 = value;
        adv_path0.value_namespace = name_space;
        adv_path0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-path")
    {
        adv_path.yfilter = yfilter;
    }
    if(value_path == "adv-path0")
    {
        adv_path0.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-path" || name == "adv-path0")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"},
    best_range{YType::uint8, "best-range"}
{

    yang_name = "group-best"; yang_parent_name = "advertise-set"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::~GroupBest()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| best.is_set
	|| best_range.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(best.yfilter)
	|| ydk::is_set(best_range.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());
    if (best_range.is_set || is_set(best_range.yfilter)) leaf_name_data.push_back(best_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-range")
    {
        best_range = value;
        best_range.value_namespace = name_space;
        best_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
    if(value_path == "best-range")
    {
        best_range.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best" || name == "best-range")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::AsPath::AsPath()
    :
    access_list{YType::uint16, "access-list"}
{

    yang_name = "as-path"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Match::AsPath::~AsPath()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AsPath::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::AsPath::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::AsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::AsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::AsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::AsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Clns::Clns()
    :
    name{YType::str, "name"}
{

    yang_name = "clns"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Match::Clns::~Clns()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Clns::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Clns::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Community::Community()
    :
    name{YType::str, "name"}
{

    yang_name = "community"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Match::Community::~Community()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Community::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Community::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Extcommunity::Extcommunity()
    :
    name{YType::str, "name"}
{

    yang_name = "extcommunity"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Match::Extcommunity::~Extcommunity()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Extcommunity::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Extcommunity::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Extcommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extcommunity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Extcommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::Extcommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::Extcommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::Extcommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Extcommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Extcommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Interface::Interface()
    :
    interface{YType::str, "interface"}
{

    yang_name = "interface"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Match::Interface::~Interface()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Interface::has_operation() const
{
    for (auto const & leaf : interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_datas = interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_datas.begin(), interface_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ip::Ip()
    :
    address(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Address>())
    , flowspec(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec>())
    , next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::NextHop>())
    , redistribution_source(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource>())
    , route_source(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource>())
{
    address->parent = this;
    flowspec->parent = this;
    next_hop->parent = this;
    redistribution_source->parent = this;
    route_source->parent = this;

    yang_name = "ip"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Match::Ip::~Ip()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data())
	|| (flowspec !=  nullptr && flowspec->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (redistribution_source !=  nullptr && redistribution_source->has_data())
	|| (route_source !=  nullptr && route_source->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (flowspec !=  nullptr && flowspec->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (redistribution_source !=  nullptr && redistribution_source->has_operation())
	|| (route_source !=  nullptr && route_source->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "flowspec")
    {
        if(flowspec == nullptr)
        {
            flowspec = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec>();
        }
        return flowspec;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "redistribution-source")
    {
        if(redistribution_source == nullptr)
        {
            redistribution_source = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource>();
        }
        return redistribution_source;
    }

    if(child_yang_name == "route-source")
    {
        if(route_source == nullptr)
        {
            route_source = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource>();
        }
        return route_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(flowspec != nullptr)
    {
        _children["flowspec"] = flowspec;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(redistribution_source != nullptr)
    {
        _children["redistribution-source"] = redistribution_source;
    }

    if(route_source != nullptr)
    {
        _children["route-source"] = route_source;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Match::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "flowspec" || name == "next-hop" || name == "redistribution-source" || name == "route-source")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ip::Address::Address()
    :
    access_list{YType::str, "access-list"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Match::Ip::Address::~Address()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Address::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Address::has_operation() const
{
    for (auto const & leaf : access_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto access_list_name_datas = access_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), access_list_name_datas.begin(), access_list_name_datas.end());
    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list.append(value);
    }
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::Flowspec()
    :
    dest_pfx(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx>())
    , src_pfx(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx>())
{
    dest_pfx->parent = this;
    src_pfx->parent = this;

    yang_name = "flowspec"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::~Flowspec()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::has_data() const
{
    if (is_presence_container) return true;
    return (dest_pfx !=  nullptr && dest_pfx->has_data())
	|| (src_pfx !=  nullptr && src_pfx->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::has_operation() const
{
    return is_set(yfilter)
	|| (dest_pfx !=  nullptr && dest_pfx->has_operation())
	|| (src_pfx !=  nullptr && src_pfx->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-pfx")
    {
        if(dest_pfx == nullptr)
        {
            dest_pfx = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx>();
        }
        return dest_pfx;
    }

    if(child_yang_name == "src-pfx")
    {
        if(src_pfx == nullptr)
        {
            src_pfx = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx>();
        }
        return src_pfx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dest_pfx != nullptr)
    {
        _children["dest-pfx"] = dest_pfx;
    }

    if(src_pfx != nullptr)
    {
        _children["src-pfx"] = src_pfx;
    }

    return _children;
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-pfx" || name == "src-pfx")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::Vasiright::Trust::Device::cisco_phone {0, "cisco-phone"};
const Enum::YLeaf Native::Interface::Vasiright::Trust::Device::cts {1, "cts"};
const Enum::YLeaf Native::Interface::Vasiright::Trust::Device::ip_camera {2, "ip-camera"};
const Enum::YLeaf Native::Interface::Vasiright::Trust::Device::media_player {3, "media-player"};

const Enum::YLeaf Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::Direction::output {1, "output"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Operation_::deny {0, "deny"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Operation_::permit {1, "permit"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::MetricType::external {0, "external"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::MetricType::type_1 {2, "type-1"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::MetricType::type_2 {3, "type-2"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::AsnNn::additive {0, "additive"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::critical {0, "critical"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::flash {1, "flash"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::flash_override {2, "flash-override"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::immediate {3, "immediate"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::internet {4, "internet"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::network {5, "network"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::priority {6, "priority"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::routine {7, "routine"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFields::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFields::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFields::min_delay {2, "min-delay"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFields::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFields::normal {4, "normal"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Origin::OriginValue::igp {0, "igp"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Origin::OriginValue::incomplete {1, "incomplete"};


}
}

