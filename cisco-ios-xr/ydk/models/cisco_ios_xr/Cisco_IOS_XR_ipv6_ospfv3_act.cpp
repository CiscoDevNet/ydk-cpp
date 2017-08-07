
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ospfv3_act {

ActOspfv3Routes::ActOspfv3Routes()
    :
    input(std::make_shared<ActOspfv3Routes::Input>())
{
    input->parent = this;

    yang_name = "act-ospfv3-routes"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act";
}

ActOspfv3Routes::~ActOspfv3Routes()
{
}

bool ActOspfv3Routes::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfv3Routes::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfv3Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-routes";

    return path_buffer.str();

}

const EntityPath ActOspfv3Routes::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfv3Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfv3Routes::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfv3Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfv3Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ActOspfv3Routes::clone_ptr() const
{
    return std::make_shared<ActOspfv3Routes>();
}

std::string ActOspfv3Routes::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfv3Routes::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfv3Routes::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ActOspfv3Routes::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ActOspfv3Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ActOspfv3Routes::Input::Input()
    :
    route{YType::empty, "route"}
    	,
    instance(std::make_shared<ActOspfv3Routes::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospfv3-routes";
}

ActOspfv3Routes::Input::~Input()
{
}

bool ActOspfv3Routes::Input::has_data() const
{
    return route.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfv3Routes::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfv3Routes::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfv3Routes::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-routes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3Routes::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfv3Routes::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3Routes::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ActOspfv3Routes::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3Routes::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
}

bool ActOspfv3Routes::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "route")
        return true;
    return false;
}

ActOspfv3Routes::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfv3Routes::Input::Instance::~Instance()
{
}

bool ActOspfv3Routes::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfv3Routes::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ActOspfv3Routes::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfv3Routes::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-routes/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3Routes::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3Routes::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfv3Routes::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3Routes::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ActOspfv3Routes::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ActOspfv3Redistribution::ActOspfv3Redistribution()
    :
    input(std::make_shared<ActOspfv3Redistribution::Input>())
{
    input->parent = this;

    yang_name = "act-ospfv3-redistribution"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act";
}

ActOspfv3Redistribution::~ActOspfv3Redistribution()
{
}

bool ActOspfv3Redistribution::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfv3Redistribution::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfv3Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-redistribution";

    return path_buffer.str();

}

const EntityPath ActOspfv3Redistribution::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfv3Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfv3Redistribution::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3Redistribution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfv3Redistribution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfv3Redistribution::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ActOspfv3Redistribution::clone_ptr() const
{
    return std::make_shared<ActOspfv3Redistribution>();
}

std::string ActOspfv3Redistribution::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfv3Redistribution::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfv3Redistribution::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ActOspfv3Redistribution::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ActOspfv3Redistribution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ActOspfv3Redistribution::Input::Input()
    :
    redistribution{YType::empty, "redistribution"}
    	,
    instance(std::make_shared<ActOspfv3Redistribution::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospfv3-redistribution";
}

ActOspfv3Redistribution::Input::~Input()
{
}

bool ActOspfv3Redistribution::Input::has_data() const
{
    return redistribution.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfv3Redistribution::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfv3Redistribution::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfv3Redistribution::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-redistribution/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redistribution.is_set || is_set(redistribution.yfilter)) leaf_name_data.push_back(redistribution.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3Redistribution::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfv3Redistribution::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3Redistribution::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ActOspfv3Redistribution::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redistribution")
    {
        redistribution = value;
        redistribution.value_namespace = name_space;
        redistribution.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3Redistribution::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redistribution")
    {
        redistribution.yfilter = yfilter;
    }
}

bool ActOspfv3Redistribution::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "redistribution")
        return true;
    return false;
}

ActOspfv3Redistribution::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfv3Redistribution::Input::Instance::~Instance()
{
}

bool ActOspfv3Redistribution::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfv3Redistribution::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ActOspfv3Redistribution::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfv3Redistribution::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-redistribution/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3Redistribution::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3Redistribution::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfv3Redistribution::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3Redistribution::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ActOspfv3Redistribution::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ActOspfv3Process::ActOspfv3Process()
    :
    input(std::make_shared<ActOspfv3Process::Input>())
{
    input->parent = this;

    yang_name = "act-ospfv3-process"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act";
}

ActOspfv3Process::~ActOspfv3Process()
{
}

bool ActOspfv3Process::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfv3Process::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfv3Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-process";

    return path_buffer.str();

}

const EntityPath ActOspfv3Process::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfv3Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfv3Process::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfv3Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfv3Process::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ActOspfv3Process::clone_ptr() const
{
    return std::make_shared<ActOspfv3Process>();
}

std::string ActOspfv3Process::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfv3Process::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfv3Process::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ActOspfv3Process::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ActOspfv3Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ActOspfv3Process::Input::Input()
    :
    process{YType::empty, "process"}
    	,
    instance(std::make_shared<ActOspfv3Process::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospfv3-process";
}

ActOspfv3Process::Input::~Input()
{
}

bool ActOspfv3Process::Input::has_data() const
{
    return process.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfv3Process::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfv3Process::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfv3Process::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3Process::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfv3Process::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3Process::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ActOspfv3Process::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3Process::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
}

bool ActOspfv3Process::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "process")
        return true;
    return false;
}

ActOspfv3Process::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfv3Process::Input::Instance::~Instance()
{
}

bool ActOspfv3Process::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfv3Process::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ActOspfv3Process::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfv3Process::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-process/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3Process::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3Process::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfv3Process::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3Process::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ActOspfv3Process::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ActOspfv3StatisticsNeighbor::ActOspfv3StatisticsNeighbor()
    :
    input(std::make_shared<ActOspfv3StatisticsNeighbor::Input>())
{
    input->parent = this;

    yang_name = "act-ospfv3-statistics-neighbor"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act";
}

ActOspfv3StatisticsNeighbor::~ActOspfv3StatisticsNeighbor()
{
}

bool ActOspfv3StatisticsNeighbor::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfv3StatisticsNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfv3StatisticsNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-statistics-neighbor";

    return path_buffer.str();

}

const EntityPath ActOspfv3StatisticsNeighbor::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfv3StatisticsNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfv3StatisticsNeighbor::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3StatisticsNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfv3StatisticsNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfv3StatisticsNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ActOspfv3StatisticsNeighbor::clone_ptr() const
{
    return std::make_shared<ActOspfv3StatisticsNeighbor>();
}

std::string ActOspfv3StatisticsNeighbor::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfv3StatisticsNeighbor::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfv3StatisticsNeighbor::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ActOspfv3StatisticsNeighbor::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ActOspfv3StatisticsNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ActOspfv3StatisticsNeighbor::Input::Input()
    :
    instance(std::make_shared<ActOspfv3StatisticsNeighbor::Input::Instance>())
	,neighbor(std::make_shared<ActOspfv3StatisticsNeighbor::Input::Neighbor>())
{
    instance->parent = this;

    neighbor->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospfv3-statistics-neighbor";
}

ActOspfv3StatisticsNeighbor::Input::~Input()
{
}

bool ActOspfv3StatisticsNeighbor::Input::has_data() const
{
    return (instance !=  nullptr && instance->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfv3StatisticsNeighbor::Input::has_operation() const
{
    return is_set(yfilter)
	|| (instance !=  nullptr && instance->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfv3StatisticsNeighbor::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfv3StatisticsNeighbor::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-statistics-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3StatisticsNeighbor::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfv3StatisticsNeighbor::Input::Instance>();
        }
        return instance;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ActOspfv3StatisticsNeighbor::Input::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3StatisticsNeighbor::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void ActOspfv3StatisticsNeighbor::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfv3StatisticsNeighbor::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActOspfv3StatisticsNeighbor::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "neighbor")
        return true;
    return false;
}

ActOspfv3StatisticsNeighbor::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfv3StatisticsNeighbor::Input::Instance::~Instance()
{
}

bool ActOspfv3StatisticsNeighbor::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfv3StatisticsNeighbor::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ActOspfv3StatisticsNeighbor::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfv3StatisticsNeighbor::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-statistics-neighbor/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3StatisticsNeighbor::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3StatisticsNeighbor::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfv3StatisticsNeighbor::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3StatisticsNeighbor::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ActOspfv3StatisticsNeighbor::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ActOspfv3StatisticsNeighbor::Input::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_id{YType::str, "neighbor-id"}
{
    yang_name = "neighbor"; yang_parent_name = "input";
}

ActOspfv3StatisticsNeighbor::Input::Neighbor::~Neighbor()
{
}

bool ActOspfv3StatisticsNeighbor::Input::Neighbor::has_data() const
{
    return interface_name.is_set
	|| neighbor_id.is_set;
}

bool ActOspfv3StatisticsNeighbor::Input::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_id.yfilter);
}

std::string ActOspfv3StatisticsNeighbor::Input::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath ActOspfv3StatisticsNeighbor::Input::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-statistics-neighbor/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3StatisticsNeighbor::Input::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3StatisticsNeighbor::Input::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfv3StatisticsNeighbor::Input::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3StatisticsNeighbor::Input::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool ActOspfv3StatisticsNeighbor::Input::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "neighbor-id")
        return true;
    return false;
}

ActOspfv3Statistics::ActOspfv3Statistics()
    :
    input(std::make_shared<ActOspfv3Statistics::Input>())
{
    input->parent = this;

    yang_name = "act-ospfv3-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act";
}

ActOspfv3Statistics::~ActOspfv3Statistics()
{
}

bool ActOspfv3Statistics::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfv3Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfv3Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-statistics";

    return path_buffer.str();

}

const EntityPath ActOspfv3Statistics::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfv3Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfv3Statistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfv3Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfv3Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ActOspfv3Statistics::clone_ptr() const
{
    return std::make_shared<ActOspfv3Statistics>();
}

std::string ActOspfv3Statistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfv3Statistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfv3Statistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ActOspfv3Statistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ActOspfv3Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ActOspfv3Statistics::Input::Input()
    :
    neighbor{YType::empty, "neighbor"},
    prefix_priority{YType::empty, "prefix-priority"},
    spf{YType::empty, "spf"}
    	,
    instance(std::make_shared<ActOspfv3Statistics::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospfv3-statistics";
}

ActOspfv3Statistics::Input::~Input()
{
}

bool ActOspfv3Statistics::Input::has_data() const
{
    return neighbor.is_set
	|| prefix_priority.is_set
	|| spf.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfv3Statistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(prefix_priority.yfilter)
	|| ydk::is_set(spf.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfv3Statistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfv3Statistics::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (prefix_priority.is_set || is_set(prefix_priority.yfilter)) leaf_name_data.push_back(prefix_priority.get_name_leafdata());
    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3Statistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfv3Statistics::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3Statistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ActOspfv3Statistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-priority")
    {
        prefix_priority = value;
        prefix_priority.value_namespace = name_space;
        prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3Statistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "prefix-priority")
    {
        prefix_priority.yfilter = yfilter;
    }
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
}

bool ActOspfv3Statistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "neighbor" || name == "prefix-priority" || name == "spf")
        return true;
    return false;
}

ActOspfv3Statistics::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfv3Statistics::Input::Instance::~Instance()
{
}

bool ActOspfv3Statistics::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfv3Statistics::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ActOspfv3Statistics::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfv3Statistics::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-statistics/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3Statistics::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3Statistics::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfv3Statistics::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3Statistics::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ActOspfv3Statistics::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ActOspfv3InstanceVrf::ActOspfv3InstanceVrf()
    :
    input(std::make_shared<ActOspfv3InstanceVrf::Input>())
{
    input->parent = this;

    yang_name = "act-ospfv3-instance-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act";
}

ActOspfv3InstanceVrf::~ActOspfv3InstanceVrf()
{
}

bool ActOspfv3InstanceVrf::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfv3InstanceVrf::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfv3InstanceVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf";

    return path_buffer.str();

}

const EntityPath ActOspfv3InstanceVrf::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfv3InstanceVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfv3InstanceVrf::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3InstanceVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfv3InstanceVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfv3InstanceVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ActOspfv3InstanceVrf::clone_ptr() const
{
    return std::make_shared<ActOspfv3InstanceVrf>();
}

std::string ActOspfv3InstanceVrf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfv3InstanceVrf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfv3InstanceVrf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ActOspfv3InstanceVrf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ActOspfv3InstanceVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ActOspfv3InstanceVrf::Input::Input()
    :
    instance(std::make_shared<ActOspfv3InstanceVrf::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospfv3-instance-vrf";
}

ActOspfv3InstanceVrf::Input::~Input()
{
}

bool ActOspfv3InstanceVrf::Input::has_data() const
{
    return (instance !=  nullptr && instance->has_data());
}

bool ActOspfv3InstanceVrf::Input::has_operation() const
{
    return is_set(yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfv3InstanceVrf::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfv3InstanceVrf::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfv3InstanceVrf::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3InstanceVrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ActOspfv3InstanceVrf::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfv3InstanceVrf::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActOspfv3InstanceVrf::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

ActOspfv3InstanceVrf::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
    	,
    all(std::make_shared<ActOspfv3InstanceVrf::Input::Instance::All>())
	,all_inclusive(std::make_shared<ActOspfv3InstanceVrf::Input::Instance::AllInclusive>())
	,vrf(std::make_shared<ActOspfv3InstanceVrf::Input::Instance::Vrf>())
{
    all->parent = this;

    all_inclusive->parent = this;

    vrf->parent = this;

    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfv3InstanceVrf::Input::Instance::~Instance()
{
}

bool ActOspfv3InstanceVrf::Input::Instance::has_data() const
{
    return instance_identifier.is_set
	|| (all !=  nullptr && all->has_data())
	|| (all_inclusive !=  nullptr && all_inclusive->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool ActOspfv3InstanceVrf::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (all_inclusive !=  nullptr && all_inclusive->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string ActOspfv3InstanceVrf::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfv3InstanceVrf::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrf::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<ActOspfv3InstanceVrf::Input::Instance::All>();
        }
        return all;
    }

    if(child_yang_name == "all-inclusive")
    {
        if(all_inclusive == nullptr)
        {
            all_inclusive = std::make_shared<ActOspfv3InstanceVrf::Input::Instance::AllInclusive>();
        }
        return all_inclusive;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<ActOspfv3InstanceVrf::Input::Instance::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3InstanceVrf::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(all_inclusive != nullptr)
    {
        children["all-inclusive"] = all_inclusive;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void ActOspfv3InstanceVrf::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3InstanceVrf::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ActOspfv3InstanceVrf::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "all-inclusive" || name == "vrf" || name == "instance-identifier")
        return true;
    return false;
}

ActOspfv3InstanceVrf::Input::Instance::Vrf::Vrf()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"},
    vrf_name{YType::str, "vrf-name"}
    	,
    stats(std::make_shared<ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats>())
{
    stats->parent = this;

    yang_name = "vrf"; yang_parent_name = "instance";
}

ActOspfv3InstanceVrf::Input::Instance::Vrf::~Vrf()
{
}

bool ActOspfv3InstanceVrf::Input::Instance::Vrf::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| vrf_name.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ActOspfv3InstanceVrf::Input::Instance::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ActOspfv3InstanceVrf::Input::Instance::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath ActOspfv3InstanceVrf::Input::Instance::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/input/instance/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (redistribution.is_set || is_set(redistribution.yfilter)) leaf_name_data.push_back(redistribution.get_name_leafdata());
    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrf::Input::Instance::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3InstanceVrf::Input::Instance::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ActOspfv3InstanceVrf::Input::Instance::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution")
    {
        redistribution = value;
        redistribution.value_namespace = name_space;
        redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3InstanceVrf::Input::Instance::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "redistribution")
    {
        redistribution.yfilter = yfilter;
    }
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ActOspfv3InstanceVrf::Input::Instance::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "process" || name == "redistribution" || name == "route" || name == "vrf-name")
        return true;
    return false;
}

ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Stats()
    :
    prefix_priority{YType::empty, "prefix-priority"},
    spf{YType::empty, "spf"}
    	,
    neighbor(std::make_shared<ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor>())
{
    neighbor->parent = this;

    yang_name = "stats"; yang_parent_name = "vrf";
}

ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::~Stats()
{
}

bool ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::has_data() const
{
    return prefix_priority.is_set
	|| spf.is_set
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_priority.yfilter)
	|| ydk::is_set(spf.yfilter)
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/input/instance/vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_priority.is_set || is_set(prefix_priority.yfilter)) leaf_name_data.push_back(prefix_priority.get_name_leafdata());
    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-priority")
    {
        prefix_priority = value;
        prefix_priority.value_namespace = name_space;
        prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-priority")
    {
        prefix_priority.yfilter = yfilter;
    }
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
}

bool ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "prefix-priority" || name == "spf")
        return true;
    return false;
}

ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface>())
{
    interface->parent = this;

    yang_name = "neighbor"; yang_parent_name = "stats";
}

ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::~Neighbor()
{
}

bool ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/input/instance/vrf/stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor-id")
        return true;
    return false;
}

ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "neighbor";
}

ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::~Interface()
{
}

bool ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/input/instance/vrf/stats/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ActOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ActOspfv3InstanceVrf::Input::Instance::All::All()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"}
    	,
    stats(std::make_shared<ActOspfv3InstanceVrf::Input::Instance::All::Stats>())
{
    stats->parent = this;

    yang_name = "all"; yang_parent_name = "instance";
}

ActOspfv3InstanceVrf::Input::Instance::All::~All()
{
}

bool ActOspfv3InstanceVrf::Input::Instance::All::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ActOspfv3InstanceVrf::Input::Instance::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| ydk::is_set(route.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ActOspfv3InstanceVrf::Input::Instance::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath ActOspfv3InstanceVrf::Input::Instance::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/input/instance/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (redistribution.is_set || is_set(redistribution.yfilter)) leaf_name_data.push_back(redistribution.get_name_leafdata());
    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrf::Input::Instance::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ActOspfv3InstanceVrf::Input::Instance::All::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3InstanceVrf::Input::Instance::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ActOspfv3InstanceVrf::Input::Instance::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution")
    {
        redistribution = value;
        redistribution.value_namespace = name_space;
        redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3InstanceVrf::Input::Instance::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "redistribution")
    {
        redistribution.yfilter = yfilter;
    }
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
}

bool ActOspfv3InstanceVrf::Input::Instance::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "process" || name == "redistribution" || name == "route")
        return true;
    return false;
}

ActOspfv3InstanceVrf::Input::Instance::All::Stats::Stats()
    :
    prefix_priority{YType::empty, "prefix-priority"},
    spf{YType::empty, "spf"}
    	,
    neighbor(std::make_shared<ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor>())
{
    neighbor->parent = this;

    yang_name = "stats"; yang_parent_name = "all";
}

ActOspfv3InstanceVrf::Input::Instance::All::Stats::~Stats()
{
}

bool ActOspfv3InstanceVrf::Input::Instance::All::Stats::has_data() const
{
    return prefix_priority.is_set
	|| spf.is_set
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfv3InstanceVrf::Input::Instance::All::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_priority.yfilter)
	|| ydk::is_set(spf.yfilter)
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfv3InstanceVrf::Input::Instance::All::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath ActOspfv3InstanceVrf::Input::Instance::All::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/input/instance/all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_priority.is_set || is_set(prefix_priority.yfilter)) leaf_name_data.push_back(prefix_priority.get_name_leafdata());
    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrf::Input::Instance::All::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3InstanceVrf::Input::Instance::All::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void ActOspfv3InstanceVrf::Input::Instance::All::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-priority")
    {
        prefix_priority = value;
        prefix_priority.value_namespace = name_space;
        prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3InstanceVrf::Input::Instance::All::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-priority")
    {
        prefix_priority.yfilter = yfilter;
    }
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
}

bool ActOspfv3InstanceVrf::Input::Instance::All::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "prefix-priority" || name == "spf")
        return true;
    return false;
}

ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface>())
{
    interface->parent = this;

    yang_name = "neighbor"; yang_parent_name = "stats";
}

ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::~Neighbor()
{
}

bool ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/input/instance/all/stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor-id")
        return true;
    return false;
}

ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "neighbor";
}

ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::~Interface()
{
}

bool ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/input/instance/all/stats/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ActOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ActOspfv3InstanceVrf::Input::Instance::AllInclusive::AllInclusive()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"}
    	,
    stats(std::make_shared<ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats>())
{
    stats->parent = this;

    yang_name = "all-inclusive"; yang_parent_name = "instance";
}

ActOspfv3InstanceVrf::Input::Instance::AllInclusive::~AllInclusive()
{
}

bool ActOspfv3InstanceVrf::Input::Instance::AllInclusive::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ActOspfv3InstanceVrf::Input::Instance::AllInclusive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| ydk::is_set(route.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ActOspfv3InstanceVrf::Input::Instance::AllInclusive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-inclusive";

    return path_buffer.str();

}

const EntityPath ActOspfv3InstanceVrf::Input::Instance::AllInclusive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/input/instance/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (redistribution.is_set || is_set(redistribution.yfilter)) leaf_name_data.push_back(redistribution.get_name_leafdata());
    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrf::Input::Instance::AllInclusive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3InstanceVrf::Input::Instance::AllInclusive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ActOspfv3InstanceVrf::Input::Instance::AllInclusive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution")
    {
        redistribution = value;
        redistribution.value_namespace = name_space;
        redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3InstanceVrf::Input::Instance::AllInclusive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "redistribution")
    {
        redistribution.yfilter = yfilter;
    }
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
}

bool ActOspfv3InstanceVrf::Input::Instance::AllInclusive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "process" || name == "redistribution" || name == "route")
        return true;
    return false;
}

ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Stats()
    :
    prefix_priority{YType::empty, "prefix-priority"},
    spf{YType::empty, "spf"}
    	,
    neighbor(std::make_shared<ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor>())
{
    neighbor->parent = this;

    yang_name = "stats"; yang_parent_name = "all-inclusive";
}

ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::~Stats()
{
}

bool ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::has_data() const
{
    return prefix_priority.is_set
	|| spf.is_set
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_priority.yfilter)
	|| ydk::is_set(spf.yfilter)
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/input/instance/all-inclusive/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_priority.is_set || is_set(prefix_priority.yfilter)) leaf_name_data.push_back(prefix_priority.get_name_leafdata());
    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-priority")
    {
        prefix_priority = value;
        prefix_priority.value_namespace = name_space;
        prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-priority")
    {
        prefix_priority.yfilter = yfilter;
    }
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
}

bool ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "prefix-priority" || name == "spf")
        return true;
    return false;
}

ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface>())
{
    interface->parent = this;

    yang_name = "neighbor"; yang_parent_name = "stats";
}

ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::~Neighbor()
{
}

bool ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/input/instance/all-inclusive/stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor-id")
        return true;
    return false;
}

ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "neighbor";
}

ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::~Interface()
{
}

bool ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/input/instance/all-inclusive/stats/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ActOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}


}
}

