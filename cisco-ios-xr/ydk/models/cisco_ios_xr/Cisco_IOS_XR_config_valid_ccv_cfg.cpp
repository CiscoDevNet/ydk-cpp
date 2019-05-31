
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_config_valid_ccv_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_config_valid_ccv_cfg {

Configurationvalidation::Configurationvalidation()
    :
    enable{YType::empty, "enable"}
        ,
    failure_type_actions(std::make_shared<Configurationvalidation::FailureTypeActions>())
{
    failure_type_actions->parent = this;

    yang_name = "configurationvalidation"; yang_parent_name = "Cisco-IOS-XR-config-valid-ccv-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Configurationvalidation::~Configurationvalidation()
{
}

bool Configurationvalidation::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (failure_type_actions !=  nullptr && failure_type_actions->has_data());
}

bool Configurationvalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (failure_type_actions !=  nullptr && failure_type_actions->has_operation());
}

std::string Configurationvalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-valid-ccv-cfg:configurationvalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Configurationvalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Configurationvalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure-type-actions")
    {
        if(failure_type_actions == nullptr)
        {
            failure_type_actions = std::make_shared<Configurationvalidation::FailureTypeActions>();
        }
        return failure_type_actions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Configurationvalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(failure_type_actions != nullptr)
    {
        _children["failure-type-actions"] = failure_type_actions;
    }

    return _children;
}

void Configurationvalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Configurationvalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Configurationvalidation::clone_ptr() const
{
    return std::make_shared<Configurationvalidation>();
}

std::string Configurationvalidation::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Configurationvalidation::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Configurationvalidation::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Configurationvalidation::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Configurationvalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure-type-actions" || name == "enable")
        return true;
    return false;
}

Configurationvalidation::FailureTypeActions::FailureTypeActions()
    :
    failure_type_action(this, {"failure"})
{

    yang_name = "failure-type-actions"; yang_parent_name = "configurationvalidation"; is_top_level_class = false; has_list_ancestor = false; 
}

Configurationvalidation::FailureTypeActions::~FailureTypeActions()
{
}

bool Configurationvalidation::FailureTypeActions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<failure_type_action.len(); index++)
    {
        if(failure_type_action[index]->has_data())
            return true;
    }
    return false;
}

bool Configurationvalidation::FailureTypeActions::has_operation() const
{
    for (std::size_t index=0; index<failure_type_action.len(); index++)
    {
        if(failure_type_action[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Configurationvalidation::FailureTypeActions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-valid-ccv-cfg:configurationvalidation/" << get_segment_path();
    return path_buffer.str();
}

std::string Configurationvalidation::FailureTypeActions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure-type-actions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Configurationvalidation::FailureTypeActions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Configurationvalidation::FailureTypeActions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure-type-action")
    {
        auto ent_ = std::make_shared<Configurationvalidation::FailureTypeActions::FailureTypeAction>();
        ent_->parent = this;
        failure_type_action.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Configurationvalidation::FailureTypeActions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : failure_type_action.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Configurationvalidation::FailureTypeActions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Configurationvalidation::FailureTypeActions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Configurationvalidation::FailureTypeActions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure-type-action")
        return true;
    return false;
}

Configurationvalidation::FailureTypeActions::FailureTypeAction::FailureTypeAction()
    :
    failure{YType::enumeration, "failure"},
    action{YType::enumeration, "action"}
{

    yang_name = "failure-type-action"; yang_parent_name = "failure-type-actions"; is_top_level_class = false; has_list_ancestor = false; 
}

Configurationvalidation::FailureTypeActions::FailureTypeAction::~FailureTypeAction()
{
}

bool Configurationvalidation::FailureTypeActions::FailureTypeAction::has_data() const
{
    if (is_presence_container) return true;
    return failure.is_set
	|| action.is_set;
}

bool Configurationvalidation::FailureTypeActions::FailureTypeAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string Configurationvalidation::FailureTypeActions::FailureTypeAction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-valid-ccv-cfg:configurationvalidation/failure-type-actions/" << get_segment_path();
    return path_buffer.str();
}

std::string Configurationvalidation::FailureTypeActions::FailureTypeAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure-type-action";
    ADD_KEY_TOKEN(failure, "failure");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Configurationvalidation::FailureTypeActions::FailureTypeAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Configurationvalidation::FailureTypeActions::FailureTypeAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Configurationvalidation::FailureTypeActions::FailureTypeAction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Configurationvalidation::FailureTypeActions::FailureTypeAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void Configurationvalidation::FailureTypeActions::FailureTypeAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool Configurationvalidation::FailureTypeActions::FailureTypeAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "action")
        return true;
    return false;
}

const Enum::YLeaf FailureAction::report {1, "report"};

const Enum::YLeaf Failure::unsupported {0, "unsupported"};


}
}

