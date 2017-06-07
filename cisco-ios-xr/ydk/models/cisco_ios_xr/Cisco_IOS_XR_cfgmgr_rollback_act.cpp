
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_cfgmgr_rollback_act.hpp"

namespace ydk {
namespace Cisco_IOS_XR_cfgmgr_rollback_act {

RollBackConfigurationLastRpc::RollBackConfigurationLastRpc()
    :
    input(std::make_shared<RollBackConfigurationLastRpc::Input>())
{
    input->parent = this;

    yang_name = "roll-back-configuration-last"; yang_parent_name = "Cisco-IOS-XR-cfgmgr-rollback-act";
}

RollBackConfigurationLastRpc::~RollBackConfigurationLastRpc()
{
}

bool RollBackConfigurationLastRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool RollBackConfigurationLastRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string RollBackConfigurationLastRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration-last";

    return path_buffer.str();

}

const EntityPath RollBackConfigurationLastRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RollBackConfigurationLastRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RollBackConfigurationLastRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfigurationLastRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RollBackConfigurationLastRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RollBackConfigurationLastRpc::clone_ptr() const
{
    return std::make_shared<RollBackConfigurationLastRpc>();
}

std::string RollBackConfigurationLastRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RollBackConfigurationLastRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RollBackConfigurationLastRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RollBackConfigurationLastRpc::Input::Input()
    :
    best_effort{YType::boolean, "best-effort"},
    comment{YType::str, "comment"},
    count{YType::int32, "count"},
    force{YType::boolean, "force"},
    label{YType::str, "label"}
{
    yang_name = "input"; yang_parent_name = "roll-back-configuration-last";
}

RollBackConfigurationLastRpc::Input::~Input()
{
}

bool RollBackConfigurationLastRpc::Input::has_data() const
{
    return best_effort.is_set
	|| comment.is_set
	|| count.is_set
	|| force.is_set
	|| label.is_set;
}

bool RollBackConfigurationLastRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(best_effort.operation)
	|| is_set(comment.operation)
	|| is_set(count.operation)
	|| is_set(force.operation)
	|| is_set(label.operation);
}

std::string RollBackConfigurationLastRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath RollBackConfigurationLastRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration-last/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_effort.is_set || is_set(best_effort.operation)) leaf_name_data.push_back(best_effort.get_name_leafdata());
    if (comment.is_set || is_set(comment.operation)) leaf_name_data.push_back(comment.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (force.is_set || is_set(force.operation)) leaf_name_data.push_back(force.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RollBackConfigurationLastRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfigurationLastRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RollBackConfigurationLastRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best-effort")
    {
        best_effort = value;
    }
    if(value_path == "comment")
    {
        comment = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "force")
    {
        force = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
}

RollBackConfigurationToRpc::RollBackConfigurationToRpc()
    :
    input(std::make_shared<RollBackConfigurationToRpc::Input>())
{
    input->parent = this;

    yang_name = "roll-back-configuration-to"; yang_parent_name = "Cisco-IOS-XR-cfgmgr-rollback-act";
}

RollBackConfigurationToRpc::~RollBackConfigurationToRpc()
{
}

bool RollBackConfigurationToRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool RollBackConfigurationToRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string RollBackConfigurationToRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration-to";

    return path_buffer.str();

}

const EntityPath RollBackConfigurationToRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RollBackConfigurationToRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RollBackConfigurationToRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfigurationToRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RollBackConfigurationToRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RollBackConfigurationToRpc::clone_ptr() const
{
    return std::make_shared<RollBackConfigurationToRpc>();
}

std::string RollBackConfigurationToRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RollBackConfigurationToRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RollBackConfigurationToRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RollBackConfigurationToRpc::Input::Input()
    :
    best_effort{YType::boolean, "best-effort"},
    comment{YType::str, "comment"},
    commit_id{YType::str, "commit-id"},
    force{YType::boolean, "force"},
    label{YType::str, "label"}
{
    yang_name = "input"; yang_parent_name = "roll-back-configuration-to";
}

RollBackConfigurationToRpc::Input::~Input()
{
}

bool RollBackConfigurationToRpc::Input::has_data() const
{
    return best_effort.is_set
	|| comment.is_set
	|| commit_id.is_set
	|| force.is_set
	|| label.is_set;
}

bool RollBackConfigurationToRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(best_effort.operation)
	|| is_set(comment.operation)
	|| is_set(commit_id.operation)
	|| is_set(force.operation)
	|| is_set(label.operation);
}

std::string RollBackConfigurationToRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath RollBackConfigurationToRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration-to/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_effort.is_set || is_set(best_effort.operation)) leaf_name_data.push_back(best_effort.get_name_leafdata());
    if (comment.is_set || is_set(comment.operation)) leaf_name_data.push_back(comment.get_name_leafdata());
    if (commit_id.is_set || is_set(commit_id.operation)) leaf_name_data.push_back(commit_id.get_name_leafdata());
    if (force.is_set || is_set(force.operation)) leaf_name_data.push_back(force.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RollBackConfigurationToRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfigurationToRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RollBackConfigurationToRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best-effort")
    {
        best_effort = value;
    }
    if(value_path == "comment")
    {
        comment = value;
    }
    if(value_path == "commit-id")
    {
        commit_id = value;
    }
    if(value_path == "force")
    {
        force = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
}

RollBackConfigurationToExcludeRpc::RollBackConfigurationToExcludeRpc()
    :
    input(std::make_shared<RollBackConfigurationToExcludeRpc::Input>())
{
    input->parent = this;

    yang_name = "roll-back-configuration-to-exclude"; yang_parent_name = "Cisco-IOS-XR-cfgmgr-rollback-act";
}

RollBackConfigurationToExcludeRpc::~RollBackConfigurationToExcludeRpc()
{
}

bool RollBackConfigurationToExcludeRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool RollBackConfigurationToExcludeRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string RollBackConfigurationToExcludeRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration-to-exclude";

    return path_buffer.str();

}

const EntityPath RollBackConfigurationToExcludeRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RollBackConfigurationToExcludeRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RollBackConfigurationToExcludeRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfigurationToExcludeRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RollBackConfigurationToExcludeRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RollBackConfigurationToExcludeRpc::clone_ptr() const
{
    return std::make_shared<RollBackConfigurationToExcludeRpc>();
}

std::string RollBackConfigurationToExcludeRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RollBackConfigurationToExcludeRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RollBackConfigurationToExcludeRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RollBackConfigurationToExcludeRpc::Input::Input()
    :
    best_effort{YType::boolean, "best-effort"},
    comment{YType::str, "comment"},
    commit_id{YType::str, "commit-id"},
    force{YType::boolean, "force"},
    label{YType::str, "label"}
{
    yang_name = "input"; yang_parent_name = "roll-back-configuration-to-exclude";
}

RollBackConfigurationToExcludeRpc::Input::~Input()
{
}

bool RollBackConfigurationToExcludeRpc::Input::has_data() const
{
    return best_effort.is_set
	|| comment.is_set
	|| commit_id.is_set
	|| force.is_set
	|| label.is_set;
}

bool RollBackConfigurationToExcludeRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(best_effort.operation)
	|| is_set(comment.operation)
	|| is_set(commit_id.operation)
	|| is_set(force.operation)
	|| is_set(label.operation);
}

std::string RollBackConfigurationToExcludeRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath RollBackConfigurationToExcludeRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration-to-exclude/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_effort.is_set || is_set(best_effort.operation)) leaf_name_data.push_back(best_effort.get_name_leafdata());
    if (comment.is_set || is_set(comment.operation)) leaf_name_data.push_back(comment.get_name_leafdata());
    if (commit_id.is_set || is_set(commit_id.operation)) leaf_name_data.push_back(commit_id.get_name_leafdata());
    if (force.is_set || is_set(force.operation)) leaf_name_data.push_back(force.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RollBackConfigurationToExcludeRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfigurationToExcludeRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RollBackConfigurationToExcludeRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best-effort")
    {
        best_effort = value;
    }
    if(value_path == "comment")
    {
        comment = value;
    }
    if(value_path == "commit-id")
    {
        commit_id = value;
    }
    if(value_path == "force")
    {
        force = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
}

RollBackConfigurationRpc::RollBackConfigurationRpc()
    :
    input(std::make_shared<RollBackConfigurationRpc::Input>())
{
    input->parent = this;

    yang_name = "roll-back-configuration"; yang_parent_name = "Cisco-IOS-XR-cfgmgr-rollback-act";
}

RollBackConfigurationRpc::~RollBackConfigurationRpc()
{
}

bool RollBackConfigurationRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool RollBackConfigurationRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string RollBackConfigurationRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration";

    return path_buffer.str();

}

const EntityPath RollBackConfigurationRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RollBackConfigurationRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<RollBackConfigurationRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfigurationRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void RollBackConfigurationRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RollBackConfigurationRpc::clone_ptr() const
{
    return std::make_shared<RollBackConfigurationRpc>();
}

std::string RollBackConfigurationRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RollBackConfigurationRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RollBackConfigurationRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RollBackConfigurationRpc::Input::Input()
    :
    best_effort{YType::boolean, "best-effort"},
    comment{YType::str, "comment"},
    commit_id{YType::str, "commit-id"},
    force{YType::boolean, "force"},
    label{YType::str, "label"}
{
    yang_name = "input"; yang_parent_name = "roll-back-configuration";
}

RollBackConfigurationRpc::Input::~Input()
{
}

bool RollBackConfigurationRpc::Input::has_data() const
{
    return best_effort.is_set
	|| comment.is_set
	|| commit_id.is_set
	|| force.is_set
	|| label.is_set;
}

bool RollBackConfigurationRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(best_effort.operation)
	|| is_set(comment.operation)
	|| is_set(commit_id.operation)
	|| is_set(force.operation)
	|| is_set(label.operation);
}

std::string RollBackConfigurationRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath RollBackConfigurationRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_effort.is_set || is_set(best_effort.operation)) leaf_name_data.push_back(best_effort.get_name_leafdata());
    if (comment.is_set || is_set(comment.operation)) leaf_name_data.push_back(comment.get_name_leafdata());
    if (commit_id.is_set || is_set(commit_id.operation)) leaf_name_data.push_back(commit_id.get_name_leafdata());
    if (force.is_set || is_set(force.operation)) leaf_name_data.push_back(force.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RollBackConfigurationRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollBackConfigurationRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RollBackConfigurationRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best-effort")
    {
        best_effort = value;
    }
    if(value_path == "comment")
    {
        comment = value;
    }
    if(value_path == "commit-id")
    {
        commit_id = value;
    }
    if(value_path == "force")
    {
        force = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
}


}
}

