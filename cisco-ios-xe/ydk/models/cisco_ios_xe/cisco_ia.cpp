
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_ia.hpp"

namespace ydk {
namespace cisco_ia {

SyncFromRpc::SyncFromRpc()
    :
    input_(std::make_shared<SyncFromRpc::Input>())
	,output_(std::make_shared<SyncFromRpc::Output>())
{
    input_->parent = this;

    output_->parent = this;

    yang_name = "sync-from"; yang_parent_name = "cisco-ia";
}

SyncFromRpc::~SyncFromRpc()
{
}

bool SyncFromRpc::has_data() const
{
    return (input_ !=  nullptr && input_->has_data())
	|| (output_ !=  nullptr && output_->has_data());
}

bool SyncFromRpc::has_operation() const
{
    return is_set(operation)
	|| (input_ !=  nullptr && input_->has_operation())
	|| (output_ !=  nullptr && output_->has_operation());
}

std::string SyncFromRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:sync-from";

    return path_buffer.str();

}

const EntityPath SyncFromRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> SyncFromRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input_ == nullptr)
        {
            input_ = std::make_shared<SyncFromRpc::Input>();
        }
        return input_;
    }

    if(child_yang_name == "output")
    {
        if(output_ == nullptr)
        {
            output_ = std::make_shared<SyncFromRpc::Output>();
        }
        return output_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SyncFromRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_ != nullptr)
    {
        children["input"] = input_;
    }

    if(output_ != nullptr)
    {
        children["output"] = output_;
    }

    return children;
}

void SyncFromRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SyncFromRpc::clone_ptr() const
{
    return std::make_shared<SyncFromRpc>();
}

std::string SyncFromRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string SyncFromRpc::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function SyncFromRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

SyncFromRpc::Input::Input()
    :
    sync_defaults{YType::empty, "sync-defaults"}
{
    yang_name = "input"; yang_parent_name = "sync-from";
}

SyncFromRpc::Input::~Input()
{
}

bool SyncFromRpc::Input::has_data() const
{
    return sync_defaults.is_set;
}

bool SyncFromRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(sync_defaults.operation);
}

std::string SyncFromRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath SyncFromRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-ia:sync-from/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_defaults.is_set || is_set(sync_defaults.operation)) leaf_name_data.push_back(sync_defaults.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SyncFromRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SyncFromRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SyncFromRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sync-defaults")
    {
        sync_defaults = value;
    }
}

SyncFromRpc::Output::Output()
    :
    result{YType::str, "result"}
{
    yang_name = "output"; yang_parent_name = "sync-from";
}

SyncFromRpc::Output::~Output()
{
}

bool SyncFromRpc::Output::has_data() const
{
    return result.is_set;
}

bool SyncFromRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(result.operation);
}

std::string SyncFromRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath SyncFromRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-ia:sync-from/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.operation)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SyncFromRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SyncFromRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SyncFromRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "result")
    {
        result = value;
    }
}

SaveConfigRpc::SaveConfigRpc()
    :
    output_(std::make_shared<SaveConfigRpc::Output>())
{
    output_->parent = this;

    yang_name = "save-config"; yang_parent_name = "cisco-ia";
}

SaveConfigRpc::~SaveConfigRpc()
{
}

bool SaveConfigRpc::has_data() const
{
    return (output_ !=  nullptr && output_->has_data());
}

bool SaveConfigRpc::has_operation() const
{
    return is_set(operation)
	|| (output_ !=  nullptr && output_->has_operation());
}

std::string SaveConfigRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:save-config";

    return path_buffer.str();

}

const EntityPath SaveConfigRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> SaveConfigRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output_ == nullptr)
        {
            output_ = std::make_shared<SaveConfigRpc::Output>();
        }
        return output_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SaveConfigRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(output_ != nullptr)
    {
        children["output"] = output_;
    }

    return children;
}

void SaveConfigRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SaveConfigRpc::clone_ptr() const
{
    return std::make_shared<SaveConfigRpc>();
}

std::string SaveConfigRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string SaveConfigRpc::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function SaveConfigRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

SaveConfigRpc::Output::Output()
    :
    result{YType::str, "result"}
{
    yang_name = "output"; yang_parent_name = "save-config";
}

SaveConfigRpc::Output::~Output()
{
}

bool SaveConfigRpc::Output::has_data() const
{
    return result.is_set;
}

bool SaveConfigRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(result.operation);
}

std::string SaveConfigRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath SaveConfigRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-ia:save-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.operation)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SaveConfigRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SaveConfigRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SaveConfigRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "result")
    {
        result = value;
    }
}

CheckpointRpc::CheckpointRpc()
    :
    output_(std::make_shared<CheckpointRpc::Output>())
{
    output_->parent = this;

    yang_name = "checkpoint"; yang_parent_name = "cisco-ia";
}

CheckpointRpc::~CheckpointRpc()
{
}

bool CheckpointRpc::has_data() const
{
    return (output_ !=  nullptr && output_->has_data());
}

bool CheckpointRpc::has_operation() const
{
    return is_set(operation)
	|| (output_ !=  nullptr && output_->has_operation());
}

std::string CheckpointRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:checkpoint";

    return path_buffer.str();

}

const EntityPath CheckpointRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CheckpointRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output_ == nullptr)
        {
            output_ = std::make_shared<CheckpointRpc::Output>();
        }
        return output_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CheckpointRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(output_ != nullptr)
    {
        children["output"] = output_;
    }

    return children;
}

void CheckpointRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CheckpointRpc::clone_ptr() const
{
    return std::make_shared<CheckpointRpc>();
}

std::string CheckpointRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CheckpointRpc::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CheckpointRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CheckpointRpc::Output::Output()
    :
    result{YType::str, "result"}
{
    yang_name = "output"; yang_parent_name = "checkpoint";
}

CheckpointRpc::Output::~Output()
{
}

bool CheckpointRpc::Output::has_data() const
{
    return result.is_set;
}

bool CheckpointRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(result.operation);
}

std::string CheckpointRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath CheckpointRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-ia:checkpoint/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.operation)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CheckpointRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CheckpointRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CheckpointRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "result")
    {
        result = value;
    }
}

RevertRpc::RevertRpc()
    :
    input_(std::make_shared<RevertRpc::Input>())
	,output_(std::make_shared<RevertRpc::Output>())
{
    input_->parent = this;

    output_->parent = this;

    yang_name = "revert"; yang_parent_name = "cisco-ia";
}

RevertRpc::~RevertRpc()
{
}

bool RevertRpc::has_data() const
{
    return (input_ !=  nullptr && input_->has_data())
	|| (output_ !=  nullptr && output_->has_data());
}

bool RevertRpc::has_operation() const
{
    return is_set(operation)
	|| (input_ !=  nullptr && input_->has_operation())
	|| (output_ !=  nullptr && output_->has_operation());
}

std::string RevertRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:revert";

    return path_buffer.str();

}

const EntityPath RevertRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RevertRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input_ == nullptr)
        {
            input_ = std::make_shared<RevertRpc::Input>();
        }
        return input_;
    }

    if(child_yang_name == "output")
    {
        if(output_ == nullptr)
        {
            output_ = std::make_shared<RevertRpc::Output>();
        }
        return output_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RevertRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_ != nullptr)
    {
        children["input"] = input_;
    }

    if(output_ != nullptr)
    {
        children["output"] = output_;
    }

    return children;
}

void RevertRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RevertRpc::clone_ptr() const
{
    return std::make_shared<RevertRpc>();
}

std::string RevertRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string RevertRpc::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function RevertRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

RevertRpc::Input::Input()
    :
    idle{YType::int16, "idle"},
    now{YType::empty, "now"},
    timer{YType::int16, "timer"}
{
    yang_name = "input"; yang_parent_name = "revert";
}

RevertRpc::Input::~Input()
{
}

bool RevertRpc::Input::has_data() const
{
    return idle.is_set
	|| now.is_set
	|| timer.is_set;
}

bool RevertRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(idle.operation)
	|| is_set(now.operation)
	|| is_set(timer.operation);
}

std::string RevertRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath RevertRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-ia:revert/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle.is_set || is_set(idle.operation)) leaf_name_data.push_back(idle.get_name_leafdata());
    if (now.is_set || is_set(now.operation)) leaf_name_data.push_back(now.get_name_leafdata());
    if (timer.is_set || is_set(timer.operation)) leaf_name_data.push_back(timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RevertRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RevertRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RevertRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "idle")
    {
        idle = value;
    }
    if(value_path == "now")
    {
        now = value;
    }
    if(value_path == "timer")
    {
        timer = value;
    }
}

RevertRpc::Output::Output()
    :
    result{YType::str, "result"}
{
    yang_name = "output"; yang_parent_name = "revert";
}

RevertRpc::Output::~Output()
{
}

bool RevertRpc::Output::has_data() const
{
    return result.is_set;
}

bool RevertRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(result.operation);
}

std::string RevertRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath RevertRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-ia:revert/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.operation)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RevertRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RevertRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RevertRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "result")
    {
        result = value;
    }
}

RollbackRpc::RollbackRpc()
    :
    input_(std::make_shared<RollbackRpc::Input>())
	,output_(std::make_shared<RollbackRpc::Output>())
{
    input_->parent = this;

    output_->parent = this;

    yang_name = "rollback"; yang_parent_name = "cisco-ia";
}

RollbackRpc::~RollbackRpc()
{
}

bool RollbackRpc::has_data() const
{
    return (input_ !=  nullptr && input_->has_data())
	|| (output_ !=  nullptr && output_->has_data());
}

bool RollbackRpc::has_operation() const
{
    return is_set(operation)
	|| (input_ !=  nullptr && input_->has_operation())
	|| (output_ !=  nullptr && output_->has_operation());
}

std::string RollbackRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-ia:rollback";

    return path_buffer.str();

}

const EntityPath RollbackRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RollbackRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input_ == nullptr)
        {
            input_ = std::make_shared<RollbackRpc::Input>();
        }
        return input_;
    }

    if(child_yang_name == "output")
    {
        if(output_ == nullptr)
        {
            output_ = std::make_shared<RollbackRpc::Output>();
        }
        return output_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollbackRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_ != nullptr)
    {
        children["input"] = input_;
    }

    if(output_ != nullptr)
    {
        children["output"] = output_;
    }

    return children;
}

void RollbackRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RollbackRpc::clone_ptr() const
{
    return std::make_shared<RollbackRpc>();
}

std::string RollbackRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string RollbackRpc::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function RollbackRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

RollbackRpc::Input::Input()
    :
    nolock{YType::boolean, "nolock"},
    revert_on_error{YType::empty, "revert-on-error"},
    revert_timer{YType::int16, "revert-timer"},
    target_url{YType::str, "target-url"},
    verbose{YType::boolean, "verbose"}
{
    yang_name = "input"; yang_parent_name = "rollback";
}

RollbackRpc::Input::~Input()
{
}

bool RollbackRpc::Input::has_data() const
{
    return nolock.is_set
	|| revert_on_error.is_set
	|| revert_timer.is_set
	|| target_url.is_set
	|| verbose.is_set;
}

bool RollbackRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(nolock.operation)
	|| is_set(revert_on_error.operation)
	|| is_set(revert_timer.operation)
	|| is_set(target_url.operation)
	|| is_set(verbose.operation);
}

std::string RollbackRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath RollbackRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-ia:rollback/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nolock.is_set || is_set(nolock.operation)) leaf_name_data.push_back(nolock.get_name_leafdata());
    if (revert_on_error.is_set || is_set(revert_on_error.operation)) leaf_name_data.push_back(revert_on_error.get_name_leafdata());
    if (revert_timer.is_set || is_set(revert_timer.operation)) leaf_name_data.push_back(revert_timer.get_name_leafdata());
    if (target_url.is_set || is_set(target_url.operation)) leaf_name_data.push_back(target_url.get_name_leafdata());
    if (verbose.is_set || is_set(verbose.operation)) leaf_name_data.push_back(verbose.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RollbackRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollbackRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RollbackRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nolock")
    {
        nolock = value;
    }
    if(value_path == "revert-on-error")
    {
        revert_on_error = value;
    }
    if(value_path == "revert-timer")
    {
        revert_timer = value;
    }
    if(value_path == "target-url")
    {
        target_url = value;
    }
    if(value_path == "verbose")
    {
        verbose = value;
    }
}

RollbackRpc::Output::Output()
    :
    result{YType::str, "result"}
{
    yang_name = "output"; yang_parent_name = "rollback";
}

RollbackRpc::Output::~Output()
{
}

bool RollbackRpc::Output::has_data() const
{
    return result.is_set;
}

bool RollbackRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(result.operation);
}

std::string RollbackRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath RollbackRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-ia:rollback/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.operation)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RollbackRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RollbackRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RollbackRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "result")
    {
        result = value;
    }
}

const Enum::YLeaf CiaLogLevelEnum::none {0, "none"};
const Enum::YLeaf CiaLogLevelEnum::error {1, "error"};
const Enum::YLeaf CiaLogLevelEnum::warning {2, "warning"};
const Enum::YLeaf CiaLogLevelEnum::information {3, "information"};
const Enum::YLeaf CiaLogLevelEnum::debug {4, "debug"};

const Enum::YLeaf CiaSyncTypeEnum::disabled {0, "disabled"};
const Enum::YLeaf CiaSyncTypeEnum::without_defaults {1, "without-defaults"};
const Enum::YLeaf CiaSyncTypeEnum::include_defaults {2, "include-defaults"};

const Enum::YLeaf SyslogSeverityEnum::none {8, "none"};
const Enum::YLeaf SyslogSeverityEnum::emergency {0, "emergency"};
const Enum::YLeaf SyslogSeverityEnum::alert {1, "alert"};
const Enum::YLeaf SyslogSeverityEnum::critical {2, "critical"};
const Enum::YLeaf SyslogSeverityEnum::error {3, "error"};
const Enum::YLeaf SyslogSeverityEnum::warning {4, "warning"};
const Enum::YLeaf SyslogSeverityEnum::notice {5, "notice"};
const Enum::YLeaf SyslogSeverityEnum::info {6, "info"};
const Enum::YLeaf SyslogSeverityEnum::debug {7, "debug"};

const Enum::YLeaf OnepLogLevelEnum::none {0, "none"};
const Enum::YLeaf OnepLogLevelEnum::fatal {1, "fatal"};
const Enum::YLeaf OnepLogLevelEnum::error {2, "error"};
const Enum::YLeaf OnepLogLevelEnum::warning {3, "warning"};
const Enum::YLeaf OnepLogLevelEnum::information {4, "information"};
const Enum::YLeaf OnepLogLevelEnum::debug {5, "debug"};
const Enum::YLeaf OnepLogLevelEnum::trace {6, "trace"};


}
}

