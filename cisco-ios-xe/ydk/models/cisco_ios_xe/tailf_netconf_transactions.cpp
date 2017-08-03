
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "tailf_netconf_transactions.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace tailf_netconf_transactions {

StartTransaction::StartTransaction()
    :
    input(std::make_shared<StartTransaction::Input>())
{
    input->parent = this;

    yang_name = "start-transaction"; yang_parent_name = "tailf-netconf-transactions";
}

StartTransaction::~StartTransaction()
{
}

bool StartTransaction::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool StartTransaction::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string StartTransaction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-transactions:start-transaction";

    return path_buffer.str();

}

const EntityPath StartTransaction::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> StartTransaction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<StartTransaction::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> StartTransaction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void StartTransaction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void StartTransaction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> StartTransaction::clone_ptr() const
{
    return std::make_shared<StartTransaction>();
}

std::string StartTransaction::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string StartTransaction::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function StartTransaction::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> StartTransaction::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool StartTransaction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

StartTransaction::Input::Input()
    :
    with_inactive{YType::empty, "tailf-netconf-inactive:with-inactive"}
    	,
    target(std::make_shared<StartTransaction::Input::Target>())
{
    target->parent = this;

    yang_name = "input"; yang_parent_name = "start-transaction";
}

StartTransaction::Input::~Input()
{
}

bool StartTransaction::Input::has_data() const
{
    return with_inactive.is_set
	|| (target !=  nullptr && target->has_data());
}

bool StartTransaction::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(with_inactive.yfilter)
	|| (target !=  nullptr && target->has_operation());
}

std::string StartTransaction::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath StartTransaction::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-netconf-transactions:start-transaction/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (with_inactive.is_set || is_set(with_inactive.yfilter)) leaf_name_data.push_back(with_inactive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> StartTransaction::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<StartTransaction::Input::Target>();
        }
        return target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> StartTransaction::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(target != nullptr)
    {
        children["target"] = target;
    }

    return children;
}

void StartTransaction::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "with-inactive")
    {
        with_inactive = value;
        with_inactive.value_namespace = name_space;
        with_inactive.value_namespace_prefix = name_space_prefix;
    }
}

void StartTransaction::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "with-inactive")
    {
        with_inactive.yfilter = yfilter;
    }
}

bool StartTransaction::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target" || name == "with-inactive")
        return true;
    return false;
}

StartTransaction::Input::Target::Target()
    :
    candidate{YType::empty, "candidate"},
    running{YType::empty, "running"},
    startup{YType::empty, "startup"}
{
    yang_name = "target"; yang_parent_name = "input";
}

StartTransaction::Input::Target::~Target()
{
}

bool StartTransaction::Input::Target::has_data() const
{
    return candidate.is_set
	|| running.is_set
	|| startup.is_set;
}

bool StartTransaction::Input::Target::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate.yfilter)
	|| ydk::is_set(running.yfilter)
	|| ydk::is_set(startup.yfilter);
}

std::string StartTransaction::Input::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";

    return path_buffer.str();

}

const EntityPath StartTransaction::Input::Target::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "tailf-netconf-transactions:start-transaction/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate.is_set || is_set(candidate.yfilter)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());
    if (startup.is_set || is_set(startup.yfilter)) leaf_name_data.push_back(startup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> StartTransaction::Input::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> StartTransaction::Input::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void StartTransaction::Input::Target::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate")
    {
        candidate = value;
        candidate.value_namespace = name_space;
        candidate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup")
    {
        startup = value;
        startup.value_namespace = name_space;
        startup.value_namespace_prefix = name_space_prefix;
    }
}

void StartTransaction::Input::Target::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate")
    {
        candidate.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
    if(value_path == "startup")
    {
        startup.yfilter = yfilter;
    }
}

bool StartTransaction::Input::Target::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate" || name == "running" || name == "startup")
        return true;
    return false;
}

PrepareTransaction::PrepareTransaction()
{
    yang_name = "prepare-transaction"; yang_parent_name = "tailf-netconf-transactions";
}

PrepareTransaction::~PrepareTransaction()
{
}

bool PrepareTransaction::has_data() const
{
    return false;
}

bool PrepareTransaction::has_operation() const
{
    return is_set(yfilter);
}

std::string PrepareTransaction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-transactions:prepare-transaction";

    return path_buffer.str();

}

const EntityPath PrepareTransaction::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PrepareTransaction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PrepareTransaction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PrepareTransaction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PrepareTransaction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PrepareTransaction::clone_ptr() const
{
    return std::make_shared<PrepareTransaction>();
}

std::string PrepareTransaction::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string PrepareTransaction::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function PrepareTransaction::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PrepareTransaction::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool PrepareTransaction::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

CommitTransaction::CommitTransaction()
{
    yang_name = "commit-transaction"; yang_parent_name = "tailf-netconf-transactions";
}

CommitTransaction::~CommitTransaction()
{
}

bool CommitTransaction::has_data() const
{
    return false;
}

bool CommitTransaction::has_operation() const
{
    return is_set(yfilter);
}

std::string CommitTransaction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-transactions:commit-transaction";

    return path_buffer.str();

}

const EntityPath CommitTransaction::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CommitTransaction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CommitTransaction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CommitTransaction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CommitTransaction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CommitTransaction::clone_ptr() const
{
    return std::make_shared<CommitTransaction>();
}

std::string CommitTransaction::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CommitTransaction::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CommitTransaction::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CommitTransaction::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CommitTransaction::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

AbortTransaction::AbortTransaction()
{
    yang_name = "abort-transaction"; yang_parent_name = "tailf-netconf-transactions";
}

AbortTransaction::~AbortTransaction()
{
}

bool AbortTransaction::has_data() const
{
    return false;
}

bool AbortTransaction::has_operation() const
{
    return is_set(yfilter);
}

std::string AbortTransaction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tailf-netconf-transactions:abort-transaction";

    return path_buffer.str();

}

const EntityPath AbortTransaction::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> AbortTransaction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AbortTransaction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AbortTransaction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AbortTransaction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> AbortTransaction::clone_ptr() const
{
    return std::make_shared<AbortTransaction>();
}

std::string AbortTransaction::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string AbortTransaction::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function AbortTransaction::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> AbortTransaction::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool AbortTransaction::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}


}
}

