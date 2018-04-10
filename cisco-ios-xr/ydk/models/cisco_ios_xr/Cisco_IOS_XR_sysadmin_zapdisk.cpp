
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_zapdisk.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_zapdisk {

Zapdisk::Zapdisk()
    :
    input(std::make_shared<Zapdisk::Input>())
	,output(std::make_shared<Zapdisk::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "zapdisk"; yang_parent_name = "Cisco-IOS-XR-sysadmin-zapdisk"; is_top_level_class = true; has_list_ancestor = false;
}

Zapdisk::~Zapdisk()
{
}

bool Zapdisk::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Zapdisk::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Zapdisk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-zapdisk:zapdisk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Zapdisk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Zapdisk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Zapdisk::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Zapdisk::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Zapdisk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Zapdisk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Zapdisk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Zapdisk::clone_ptr() const
{
    return std::make_shared<Zapdisk>();
}

std::string Zapdisk::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Zapdisk::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Zapdisk::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Zapdisk::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Zapdisk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Zapdisk::Input::Input()
    :
    set{YType::empty, "set"}
    	,
    czapdisk_unset(std::make_shared<Zapdisk::Input::CzapdiskUnset>())
{
    czapdisk_unset->parent = this;

    yang_name = "input"; yang_parent_name = "zapdisk"; is_top_level_class = false; has_list_ancestor = false;
}

Zapdisk::Input::~Input()
{
}

bool Zapdisk::Input::has_data() const
{
    return set.is_set
	|| (czapdisk_unset !=  nullptr && czapdisk_unset->has_data());
}

bool Zapdisk::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set.yfilter)
	|| (czapdisk_unset !=  nullptr && czapdisk_unset->has_operation());
}

std::string Zapdisk::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-zapdisk:zapdisk/" << get_segment_path();
    return path_buffer.str();
}

std::string Zapdisk::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Zapdisk::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set.is_set || is_set(set.yfilter)) leaf_name_data.push_back(set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Zapdisk::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "czapdisk-unset")
    {
        if(czapdisk_unset == nullptr)
        {
            czapdisk_unset = std::make_shared<Zapdisk::Input::CzapdiskUnset>();
        }
        return czapdisk_unset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Zapdisk::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(czapdisk_unset != nullptr)
    {
        children["czapdisk-unset"] = czapdisk_unset;
    }

    return children;
}

void Zapdisk::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set")
    {
        set = value;
        set.value_namespace = name_space;
        set.value_namespace_prefix = name_space_prefix;
    }
}

void Zapdisk::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set")
    {
        set.yfilter = yfilter;
    }
}

bool Zapdisk::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "czapdisk-unset" || name == "set")
        return true;
    return false;
}

Zapdisk::Input::CzapdiskUnset::CzapdiskUnset()
    :
    unset{YType::empty, "unset"}
{

    yang_name = "czapdisk-unset"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

Zapdisk::Input::CzapdiskUnset::~CzapdiskUnset()
{
}

bool Zapdisk::Input::CzapdiskUnset::has_data() const
{
    return unset.is_set;
}

bool Zapdisk::Input::CzapdiskUnset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unset.yfilter);
}

std::string Zapdisk::Input::CzapdiskUnset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-zapdisk:zapdisk/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Zapdisk::Input::CzapdiskUnset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "czapdisk-unset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Zapdisk::Input::CzapdiskUnset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unset.is_set || is_set(unset.yfilter)) leaf_name_data.push_back(unset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Zapdisk::Input::CzapdiskUnset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Zapdisk::Input::CzapdiskUnset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Zapdisk::Input::CzapdiskUnset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unset")
    {
        unset = value;
        unset.value_namespace = name_space;
        unset.value_namespace_prefix = name_space_prefix;
    }
}

void Zapdisk::Input::CzapdiskUnset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unset")
    {
        unset.yfilter = yfilter;
    }
}

bool Zapdisk::Input::CzapdiskUnset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unset")
        return true;
    return false;
}

Zapdisk::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "zapdisk"; is_top_level_class = false; has_list_ancestor = false;
}

Zapdisk::Output::~Output()
{
}

bool Zapdisk::Output::has_data() const
{
    return result.is_set;
}

bool Zapdisk::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Zapdisk::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-zapdisk:zapdisk/" << get_segment_path();
    return path_buffer.str();
}

std::string Zapdisk::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Zapdisk::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Zapdisk::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Zapdisk::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Zapdisk::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Zapdisk::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Zapdisk::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}


}
}

