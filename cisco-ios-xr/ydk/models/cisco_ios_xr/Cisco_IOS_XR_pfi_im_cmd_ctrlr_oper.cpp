
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pfi_im_cmd_ctrlr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pfi_im_cmd_ctrlr_oper {

Controllers::Controllers()
    :
    controllers(std::make_shared<Controllers::Controllers_>())
{
    controllers->parent = this;

    yang_name = "controllers"; yang_parent_name = "Cisco-IOS-XR-pfi-im-cmd-ctrlr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Controllers::~Controllers()
{
}

bool Controllers::has_data() const
{
    if (is_presence_container) return true;
    return (controllers !=  nullptr && controllers->has_data());
}

bool Controllers::has_operation() const
{
    return is_set(yfilter)
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pfi-im-cmd-ctrlr-oper:controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controllers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllers")
    {
        if(controllers == nullptr)
        {
            controllers = std::make_shared<Controllers::Controllers_>();
        }
        return controllers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controllers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(controllers != nullptr)
    {
        children["controllers"] = controllers;
    }

    return children;
}

void Controllers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controllers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Controllers::clone_ptr() const
{
    return std::make_shared<Controllers>();
}

std::string Controllers::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Controllers::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Controllers::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Controllers::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Controllers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllers")
        return true;
    return false;
}

Controllers::Controllers_::Controllers_()
    :
    controller(this, {"interafce_name"})
{

    yang_name = "controllers"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = false; 
}

Controllers::Controllers_::~Controllers_()
{
}

bool Controllers::Controllers_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool Controllers::Controllers_::has_operation() const
{
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controllers::Controllers_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pfi-im-cmd-ctrlr-oper:controllers/" << get_segment_path();
    return path_buffer.str();
}

std::string Controllers::Controllers_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controllers::Controllers_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controllers::Controllers_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        auto c = std::make_shared<Controllers::Controllers_::Controller>();
        c->parent = this;
        controller.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controllers::Controllers_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : controller.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controllers::Controllers_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controllers::Controllers_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controllers::Controllers_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

Controllers::Controllers_::Controller::Controller()
    :
    interafce_name{YType::str, "interafce-name"},
    controller{YType::str, "controller"},
    state{YType::enumeration, "state"},
    description{YType::str, "description"}
{

    yang_name = "controller"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = false; 
}

Controllers::Controllers_::Controller::~Controller()
{
}

bool Controllers::Controllers_::Controller::has_data() const
{
    if (is_presence_container) return true;
    return interafce_name.is_set
	|| controller.is_set
	|| state.is_set
	|| description.is_set;
}

bool Controllers::Controllers_::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interafce_name.yfilter)
	|| ydk::is_set(controller.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controllers::Controllers_::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pfi-im-cmd-ctrlr-oper:controllers/controllers/" << get_segment_path();
    return path_buffer.str();
}

std::string Controllers::Controllers_::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    ADD_KEY_TOKEN(interafce_name, "interafce-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controllers::Controllers_::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interafce_name.is_set || is_set(interafce_name.yfilter)) leaf_name_data.push_back(interafce_name.get_name_leafdata());
    if (controller.is_set || is_set(controller.yfilter)) leaf_name_data.push_back(controller.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controllers::Controllers_::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controllers::Controllers_::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controllers::Controllers_::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interafce-name")
    {
        interafce_name = value;
        interafce_name.value_namespace = name_space;
        interafce_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controller")
    {
        controller = value;
        controller.value_namespace = name_space;
        controller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controllers::Controllers_::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interafce-name")
    {
        interafce_name.yfilter = yfilter;
    }
    if(value_path == "controller")
    {
        controller.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controllers::Controllers_::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interafce-name" || name == "controller" || name == "state" || name == "description")
        return true;
    return false;
}

const Enum::YLeaf ImStateEnum::im_state_not_ready {0, "im-state-not-ready"};
const Enum::YLeaf ImStateEnum::im_state_admin_down {1, "im-state-admin-down"};
const Enum::YLeaf ImStateEnum::im_state_down {2, "im-state-down"};
const Enum::YLeaf ImStateEnum::im_state_up {3, "im-state-up"};
const Enum::YLeaf ImStateEnum::im_state_shutdown {4, "im-state-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_err_disable {5, "im-state-err-disable"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate {6, "im-state-down-immediate"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate_admin {7, "im-state-down-immediate-admin"};
const Enum::YLeaf ImStateEnum::im_state_down_graceful {8, "im-state-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_begin_shutdown {9, "im-state-begin-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_end_shutdown {10, "im-state-end-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_begin_error_disable {11, "im-state-begin-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_end_error_disable {12, "im-state-end-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_begin_down_graceful {13, "im-state-begin-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_reset {14, "im-state-reset"};
const Enum::YLeaf ImStateEnum::im_state_operational {15, "im-state-operational"};
const Enum::YLeaf ImStateEnum::im_state_not_operational {16, "im-state-not-operational"};
const Enum::YLeaf ImStateEnum::im_state_unknown {17, "im-state-unknown"};
const Enum::YLeaf ImStateEnum::im_state_last {18, "im-state-last"};


}
}

