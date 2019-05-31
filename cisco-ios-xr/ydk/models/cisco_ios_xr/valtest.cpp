
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "valtest.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace valtest {

Config::Config()
    :
    valtest(std::make_shared<Config::Valtest>())
{
    valtest->parent = this;

    yang_name = "config"; yang_parent_name = "valtest"; is_top_level_class = true; has_list_ancestor = false; 
}

Config::~Config()
{
}

bool Config::has_data() const
{
    if (is_presence_container) return true;
    return (valtest !=  nullptr && valtest->has_data());
}

bool Config::has_operation() const
{
    return is_set(yfilter)
	|| (valtest !=  nullptr && valtest->has_operation());
}

std::string Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "valtest:config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "valtest")
    {
        if(valtest == nullptr)
        {
            valtest = std::make_shared<Config::Valtest>();
        }
        return valtest;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(valtest != nullptr)
    {
        _children["valtest"] = valtest;
    }

    return _children;
}

void Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Config::clone_ptr() const
{
    return std::make_shared<Config>();
}

std::string Config::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Config::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Config::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Config::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valtest")
        return true;
    return false;
}

Config::Valtest::Valtest()
    :
    a_number{YType::int64, "a_number"},
    b_number{YType::int64, "b_number"}
{

    yang_name = "valtest"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Config::Valtest::~Valtest()
{
}

bool Config::Valtest::has_data() const
{
    if (is_presence_container) return true;
    return a_number.is_set
	|| b_number.is_set;
}

bool Config::Valtest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a_number.yfilter)
	|| ydk::is_set(b_number.yfilter);
}

std::string Config::Valtest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "valtest:config/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Valtest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "valtest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Valtest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_number.is_set || is_set(a_number.yfilter)) leaf_name_data.push_back(a_number.get_name_leafdata());
    if (b_number.is_set || is_set(b_number.yfilter)) leaf_name_data.push_back(b_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Config::Valtest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Config::Valtest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Config::Valtest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a_number")
    {
        a_number = value;
        a_number.value_namespace = name_space;
        a_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b_number")
    {
        b_number = value;
        b_number.value_namespace = name_space;
        b_number.value_namespace_prefix = name_space_prefix;
    }
}

void Config::Valtest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a_number")
    {
        a_number.yfilter = yfilter;
    }
    if(value_path == "b_number")
    {
        b_number.yfilter = yfilter;
    }
}

bool Config::Valtest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a_number" || name == "b_number")
        return true;
    return false;
}


}
}

