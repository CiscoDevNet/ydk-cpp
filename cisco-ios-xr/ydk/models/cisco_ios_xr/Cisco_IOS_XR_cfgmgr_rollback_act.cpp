
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_cfgmgr_rollback_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_cfgmgr_rollback_act {

RollBackConfigurationLast::RollBackConfigurationLast()
    :
    input(std::make_shared<RollBackConfigurationLast::Input>())
{
    input->parent = this;

    yang_name = "roll-back-configuration-last"; yang_parent_name = "Cisco-IOS-XR-cfgmgr-rollback-act"; is_top_level_class = true; has_list_ancestor = false;
}

RollBackConfigurationLast::~RollBackConfigurationLast()
{
}

bool RollBackConfigurationLast::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool RollBackConfigurationLast::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string RollBackConfigurationLast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration-last";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RollBackConfigurationLast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RollBackConfigurationLast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RollBackConfigurationLast::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfigurationLast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RollBackConfigurationLast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RollBackConfigurationLast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RollBackConfigurationLast::clone_ptr() const
{
    return std::make_shared<RollBackConfigurationLast>();
}

std::string RollBackConfigurationLast::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RollBackConfigurationLast::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RollBackConfigurationLast::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RollBackConfigurationLast::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RollBackConfigurationLast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

RollBackConfigurationLast::Input::Input()
    :
    count{YType::int32, "count"},
    force{YType::boolean, "force"},
    best_effort{YType::boolean, "best-effort"},
    label{YType::str, "label"},
    comment{YType::str, "comment"}
{

    yang_name = "input"; yang_parent_name = "roll-back-configuration-last"; is_top_level_class = false; has_list_ancestor = false;
}

RollBackConfigurationLast::Input::~Input()
{
}

bool RollBackConfigurationLast::Input::has_data() const
{
    return count.is_set
	|| force.is_set
	|| best_effort.is_set
	|| label.is_set
	|| comment.is_set;
}

bool RollBackConfigurationLast::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(force.yfilter)
	|| ydk::is_set(best_effort.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(comment.yfilter);
}

std::string RollBackConfigurationLast::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration-last/" << get_segment_path();
    return path_buffer.str();
}

std::string RollBackConfigurationLast::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RollBackConfigurationLast::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());
    if (best_effort.is_set || is_set(best_effort.yfilter)) leaf_name_data.push_back(best_effort.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RollBackConfigurationLast::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfigurationLast::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RollBackConfigurationLast::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-effort")
    {
        best_effort = value;
        best_effort.value_namespace = name_space;
        best_effort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
}

void RollBackConfigurationLast::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
    if(value_path == "best-effort")
    {
        best_effort.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
}

bool RollBackConfigurationLast::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "force" || name == "best-effort" || name == "label" || name == "comment")
        return true;
    return false;
}

RollBackConfigurationTo::RollBackConfigurationTo()
    :
    input(std::make_shared<RollBackConfigurationTo::Input>())
{
    input->parent = this;

    yang_name = "roll-back-configuration-to"; yang_parent_name = "Cisco-IOS-XR-cfgmgr-rollback-act"; is_top_level_class = true; has_list_ancestor = false;
}

RollBackConfigurationTo::~RollBackConfigurationTo()
{
}

bool RollBackConfigurationTo::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool RollBackConfigurationTo::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string RollBackConfigurationTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RollBackConfigurationTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RollBackConfigurationTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RollBackConfigurationTo::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfigurationTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RollBackConfigurationTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RollBackConfigurationTo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RollBackConfigurationTo::clone_ptr() const
{
    return std::make_shared<RollBackConfigurationTo>();
}

std::string RollBackConfigurationTo::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RollBackConfigurationTo::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RollBackConfigurationTo::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RollBackConfigurationTo::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RollBackConfigurationTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

RollBackConfigurationTo::Input::Input()
    :
    commit_id{YType::str, "commit-id"},
    force{YType::boolean, "force"},
    best_effort{YType::boolean, "best-effort"},
    label{YType::str, "label"},
    comment{YType::str, "comment"}
{

    yang_name = "input"; yang_parent_name = "roll-back-configuration-to"; is_top_level_class = false; has_list_ancestor = false;
}

RollBackConfigurationTo::Input::~Input()
{
}

bool RollBackConfigurationTo::Input::has_data() const
{
    return commit_id.is_set
	|| force.is_set
	|| best_effort.is_set
	|| label.is_set
	|| comment.is_set;
}

bool RollBackConfigurationTo::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(commit_id.yfilter)
	|| ydk::is_set(force.yfilter)
	|| ydk::is_set(best_effort.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(comment.yfilter);
}

std::string RollBackConfigurationTo::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration-to/" << get_segment_path();
    return path_buffer.str();
}

std::string RollBackConfigurationTo::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RollBackConfigurationTo::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (commit_id.is_set || is_set(commit_id.yfilter)) leaf_name_data.push_back(commit_id.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());
    if (best_effort.is_set || is_set(best_effort.yfilter)) leaf_name_data.push_back(best_effort.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RollBackConfigurationTo::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfigurationTo::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RollBackConfigurationTo::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "commit-id")
    {
        commit_id = value;
        commit_id.value_namespace = name_space;
        commit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-effort")
    {
        best_effort = value;
        best_effort.value_namespace = name_space;
        best_effort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
}

void RollBackConfigurationTo::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "commit-id")
    {
        commit_id.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
    if(value_path == "best-effort")
    {
        best_effort.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
}

bool RollBackConfigurationTo::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commit-id" || name == "force" || name == "best-effort" || name == "label" || name == "comment")
        return true;
    return false;
}

RollBackConfigurationToExclude::RollBackConfigurationToExclude()
    :
    input(std::make_shared<RollBackConfigurationToExclude::Input>())
{
    input->parent = this;

    yang_name = "roll-back-configuration-to-exclude"; yang_parent_name = "Cisco-IOS-XR-cfgmgr-rollback-act"; is_top_level_class = true; has_list_ancestor = false;
}

RollBackConfigurationToExclude::~RollBackConfigurationToExclude()
{
}

bool RollBackConfigurationToExclude::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool RollBackConfigurationToExclude::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string RollBackConfigurationToExclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration-to-exclude";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RollBackConfigurationToExclude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RollBackConfigurationToExclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RollBackConfigurationToExclude::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfigurationToExclude::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RollBackConfigurationToExclude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RollBackConfigurationToExclude::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RollBackConfigurationToExclude::clone_ptr() const
{
    return std::make_shared<RollBackConfigurationToExclude>();
}

std::string RollBackConfigurationToExclude::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RollBackConfigurationToExclude::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RollBackConfigurationToExclude::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RollBackConfigurationToExclude::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RollBackConfigurationToExclude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

RollBackConfigurationToExclude::Input::Input()
    :
    commit_id{YType::str, "commit-id"},
    force{YType::boolean, "force"},
    best_effort{YType::boolean, "best-effort"},
    label{YType::str, "label"},
    comment{YType::str, "comment"}
{

    yang_name = "input"; yang_parent_name = "roll-back-configuration-to-exclude"; is_top_level_class = false; has_list_ancestor = false;
}

RollBackConfigurationToExclude::Input::~Input()
{
}

bool RollBackConfigurationToExclude::Input::has_data() const
{
    return commit_id.is_set
	|| force.is_set
	|| best_effort.is_set
	|| label.is_set
	|| comment.is_set;
}

bool RollBackConfigurationToExclude::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(commit_id.yfilter)
	|| ydk::is_set(force.yfilter)
	|| ydk::is_set(best_effort.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(comment.yfilter);
}

std::string RollBackConfigurationToExclude::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration-to-exclude/" << get_segment_path();
    return path_buffer.str();
}

std::string RollBackConfigurationToExclude::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RollBackConfigurationToExclude::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (commit_id.is_set || is_set(commit_id.yfilter)) leaf_name_data.push_back(commit_id.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());
    if (best_effort.is_set || is_set(best_effort.yfilter)) leaf_name_data.push_back(best_effort.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RollBackConfigurationToExclude::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfigurationToExclude::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RollBackConfigurationToExclude::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "commit-id")
    {
        commit_id = value;
        commit_id.value_namespace = name_space;
        commit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-effort")
    {
        best_effort = value;
        best_effort.value_namespace = name_space;
        best_effort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
}

void RollBackConfigurationToExclude::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "commit-id")
    {
        commit_id.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
    if(value_path == "best-effort")
    {
        best_effort.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
}

bool RollBackConfigurationToExclude::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commit-id" || name == "force" || name == "best-effort" || name == "label" || name == "comment")
        return true;
    return false;
}

RollBackConfiguration::RollBackConfiguration()
    :
    input(std::make_shared<RollBackConfiguration::Input>())
{
    input->parent = this;

    yang_name = "roll-back-configuration"; yang_parent_name = "Cisco-IOS-XR-cfgmgr-rollback-act"; is_top_level_class = true; has_list_ancestor = false;
}

RollBackConfiguration::~RollBackConfiguration()
{
}

bool RollBackConfiguration::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool RollBackConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string RollBackConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RollBackConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RollBackConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RollBackConfiguration::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RollBackConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RollBackConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RollBackConfiguration::clone_ptr() const
{
    return std::make_shared<RollBackConfiguration>();
}

std::string RollBackConfiguration::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RollBackConfiguration::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RollBackConfiguration::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RollBackConfiguration::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RollBackConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

RollBackConfiguration::Input::Input()
    :
    commit_id{YType::str, "commit-id"},
    force{YType::boolean, "force"},
    best_effort{YType::boolean, "best-effort"},
    label{YType::str, "label"},
    comment{YType::str, "comment"}
{

    yang_name = "input"; yang_parent_name = "roll-back-configuration"; is_top_level_class = false; has_list_ancestor = false;
}

RollBackConfiguration::Input::~Input()
{
}

bool RollBackConfiguration::Input::has_data() const
{
    return commit_id.is_set
	|| force.is_set
	|| best_effort.is_set
	|| label.is_set
	|| comment.is_set;
}

bool RollBackConfiguration::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(commit_id.yfilter)
	|| ydk::is_set(force.yfilter)
	|| ydk::is_set(best_effort.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(comment.yfilter);
}

std::string RollBackConfiguration::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string RollBackConfiguration::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RollBackConfiguration::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (commit_id.is_set || is_set(commit_id.yfilter)) leaf_name_data.push_back(commit_id.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());
    if (best_effort.is_set || is_set(best_effort.yfilter)) leaf_name_data.push_back(best_effort.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RollBackConfiguration::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfiguration::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RollBackConfiguration::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "commit-id")
    {
        commit_id = value;
        commit_id.value_namespace = name_space;
        commit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-effort")
    {
        best_effort = value;
        best_effort.value_namespace = name_space;
        best_effort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
}

void RollBackConfiguration::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "commit-id")
    {
        commit_id.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
    if(value_path == "best-effort")
    {
        best_effort.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
}

bool RollBackConfiguration::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commit-id" || name == "force" || name == "best-effort" || name == "label" || name == "comment")
        return true;
    return false;
}


}
}

