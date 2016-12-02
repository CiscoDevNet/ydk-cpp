
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_cfgmgr_rollback_act.hpp"

namespace ydk {
namespace Cisco_IOS_XR_cfgmgr_rollback_act {

RollBackConfigurationLastRpc::RollBackConfigurationLastRpc()
    :
    	best_effort{YType::boolean, "best-effort"},
	 comment{YType::str, "comment"},
	 count{YType::int32, "count"},
	 force{YType::boolean, "force"},
	 label{YType::str, "label"}
{
    yang_name = "roll-back-configuration-last"; yang_parent_name = "Cisco-IOS-XR-cfgmgr-rollback-act";
}

RollBackConfigurationLastRpc::~RollBackConfigurationLastRpc()
{
}

bool RollBackConfigurationLastRpc::has_data() const
{
    return best_effort.is_set
	|| comment.is_set
	|| count.is_set
	|| force.is_set
	|| label.is_set;
}

bool RollBackConfigurationLastRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(best_effort.operation)
	|| is_set(comment.operation)
	|| is_set(count.operation)
	|| is_set(force.operation)
	|| is_set(label.operation);
}

std::string RollBackConfigurationLastRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration-last";

    return path_buffer.str();

}

EntityPath RollBackConfigurationLastRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_effort.is_set || is_set(best_effort.operation)) leaf_name_data.push_back(best_effort.get_name_leafdata());
    if (comment.is_set || is_set(comment.operation)) leaf_name_data.push_back(comment.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (force.is_set || is_set(force.operation)) leaf_name_data.push_back(force.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RollBackConfigurationLastRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RollBackConfigurationLastRpc::get_children()
{
    return children;
}

void RollBackConfigurationLastRpc::set_value(const std::string & value_path, std::string value)
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

std::unique_ptr<Entity> RollBackConfigurationLastRpc::clone_ptr()
{
    return std::make_unique<RollBackConfigurationLastRpc>();
}
RollBackConfigurationToRpc::RollBackConfigurationToRpc()
    :
    	best_effort{YType::boolean, "best-effort"},
	 comment{YType::str, "comment"},
	 commit_id{YType::str, "commit-id"},
	 force{YType::boolean, "force"},
	 label{YType::str, "label"}
{
    yang_name = "roll-back-configuration-to"; yang_parent_name = "Cisco-IOS-XR-cfgmgr-rollback-act";
}

RollBackConfigurationToRpc::~RollBackConfigurationToRpc()
{
}

bool RollBackConfigurationToRpc::has_data() const
{
    return best_effort.is_set
	|| comment.is_set
	|| commit_id.is_set
	|| force.is_set
	|| label.is_set;
}

bool RollBackConfigurationToRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(best_effort.operation)
	|| is_set(comment.operation)
	|| is_set(commit_id.operation)
	|| is_set(force.operation)
	|| is_set(label.operation);
}

std::string RollBackConfigurationToRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration-to";

    return path_buffer.str();

}

EntityPath RollBackConfigurationToRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_effort.is_set || is_set(best_effort.operation)) leaf_name_data.push_back(best_effort.get_name_leafdata());
    if (comment.is_set || is_set(comment.operation)) leaf_name_data.push_back(comment.get_name_leafdata());
    if (commit_id.is_set || is_set(commit_id.operation)) leaf_name_data.push_back(commit_id.get_name_leafdata());
    if (force.is_set || is_set(force.operation)) leaf_name_data.push_back(force.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RollBackConfigurationToRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RollBackConfigurationToRpc::get_children()
{
    return children;
}

void RollBackConfigurationToRpc::set_value(const std::string & value_path, std::string value)
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

std::unique_ptr<Entity> RollBackConfigurationToRpc::clone_ptr()
{
    return std::make_unique<RollBackConfigurationToRpc>();
}
RollBackConfigurationToExcludeRpc::RollBackConfigurationToExcludeRpc()
    :
    	best_effort{YType::boolean, "best-effort"},
	 comment{YType::str, "comment"},
	 commit_id{YType::str, "commit-id"},
	 force{YType::boolean, "force"},
	 label{YType::str, "label"}
{
    yang_name = "roll-back-configuration-to-exclude"; yang_parent_name = "Cisco-IOS-XR-cfgmgr-rollback-act";
}

RollBackConfigurationToExcludeRpc::~RollBackConfigurationToExcludeRpc()
{
}

bool RollBackConfigurationToExcludeRpc::has_data() const
{
    return best_effort.is_set
	|| comment.is_set
	|| commit_id.is_set
	|| force.is_set
	|| label.is_set;
}

bool RollBackConfigurationToExcludeRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(best_effort.operation)
	|| is_set(comment.operation)
	|| is_set(commit_id.operation)
	|| is_set(force.operation)
	|| is_set(label.operation);
}

std::string RollBackConfigurationToExcludeRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration-to-exclude";

    return path_buffer.str();

}

EntityPath RollBackConfigurationToExcludeRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_effort.is_set || is_set(best_effort.operation)) leaf_name_data.push_back(best_effort.get_name_leafdata());
    if (comment.is_set || is_set(comment.operation)) leaf_name_data.push_back(comment.get_name_leafdata());
    if (commit_id.is_set || is_set(commit_id.operation)) leaf_name_data.push_back(commit_id.get_name_leafdata());
    if (force.is_set || is_set(force.operation)) leaf_name_data.push_back(force.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RollBackConfigurationToExcludeRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RollBackConfigurationToExcludeRpc::get_children()
{
    return children;
}

void RollBackConfigurationToExcludeRpc::set_value(const std::string & value_path, std::string value)
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

std::unique_ptr<Entity> RollBackConfigurationToExcludeRpc::clone_ptr()
{
    return std::make_unique<RollBackConfigurationToExcludeRpc>();
}
RollBackConfigurationRpc::RollBackConfigurationRpc()
    :
    	best_effort{YType::boolean, "best-effort"},
	 comment{YType::str, "comment"},
	 commit_id{YType::str, "commit-id"},
	 force{YType::boolean, "force"},
	 label{YType::str, "label"}
{
    yang_name = "roll-back-configuration"; yang_parent_name = "Cisco-IOS-XR-cfgmgr-rollback-act";
}

RollBackConfigurationRpc::~RollBackConfigurationRpc()
{
}

bool RollBackConfigurationRpc::has_data() const
{
    return best_effort.is_set
	|| comment.is_set
	|| commit_id.is_set
	|| force.is_set
	|| label.is_set;
}

bool RollBackConfigurationRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(best_effort.operation)
	|| is_set(comment.operation)
	|| is_set(commit_id.operation)
	|| is_set(force.operation)
	|| is_set(label.operation);
}

std::string RollBackConfigurationRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cfgmgr-rollback-act:roll-back-configuration";

    return path_buffer.str();

}

EntityPath RollBackConfigurationRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_effort.is_set || is_set(best_effort.operation)) leaf_name_data.push_back(best_effort.get_name_leafdata());
    if (comment.is_set || is_set(comment.operation)) leaf_name_data.push_back(comment.get_name_leafdata());
    if (commit_id.is_set || is_set(commit_id.operation)) leaf_name_data.push_back(commit_id.get_name_leafdata());
    if (force.is_set || is_set(force.operation)) leaf_name_data.push_back(force.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RollBackConfigurationRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RollBackConfigurationRpc::get_children()
{
    return children;
}

void RollBackConfigurationRpc::set_value(const std::string & value_path, std::string value)
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

std::unique_ptr<Entity> RollBackConfigurationRpc::clone_ptr()
{
    return std::make_unique<RollBackConfigurationRpc>();
}


}
}

