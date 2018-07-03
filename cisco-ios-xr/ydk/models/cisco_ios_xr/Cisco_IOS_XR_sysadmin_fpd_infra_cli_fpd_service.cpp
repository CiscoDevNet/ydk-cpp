
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_fpd_infra_cli_fpd_service.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_fpd_infra_cli_fpd_service {

Location::Location()
    :
    loc{YType::str, "loc"}
        ,
    fpd2(this, {"name"})
{

    yang_name = "location"; yang_parent_name = "Cisco-IOS-XR-sysadmin-fpd-infra-cli-fpd-service"; is_top_level_class = true; has_list_ancestor = false; 
}

Location::~Location()
{
}

bool Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fpd2.len(); index++)
    {
        if(fpd2[index]->has_data())
            return true;
    }
    return loc.is_set;
}

bool Location::has_operation() const
{
    for (std::size_t index=0; index<fpd2.len(); index++)
    {
        if(fpd2[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc.yfilter);
}

std::string Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-fpd-infra-cli-fpd-service:location";
    ADD_KEY_TOKEN(loc, "loc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd2")
    {
        auto c = std::make_shared<Location::Fpd2>();
        c->parent = this;
        fpd2.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fpd2.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Location::clone_ptr() const
{
    return std::make_shared<Location>();
}

std::string Location::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Location::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Location::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Location::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd2" || name == "loc")
        return true;
    return false;
}

Location::Fpd2::Fpd2()
    :
    name{YType::str, "name"}
{

    yang_name = "fpd2"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Location::Fpd2::~Fpd2()
{
}

bool Location::Fpd2::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Location::Fpd2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Location::Fpd2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd2";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Location::Fpd2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Location::Fpd2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Location::Fpd2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Location::Fpd2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Location::Fpd2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Location::Fpd2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}


}
}

