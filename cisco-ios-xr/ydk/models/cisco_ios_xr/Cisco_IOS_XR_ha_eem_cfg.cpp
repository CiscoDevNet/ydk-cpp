
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ha_eem_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ha_eem_cfg {

EventManager::EventManager()
    :
    directory_user_library{YType::str, "directory-user-library"},
    directory_user_policy{YType::str, "directory-user-policy"},
    refresh_time{YType::uint32, "refresh-time"},
    schedule_suspend{YType::boolean, "schedule-suspend"}
    	,
    environments(std::make_shared<EventManager::Environments>())
	,policies(std::make_shared<EventManager::Policies>())
	,scheduler_script(std::make_shared<EventManager::SchedulerScript>())
{
    environments->parent = this;
    children["environments"] = environments;

    policies->parent = this;
    children["policies"] = policies;

    scheduler_script->parent = this;
    children["scheduler-script"] = scheduler_script;

    yang_name = "event-manager"; yang_parent_name = "Cisco-IOS-XR-ha-eem-cfg";
}

EventManager::~EventManager()
{
}

bool EventManager::has_data() const
{
    return directory_user_library.is_set
	|| directory_user_policy.is_set
	|| refresh_time.is_set
	|| schedule_suspend.is_set
	|| (environments !=  nullptr && environments->has_data())
	|| (policies !=  nullptr && policies->has_data())
	|| (scheduler_script !=  nullptr && scheduler_script->has_data());
}

bool EventManager::has_operation() const
{
    return is_set(operation)
	|| is_set(directory_user_library.operation)
	|| is_set(directory_user_policy.operation)
	|| is_set(refresh_time.operation)
	|| is_set(schedule_suspend.operation)
	|| (environments !=  nullptr && environments->has_operation())
	|| (policies !=  nullptr && policies->has_operation())
	|| (scheduler_script !=  nullptr && scheduler_script->has_operation());
}

std::string EventManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ha-eem-cfg:event-manager";

    return path_buffer.str();

}

EntityPath EventManager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (directory_user_library.is_set || is_set(directory_user_library.operation)) leaf_name_data.push_back(directory_user_library.get_name_leafdata());
    if (directory_user_policy.is_set || is_set(directory_user_policy.operation)) leaf_name_data.push_back(directory_user_policy.get_name_leafdata());
    if (refresh_time.is_set || is_set(refresh_time.operation)) leaf_name_data.push_back(refresh_time.get_name_leafdata());
    if (schedule_suspend.is_set || is_set(schedule_suspend.operation)) leaf_name_data.push_back(schedule_suspend.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EventManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "environments")
    {
        if(environments != nullptr)
        {
            children["environments"] = environments;
        }
        else
        {
            environments = std::make_shared<EventManager::Environments>();
            environments->parent = this;
            children["environments"] = environments;
        }
        return children.at("environments");
    }

    if(child_yang_name == "policies")
    {
        if(policies != nullptr)
        {
            children["policies"] = policies;
        }
        else
        {
            policies = std::make_shared<EventManager::Policies>();
            policies->parent = this;
            children["policies"] = policies;
        }
        return children.at("policies");
    }

    if(child_yang_name == "scheduler-script")
    {
        if(scheduler_script != nullptr)
        {
            children["scheduler-script"] = scheduler_script;
        }
        else
        {
            scheduler_script = std::make_shared<EventManager::SchedulerScript>();
            scheduler_script->parent = this;
            children["scheduler-script"] = scheduler_script;
        }
        return children.at("scheduler-script");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EventManager::get_children()
{
    if(children.find("environments") == children.end())
    {
        if(environments != nullptr)
        {
            children["environments"] = environments;
        }
    }

    if(children.find("policies") == children.end())
    {
        if(policies != nullptr)
        {
            children["policies"] = policies;
        }
    }

    if(children.find("scheduler-script") == children.end())
    {
        if(scheduler_script != nullptr)
        {
            children["scheduler-script"] = scheduler_script;
        }
    }

    return children;
}

void EventManager::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "directory-user-library")
    {
        directory_user_library = value;
    }
    if(value_path == "directory-user-policy")
    {
        directory_user_policy = value;
    }
    if(value_path == "refresh-time")
    {
        refresh_time = value;
    }
    if(value_path == "schedule-suspend")
    {
        schedule_suspend = value;
    }
}

std::shared_ptr<Entity> EventManager::clone_ptr() const
{
    return std::make_shared<EventManager>();
}

std::string EventManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EventManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EventManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

EventManager::Policies::Policies()
{
    yang_name = "policies"; yang_parent_name = "event-manager";
}

EventManager::Policies::~Policies()
{
}

bool EventManager::Policies::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool EventManager::Policies::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EventManager::Policies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policies";

    return path_buffer.str();

}

EntityPath EventManager::Policies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-cfg:event-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EventManager::Policies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<EventManager::Policies::Policy>();
        c->parent = this;
        policy.push_back(std::move(c));
        children[segment_path] = policy.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EventManager::Policies::get_children()
{
    for (auto const & c : policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void EventManager::Policies::set_value(const std::string & value_path, std::string value)
{
}

EventManager::Policies::Policy::Policy()
    :
    policy_name{YType::str, "policy-name"},
    check_sum_value{YType::str, "check-sum-value"},
    checksum_type{YType::enumeration, "checksum-type"},
    persist_time{YType::uint32, "persist-time"},
    policy_security_level{YType::enumeration, "policy-security-level"},
    policy_security_mode{YType::enumeration, "policy-security-mode"},
    policy_type{YType::enumeration, "policy-type"},
    username{YType::str, "username"}
{
    yang_name = "policy"; yang_parent_name = "policies";
}

EventManager::Policies::Policy::~Policy()
{
}

bool EventManager::Policies::Policy::has_data() const
{
    return policy_name.is_set
	|| check_sum_value.is_set
	|| checksum_type.is_set
	|| persist_time.is_set
	|| policy_security_level.is_set
	|| policy_security_mode.is_set
	|| policy_type.is_set
	|| username.is_set;
}

bool EventManager::Policies::Policy::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_name.operation)
	|| is_set(check_sum_value.operation)
	|| is_set(checksum_type.operation)
	|| is_set(persist_time.operation)
	|| is_set(policy_security_level.operation)
	|| is_set(policy_security_mode.operation)
	|| is_set(policy_type.operation)
	|| is_set(username.operation);
}

std::string EventManager::Policies::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[policy-name='" <<policy_name <<"']";

    return path_buffer.str();

}

EntityPath EventManager::Policies::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-cfg:event-manager/policies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (check_sum_value.is_set || is_set(check_sum_value.operation)) leaf_name_data.push_back(check_sum_value.get_name_leafdata());
    if (checksum_type.is_set || is_set(checksum_type.operation)) leaf_name_data.push_back(checksum_type.get_name_leafdata());
    if (persist_time.is_set || is_set(persist_time.operation)) leaf_name_data.push_back(persist_time.get_name_leafdata());
    if (policy_security_level.is_set || is_set(policy_security_level.operation)) leaf_name_data.push_back(policy_security_level.get_name_leafdata());
    if (policy_security_mode.is_set || is_set(policy_security_mode.operation)) leaf_name_data.push_back(policy_security_mode.get_name_leafdata());
    if (policy_type.is_set || is_set(policy_type.operation)) leaf_name_data.push_back(policy_type.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EventManager::Policies::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & EventManager::Policies::Policy::get_children()
{
    return children;
}

void EventManager::Policies::Policy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "check-sum-value")
    {
        check_sum_value = value;
    }
    if(value_path == "checksum-type")
    {
        checksum_type = value;
    }
    if(value_path == "persist-time")
    {
        persist_time = value;
    }
    if(value_path == "policy-security-level")
    {
        policy_security_level = value;
    }
    if(value_path == "policy-security-mode")
    {
        policy_security_mode = value;
    }
    if(value_path == "policy-type")
    {
        policy_type = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

EventManager::SchedulerScript::SchedulerScript()
    :
    thread_classes(std::make_shared<EventManager::SchedulerScript::ThreadClasses>())
{
    thread_classes->parent = this;
    children["thread-classes"] = thread_classes;

    yang_name = "scheduler-script"; yang_parent_name = "event-manager";
}

EventManager::SchedulerScript::~SchedulerScript()
{
}

bool EventManager::SchedulerScript::has_data() const
{
    return (thread_classes !=  nullptr && thread_classes->has_data());
}

bool EventManager::SchedulerScript::has_operation() const
{
    return is_set(operation)
	|| (thread_classes !=  nullptr && thread_classes->has_operation());
}

std::string EventManager::SchedulerScript::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduler-script";

    return path_buffer.str();

}

EntityPath EventManager::SchedulerScript::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-cfg:event-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EventManager::SchedulerScript::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "thread-classes")
    {
        if(thread_classes != nullptr)
        {
            children["thread-classes"] = thread_classes;
        }
        else
        {
            thread_classes = std::make_shared<EventManager::SchedulerScript::ThreadClasses>();
            thread_classes->parent = this;
            children["thread-classes"] = thread_classes;
        }
        return children.at("thread-classes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EventManager::SchedulerScript::get_children()
{
    if(children.find("thread-classes") == children.end())
    {
        if(thread_classes != nullptr)
        {
            children["thread-classes"] = thread_classes;
        }
    }

    return children;
}

void EventManager::SchedulerScript::set_value(const std::string & value_path, std::string value)
{
}

EventManager::SchedulerScript::ThreadClasses::ThreadClasses()
{
    yang_name = "thread-classes"; yang_parent_name = "scheduler-script";
}

EventManager::SchedulerScript::ThreadClasses::~ThreadClasses()
{
}

bool EventManager::SchedulerScript::ThreadClasses::has_data() const
{
    for (std::size_t index=0; index<thread_class.size(); index++)
    {
        if(thread_class[index]->has_data())
            return true;
    }
    return false;
}

bool EventManager::SchedulerScript::ThreadClasses::has_operation() const
{
    for (std::size_t index=0; index<thread_class.size(); index++)
    {
        if(thread_class[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EventManager::SchedulerScript::ThreadClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thread-classes";

    return path_buffer.str();

}

EntityPath EventManager::SchedulerScript::ThreadClasses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-cfg:event-manager/scheduler-script/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EventManager::SchedulerScript::ThreadClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "thread-class")
    {
        for(auto const & c : thread_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<EventManager::SchedulerScript::ThreadClasses::ThreadClass>();
        c->parent = this;
        thread_class.push_back(std::move(c));
        children[segment_path] = thread_class.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EventManager::SchedulerScript::ThreadClasses::get_children()
{
    for (auto const & c : thread_class)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void EventManager::SchedulerScript::ThreadClasses::set_value(const std::string & value_path, std::string value)
{
}

EventManager::SchedulerScript::ThreadClasses::ThreadClass::ThreadClass()
    :
    thread_class_name{YType::str, "thread-class-name"},
    num_threads{YType::uint32, "num-threads"}
{
    yang_name = "thread-class"; yang_parent_name = "thread-classes";
}

EventManager::SchedulerScript::ThreadClasses::ThreadClass::~ThreadClass()
{
}

bool EventManager::SchedulerScript::ThreadClasses::ThreadClass::has_data() const
{
    return thread_class_name.is_set
	|| num_threads.is_set;
}

bool EventManager::SchedulerScript::ThreadClasses::ThreadClass::has_operation() const
{
    return is_set(operation)
	|| is_set(thread_class_name.operation)
	|| is_set(num_threads.operation);
}

std::string EventManager::SchedulerScript::ThreadClasses::ThreadClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thread-class" <<"[thread-class-name='" <<thread_class_name <<"']";

    return path_buffer.str();

}

EntityPath EventManager::SchedulerScript::ThreadClasses::ThreadClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-cfg:event-manager/scheduler-script/thread-classes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (thread_class_name.is_set || is_set(thread_class_name.operation)) leaf_name_data.push_back(thread_class_name.get_name_leafdata());
    if (num_threads.is_set || is_set(num_threads.operation)) leaf_name_data.push_back(num_threads.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EventManager::SchedulerScript::ThreadClasses::ThreadClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & EventManager::SchedulerScript::ThreadClasses::ThreadClass::get_children()
{
    return children;
}

void EventManager::SchedulerScript::ThreadClasses::ThreadClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "thread-class-name")
    {
        thread_class_name = value;
    }
    if(value_path == "num-threads")
    {
        num_threads = value;
    }
}

EventManager::Environments::Environments()
{
    yang_name = "environments"; yang_parent_name = "event-manager";
}

EventManager::Environments::~Environments()
{
}

bool EventManager::Environments::has_data() const
{
    for (std::size_t index=0; index<environment.size(); index++)
    {
        if(environment[index]->has_data())
            return true;
    }
    return false;
}

bool EventManager::Environments::has_operation() const
{
    for (std::size_t index=0; index<environment.size(); index++)
    {
        if(environment[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EventManager::Environments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "environments";

    return path_buffer.str();

}

EntityPath EventManager::Environments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-cfg:event-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EventManager::Environments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "environment")
    {
        for(auto const & c : environment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<EventManager::Environments::Environment>();
        c->parent = this;
        environment.push_back(std::move(c));
        children[segment_path] = environment.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EventManager::Environments::get_children()
{
    for (auto const & c : environment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void EventManager::Environments::set_value(const std::string & value_path, std::string value)
{
}

EventManager::Environments::Environment::Environment()
    :
    environment_name{YType::str, "environment-name"},
    environment_value{YType::str, "environment-value"}
{
    yang_name = "environment"; yang_parent_name = "environments";
}

EventManager::Environments::Environment::~Environment()
{
}

bool EventManager::Environments::Environment::has_data() const
{
    return environment_name.is_set
	|| environment_value.is_set;
}

bool EventManager::Environments::Environment::has_operation() const
{
    return is_set(operation)
	|| is_set(environment_name.operation)
	|| is_set(environment_value.operation);
}

std::string EventManager::Environments::Environment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "environment" <<"[environment-name='" <<environment_name <<"']";

    return path_buffer.str();

}

EntityPath EventManager::Environments::Environment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ha-eem-cfg:event-manager/environments/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (environment_name.is_set || is_set(environment_name.operation)) leaf_name_data.push_back(environment_name.get_name_leafdata());
    if (environment_value.is_set || is_set(environment_value.operation)) leaf_name_data.push_back(environment_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EventManager::Environments::Environment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & EventManager::Environments::Environment::get_children()
{
    return children;
}

void EventManager::Environments::Environment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "environment-name")
    {
        environment_name = value;
    }
    if(value_path == "environment-value")
    {
        environment_value = value;
    }
}

const Enum::YLeaf EventManagerPolicySecEnum::rsa_2048 {2, "rsa-2048"};
const Enum::YLeaf EventManagerPolicySecEnum::trust {3, "trust"};

const Enum::YLeaf EventManagerPolicyModeEnum::cisco {1, "cisco"};
const Enum::YLeaf EventManagerPolicyModeEnum::trust {2, "trust"};

const Enum::YLeaf EventManagerChecksumEnum::sha_1 {1, "sha-1"};
const Enum::YLeaf EventManagerChecksumEnum::md5 {2, "md5"};

const Enum::YLeaf EventManagerPolicyEnum::system {0, "system"};
const Enum::YLeaf EventManagerPolicyEnum::user {1, "user"};


}
}

