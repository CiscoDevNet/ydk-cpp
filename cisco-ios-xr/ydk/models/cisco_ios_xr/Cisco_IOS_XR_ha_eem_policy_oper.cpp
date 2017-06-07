
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ha_eem_policy_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ha_eem_policy_oper {

Eem::Eem()
    :
    avl_policies(std::make_shared<Eem::AvlPolicies>())
	,dir_user(std::make_shared<Eem::DirUser>())
	,env_variables(std::make_shared<Eem::EnvVariables>())
	,refresh_time(std::make_shared<Eem::RefreshTime>())
	,reg_policies(std::make_shared<Eem::RegPolicies>())
{
    avl_policies->parent = this;

    dir_user->parent = this;

    env_variables->parent = this;

    refresh_time->parent = this;

    reg_policies->parent = this;

    yang_name = "eem"; yang_parent_name = "Cisco-IOS-XR-ha-eem-policy-oper";
}

Eem::~Eem()
{
}

bool Eem::has_data() const
{
    return (avl_policies !=  nullptr && avl_policies->has_data())
	|| (dir_user !=  nullptr && dir_user->has_data())
	|| (env_variables !=  nullptr && env_variables->has_data())
	|| (refresh_time !=  nullptr && refresh_time->has_data())
	|| (reg_policies !=  nullptr && reg_policies->has_data());
}

bool Eem::has_operation() const
{
    return is_set(operation)
	|| (avl_policies !=  nullptr && avl_policies->has_operation())
	|| (dir_user !=  nullptr && dir_user->has_operation())
	|| (env_variables !=  nullptr && env_variables->has_operation())
	|| (refresh_time !=  nullptr && refresh_time->has_operation())
	|| (reg_policies !=  nullptr && reg_policies->has_operation());
}

std::string Eem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem";

    return path_buffer.str();

}

const EntityPath Eem::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Eem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "avl-policies")
    {
        if(avl_policies == nullptr)
        {
            avl_policies = std::make_shared<Eem::AvlPolicies>();
        }
        return avl_policies;
    }

    if(child_yang_name == "dir-user")
    {
        if(dir_user == nullptr)
        {
            dir_user = std::make_shared<Eem::DirUser>();
        }
        return dir_user;
    }

    if(child_yang_name == "env-variables")
    {
        if(env_variables == nullptr)
        {
            env_variables = std::make_shared<Eem::EnvVariables>();
        }
        return env_variables;
    }

    if(child_yang_name == "refresh-time")
    {
        if(refresh_time == nullptr)
        {
            refresh_time = std::make_shared<Eem::RefreshTime>();
        }
        return refresh_time;
    }

    if(child_yang_name == "reg-policies")
    {
        if(reg_policies == nullptr)
        {
            reg_policies = std::make_shared<Eem::RegPolicies>();
        }
        return reg_policies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Eem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(avl_policies != nullptr)
    {
        children["avl-policies"] = avl_policies;
    }

    if(dir_user != nullptr)
    {
        children["dir-user"] = dir_user;
    }

    if(env_variables != nullptr)
    {
        children["env-variables"] = env_variables;
    }

    if(refresh_time != nullptr)
    {
        children["refresh-time"] = refresh_time;
    }

    if(reg_policies != nullptr)
    {
        children["reg-policies"] = reg_policies;
    }

    return children;
}

void Eem::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Eem::clone_ptr() const
{
    return std::make_shared<Eem>();
}

std::string Eem::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Eem::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Eem::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Eem::DirUser::DirUser()
    :
    library(std::make_shared<Eem::DirUser::Library>())
	,policy(std::make_shared<Eem::DirUser::Policy>())
{
    library->parent = this;

    policy->parent = this;

    yang_name = "dir-user"; yang_parent_name = "eem";
}

Eem::DirUser::~DirUser()
{
}

bool Eem::DirUser::has_data() const
{
    return (library !=  nullptr && library->has_data())
	|| (policy !=  nullptr && policy->has_data());
}

bool Eem::DirUser::has_operation() const
{
    return is_set(operation)
	|| (library !=  nullptr && library->has_operation())
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Eem::DirUser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dir-user";

    return path_buffer.str();

}

const EntityPath Eem::DirUser::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Eem::DirUser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "library")
    {
        if(library == nullptr)
        {
            library = std::make_shared<Eem::DirUser::Library>();
        }
        return library;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Eem::DirUser::Policy>();
        }
        return policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Eem::DirUser::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(library != nullptr)
    {
        children["library"] = library;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    return children;
}

void Eem::DirUser::set_value(const std::string & value_path, std::string value)
{
}

Eem::DirUser::Library::Library()
    :
    library{YType::str, "library"},
    policy{YType::str, "policy"}
{
    yang_name = "library"; yang_parent_name = "dir-user";
}

Eem::DirUser::Library::~Library()
{
}

bool Eem::DirUser::Library::has_data() const
{
    return library.is_set
	|| policy.is_set;
}

bool Eem::DirUser::Library::has_operation() const
{
    return is_set(operation)
	|| is_set(library.operation)
	|| is_set(policy.operation);
}

std::string Eem::DirUser::Library::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "library";

    return path_buffer.str();

}

const EntityPath Eem::DirUser::Library::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/dir-user/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (library.is_set || is_set(library.operation)) leaf_name_data.push_back(library.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Eem::DirUser::Library::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Eem::DirUser::Library::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Eem::DirUser::Library::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "library")
    {
        library = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
}

Eem::DirUser::Policy::Policy()
    :
    library{YType::str, "library"},
    policy{YType::str, "policy"}
{
    yang_name = "policy"; yang_parent_name = "dir-user";
}

Eem::DirUser::Policy::~Policy()
{
}

bool Eem::DirUser::Policy::has_data() const
{
    return library.is_set
	|| policy.is_set;
}

bool Eem::DirUser::Policy::has_operation() const
{
    return is_set(operation)
	|| is_set(library.operation)
	|| is_set(policy.operation);
}

std::string Eem::DirUser::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

const EntityPath Eem::DirUser::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/dir-user/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (library.is_set || is_set(library.operation)) leaf_name_data.push_back(library.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Eem::DirUser::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Eem::DirUser::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Eem::DirUser::Policy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "library")
    {
        library = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
}

Eem::EnvVariables::EnvVariables()
{
    yang_name = "env-variables"; yang_parent_name = "eem";
}

Eem::EnvVariables::~EnvVariables()
{
}

bool Eem::EnvVariables::has_data() const
{
    for (std::size_t index=0; index<env_variable.size(); index++)
    {
        if(env_variable[index]->has_data())
            return true;
    }
    return false;
}

bool Eem::EnvVariables::has_operation() const
{
    for (std::size_t index=0; index<env_variable.size(); index++)
    {
        if(env_variable[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Eem::EnvVariables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-variables";

    return path_buffer.str();

}

const EntityPath Eem::EnvVariables::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Eem::EnvVariables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "env-variable")
    {
        for(auto const & c : env_variable)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Eem::EnvVariables::EnvVariable>();
        c->parent = this;
        env_variable.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Eem::EnvVariables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : env_variable)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Eem::EnvVariables::set_value(const std::string & value_path, std::string value)
{
}

Eem::EnvVariables::EnvVariable::EnvVariable()
    :
    name{YType::str, "name"},
    name_xr{YType::str, "name-xr"},
    value_{YType::str, "value"}
{
    yang_name = "env-variable"; yang_parent_name = "env-variables";
}

Eem::EnvVariables::EnvVariable::~EnvVariable()
{
}

bool Eem::EnvVariables::EnvVariable::has_data() const
{
    return name.is_set
	|| name_xr.is_set
	|| value_.is_set;
}

bool Eem::EnvVariables::EnvVariable::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(name_xr.operation)
	|| is_set(value_.operation);
}

std::string Eem::EnvVariables::EnvVariable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "env-variable" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Eem::EnvVariables::EnvVariable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/env-variables/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (name_xr.is_set || is_set(name_xr.operation)) leaf_name_data.push_back(name_xr.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Eem::EnvVariables::EnvVariable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Eem::EnvVariables::EnvVariable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Eem::EnvVariables::EnvVariable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "name-xr")
    {
        name_xr = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Eem::RefreshTime::RefreshTime()
    :
    refreshtime{YType::uint32, "refreshtime"}
{
    yang_name = "refresh-time"; yang_parent_name = "eem";
}

Eem::RefreshTime::~RefreshTime()
{
}

bool Eem::RefreshTime::has_data() const
{
    return refreshtime.is_set;
}

bool Eem::RefreshTime::has_operation() const
{
    return is_set(operation)
	|| is_set(refreshtime.operation);
}

std::string Eem::RefreshTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh-time";

    return path_buffer.str();

}

const EntityPath Eem::RefreshTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refreshtime.is_set || is_set(refreshtime.operation)) leaf_name_data.push_back(refreshtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Eem::RefreshTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Eem::RefreshTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Eem::RefreshTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "refreshtime")
    {
        refreshtime = value;
    }
}

Eem::RegPolicies::RegPolicies()
{
    yang_name = "reg-policies"; yang_parent_name = "eem";
}

Eem::RegPolicies::~RegPolicies()
{
}

bool Eem::RegPolicies::has_data() const
{
    for (std::size_t index=0; index<reg_policy.size(); index++)
    {
        if(reg_policy[index]->has_data())
            return true;
    }
    return false;
}

bool Eem::RegPolicies::has_operation() const
{
    for (std::size_t index=0; index<reg_policy.size(); index++)
    {
        if(reg_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Eem::RegPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-policies";

    return path_buffer.str();

}

const EntityPath Eem::RegPolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Eem::RegPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reg-policy")
    {
        for(auto const & c : reg_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Eem::RegPolicies::RegPolicy>();
        c->parent = this;
        reg_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Eem::RegPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reg_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Eem::RegPolicies::set_value(const std::string & value_path, std::string value)
{
}

Eem::RegPolicies::RegPolicy::RegPolicy()
    :
    name{YType::str, "name"},
    class_{YType::str, "class"},
    description{YType::str, "description"},
    event_type{YType::str, "event-type"},
    persist_time{YType::uint32, "persist-time"},
    policy_name{YType::str, "policy-name"},
    time_created{YType::str, "time-created"},
    trap{YType::str, "trap"},
    type{YType::str, "type"},
    username{YType::str, "username"}
{
    yang_name = "reg-policy"; yang_parent_name = "reg-policies";
}

Eem::RegPolicies::RegPolicy::~RegPolicy()
{
}

bool Eem::RegPolicies::RegPolicy::has_data() const
{
    return name.is_set
	|| class_.is_set
	|| description.is_set
	|| event_type.is_set
	|| persist_time.is_set
	|| policy_name.is_set
	|| time_created.is_set
	|| trap.is_set
	|| type.is_set
	|| username.is_set;
}

bool Eem::RegPolicies::RegPolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(class_.operation)
	|| is_set(description.operation)
	|| is_set(event_type.operation)
	|| is_set(persist_time.operation)
	|| is_set(policy_name.operation)
	|| is_set(time_created.operation)
	|| is_set(trap.operation)
	|| is_set(type.operation)
	|| is_set(username.operation);
}

std::string Eem::RegPolicies::RegPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-policy" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Eem::RegPolicies::RegPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/reg-policies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (class_.is_set || is_set(class_.operation)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (persist_time.is_set || is_set(persist_time.operation)) leaf_name_data.push_back(persist_time.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (time_created.is_set || is_set(time_created.operation)) leaf_name_data.push_back(time_created.get_name_leafdata());
    if (trap.is_set || is_set(trap.operation)) leaf_name_data.push_back(trap.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Eem::RegPolicies::RegPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Eem::RegPolicies::RegPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Eem::RegPolicies::RegPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "class")
    {
        class_ = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "event-type")
    {
        event_type = value;
    }
    if(value_path == "persist-time")
    {
        persist_time = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "time-created")
    {
        time_created = value;
    }
    if(value_path == "trap")
    {
        trap = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Eem::AvlPolicies::AvlPolicies()
{
    yang_name = "avl-policies"; yang_parent_name = "eem";
}

Eem::AvlPolicies::~AvlPolicies()
{
}

bool Eem::AvlPolicies::has_data() const
{
    for (std::size_t index=0; index<avl_policy.size(); index++)
    {
        if(avl_policy[index]->has_data())
            return true;
    }
    return false;
}

bool Eem::AvlPolicies::has_operation() const
{
    for (std::size_t index=0; index<avl_policy.size(); index++)
    {
        if(avl_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Eem::AvlPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avl-policies";

    return path_buffer.str();

}

const EntityPath Eem::AvlPolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Eem::AvlPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "avl-policy")
    {
        for(auto const & c : avl_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Eem::AvlPolicies::AvlPolicy>();
        c->parent = this;
        avl_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Eem::AvlPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : avl_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Eem::AvlPolicies::set_value(const std::string & value_path, std::string value)
{
}

Eem::AvlPolicies::AvlPolicy::AvlPolicy()
    :
    name{YType::str, "name"},
    policy_name{YType::str, "policy-name"},
    time_created{YType::str, "time-created"},
    type{YType::str, "type"}
{
    yang_name = "avl-policy"; yang_parent_name = "avl-policies";
}

Eem::AvlPolicies::AvlPolicy::~AvlPolicy()
{
}

bool Eem::AvlPolicies::AvlPolicy::has_data() const
{
    return name.is_set
	|| policy_name.is_set
	|| time_created.is_set
	|| type.is_set;
}

bool Eem::AvlPolicies::AvlPolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(policy_name.operation)
	|| is_set(time_created.operation)
	|| is_set(type.operation);
}

std::string Eem::AvlPolicies::AvlPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avl-policy" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Eem::AvlPolicies::AvlPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/avl-policies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (time_created.is_set || is_set(time_created.operation)) leaf_name_data.push_back(time_created.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Eem::AvlPolicies::AvlPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Eem::AvlPolicies::AvlPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Eem::AvlPolicies::AvlPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "time-created")
    {
        time_created = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}


}
}

