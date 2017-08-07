
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_act {

ActOspfRoutes::ActOspfRoutes()
    :
    input(std::make_shared<ActOspfRoutes::Input>())
{
    input->parent = this;

    yang_name = "act-ospf-routes"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfRoutes::~ActOspfRoutes()
{
}

bool ActOspfRoutes::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfRoutes::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-routes";

    return path_buffer.str();

}

const EntityPath ActOspfRoutes::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfRoutes::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ActOspfRoutes::clone_ptr() const
{
    return std::make_shared<ActOspfRoutes>();
}

std::string ActOspfRoutes::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfRoutes::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfRoutes::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ActOspfRoutes::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ActOspfRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ActOspfRoutes::Input::Input()
    :
    route{YType::empty, "route"}
    	,
    instance(std::make_shared<ActOspfRoutes::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospf-routes";
}

ActOspfRoutes::Input::~Input()
{
}

bool ActOspfRoutes::Input::has_data() const
{
    return route.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfRoutes::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfRoutes::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfRoutes::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-routes/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfRoutes::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfRoutes::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfRoutes::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ActOspfRoutes::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfRoutes::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
}

bool ActOspfRoutes::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "route")
        return true;
    return false;
}

ActOspfRoutes::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfRoutes::Input::Instance::~Instance()
{
}

bool ActOspfRoutes::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfRoutes::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ActOspfRoutes::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfRoutes::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-routes/input/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfRoutes::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfRoutes::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfRoutes::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfRoutes::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ActOspfRoutes::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ActOspfRedistribution::ActOspfRedistribution()
    :
    input(std::make_shared<ActOspfRedistribution::Input>())
{
    input->parent = this;

    yang_name = "act-ospf-redistribution"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfRedistribution::~ActOspfRedistribution()
{
}

bool ActOspfRedistribution::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfRedistribution::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfRedistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-redistribution";

    return path_buffer.str();

}

const EntityPath ActOspfRedistribution::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfRedistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfRedistribution::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfRedistribution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfRedistribution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfRedistribution::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ActOspfRedistribution::clone_ptr() const
{
    return std::make_shared<ActOspfRedistribution>();
}

std::string ActOspfRedistribution::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfRedistribution::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfRedistribution::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ActOspfRedistribution::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ActOspfRedistribution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ActOspfRedistribution::Input::Input()
    :
    redistribution{YType::empty, "redistribution"}
    	,
    instance(std::make_shared<ActOspfRedistribution::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospf-redistribution";
}

ActOspfRedistribution::Input::~Input()
{
}

bool ActOspfRedistribution::Input::has_data() const
{
    return redistribution.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfRedistribution::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfRedistribution::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfRedistribution::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-redistribution/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfRedistribution::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfRedistribution::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfRedistribution::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ActOspfRedistribution::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redistribution")
    {
        redistribution = value;
        redistribution.value_namespace = name_space;
        redistribution.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfRedistribution::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redistribution")
    {
        redistribution.yfilter = yfilter;
    }
}

bool ActOspfRedistribution::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "redistribution")
        return true;
    return false;
}

ActOspfRedistribution::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfRedistribution::Input::Instance::~Instance()
{
}

bool ActOspfRedistribution::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfRedistribution::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ActOspfRedistribution::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfRedistribution::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-redistribution/input/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfRedistribution::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfRedistribution::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfRedistribution::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfRedistribution::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ActOspfRedistribution::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ActOspfStatistics::ActOspfStatistics()
    :
    input(std::make_shared<ActOspfStatistics::Input>())
{
    input->parent = this;

    yang_name = "act-ospf-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfStatistics::~ActOspfStatistics()
{
}

bool ActOspfStatistics::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics";

    return path_buffer.str();

}

const EntityPath ActOspfStatistics::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ActOspfStatistics::clone_ptr() const
{
    return std::make_shared<ActOspfStatistics>();
}

std::string ActOspfStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ActOspfStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ActOspfStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ActOspfStatistics::Input::Input()
    :
    all{YType::empty, "all"},
    interface_name{YType::empty, "interface-name"},
    message_queue{YType::empty, "message-queue"},
    neighbor{YType::empty, "neighbor"},
    spf{YType::empty, "spf"}
    	,
    instance(std::make_shared<ActOspfStatistics::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospf-statistics";
}

ActOspfStatistics::Input::~Input()
{
}

bool ActOspfStatistics::Input::has_data() const
{
    return all.is_set
	|| interface_name.is_set
	|| message_queue.is_set
	|| neighbor.is_set
	|| spf.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(message_queue.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(spf.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfStatistics::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (message_queue.is_set || is_set(message_queue.yfilter)) leaf_name_data.push_back(message_queue.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfStatistics::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ActOspfStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-queue")
    {
        message_queue = value;
        message_queue.value_namespace = name_space;
        message_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "message-queue")
    {
        message_queue.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
}

bool ActOspfStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "all" || name == "interface-name" || name == "message-queue" || name == "neighbor" || name == "spf")
        return true;
    return false;
}

ActOspfStatistics::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfStatistics::Input::Instance::~Instance()
{
}

bool ActOspfStatistics::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfStatistics::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ActOspfStatistics::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfStatistics::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics/input/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfStatistics::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatistics::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfStatistics::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfStatistics::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ActOspfStatistics::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ActOspfStatisticsNeighbor::ActOspfStatisticsNeighbor()
    :
    input(std::make_shared<ActOspfStatisticsNeighbor::Input>())
{
    input->parent = this;

    yang_name = "act-ospf-statistics-neighbor"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfStatisticsNeighbor::~ActOspfStatisticsNeighbor()
{
}

bool ActOspfStatisticsNeighbor::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfStatisticsNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfStatisticsNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics-neighbor";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsNeighbor::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfStatisticsNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfStatisticsNeighbor::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfStatisticsNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfStatisticsNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ActOspfStatisticsNeighbor::clone_ptr() const
{
    return std::make_shared<ActOspfStatisticsNeighbor>();
}

std::string ActOspfStatisticsNeighbor::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfStatisticsNeighbor::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfStatisticsNeighbor::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ActOspfStatisticsNeighbor::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ActOspfStatisticsNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ActOspfStatisticsNeighbor::Input::Input()
    :
    instance(std::make_shared<ActOspfStatisticsNeighbor::Input::Instance>())
	,neighbor(std::make_shared<ActOspfStatisticsNeighbor::Input::Neighbor>())
{
    instance->parent = this;

    neighbor->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospf-statistics-neighbor";
}

ActOspfStatisticsNeighbor::Input::~Input()
{
}

bool ActOspfStatisticsNeighbor::Input::has_data() const
{
    return (instance !=  nullptr && instance->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfStatisticsNeighbor::Input::has_operation() const
{
    return is_set(yfilter)
	|| (instance !=  nullptr && instance->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfStatisticsNeighbor::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsNeighbor::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsNeighbor::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfStatisticsNeighbor::Input::Instance>();
        }
        return instance;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ActOspfStatisticsNeighbor::Input::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsNeighbor::Input::get_children() const
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

void ActOspfStatisticsNeighbor::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfStatisticsNeighbor::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActOspfStatisticsNeighbor::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "neighbor")
        return true;
    return false;
}

ActOspfStatisticsNeighbor::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfStatisticsNeighbor::Input::Instance::~Instance()
{
}

bool ActOspfStatisticsNeighbor::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfStatisticsNeighbor::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ActOspfStatisticsNeighbor::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsNeighbor::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics-neighbor/input/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfStatisticsNeighbor::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsNeighbor::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfStatisticsNeighbor::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfStatisticsNeighbor::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ActOspfStatisticsNeighbor::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ActOspfStatisticsNeighbor::Input::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_id{YType::str, "neighbor-id"}
{
    yang_name = "neighbor"; yang_parent_name = "input";
}

ActOspfStatisticsNeighbor::Input::Neighbor::~Neighbor()
{
}

bool ActOspfStatisticsNeighbor::Input::Neighbor::has_data() const
{
    return interface_name.is_set
	|| neighbor_id.is_set;
}

bool ActOspfStatisticsNeighbor::Input::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_id.yfilter);
}

std::string ActOspfStatisticsNeighbor::Input::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsNeighbor::Input::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics-neighbor/input/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfStatisticsNeighbor::Input::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsNeighbor::Input::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfStatisticsNeighbor::Input::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ActOspfStatisticsNeighbor::Input::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ActOspfStatisticsNeighbor::Input::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "neighbor-id")
        return true;
    return false;
}

ActOspfStatisticsInterface::ActOspfStatisticsInterface()
    :
    input(std::make_shared<ActOspfStatisticsInterface::Input>())
{
    input->parent = this;

    yang_name = "act-ospf-statistics-interface"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfStatisticsInterface::~ActOspfStatisticsInterface()
{
}

bool ActOspfStatisticsInterface::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfStatisticsInterface::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfStatisticsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics-interface";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsInterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfStatisticsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfStatisticsInterface::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfStatisticsInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfStatisticsInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ActOspfStatisticsInterface::clone_ptr() const
{
    return std::make_shared<ActOspfStatisticsInterface>();
}

std::string ActOspfStatisticsInterface::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfStatisticsInterface::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfStatisticsInterface::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ActOspfStatisticsInterface::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ActOspfStatisticsInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ActOspfStatisticsInterface::Input::Input()
    :
    instance(std::make_shared<ActOspfStatisticsInterface::Input::Instance>())
	,interface(std::make_shared<ActOspfStatisticsInterface::Input::Interface>())
{
    instance->parent = this;

    interface->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospf-statistics-interface";
}

ActOspfStatisticsInterface::Input::~Input()
{
}

bool ActOspfStatisticsInterface::Input::has_data() const
{
    return (instance !=  nullptr && instance->has_data())
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfStatisticsInterface::Input::has_operation() const
{
    return is_set(yfilter)
	|| (instance !=  nullptr && instance->has_operation())
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfStatisticsInterface::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsInterface::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsInterface::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfStatisticsInterface::Input::Instance>();
        }
        return instance;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfStatisticsInterface::Input::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsInterface::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ActOspfStatisticsInterface::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfStatisticsInterface::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActOspfStatisticsInterface::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "interface")
        return true;
    return false;
}

ActOspfStatisticsInterface::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfStatisticsInterface::Input::Instance::~Instance()
{
}

bool ActOspfStatisticsInterface::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfStatisticsInterface::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ActOspfStatisticsInterface::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsInterface::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics-interface/input/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfStatisticsInterface::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsInterface::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfStatisticsInterface::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfStatisticsInterface::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ActOspfStatisticsInterface::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ActOspfStatisticsInterface::Input::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "input";
}

ActOspfStatisticsInterface::Input::Interface::~Interface()
{
}

bool ActOspfStatisticsInterface::Input::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfStatisticsInterface::Input::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ActOspfStatisticsInterface::Input::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsInterface::Input::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics-interface/input/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfStatisticsInterface::Input::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsInterface::Input::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfStatisticsInterface::Input::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfStatisticsInterface::Input::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ActOspfStatisticsInterface::Input::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ActOspfProcess::ActOspfProcess()
    :
    input(std::make_shared<ActOspfProcess::Input>())
{
    input->parent = this;

    yang_name = "act-ospf-process"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfProcess::~ActOspfProcess()
{
}

bool ActOspfProcess::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfProcess::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-process";

    return path_buffer.str();

}

const EntityPath ActOspfProcess::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfProcess::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfProcess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfProcess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ActOspfProcess::clone_ptr() const
{
    return std::make_shared<ActOspfProcess>();
}

std::string ActOspfProcess::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfProcess::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfProcess::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ActOspfProcess::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ActOspfProcess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ActOspfProcess::Input::Input()
    :
    process{YType::empty, "process"}
    	,
    instance(std::make_shared<ActOspfProcess::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospf-process";
}

ActOspfProcess::Input::~Input()
{
}

bool ActOspfProcess::Input::has_data() const
{
    return process.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfProcess::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfProcess::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfProcess::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-process/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfProcess::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfProcess::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfProcess::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ActOspfProcess::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfProcess::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
}

bool ActOspfProcess::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "process")
        return true;
    return false;
}

ActOspfProcess::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfProcess::Input::Instance::~Instance()
{
}

bool ActOspfProcess::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfProcess::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ActOspfProcess::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfProcess::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-process/input/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfProcess::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfProcess::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfProcess::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfProcess::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ActOspfProcess::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ActOspfInstanceVrf::ActOspfInstanceVrf()
    :
    input(std::make_shared<ActOspfInstanceVrf::Input>())
{
    input->parent = this;

    yang_name = "act-ospf-instance-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfInstanceVrf::~ActOspfInstanceVrf()
{
}

bool ActOspfInstanceVrf::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfInstanceVrf::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfInstanceVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfInstanceVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfInstanceVrf::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfInstanceVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfInstanceVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ActOspfInstanceVrf::clone_ptr() const
{
    return std::make_shared<ActOspfInstanceVrf>();
}

std::string ActOspfInstanceVrf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfInstanceVrf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfInstanceVrf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ActOspfInstanceVrf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ActOspfInstanceVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Input()
    :
    instance(std::make_shared<ActOspfInstanceVrf::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospf-instance-vrf";
}

ActOspfInstanceVrf::Input::~Input()
{
}

bool ActOspfInstanceVrf::Input::has_data() const
{
    return (instance !=  nullptr && instance->has_data());
}

bool ActOspfInstanceVrf::Input::has_operation() const
{
    return is_set(yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfInstanceVrf::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfInstanceVrf::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ActOspfInstanceVrf::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ActOspfInstanceVrf::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ActOspfInstanceVrf::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
    	,
    all(std::make_shared<ActOspfInstanceVrf::Input::Instance::All>())
	,all_inclusive(std::make_shared<ActOspfInstanceVrf::Input::Instance::AllInclusive>())
	,vrf(std::make_shared<ActOspfInstanceVrf::Input::Instance::Vrf>())
{
    all->parent = this;

    all_inclusive->parent = this;

    vrf->parent = this;

    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfInstanceVrf::Input::Instance::~Instance()
{
}

bool ActOspfInstanceVrf::Input::Instance::has_data() const
{
    return instance_identifier.is_set
	|| (all !=  nullptr && all->has_data())
	|| (all_inclusive !=  nullptr && all_inclusive->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool ActOspfInstanceVrf::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (all_inclusive !=  nullptr && all_inclusive->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string ActOspfInstanceVrf::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<ActOspfInstanceVrf::Input::Instance::All>();
        }
        return all;
    }

    if(child_yang_name == "all-inclusive")
    {
        if(all_inclusive == nullptr)
        {
            all_inclusive = std::make_shared<ActOspfInstanceVrf::Input::Instance::AllInclusive>();
        }
        return all_inclusive;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<ActOspfInstanceVrf::Input::Instance::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::get_children() const
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

void ActOspfInstanceVrf::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfInstanceVrf::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ActOspfInstanceVrf::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "all-inclusive" || name == "vrf" || name == "instance-identifier")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::Vrf::Vrf()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"},
    vrf_name{YType::str, "vrf-name"}
    	,
    stats(std::make_shared<ActOspfInstanceVrf::Input::Instance::Vrf::Stats>())
{
    stats->parent = this;

    yang_name = "vrf"; yang_parent_name = "instance";
}

ActOspfInstanceVrf::Input::Instance::Vrf::~Vrf()
{
}

bool ActOspfInstanceVrf::Input::Instance::Vrf::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| vrf_name.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ActOspfInstanceVrf::Input::Instance::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ActOspfInstanceVrf::Input::Instance::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/instance/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ActOspfInstanceVrf::Input::Instance::Vrf::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ActOspfInstanceVrf::Input::Instance::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ActOspfInstanceVrf::Input::Instance::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ActOspfInstanceVrf::Input::Instance::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "process" || name == "redistribution" || name == "route" || name == "vrf-name")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Stats()
    :
    message_queue{YType::empty, "message-queue"},
    spf{YType::empty, "spf"}
    	,
    interface(std::make_shared<ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface>())
	,neighbor(std::make_shared<ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor>())
{
    interface->parent = this;

    neighbor->parent = this;

    yang_name = "stats"; yang_parent_name = "vrf";
}

ActOspfInstanceVrf::Input::Instance::Vrf::Stats::~Stats()
{
}

bool ActOspfInstanceVrf::Input::Instance::Vrf::Stats::has_data() const
{
    return message_queue.is_set
	|| spf.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfInstanceVrf::Input::Instance::Vrf::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_queue.yfilter)
	|| ydk::is_set(spf.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfInstanceVrf::Input::Instance::Vrf::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::Vrf::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/instance/vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_queue.is_set || is_set(message_queue.yfilter)) leaf_name_data.push_back(message_queue.get_name_leafdata());
    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::Vrf::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::Vrf::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void ActOspfInstanceVrf::Input::Instance::Vrf::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-queue")
    {
        message_queue = value;
        message_queue.value_namespace = name_space;
        message_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfInstanceVrf::Input::Instance::Vrf::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-queue")
    {
        message_queue.yfilter = yfilter;
    }
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
}

bool ActOspfInstanceVrf::Input::Instance::Vrf::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor" || name == "message-queue" || name == "spf")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "stats";
}

ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::~Interface()
{
}

bool ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/instance/vrf/stats/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface>())
{
    interface->parent = this;

    yang_name = "neighbor"; yang_parent_name = "stats";
}

ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::~Neighbor()
{
}

bool ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/instance/vrf/stats/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor-id")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "neighbor";
}

ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::~Interface()
{
}

bool ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/instance/vrf/stats/neighbor/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ActOspfInstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::All::All()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"}
    	,
    stats(std::make_shared<ActOspfInstanceVrf::Input::Instance::All::Stats>())
{
    stats->parent = this;

    yang_name = "all"; yang_parent_name = "instance";
}

ActOspfInstanceVrf::Input::Instance::All::~All()
{
}

bool ActOspfInstanceVrf::Input::Instance::All::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ActOspfInstanceVrf::Input::Instance::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| ydk::is_set(route.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ActOspfInstanceVrf::Input::Instance::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/instance/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ActOspfInstanceVrf::Input::Instance::All::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ActOspfInstanceVrf::Input::Instance::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ActOspfInstanceVrf::Input::Instance::All::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ActOspfInstanceVrf::Input::Instance::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "process" || name == "redistribution" || name == "route")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::All::Stats::Stats()
    :
    message_queue{YType::empty, "message-queue"},
    spf{YType::empty, "spf"}
    	,
    interface(std::make_shared<ActOspfInstanceVrf::Input::Instance::All::Stats::Interface>())
	,neighbor(std::make_shared<ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor>())
{
    interface->parent = this;

    neighbor->parent = this;

    yang_name = "stats"; yang_parent_name = "all";
}

ActOspfInstanceVrf::Input::Instance::All::Stats::~Stats()
{
}

bool ActOspfInstanceVrf::Input::Instance::All::Stats::has_data() const
{
    return message_queue.is_set
	|| spf.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfInstanceVrf::Input::Instance::All::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_queue.yfilter)
	|| ydk::is_set(spf.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfInstanceVrf::Input::Instance::All::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::All::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/instance/all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_queue.is_set || is_set(message_queue.yfilter)) leaf_name_data.push_back(message_queue.get_name_leafdata());
    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::All::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfInstanceVrf::Input::Instance::All::Stats::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::All::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void ActOspfInstanceVrf::Input::Instance::All::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-queue")
    {
        message_queue = value;
        message_queue.value_namespace = name_space;
        message_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfInstanceVrf::Input::Instance::All::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-queue")
    {
        message_queue.yfilter = yfilter;
    }
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
}

bool ActOspfInstanceVrf::Input::Instance::All::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor" || name == "message-queue" || name == "spf")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::All::Stats::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "stats";
}

ActOspfInstanceVrf::Input::Instance::All::Stats::Interface::~Interface()
{
}

bool ActOspfInstanceVrf::Input::Instance::All::Stats::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrf::Input::Instance::All::Stats::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ActOspfInstanceVrf::Input::Instance::All::Stats::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::All::Stats::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/instance/all/stats/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::All::Stats::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::All::Stats::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfInstanceVrf::Input::Instance::All::Stats::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfInstanceVrf::Input::Instance::All::Stats::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ActOspfInstanceVrf::Input::Instance::All::Stats::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface>())
{
    interface->parent = this;

    yang_name = "neighbor"; yang_parent_name = "stats";
}

ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::~Neighbor()
{
}

bool ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/instance/all/stats/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor-id")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "neighbor";
}

ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::~Interface()
{
}

bool ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/instance/all/stats/neighbor/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ActOspfInstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::AllInclusive::AllInclusive()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"}
    	,
    stats(std::make_shared<ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats>())
{
    stats->parent = this;

    yang_name = "all-inclusive"; yang_parent_name = "instance";
}

ActOspfInstanceVrf::Input::Instance::AllInclusive::~AllInclusive()
{
}

bool ActOspfInstanceVrf::Input::Instance::AllInclusive::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ActOspfInstanceVrf::Input::Instance::AllInclusive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| ydk::is_set(route.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ActOspfInstanceVrf::Input::Instance::AllInclusive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-inclusive";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::AllInclusive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/instance/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::AllInclusive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::AllInclusive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ActOspfInstanceVrf::Input::Instance::AllInclusive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ActOspfInstanceVrf::Input::Instance::AllInclusive::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ActOspfInstanceVrf::Input::Instance::AllInclusive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "process" || name == "redistribution" || name == "route")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Stats()
    :
    message_queue{YType::empty, "message-queue"},
    spf{YType::empty, "spf"}
    	,
    interface(std::make_shared<ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface>())
	,neighbor(std::make_shared<ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor>())
{
    interface->parent = this;

    neighbor->parent = this;

    yang_name = "stats"; yang_parent_name = "all-inclusive";
}

ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::~Stats()
{
}

bool ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::has_data() const
{
    return message_queue.is_set
	|| spf.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_queue.yfilter)
	|| ydk::is_set(spf.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/instance/all-inclusive/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_queue.is_set || is_set(message_queue.yfilter)) leaf_name_data.push_back(message_queue.get_name_leafdata());
    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-queue")
    {
        message_queue = value;
        message_queue.value_namespace = name_space;
        message_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-queue")
    {
        message_queue.yfilter = yfilter;
    }
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
}

bool ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor" || name == "message-queue" || name == "spf")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "stats";
}

ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::~Interface()
{
}

bool ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/instance/all-inclusive/stats/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface>())
{
    interface->parent = this;

    yang_name = "neighbor"; yang_parent_name = "stats";
}

ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::~Neighbor()
{
}

bool ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/instance/all-inclusive/stats/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor-id")
        return true;
    return false;
}

ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "neighbor";
}

ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::~Interface()
{
}

bool ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/input/instance/all-inclusive/stats/neighbor/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ActOspfInstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}


}
}

