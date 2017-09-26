
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_1.hpp"
#include "Cisco_IOS_XE_native_2.hpp"
#include "Cisco_IOS_XE_native_3.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::RATE2M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_2M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::~RATE2M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_2M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE2M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::RATE36M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_36M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::~RATE36M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_36M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE36M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::RATE48M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_48M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::~RATE48M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_48M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE48M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::RATE54M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_54M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::~RATE54M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_54M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE54M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::RATE55M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_5_5M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::~RATE55M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_5_5M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE55M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::RATE6M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_6M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::~RATE6M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_6M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE6M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::RATE9M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_9M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::~RATE9M()
{
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_9M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_24ghz::Rate::RATE9M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_49ghz::Y_49ghz()
    :
    rrm(std::make_shared<Native::Ap::Dot11::Y_49ghz::Rrm>())
{
    rrm->parent = this;

    yang_name = "_49ghz"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_49ghz::~Y_49ghz()
{
}

bool Native::Ap::Dot11::Y_49ghz::has_data() const
{
    return (rrm !=  nullptr && rrm->has_data());
}

bool Native::Ap::Dot11::Y_49ghz::has_operation() const
{
    return is_set(yfilter)
	|| (rrm !=  nullptr && rrm->has_operation());
}

std::string Native::Ap::Dot11::Y_49ghz::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_49ghz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_49ghz";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_49ghz::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_49ghz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rrm")
    {
        if(rrm == nullptr)
        {
            rrm = std::make_shared<Native::Ap::Dot11::Y_49ghz::Rrm>();
        }
        return rrm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_49ghz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rrm != nullptr)
    {
        children["rrm"] = rrm;
    }

    return children;
}

void Native::Ap::Dot11::Y_49ghz::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::Y_49ghz::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::Y_49ghz::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rrm")
        return true;
    return false;
}

Native::Ap::Dot11::Y_49ghz::Rrm::Rrm()
    :
    profile(std::make_shared<Native::Ap::Dot11::Y_49ghz::Rrm::Profile>())
{
    profile->parent = this;

    yang_name = "rrm"; yang_parent_name = "_49ghz"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_49ghz::Rrm::~Rrm()
{
}

bool Native::Ap::Dot11::Y_49ghz::Rrm::has_data() const
{
    return (profile !=  nullptr && profile->has_data());
}

bool Native::Ap::Dot11::Y_49ghz::Rrm::has_operation() const
{
    return is_set(yfilter)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Native::Ap::Dot11::Y_49ghz::Rrm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_49ghz/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_49ghz::Rrm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rrm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_49ghz::Rrm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_49ghz::Rrm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Ap::Dot11::Y_49ghz::Rrm::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_49ghz::Rrm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    return children;
}

void Native::Ap::Dot11::Y_49ghz::Rrm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::Y_49ghz::Rrm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::Y_49ghz::Rrm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Ap::Dot11::Y_49ghz::Rrm::Profile::Profile()
    :
    foreign{YType::uint8, "foreign"}
{

    yang_name = "profile"; yang_parent_name = "rrm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_49ghz::Rrm::Profile::~Profile()
{
}

bool Native::Ap::Dot11::Y_49ghz::Rrm::Profile::has_data() const
{
    return foreign.is_set;
}

bool Native::Ap::Dot11::Y_49ghz::Rrm::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(foreign.yfilter);
}

std::string Native::Ap::Dot11::Y_49ghz::Rrm::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_49ghz/rrm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_49ghz::Rrm::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_49ghz::Rrm::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foreign.is_set || is_set(foreign.yfilter)) leaf_name_data.push_back(foreign.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_49ghz::Rrm::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_49ghz::Rrm::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_49ghz::Rrm::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "foreign")
    {
        foreign = value;
        foreign.value_namespace = name_space;
        foreign.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_49ghz::Rrm::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "foreign")
    {
        foreign.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_49ghz::Rrm::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Y_5ghz()
    :
    rate(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate>())
{
    rate->parent = this;

    yang_name = "_5ghz"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::~Y_5ghz()
{
}

bool Native::Ap::Dot11::Y_5ghz::has_data() const
{
    return (rate !=  nullptr && rate->has_data());
}

bool Native::Ap::Dot11::Y_5ghz::has_operation() const
{
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Ap::Dot11::Y_5ghz::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_5ghz";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Ap::Dot11::Y_5ghz::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::Y_5ghz::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::Y_5ghz::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::Rate()
    :
    rate_11m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE11M>())
	,rate_12m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE12M>())
	,rate_18m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE18M>())
	,rate_1m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE1M>())
	,rate_24m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE24M>())
	,rate_2m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE2M>())
	,rate_36m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE36M>())
	,rate_48m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE48M>())
	,rate_54m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE54M>())
	,rate_5_5m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE55M>())
	,rate_6m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE6M>())
	,rate_9m(std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE9M>())
{
    rate_11m->parent = this;
    rate_12m->parent = this;
    rate_18m->parent = this;
    rate_1m->parent = this;
    rate_24m->parent = this;
    rate_2m->parent = this;
    rate_36m->parent = this;
    rate_48m->parent = this;
    rate_54m->parent = this;
    rate_5_5m->parent = this;
    rate_6m->parent = this;
    rate_9m->parent = this;

    yang_name = "rate"; yang_parent_name = "_5ghz"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::~Rate()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::has_data() const
{
    return (rate_11m !=  nullptr && rate_11m->has_data())
	|| (rate_12m !=  nullptr && rate_12m->has_data())
	|| (rate_18m !=  nullptr && rate_18m->has_data())
	|| (rate_1m !=  nullptr && rate_1m->has_data())
	|| (rate_24m !=  nullptr && rate_24m->has_data())
	|| (rate_2m !=  nullptr && rate_2m->has_data())
	|| (rate_36m !=  nullptr && rate_36m->has_data())
	|| (rate_48m !=  nullptr && rate_48m->has_data())
	|| (rate_54m !=  nullptr && rate_54m->has_data())
	|| (rate_5_5m !=  nullptr && rate_5_5m->has_data())
	|| (rate_6m !=  nullptr && rate_6m->has_data())
	|| (rate_9m !=  nullptr && rate_9m->has_data());
}

bool Native::Ap::Dot11::Y_5ghz::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (rate_11m !=  nullptr && rate_11m->has_operation())
	|| (rate_12m !=  nullptr && rate_12m->has_operation())
	|| (rate_18m !=  nullptr && rate_18m->has_operation())
	|| (rate_1m !=  nullptr && rate_1m->has_operation())
	|| (rate_24m !=  nullptr && rate_24m->has_operation())
	|| (rate_2m !=  nullptr && rate_2m->has_operation())
	|| (rate_36m !=  nullptr && rate_36m->has_operation())
	|| (rate_48m !=  nullptr && rate_48m->has_operation())
	|| (rate_54m !=  nullptr && rate_54m->has_operation())
	|| (rate_5_5m !=  nullptr && rate_5_5m->has_operation())
	|| (rate_6m !=  nullptr && rate_6m->has_operation())
	|| (rate_9m !=  nullptr && rate_9m->has_operation());
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RATE_11M")
    {
        if(rate_11m == nullptr)
        {
            rate_11m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE11M>();
        }
        return rate_11m;
    }

    if(child_yang_name == "RATE_12M")
    {
        if(rate_12m == nullptr)
        {
            rate_12m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE12M>();
        }
        return rate_12m;
    }

    if(child_yang_name == "RATE_18M")
    {
        if(rate_18m == nullptr)
        {
            rate_18m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE18M>();
        }
        return rate_18m;
    }

    if(child_yang_name == "RATE_1M")
    {
        if(rate_1m == nullptr)
        {
            rate_1m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE1M>();
        }
        return rate_1m;
    }

    if(child_yang_name == "RATE_24M")
    {
        if(rate_24m == nullptr)
        {
            rate_24m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE24M>();
        }
        return rate_24m;
    }

    if(child_yang_name == "RATE_2M")
    {
        if(rate_2m == nullptr)
        {
            rate_2m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE2M>();
        }
        return rate_2m;
    }

    if(child_yang_name == "RATE_36M")
    {
        if(rate_36m == nullptr)
        {
            rate_36m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE36M>();
        }
        return rate_36m;
    }

    if(child_yang_name == "RATE_48M")
    {
        if(rate_48m == nullptr)
        {
            rate_48m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE48M>();
        }
        return rate_48m;
    }

    if(child_yang_name == "RATE_54M")
    {
        if(rate_54m == nullptr)
        {
            rate_54m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE54M>();
        }
        return rate_54m;
    }

    if(child_yang_name == "RATE_5_5M")
    {
        if(rate_5_5m == nullptr)
        {
            rate_5_5m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE55M>();
        }
        return rate_5_5m;
    }

    if(child_yang_name == "RATE_6M")
    {
        if(rate_6m == nullptr)
        {
            rate_6m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE6M>();
        }
        return rate_6m;
    }

    if(child_yang_name == "RATE_9M")
    {
        if(rate_9m == nullptr)
        {
            rate_9m = std::make_shared<Native::Ap::Dot11::Y_5ghz::Rate::RATE9M>();
        }
        return rate_9m;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate_11m != nullptr)
    {
        children["RATE_11M"] = rate_11m;
    }

    if(rate_12m != nullptr)
    {
        children["RATE_12M"] = rate_12m;
    }

    if(rate_18m != nullptr)
    {
        children["RATE_18M"] = rate_18m;
    }

    if(rate_1m != nullptr)
    {
        children["RATE_1M"] = rate_1m;
    }

    if(rate_24m != nullptr)
    {
        children["RATE_24M"] = rate_24m;
    }

    if(rate_2m != nullptr)
    {
        children["RATE_2M"] = rate_2m;
    }

    if(rate_36m != nullptr)
    {
        children["RATE_36M"] = rate_36m;
    }

    if(rate_48m != nullptr)
    {
        children["RATE_48M"] = rate_48m;
    }

    if(rate_54m != nullptr)
    {
        children["RATE_54M"] = rate_54m;
    }

    if(rate_5_5m != nullptr)
    {
        children["RATE_5_5M"] = rate_5_5m;
    }

    if(rate_6m != nullptr)
    {
        children["RATE_6M"] = rate_6m;
    }

    if(rate_9m != nullptr)
    {
        children["RATE_9M"] = rate_9m;
    }

    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Dot11::Y_5ghz::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RATE_11M" || name == "RATE_12M" || name == "RATE_18M" || name == "RATE_1M" || name == "RATE_24M" || name == "RATE_2M" || name == "RATE_36M" || name == "RATE_48M" || name == "RATE_54M" || name == "RATE_5_5M" || name == "RATE_6M" || name == "RATE_9M")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::RATE11M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_11M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::~RATE11M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_11M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE11M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::RATE12M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_12M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::~RATE12M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_12M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE12M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::RATE18M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_18M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::~RATE18M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_18M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE18M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::RATE1M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_1M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::~RATE1M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_1M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE1M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::RATE24M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_24M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::~RATE24M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_24M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE24M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::RATE2M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_2M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::~RATE2M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_2M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE2M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::RATE36M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_36M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::~RATE36M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_36M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE36M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::RATE48M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_48M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::~RATE48M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_48M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE48M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::RATE54M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_54M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::~RATE54M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_54M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE54M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::RATE55M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_5_5M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::~RATE55M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_5_5M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE55M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::RATE6M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_6M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::~RATE6M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_6M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE6M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::RATE9M()
    :
    supported{YType::empty, "supported"}
{

    yang_name = "RATE_9M"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::~RATE9M()
{
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter);
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_5ghz/rate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_9M";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Ap::Dot11::Y_5ghz::Rate::RATE9M::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Native::Ap::Group::Group()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<Native::Ap::Group::Config>())
{
    config->parent = this;

    yang_name = "group"; yang_parent_name = "ap"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ap::Group::~Group()
{
}

bool Native::Ap::Group::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data());
}

bool Native::Ap::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string Native::Ap::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ap::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Ap::Group::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void Native::Ap::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ap::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "name")
        return true;
    return false;
}

Native::Ap::Group::Config::Config()
    :
    description{YType::str, "description"},
    remote_lan{YType::str, "remote-lan"}
    	,
    airtime_fairness(std::make_shared<Native::Ap::Group::Config::AirtimeFairness>())
	,hyperlocation(nullptr) // presence node
	,ntp(std::make_shared<Native::Ap::Group::Config::Ntp>())
	,rf_profile(std::make_shared<Native::Ap::Group::Config::RfProfile>())
{
    airtime_fairness->parent = this;
    ntp->parent = this;
    rf_profile->parent = this;

    yang_name = "config"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::~Config()
{
}

bool Native::Ap::Group::Config::has_data() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wlan.size(); index++)
    {
        if(wlan[index]->has_data())
            return true;
    }
    return description.is_set
	|| remote_lan.is_set
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_data())
	|| (hyperlocation !=  nullptr && hyperlocation->has_data())
	|| (ntp !=  nullptr && ntp->has_data())
	|| (rf_profile !=  nullptr && rf_profile->has_data());
}

bool Native::Ap::Group::Config::has_operation() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wlan.size(); index++)
    {
        if(wlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(remote_lan.yfilter)
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_operation())
	|| (hyperlocation !=  nullptr && hyperlocation->has_operation())
	|| (ntp !=  nullptr && ntp->has_operation())
	|| (rf_profile !=  nullptr && rf_profile->has_operation());
}

std::string Native::Ap::Group::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (remote_lan.is_set || is_set(remote_lan.yfilter)) leaf_name_data.push_back(remote_lan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "airtime-fairness")
    {
        if(airtime_fairness == nullptr)
        {
            airtime_fairness = std::make_shared<Native::Ap::Group::Config::AirtimeFairness>();
        }
        return airtime_fairness;
    }

    if(child_yang_name == "hyperlocation")
    {
        if(hyperlocation == nullptr)
        {
            hyperlocation = std::make_shared<Native::Ap::Group::Config::Hyperlocation>();
        }
        return hyperlocation;
    }

    if(child_yang_name == "ntp")
    {
        if(ntp == nullptr)
        {
            ntp = std::make_shared<Native::Ap::Group::Config::Ntp>();
        }
        return ntp;
    }

    if(child_yang_name == "port")
    {
        for(auto const & c : port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ap::Group::Config::Port>();
        c->parent = this;
        port.push_back(c);
        return c;
    }

    if(child_yang_name == "rf-profile")
    {
        if(rf_profile == nullptr)
        {
            rf_profile = std::make_shared<Native::Ap::Group::Config::RfProfile>();
        }
        return rf_profile;
    }

    if(child_yang_name == "wlan")
    {
        for(auto const & c : wlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ap::Group::Config::Wlan>();
        c->parent = this;
        wlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(airtime_fairness != nullptr)
    {
        children["airtime-fairness"] = airtime_fairness;
    }

    if(hyperlocation != nullptr)
    {
        children["hyperlocation"] = hyperlocation;
    }

    if(ntp != nullptr)
    {
        children["ntp"] = ntp;
    }

    for (auto const & c : port)
    {
        children[c->get_segment_path()] = c;
    }

    if(rf_profile != nullptr)
    {
        children["rf-profile"] = rf_profile;
    }

    for (auto const & c : wlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ap::Group::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lan")
    {
        remote_lan = value;
        remote_lan.value_namespace = name_space;
        remote_lan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "remote-lan")
    {
        remote_lan.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "airtime-fairness" || name == "hyperlocation" || name == "ntp" || name == "port" || name == "rf-profile" || name == "wlan" || name == "description" || name == "remote-lan")
        return true;
    return false;
}

Native::Ap::Group::Config::AirtimeFairness::AirtimeFairness()
    :
    dot11(std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11>())
{
    dot11->parent = this;

    yang_name = "airtime-fairness"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::AirtimeFairness::~AirtimeFairness()
{
}

bool Native::Ap::Group::Config::AirtimeFairness::has_data() const
{
    return (dot11 !=  nullptr && dot11->has_data());
}

bool Native::Ap::Group::Config::AirtimeFairness::has_operation() const
{
    return is_set(yfilter)
	|| (dot11 !=  nullptr && dot11->has_operation());
}

std::string Native::Ap::Group::Config::AirtimeFairness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "airtime-fairness";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::AirtimeFairness::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::AirtimeFairness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot11")
    {
        if(dot11 == nullptr)
        {
            dot11 = std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11>();
        }
        return dot11;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::AirtimeFairness::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot11 != nullptr)
    {
        children["dot11"] = dot11;
    }

    return children;
}

void Native::Ap::Group::Config::AirtimeFairness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Group::Config::AirtimeFairness::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Group::Config::AirtimeFairness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot11")
        return true;
    return false;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Dot11()
    :
    y_24ghz(std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz>())
	,y_5ghz(std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz>())
{
    y_24ghz->parent = this;
    y_5ghz->parent = this;

    yang_name = "dot11"; yang_parent_name = "airtime-fairness"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::~Dot11()
{
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::has_data() const
{
    return (y_24ghz !=  nullptr && y_24ghz->has_data())
	|| (y_5ghz !=  nullptr && y_5ghz->has_data());
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::has_operation() const
{
    return is_set(yfilter)
	|| (y_24ghz !=  nullptr && y_24ghz->has_operation())
	|| (y_5ghz !=  nullptr && y_5ghz->has_operation());
}

std::string Native::Ap::Group::Config::AirtimeFairness::Dot11::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot11";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::AirtimeFairness::Dot11::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::AirtimeFairness::Dot11::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "_24GHz")
    {
        if(y_24ghz == nullptr)
        {
            y_24ghz = std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz>();
        }
        return y_24ghz;
    }

    if(child_yang_name == "_5GHz")
    {
        if(y_5ghz == nullptr)
        {
            y_5ghz = std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz>();
        }
        return y_5ghz;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::AirtimeFairness::Dot11::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(y_24ghz != nullptr)
    {
        children["_24GHz"] = y_24ghz;
    }

    if(y_5ghz != nullptr)
    {
        children["_5GHz"] = y_5ghz;
    }

    return children;
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_24GHz" || name == "_5GHz")
        return true;
    return false;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::Y_24GHz()
    :
    mode{YType::enumeration, "mode"},
    optimization{YType::empty, "optimization"}
{

    yang_name = "_24GHz"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::~Y_24GHz()
{
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::has_data() const
{
    return mode.is_set
	|| optimization.is_set;
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(optimization.yfilter);
}

std::string Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_24GHz";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (optimization.is_set || is_set(optimization.yfilter)) leaf_name_data.push_back(optimization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optimization")
    {
        optimization = value;
        optimization.value_namespace = name_space;
        optimization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "optimization")
    {
        optimization.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "optimization")
        return true;
    return false;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Y_5GHz()
    :
    optimization{YType::empty, "optimization"}
    	,
    mode(std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode>())
{
    mode->parent = this;

    yang_name = "_5GHz"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::~Y_5GHz()
{
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::has_data() const
{
    return optimization.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optimization.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_5GHz";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optimization.is_set || is_set(optimization.yfilter)) leaf_name_data.push_back(optimization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optimization")
    {
        optimization = value;
        optimization.value_namespace = name_space;
        optimization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optimization")
    {
        optimization.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "optimization")
        return true;
    return false;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::Mode()
    :
    enforce_policy{YType::empty, "enforce-policy"},
    monitor{YType::empty, "monitor"}
{

    yang_name = "mode"; yang_parent_name = "_5GHz"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::~Mode()
{
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::has_data() const
{
    return enforce_policy.is_set
	|| monitor.is_set;
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enforce_policy.yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enforce_policy.is_set || is_set(enforce_policy.yfilter)) leaf_name_data.push_back(enforce_policy.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enforce-policy")
    {
        enforce_policy = value;
        enforce_policy.value_namespace = name_space;
        enforce_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enforce-policy")
    {
        enforce_policy.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5GHz::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enforce-policy" || name == "monitor")
        return true;
    return false;
}

Native::Ap::Group::Config::Hyperlocation::Hyperlocation()
    :
    threshold(std::make_shared<Native::Ap::Group::Config::Hyperlocation::Threshold>())
{
    threshold->parent = this;

    yang_name = "hyperlocation"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Hyperlocation::~Hyperlocation()
{
}

bool Native::Ap::Group::Config::Hyperlocation::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Ap::Group::Config::Hyperlocation::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Ap::Group::Config::Hyperlocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyperlocation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Hyperlocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Hyperlocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Ap::Group::Config::Hyperlocation::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Hyperlocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Ap::Group::Config::Hyperlocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Group::Config::Hyperlocation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Group::Config::Hyperlocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Ap::Group::Config::Hyperlocation::Threshold::Threshold()
    :
    detection{YType::int8, "detection"},
    reset{YType::uint8, "reset"},
    trigger{YType::uint8, "trigger"}
{

    yang_name = "threshold"; yang_parent_name = "hyperlocation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Hyperlocation::Threshold::~Threshold()
{
}

bool Native::Ap::Group::Config::Hyperlocation::Threshold::has_data() const
{
    return detection.is_set
	|| reset.is_set
	|| trigger.is_set;
}

bool Native::Ap::Group::Config::Hyperlocation::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| ydk::is_set(trigger.yfilter);
}

std::string Native::Ap::Group::Config::Hyperlocation::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Hyperlocation::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection.is_set || is_set(detection.yfilter)) leaf_name_data.push_back(detection.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Hyperlocation::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Hyperlocation::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::Hyperlocation::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection")
    {
        detection = value;
        detection.value_namespace = name_space;
        detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::Hyperlocation::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection")
    {
        detection.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::Hyperlocation::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "reset" || name == "trigger")
        return true;
    return false;
}

Native::Ap::Group::Config::Ntp::Ntp()
    :
    ip{YType::str, "ip"}
{

    yang_name = "ntp"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Ntp::~Ntp()
{
}

bool Native::Ap::Group::Config::Ntp::has_data() const
{
    return ip.is_set;
}

bool Native::Ap::Group::Config::Ntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Ap::Group::Config::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Ap::Group::Config::Port::Port()
    :
    id{YType::uint8, "id"},
    poe{YType::empty, "poe"},
    remote_lan{YType::str, "remote-lan"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "port"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Port::~Port()
{
}

bool Native::Ap::Group::Config::Port::has_data() const
{
    return id.is_set
	|| poe.is_set
	|| remote_lan.is_set
	|| shutdown.is_set;
}

bool Native::Ap::Group::Config::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(poe.yfilter)
	|| ydk::is_set(remote_lan.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Ap::Group::Config::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (poe.is_set || is_set(poe.yfilter)) leaf_name_data.push_back(poe.get_name_leafdata());
    if (remote_lan.is_set || is_set(remote_lan.yfilter)) leaf_name_data.push_back(remote_lan.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poe")
    {
        poe = value;
        poe.value_namespace = name_space;
        poe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lan")
    {
        remote_lan = value;
        remote_lan.value_namespace = name_space;
        remote_lan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "poe")
    {
        poe.yfilter = yfilter;
    }
    if(value_path == "remote-lan")
    {
        remote_lan.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "poe" || name == "remote-lan" || name == "shutdown")
        return true;
    return false;
}

Native::Ap::Group::Config::RfProfile::RfProfile()
    :
    dot11(std::make_shared<Native::Ap::Group::Config::RfProfile::Dot11>())
{
    dot11->parent = this;

    yang_name = "rf-profile"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::RfProfile::~RfProfile()
{
}

bool Native::Ap::Group::Config::RfProfile::has_data() const
{
    return (dot11 !=  nullptr && dot11->has_data());
}

bool Native::Ap::Group::Config::RfProfile::has_operation() const
{
    return is_set(yfilter)
	|| (dot11 !=  nullptr && dot11->has_operation());
}

std::string Native::Ap::Group::Config::RfProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rf-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::RfProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::RfProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot11")
    {
        if(dot11 == nullptr)
        {
            dot11 = std::make_shared<Native::Ap::Group::Config::RfProfile::Dot11>();
        }
        return dot11;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::RfProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot11 != nullptr)
    {
        children["dot11"] = dot11;
    }

    return children;
}

void Native::Ap::Group::Config::RfProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Group::Config::RfProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Group::Config::RfProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot11")
        return true;
    return false;
}

Native::Ap::Group::Config::RfProfile::Dot11::Dot11()
    :
    y_24ghz{YType::str, "_24ghz"},
    y_5ghz{YType::str, "_5ghz"}
{

    yang_name = "dot11"; yang_parent_name = "rf-profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::RfProfile::Dot11::~Dot11()
{
}

bool Native::Ap::Group::Config::RfProfile::Dot11::has_data() const
{
    return y_24ghz.is_set
	|| y_5ghz.is_set;
}

bool Native::Ap::Group::Config::RfProfile::Dot11::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_24ghz.yfilter)
	|| ydk::is_set(y_5ghz.yfilter);
}

std::string Native::Ap::Group::Config::RfProfile::Dot11::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot11";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::RfProfile::Dot11::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_24ghz.is_set || is_set(y_24ghz.yfilter)) leaf_name_data.push_back(y_24ghz.get_name_leafdata());
    if (y_5ghz.is_set || is_set(y_5ghz.yfilter)) leaf_name_data.push_back(y_5ghz.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::RfProfile::Dot11::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::RfProfile::Dot11::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::RfProfile::Dot11::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_24ghz")
    {
        y_24ghz = value;
        y_24ghz.value_namespace = name_space;
        y_24ghz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "_5ghz")
    {
        y_5ghz = value;
        y_5ghz.value_namespace = name_space;
        y_5ghz.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::RfProfile::Dot11::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_24ghz")
    {
        y_24ghz.yfilter = yfilter;
    }
    if(value_path == "_5ghz")
    {
        y_5ghz.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::RfProfile::Dot11::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_24ghz" || name == "_5ghz")
        return true;
    return false;
}

Native::Ap::Group::Config::Wlan::Wlan()
    :
    name{YType::str, "name"},
    radio_policy{YType::enumeration, "radio-policy"},
    vlan{YType::str, "vlan"}
    	,
    airtime_fairness(std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness>())
{
    airtime_fairness->parent = this;

    yang_name = "wlan"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Wlan::~Wlan()
{
}

bool Native::Ap::Group::Config::Wlan::has_data() const
{
    return name.is_set
	|| radio_policy.is_set
	|| vlan.is_set
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_data());
}

bool Native::Ap::Group::Config::Wlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(radio_policy.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_operation());
}

std::string Native::Ap::Group::Config::Wlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wlan" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Wlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (radio_policy.is_set || is_set(radio_policy.yfilter)) leaf_name_data.push_back(radio_policy.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Wlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "airtime-fairness")
    {
        if(airtime_fairness == nullptr)
        {
            airtime_fairness = std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness>();
        }
        return airtime_fairness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Wlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(airtime_fairness != nullptr)
    {
        children["airtime-fairness"] = airtime_fairness;
    }

    return children;
}

void Native::Ap::Group::Config::Wlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radio-policy")
    {
        radio_policy = value;
        radio_policy.value_namespace = name_space;
        radio_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::Wlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "radio-policy")
    {
        radio_policy.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::Wlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "airtime-fairness" || name == "name" || name == "radio-policy" || name == "vlan")
        return true;
    return false;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::AirtimeFairness()
    :
    dot11(std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11>())
{
    dot11->parent = this;

    yang_name = "airtime-fairness"; yang_parent_name = "wlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::~AirtimeFairness()
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::has_data() const
{
    return (dot11 !=  nullptr && dot11->has_data());
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::has_operation() const
{
    return is_set(yfilter)
	|| (dot11 !=  nullptr && dot11->has_operation());
}

std::string Native::Ap::Group::Config::Wlan::AirtimeFairness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "airtime-fairness";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Wlan::AirtimeFairness::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Wlan::AirtimeFairness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot11")
    {
        if(dot11 == nullptr)
        {
            dot11 = std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11>();
        }
        return dot11;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Wlan::AirtimeFairness::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot11 != nullptr)
    {
        children["dot11"] = dot11;
    }

    return children;
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot11")
        return true;
    return false;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Dot11()
    :
    y_24ghz(std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz>())
	,y_5ghz(std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz>())
{
    y_24ghz->parent = this;
    y_5ghz->parent = this;

    yang_name = "dot11"; yang_parent_name = "airtime-fairness"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::~Dot11()
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::has_data() const
{
    return (y_24ghz !=  nullptr && y_24ghz->has_data())
	|| (y_5ghz !=  nullptr && y_5ghz->has_data());
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::has_operation() const
{
    return is_set(yfilter)
	|| (y_24ghz !=  nullptr && y_24ghz->has_operation())
	|| (y_5ghz !=  nullptr && y_5ghz->has_operation());
}

std::string Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot11";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "_24GHz")
    {
        if(y_24ghz == nullptr)
        {
            y_24ghz = std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz>();
        }
        return y_24ghz;
    }

    if(child_yang_name == "_5GHz")
    {
        if(y_5ghz == nullptr)
        {
            y_5ghz = std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz>();
        }
        return y_5ghz;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(y_24ghz != nullptr)
    {
        children["_24GHz"] = y_24ghz;
    }

    if(y_5ghz != nullptr)
    {
        children["_5GHz"] = y_5ghz;
    }

    return children;
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_24GHz" || name == "_5GHz")
        return true;
    return false;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::Y_24GHz()
    :
    policy{YType::str, "policy"}
{

    yang_name = "_24GHz"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::~Y_24GHz()
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::has_data() const
{
    return policy.is_set;
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_24GHz";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24GHz::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::Y_5GHz()
    :
    policy{YType::str, "policy"}
{

    yang_name = "_5GHz"; yang_parent_name = "dot11"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::~Y_5GHz()
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::has_data() const
{
    return policy.is_set;
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_5GHz";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5GHz::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Archive::Archive()
    :
    maximum{YType::uint8, "maximum"},
    path{YType::str, "path"},
    time_period{YType::uint32, "time-period"},
    write_memory{YType::empty, "write-memory"}
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
    return maximum.is_set
	|| path.is_set
	|| time_period.is_set
	|| write_memory.is_set
	|| (log !=  nullptr && log->has_data());
}

bool Native::Archive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(time_period.yfilter)
	|| ydk::is_set(write_memory.yfilter)
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

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());
    if (write_memory.is_set || is_set(write_memory.yfilter)) leaf_name_data.push_back(write_memory.get_name_leafdata());

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
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-memory")
    {
        write_memory = value;
        write_memory.value_namespace = name_space;
        write_memory.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Archive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
    if(value_path == "write-memory")
    {
        write_memory.yfilter = yfilter;
    }
}

bool Native::Archive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log" || name == "maximum" || name == "path" || name == "time-period" || name == "write-memory")
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

Native::Arp::Arp()
{

    yang_name = "arp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Arp::~Arp()
{
}

bool Native::Arp::has_data() const
{
    for (std::size_t index=0; index<access_list.size(); index++)
    {
        if(access_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<arp_entry.size(); index++)
    {
        if(arp_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::has_operation() const
{
    for (std::size_t index=0; index<access_list.size(); index++)
    {
        if(access_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<arp_entry.size(); index++)
    {
        if(arp_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-arp:arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        for(auto const & c : access_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList>();
        c->parent = this;
        access_list.push_back(c);
        return c;
    }

    if(child_yang_name == "arp-entry")
    {
        for(auto const & c : arp_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::ArpEntry>();
        c->parent = this;
        arp_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : arp_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "arp-entry")
        return true;
    return false;
}

Native::Arp::AccessList::AccessList()
    :
    name{YType::str, "name"}
    	,
    default_(std::make_shared<Native::Arp::AccessList::Default_>())
	,deny(std::make_shared<Native::Arp::AccessList::Deny>())
	,no(std::make_shared<Native::Arp::AccessList::No>())
	,permit(std::make_shared<Native::Arp::AccessList::Permit>())
{
    default_->parent = this;
    deny->parent = this;
    no->parent = this;
    permit->parent = this;

    yang_name = "access-list"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Arp::AccessList::~AccessList()
{
}

bool Native::Arp::AccessList::has_data() const
{
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (deny !=  nullptr && deny->has_data())
	|| (no !=  nullptr && no->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Arp::AccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (deny !=  nullptr && deny->has_operation())
	|| (no !=  nullptr && no->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Arp::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-arp:arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Arp::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:access-list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Arp::AccessList::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Arp::AccessList::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "no")
    {
        if(no == nullptr)
        {
            no = std::make_shared<Native::Arp::AccessList::No>();
        }
        return no;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Arp::AccessList::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(no != nullptr)
    {
        children["no"] = no;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Arp::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "deny" || name == "no" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Default_()
    :
    deny(std::make_shared<Native::Arp::AccessList::Default_::Deny>())
	,permit(std::make_shared<Native::Arp::AccessList::Default_::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "default"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::~Default_()
{
}

bool Native::Arp::AccessList::Default_::has_data() const
{
    return (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Arp::AccessList::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Arp::AccessList::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Arp::AccessList::Default_::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Arp::AccessList::Default_::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Arp::AccessList::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Deny()
    :
    ip(std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip>())
	,request(std::make_shared<Native::Arp::AccessList::Default_::Deny::Request>())
	,response(std::make_shared<Native::Arp::AccessList::Default_::Deny::Response>())
{
    ip->parent = this;
    request->parent = this;
    response->parent = this;

    yang_name = "deny"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::~Deny()
{
}

bool Native::Arp::AccessList::Default_::Deny::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request>();
        }
        return request;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    if(response != nullptr)
    {
        children["response"] = response;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "request" || name == "response")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        for(auto const & c : ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::Host_()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Request()
    :
    ip(std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip>())
{
    ip->parent = this;

    yang_name = "request"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::~Request()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Request::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        for(auto const & c : ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::Host_()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Response()
    :
    ip(std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip>())
{
    ip->parent = this;

    yang_name = "response"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::~Response()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Response::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Response::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Response::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "response"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        for(auto const & c : ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::Host_()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Permit()
    :
    ip(std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip>())
	,request(std::make_shared<Native::Arp::AccessList::Default_::Permit::Request>())
	,response(std::make_shared<Native::Arp::AccessList::Default_::Permit::Response>())
{
    ip->parent = this;
    request->parent = this;
    response->parent = this;

    yang_name = "permit"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::~Permit()
{
}

bool Native::Arp::AccessList::Default_::Permit::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Arp::AccessList::Default_::Permit::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Arp::AccessList::Default_::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request>();
        }
        return request;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Arp::AccessList::Default_::Permit::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    if(response != nullptr)
    {
        children["response"] = response;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "request" || name == "response")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Permit::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        for(auto const & c : ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::Host_()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Request::Request()
    :
    ip(std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip>())
{
    ip->parent = this;

    yang_name = "request"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Request::~Request()
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::Default_::Permit::Request::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::Default_::Permit::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Permit::Request::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Request::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Request::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Request::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        for(auto const & c : ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::Host_()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Default_::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

const Enum::YLeaf Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::Mode::enforce_policy {0, "enforce-policy"};
const Enum::YLeaf Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24GHz::Mode::monitor {1, "monitor"};

const Enum::YLeaf Native::Ap::Group::Config::Wlan::RadioPolicy::all {0, "all"};
const Enum::YLeaf Native::Ap::Group::Config::Wlan::RadioPolicy::dot11a {1, "dot11a"};
const Enum::YLeaf Native::Ap::Group::Config::Wlan::RadioPolicy::dot11bg {2, "dot11bg"};
const Enum::YLeaf Native::Ap::Group::Config::Wlan::RadioPolicy::dot11g {3, "dot11g"};

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


}
}

