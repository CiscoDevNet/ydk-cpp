
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_act.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ospf_act {

ActOspfRoutesRpc::ActOspfRoutesRpc()
    :
    input(std::make_shared<ActOspfRoutesRpc::Input>())
{
    input->parent = this;

    yang_name = "act-ospf-routes"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfRoutesRpc::~ActOspfRoutesRpc()
{
}

bool ActOspfRoutesRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfRoutesRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfRoutesRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-routes";

    return path_buffer.str();

}

const EntityPath ActOspfRoutesRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfRoutesRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfRoutesRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfRoutesRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfRoutesRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ActOspfRoutesRpc::clone_ptr() const
{
    return std::make_shared<ActOspfRoutesRpc>();
}

std::string ActOspfRoutesRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfRoutesRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfRoutesRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ActOspfRoutesRpc::Input::Input()
    :
    route{YType::empty, "route"}
    	,
    instance(std::make_shared<ActOspfRoutesRpc::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospf-routes";
}

ActOspfRoutesRpc::Input::~Input()
{
}

bool ActOspfRoutesRpc::Input::has_data() const
{
    return route.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfRoutesRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(route.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfRoutesRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfRoutesRpc::Input::get_entity_path(Entity* ancestor) const
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

    if (route.is_set || is_set(route.operation)) leaf_name_data.push_back(route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfRoutesRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfRoutesRpc::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfRoutesRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ActOspfRoutesRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route")
    {
        route = value;
    }
}

ActOspfRoutesRpc::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfRoutesRpc::Input::Instance::~Instance()
{
}

bool ActOspfRoutesRpc::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfRoutesRpc::Input::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfRoutesRpc::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfRoutesRpc::Input::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfRoutesRpc::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfRoutesRpc::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfRoutesRpc::Input::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfRedistributionRpc::ActOspfRedistributionRpc()
    :
    input(std::make_shared<ActOspfRedistributionRpc::Input>())
{
    input->parent = this;

    yang_name = "act-ospf-redistribution"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfRedistributionRpc::~ActOspfRedistributionRpc()
{
}

bool ActOspfRedistributionRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfRedistributionRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfRedistributionRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-redistribution";

    return path_buffer.str();

}

const EntityPath ActOspfRedistributionRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfRedistributionRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfRedistributionRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfRedistributionRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfRedistributionRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ActOspfRedistributionRpc::clone_ptr() const
{
    return std::make_shared<ActOspfRedistributionRpc>();
}

std::string ActOspfRedistributionRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfRedistributionRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfRedistributionRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ActOspfRedistributionRpc::Input::Input()
    :
    redistribution{YType::empty, "redistribution"}
    	,
    instance(std::make_shared<ActOspfRedistributionRpc::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospf-redistribution";
}

ActOspfRedistributionRpc::Input::~Input()
{
}

bool ActOspfRedistributionRpc::Input::has_data() const
{
    return redistribution.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfRedistributionRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(redistribution.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfRedistributionRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfRedistributionRpc::Input::get_entity_path(Entity* ancestor) const
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

    if (redistribution.is_set || is_set(redistribution.operation)) leaf_name_data.push_back(redistribution.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfRedistributionRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfRedistributionRpc::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfRedistributionRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ActOspfRedistributionRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "redistribution")
    {
        redistribution = value;
    }
}

ActOspfRedistributionRpc::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfRedistributionRpc::Input::Instance::~Instance()
{
}

bool ActOspfRedistributionRpc::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfRedistributionRpc::Input::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfRedistributionRpc::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfRedistributionRpc::Input::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfRedistributionRpc::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfRedistributionRpc::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfRedistributionRpc::Input::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfStatisticsRpc::ActOspfStatisticsRpc()
    :
    input(std::make_shared<ActOspfStatisticsRpc::Input>())
{
    input->parent = this;

    yang_name = "act-ospf-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfStatisticsRpc::~ActOspfStatisticsRpc()
{
}

bool ActOspfStatisticsRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfStatisticsRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ActOspfStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ActOspfStatisticsRpc>();
}

std::string ActOspfStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ActOspfStatisticsRpc::Input::Input()
    :
    all{YType::empty, "all"},
    interface_name{YType::empty, "interface-name"},
    message_queue{YType::empty, "message-queue"},
    neighbor{YType::empty, "neighbor"},
    spf{YType::empty, "spf"}
    	,
    instance(std::make_shared<ActOspfStatisticsRpc::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospf-statistics";
}

ActOspfStatisticsRpc::Input::~Input()
{
}

bool ActOspfStatisticsRpc::Input::has_data() const
{
    return all.is_set
	|| interface_name.is_set
	|| message_queue.is_set
	|| neighbor.is_set
	|| spf.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfStatisticsRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(interface_name.operation)
	|| is_set(message_queue.operation)
	|| is_set(neighbor.operation)
	|| is_set(spf.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfStatisticsRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsRpc::Input::get_entity_path(Entity* ancestor) const
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

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (message_queue.is_set || is_set(message_queue.operation)) leaf_name_data.push_back(message_queue.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (spf.is_set || is_set(spf.operation)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfStatisticsRpc::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ActOspfStatisticsRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "message-queue")
    {
        message_queue = value;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "spf")
    {
        spf = value;
    }
}

ActOspfStatisticsRpc::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfStatisticsRpc::Input::Instance::~Instance()
{
}

bool ActOspfStatisticsRpc::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfStatisticsRpc::Input::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfStatisticsRpc::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsRpc::Input::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsRpc::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsRpc::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfStatisticsRpc::Input::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfStatisticsNeighborRpc::ActOspfStatisticsNeighborRpc()
    :
    input(std::make_shared<ActOspfStatisticsNeighborRpc::Input>())
{
    input->parent = this;

    yang_name = "act-ospf-statistics-neighbor"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfStatisticsNeighborRpc::~ActOspfStatisticsNeighborRpc()
{
}

bool ActOspfStatisticsNeighborRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfStatisticsNeighborRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfStatisticsNeighborRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics-neighbor";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsNeighborRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfStatisticsNeighborRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfStatisticsNeighborRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsNeighborRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfStatisticsNeighborRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ActOspfStatisticsNeighborRpc::clone_ptr() const
{
    return std::make_shared<ActOspfStatisticsNeighborRpc>();
}

std::string ActOspfStatisticsNeighborRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfStatisticsNeighborRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfStatisticsNeighborRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ActOspfStatisticsNeighborRpc::Input::Input()
    :
    instance(std::make_shared<ActOspfStatisticsNeighborRpc::Input::Instance>())
	,neighbor(std::make_shared<ActOspfStatisticsNeighborRpc::Input::Neighbor>())
{
    instance->parent = this;

    neighbor->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospf-statistics-neighbor";
}

ActOspfStatisticsNeighborRpc::Input::~Input()
{
}

bool ActOspfStatisticsNeighborRpc::Input::has_data() const
{
    return (instance !=  nullptr && instance->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfStatisticsNeighborRpc::Input::has_operation() const
{
    return is_set(operation)
	|| (instance !=  nullptr && instance->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfStatisticsNeighborRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsNeighborRpc::Input::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfStatisticsNeighborRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfStatisticsNeighborRpc::Input::Instance>();
        }
        return instance;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ActOspfStatisticsNeighborRpc::Input::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsNeighborRpc::Input::get_children() const
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

void ActOspfStatisticsNeighborRpc::Input::set_value(const std::string & value_path, std::string value)
{
}

ActOspfStatisticsNeighborRpc::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfStatisticsNeighborRpc::Input::Instance::~Instance()
{
}

bool ActOspfStatisticsNeighborRpc::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfStatisticsNeighborRpc::Input::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfStatisticsNeighborRpc::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsNeighborRpc::Input::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsNeighborRpc::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsNeighborRpc::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfStatisticsNeighborRpc::Input::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfStatisticsNeighborRpc::Input::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_id{YType::str, "neighbor-id"}
{
    yang_name = "neighbor"; yang_parent_name = "input";
}

ActOspfStatisticsNeighborRpc::Input::Neighbor::~Neighbor()
{
}

bool ActOspfStatisticsNeighborRpc::Input::Neighbor::has_data() const
{
    return interface_name.is_set
	|| neighbor_id.is_set;
}

bool ActOspfStatisticsNeighborRpc::Input::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_id.operation);
}

std::string ActOspfStatisticsNeighborRpc::Input::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsNeighborRpc::Input::Neighbor::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsNeighborRpc::Input::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsNeighborRpc::Input::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfStatisticsNeighborRpc::Input::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

ActOspfStatisticsInterfaceRpc::ActOspfStatisticsInterfaceRpc()
    :
    input(std::make_shared<ActOspfStatisticsInterfaceRpc::Input>())
{
    input->parent = this;

    yang_name = "act-ospf-statistics-interface"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfStatisticsInterfaceRpc::~ActOspfStatisticsInterfaceRpc()
{
}

bool ActOspfStatisticsInterfaceRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfStatisticsInterfaceRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfStatisticsInterfaceRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics-interface";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsInterfaceRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfStatisticsInterfaceRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfStatisticsInterfaceRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsInterfaceRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfStatisticsInterfaceRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ActOspfStatisticsInterfaceRpc::clone_ptr() const
{
    return std::make_shared<ActOspfStatisticsInterfaceRpc>();
}

std::string ActOspfStatisticsInterfaceRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfStatisticsInterfaceRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfStatisticsInterfaceRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ActOspfStatisticsInterfaceRpc::Input::Input()
    :
    instance(std::make_shared<ActOspfStatisticsInterfaceRpc::Input::Instance>())
	,interface(std::make_shared<ActOspfStatisticsInterfaceRpc::Input::Interface>())
{
    instance->parent = this;

    interface->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospf-statistics-interface";
}

ActOspfStatisticsInterfaceRpc::Input::~Input()
{
}

bool ActOspfStatisticsInterfaceRpc::Input::has_data() const
{
    return (instance !=  nullptr && instance->has_data())
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfStatisticsInterfaceRpc::Input::has_operation() const
{
    return is_set(operation)
	|| (instance !=  nullptr && instance->has_operation())
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfStatisticsInterfaceRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsInterfaceRpc::Input::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfStatisticsInterfaceRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfStatisticsInterfaceRpc::Input::Instance>();
        }
        return instance;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfStatisticsInterfaceRpc::Input::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsInterfaceRpc::Input::get_children() const
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

void ActOspfStatisticsInterfaceRpc::Input::set_value(const std::string & value_path, std::string value)
{
}

ActOspfStatisticsInterfaceRpc::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfStatisticsInterfaceRpc::Input::Instance::~Instance()
{
}

bool ActOspfStatisticsInterfaceRpc::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfStatisticsInterfaceRpc::Input::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfStatisticsInterfaceRpc::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsInterfaceRpc::Input::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsInterfaceRpc::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsInterfaceRpc::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfStatisticsInterfaceRpc::Input::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfStatisticsInterfaceRpc::Input::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "input";
}

ActOspfStatisticsInterfaceRpc::Input::Interface::~Interface()
{
}

bool ActOspfStatisticsInterfaceRpc::Input::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfStatisticsInterfaceRpc::Input::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfStatisticsInterfaceRpc::Input::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfStatisticsInterfaceRpc::Input::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsInterfaceRpc::Input::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfStatisticsInterfaceRpc::Input::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfStatisticsInterfaceRpc::Input::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ActOspfProcessRpc::ActOspfProcessRpc()
    :
    input(std::make_shared<ActOspfProcessRpc::Input>())
{
    input->parent = this;

    yang_name = "act-ospf-process"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfProcessRpc::~ActOspfProcessRpc()
{
}

bool ActOspfProcessRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfProcessRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfProcessRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-process";

    return path_buffer.str();

}

const EntityPath ActOspfProcessRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfProcessRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfProcessRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfProcessRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfProcessRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ActOspfProcessRpc::clone_ptr() const
{
    return std::make_shared<ActOspfProcessRpc>();
}

std::string ActOspfProcessRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfProcessRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfProcessRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ActOspfProcessRpc::Input::Input()
    :
    process{YType::empty, "process"}
    	,
    instance(std::make_shared<ActOspfProcessRpc::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospf-process";
}

ActOspfProcessRpc::Input::~Input()
{
}

bool ActOspfProcessRpc::Input::has_data() const
{
    return process.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfProcessRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfProcessRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfProcessRpc::Input::get_entity_path(Entity* ancestor) const
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

    if (process.is_set || is_set(process.operation)) leaf_name_data.push_back(process.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfProcessRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfProcessRpc::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfProcessRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ActOspfProcessRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process")
    {
        process = value;
    }
}

ActOspfProcessRpc::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfProcessRpc::Input::Instance::~Instance()
{
}

bool ActOspfProcessRpc::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfProcessRpc::Input::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfProcessRpc::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfProcessRpc::Input::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfProcessRpc::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfProcessRpc::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfProcessRpc::Input::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfInstanceVrfRpc::ActOspfInstanceVrfRpc()
    :
    input(std::make_shared<ActOspfInstanceVrfRpc::Input>())
{
    input->parent = this;

    yang_name = "act-ospf-instance-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfInstanceVrfRpc::~ActOspfInstanceVrfRpc()
{
}

bool ActOspfInstanceVrfRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ActOspfInstanceVrfRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ActOspfInstanceVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ActOspfInstanceVrfRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ActOspfInstanceVrfRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::clone_ptr() const
{
    return std::make_shared<ActOspfInstanceVrfRpc>();
}

std::string ActOspfInstanceVrfRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfInstanceVrfRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfInstanceVrfRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ActOspfInstanceVrfRpc::Input::Input()
    :
    instance(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "act-ospf-instance-vrf";
}

ActOspfInstanceVrfRpc::Input::~Input()
{
}

bool ActOspfInstanceVrfRpc::Input::has_data() const
{
    return (instance !=  nullptr && instance->has_data());
}

bool ActOspfInstanceVrfRpc::Input::has_operation() const
{
    return is_set(operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfInstanceVrfRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ActOspfInstanceVrfRpc::Input::set_value(const std::string & value_path, std::string value)
{
}

ActOspfInstanceVrfRpc::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
    	,
    all(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::All>())
	,all_inclusive(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::AllInclusive>())
	,vrf(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::Vrf>())
{
    all->parent = this;

    all_inclusive->parent = this;

    vrf->parent = this;

    yang_name = "instance"; yang_parent_name = "input";
}

ActOspfInstanceVrfRpc::Input::Instance::~Instance()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::has_data() const
{
    return instance_identifier.is_set
	|| (all !=  nullptr && all->has_data())
	|| (all_inclusive !=  nullptr && all_inclusive->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool ActOspfInstanceVrfRpc::Input::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation)
	|| (all !=  nullptr && all->has_operation())
	|| (all_inclusive !=  nullptr && all_inclusive->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string ActOspfInstanceVrfRpc::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::All>();
        }
        return all;
    }

    if(child_yang_name == "all-inclusive")
    {
        if(all_inclusive == nullptr)
        {
            all_inclusive = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::AllInclusive>();
        }
        return all_inclusive;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::get_children() const
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

void ActOspfInstanceVrfRpc::Input::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfInstanceVrfRpc::Input::Instance::Vrf::Vrf()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"},
    vrf_name{YType::str, "vrf-name"}
    	,
    stats(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats>())
{
    stats->parent = this;

    yang_name = "vrf"; yang_parent_name = "instance";
}

ActOspfInstanceVrfRpc::Input::Instance::Vrf::~Vrf()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::Vrf::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| vrf_name.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ActOspfInstanceVrfRpc::Input::Instance::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation)
	|| is_set(redistribution.operation)
	|| is_set(route.operation)
	|| is_set(vrf_name.operation)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ActOspfInstanceVrfRpc::Input::Instance::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::Vrf::get_entity_path(Entity* ancestor) const
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

    if (process.is_set || is_set(process.operation)) leaf_name_data.push_back(process.get_name_leafdata());
    if (redistribution.is_set || is_set(redistribution.operation)) leaf_name_data.push_back(redistribution.get_name_leafdata());
    if (route.is_set || is_set(route.operation)) leaf_name_data.push_back(route.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ActOspfInstanceVrfRpc::Input::Instance::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process")
    {
        process = value;
    }
    if(value_path == "redistribution")
    {
        redistribution = value;
    }
    if(value_path == "route")
    {
        route = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Stats()
    :
    message_queue{YType::empty, "message-queue"},
    spf{YType::empty, "spf"}
    	,
    interface(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Interface>())
	,neighbor(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor>())
{
    interface->parent = this;

    neighbor->parent = this;

    yang_name = "stats"; yang_parent_name = "vrf";
}

ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::~Stats()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::has_data() const
{
    return message_queue.is_set
	|| spf.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(message_queue.operation)
	|| is_set(spf.operation)
	|| (interface !=  nullptr && interface->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::get_entity_path(Entity* ancestor) const
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

    if (message_queue.is_set || is_set(message_queue.operation)) leaf_name_data.push_back(message_queue.get_name_leafdata());
    if (spf.is_set || is_set(spf.operation)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::get_children() const
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

void ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "message-queue")
    {
        message_queue = value;
    }
    if(value_path == "spf")
    {
        spf = value;
    }
}

ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "stats";
}

ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Interface::~Interface()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface>())
{
    interface->parent = this;

    yang_name = "neighbor"; yang_parent_name = "stats";
}

ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::~Neighbor()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_id.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::get_entity_path(Entity* ancestor) const
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

    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "neighbor";
}

ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface::~Interface()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ActOspfInstanceVrfRpc::Input::Instance::All::All()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"}
    	,
    stats(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::All::Stats>())
{
    stats->parent = this;

    yang_name = "all"; yang_parent_name = "instance";
}

ActOspfInstanceVrfRpc::Input::Instance::All::~All()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::All::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ActOspfInstanceVrfRpc::Input::Instance::All::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation)
	|| is_set(redistribution.operation)
	|| is_set(route.operation)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ActOspfInstanceVrfRpc::Input::Instance::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::All::get_entity_path(Entity* ancestor) const
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

    if (process.is_set || is_set(process.operation)) leaf_name_data.push_back(process.get_name_leafdata());
    if (redistribution.is_set || is_set(redistribution.operation)) leaf_name_data.push_back(redistribution.get_name_leafdata());
    if (route.is_set || is_set(route.operation)) leaf_name_data.push_back(route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::All::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ActOspfInstanceVrfRpc::Input::Instance::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process")
    {
        process = value;
    }
    if(value_path == "redistribution")
    {
        redistribution = value;
    }
    if(value_path == "route")
    {
        route = value;
    }
}

ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Stats()
    :
    message_queue{YType::empty, "message-queue"},
    spf{YType::empty, "spf"}
    	,
    interface(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Interface>())
	,neighbor(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor>())
{
    interface->parent = this;

    neighbor->parent = this;

    yang_name = "stats"; yang_parent_name = "all";
}

ActOspfInstanceVrfRpc::Input::Instance::All::Stats::~Stats()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::All::Stats::has_data() const
{
    return message_queue.is_set
	|| spf.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfInstanceVrfRpc::Input::Instance::All::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(message_queue.operation)
	|| is_set(spf.operation)
	|| (interface !=  nullptr && interface->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfInstanceVrfRpc::Input::Instance::All::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::All::Stats::get_entity_path(Entity* ancestor) const
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

    if (message_queue.is_set || is_set(message_queue.operation)) leaf_name_data.push_back(message_queue.get_name_leafdata());
    if (spf.is_set || is_set(spf.operation)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::All::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::All::Stats::get_children() const
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

void ActOspfInstanceVrfRpc::Input::Instance::All::Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "message-queue")
    {
        message_queue = value;
    }
    if(value_path == "spf")
    {
        spf = value;
    }
}

ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "stats";
}

ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Interface::~Interface()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface>())
{
    interface->parent = this;

    yang_name = "neighbor"; yang_parent_name = "stats";
}

ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::~Neighbor()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_id.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::get_entity_path(Entity* ancestor) const
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

    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "neighbor";
}

ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface::~Interface()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::AllInclusive()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"}
    	,
    stats(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats>())
{
    stats->parent = this;

    yang_name = "all-inclusive"; yang_parent_name = "instance";
}

ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::~AllInclusive()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation)
	|| is_set(redistribution.operation)
	|| is_set(route.operation)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-inclusive";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::get_entity_path(Entity* ancestor) const
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

    if (process.is_set || is_set(process.operation)) leaf_name_data.push_back(process.get_name_leafdata());
    if (redistribution.is_set || is_set(redistribution.operation)) leaf_name_data.push_back(redistribution.get_name_leafdata());
    if (route.is_set || is_set(route.operation)) leaf_name_data.push_back(route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process")
    {
        process = value;
    }
    if(value_path == "redistribution")
    {
        redistribution = value;
    }
    if(value_path == "route")
    {
        route = value;
    }
}

ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Stats()
    :
    message_queue{YType::empty, "message-queue"},
    spf{YType::empty, "spf"}
    	,
    interface(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Interface>())
	,neighbor(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor>())
{
    interface->parent = this;

    neighbor->parent = this;

    yang_name = "stats"; yang_parent_name = "all-inclusive";
}

ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::~Stats()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::has_data() const
{
    return message_queue.is_set
	|| spf.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(message_queue.operation)
	|| is_set(spf.operation)
	|| (interface !=  nullptr && interface->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::get_entity_path(Entity* ancestor) const
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

    if (message_queue.is_set || is_set(message_queue.operation)) leaf_name_data.push_back(message_queue.get_name_leafdata());
    if (spf.is_set || is_set(spf.operation)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::get_children() const
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

void ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "message-queue")
    {
        message_queue = value;
    }
    if(value_path == "spf")
    {
        spf = value;
    }
}

ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "stats";
}

ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Interface::~Interface()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface>())
{
    interface->parent = this;

    yang_name = "neighbor"; yang_parent_name = "stats";
}

ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::~Neighbor()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_id.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::get_entity_path(Entity* ancestor) const
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

    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "neighbor";
}

ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface::~Interface()
{
}

bool ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}


}
}

