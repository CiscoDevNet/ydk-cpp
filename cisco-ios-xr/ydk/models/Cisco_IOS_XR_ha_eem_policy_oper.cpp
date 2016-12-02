
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ha_eem_policy_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ha_eem_policy_oper {

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

EntityPath Eem::DirUser::Library::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/dir-user/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (library.is_set || is_set(library.operation)) leaf_name_data.push_back(library.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Eem::DirUser::Library::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Eem::DirUser::Library::get_children()
{
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

EntityPath Eem::DirUser::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/dir-user/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (library.is_set || is_set(library.operation)) leaf_name_data.push_back(library.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Eem::DirUser::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Eem::DirUser::Policy::get_children()
{
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

Eem::DirUser::DirUser()
    :
    library(std::make_unique<Eem::DirUser::Library>())
	,policy(std::make_unique<Eem::DirUser::Policy>())
{
    library->parent = this;
    children["library"] = library.get();

    policy->parent = this;
    children["policy"] = policy.get();

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
	|| (library !=  nullptr && is_set(library->operation))
	|| (policy !=  nullptr && is_set(policy->operation));
}

std::string Eem::DirUser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dir-user";

    return path_buffer.str();

}

EntityPath Eem::DirUser::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Eem::DirUser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "library")
    {
        if(library != nullptr)
        {
            children["library"] = library.get();
        }
        else
        {
            library = std::make_unique<Eem::DirUser::Library>();
            library->parent = this;
            children["library"] = library.get();
        }
        return children.at("library");
    }

    if(child_yang_name == "policy")
    {
        if(policy != nullptr)
        {
            children["policy"] = policy.get();
        }
        else
        {
            policy = std::make_unique<Eem::DirUser::Policy>();
            policy->parent = this;
            children["policy"] = policy.get();
        }
        return children.at("policy");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Eem::DirUser::get_children()
{
    if(children.find("library") == children.end())
    {
        if(library != nullptr)
        {
            children["library"] = library.get();
        }
    }

    if(children.find("policy") == children.end())
    {
        if(policy != nullptr)
        {
            children["policy"] = policy.get();
        }
    }

    return children;
}

void Eem::DirUser::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "env-variable" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Eem::EnvVariables::EnvVariable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/env-variables/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (name_xr.is_set || is_set(name_xr.operation)) leaf_name_data.push_back(name_xr.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Eem::EnvVariables::EnvVariable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Eem::EnvVariables::EnvVariable::get_children()
{
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

EntityPath Eem::EnvVariables::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Eem::EnvVariables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "env-variable")
    {
        for(auto const & c : env_variable)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Eem::EnvVariables::EnvVariable>();
        c->parent = this;
        env_variable.push_back(std::move(c));
        children[segment_path] = env_variable.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Eem::EnvVariables::get_children()
{
    for (auto const & c : env_variable)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Eem::EnvVariables::set_value(const std::string & value_path, std::string value)
{
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

EntityPath Eem::RefreshTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refreshtime.is_set || is_set(refreshtime.operation)) leaf_name_data.push_back(refreshtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Eem::RefreshTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Eem::RefreshTime::get_children()
{
    return children;
}

void Eem::RefreshTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "refreshtime")
    {
        refreshtime = value;
    }
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
    path_buffer << "reg-policy" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Eem::RegPolicies::RegPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/reg-policies/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* Eem::RegPolicies::RegPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Eem::RegPolicies::RegPolicy::get_children()
{
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

EntityPath Eem::RegPolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Eem::RegPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "reg-policy")
    {
        for(auto const & c : reg_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Eem::RegPolicies::RegPolicy>();
        c->parent = this;
        reg_policy.push_back(std::move(c));
        children[segment_path] = reg_policy.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Eem::RegPolicies::get_children()
{
    for (auto const & c : reg_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Eem::RegPolicies::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "avl-policy" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath Eem::AvlPolicies::AvlPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/avl-policies/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (time_created.is_set || is_set(time_created.operation)) leaf_name_data.push_back(time_created.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Eem::AvlPolicies::AvlPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Eem::AvlPolicies::AvlPolicy::get_children()
{
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

EntityPath Eem::AvlPolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Eem::AvlPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "avl-policy")
    {
        for(auto const & c : avl_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Eem::AvlPolicies::AvlPolicy>();
        c->parent = this;
        avl_policy.push_back(std::move(c));
        children[segment_path] = avl_policy.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Eem::AvlPolicies::get_children()
{
    for (auto const & c : avl_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Eem::AvlPolicies::set_value(const std::string & value_path, std::string value)
{
}

Eem::Eem()
    :
    avl_policies(std::make_unique<Eem::AvlPolicies>())
	,dir_user(std::make_unique<Eem::DirUser>())
	,env_variables(std::make_unique<Eem::EnvVariables>())
	,refresh_time(std::make_unique<Eem::RefreshTime>())
	,reg_policies(std::make_unique<Eem::RegPolicies>())
{
    avl_policies->parent = this;
    children["avl-policies"] = avl_policies.get();

    dir_user->parent = this;
    children["dir-user"] = dir_user.get();

    env_variables->parent = this;
    children["env-variables"] = env_variables.get();

    refresh_time->parent = this;
    children["refresh-time"] = refresh_time.get();

    reg_policies->parent = this;
    children["reg-policies"] = reg_policies.get();

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
	|| (avl_policies !=  nullptr && is_set(avl_policies->operation))
	|| (dir_user !=  nullptr && is_set(dir_user->operation))
	|| (env_variables !=  nullptr && is_set(env_variables->operation))
	|| (refresh_time !=  nullptr && is_set(refresh_time->operation))
	|| (reg_policies !=  nullptr && is_set(reg_policies->operation));
}

std::string Eem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ha-eem-policy-oper:eem";

    return path_buffer.str();

}

EntityPath Eem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Eem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "avl-policies")
    {
        if(avl_policies != nullptr)
        {
            children["avl-policies"] = avl_policies.get();
        }
        else
        {
            avl_policies = std::make_unique<Eem::AvlPolicies>();
            avl_policies->parent = this;
            children["avl-policies"] = avl_policies.get();
        }
        return children.at("avl-policies");
    }

    if(child_yang_name == "dir-user")
    {
        if(dir_user != nullptr)
        {
            children["dir-user"] = dir_user.get();
        }
        else
        {
            dir_user = std::make_unique<Eem::DirUser>();
            dir_user->parent = this;
            children["dir-user"] = dir_user.get();
        }
        return children.at("dir-user");
    }

    if(child_yang_name == "env-variables")
    {
        if(env_variables != nullptr)
        {
            children["env-variables"] = env_variables.get();
        }
        else
        {
            env_variables = std::make_unique<Eem::EnvVariables>();
            env_variables->parent = this;
            children["env-variables"] = env_variables.get();
        }
        return children.at("env-variables");
    }

    if(child_yang_name == "refresh-time")
    {
        if(refresh_time != nullptr)
        {
            children["refresh-time"] = refresh_time.get();
        }
        else
        {
            refresh_time = std::make_unique<Eem::RefreshTime>();
            refresh_time->parent = this;
            children["refresh-time"] = refresh_time.get();
        }
        return children.at("refresh-time");
    }

    if(child_yang_name == "reg-policies")
    {
        if(reg_policies != nullptr)
        {
            children["reg-policies"] = reg_policies.get();
        }
        else
        {
            reg_policies = std::make_unique<Eem::RegPolicies>();
            reg_policies->parent = this;
            children["reg-policies"] = reg_policies.get();
        }
        return children.at("reg-policies");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Eem::get_children()
{
    if(children.find("avl-policies") == children.end())
    {
        if(avl_policies != nullptr)
        {
            children["avl-policies"] = avl_policies.get();
        }
    }

    if(children.find("dir-user") == children.end())
    {
        if(dir_user != nullptr)
        {
            children["dir-user"] = dir_user.get();
        }
    }

    if(children.find("env-variables") == children.end())
    {
        if(env_variables != nullptr)
        {
            children["env-variables"] = env_variables.get();
        }
    }

    if(children.find("refresh-time") == children.end())
    {
        if(refresh_time != nullptr)
        {
            children["refresh-time"] = refresh_time.get();
        }
    }

    if(children.find("reg-policies") == children.end())
    {
        if(reg_policies != nullptr)
        {
            children["reg-policies"] = reg_policies.get();
        }
    }

    return children;
}

void Eem::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Eem::clone_ptr()
{
    return std::make_unique<Eem>();
}


}
}

