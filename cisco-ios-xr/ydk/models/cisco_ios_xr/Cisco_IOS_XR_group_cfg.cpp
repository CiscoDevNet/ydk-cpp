
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_group_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_group_cfg {

Groups::Groups()
{

    yang_name = "groups"; yang_parent_name = "Cisco-IOS-XR-group-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Groups::~Groups()
{
}

bool Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-group-cfg:groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Groups::clone_ptr() const
{
    return std::make_shared<Groups>();
}

std::string Groups::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Groups::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Groups::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Groups::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Groups::Group::Group()
    :
    group_name{YType::str, "group-name"}
{

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false;
}

Groups::Group::~Group()
{
}

bool Groups::Group::has_data() const
{
    return group_name.is_set;
}

bool Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter);
}

std::string Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-group-cfg:groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-name='" <<group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name")
        return true;
    return false;
}

ApplyGroups::ApplyGroups()
    :
    apply_group{YType::str, "apply-group"}
{

    yang_name = "apply-groups"; yang_parent_name = "Cisco-IOS-XR-group-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

ApplyGroups::~ApplyGroups()
{
}

bool ApplyGroups::has_data() const
{
    return apply_group.is_set;
}

bool ApplyGroups::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(apply_group.yfilter);
}

std::string ApplyGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-group-cfg:apply-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ApplyGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (apply_group.is_set || is_set(apply_group.yfilter)) leaf_name_data.push_back(apply_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ApplyGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ApplyGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ApplyGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "apply-group")
    {
        apply_group = value;
        apply_group.value_namespace = name_space;
        apply_group.value_namespace_prefix = name_space_prefix;
    }
}

void ApplyGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "apply-group")
    {
        apply_group.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> ApplyGroups::clone_ptr() const
{
    return std::make_shared<ApplyGroups>();
}

std::string ApplyGroups::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ApplyGroups::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ApplyGroups::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ApplyGroups::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ApplyGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "apply-group")
        return true;
    return false;
}


}
}

