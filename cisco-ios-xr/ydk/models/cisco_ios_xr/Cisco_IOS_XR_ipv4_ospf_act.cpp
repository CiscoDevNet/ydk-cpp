
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
    route{YType::empty, "route"}
    	,
    instance(std::make_shared<ActOspfRoutesRpc::Instance>())
{
    instance->parent = this;
    children["instance"] = instance;

    yang_name = "act-ospf-routes"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfRoutesRpc::~ActOspfRoutesRpc()
{
}

bool ActOspfRoutesRpc::has_data() const
{
    return route.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfRoutesRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(route.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfRoutesRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-routes";

    return path_buffer.str();

}

EntityPath ActOspfRoutesRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.operation)) leaf_name_data.push_back(route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfRoutesRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance")
    {
        if(instance != nullptr)
        {
            children["instance"] = instance;
        }
        else
        {
            instance = std::make_shared<ActOspfRoutesRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfRoutesRpc::get_children()
{
    if(children.find("instance") == children.end())
    {
        if(instance != nullptr)
        {
            children["instance"] = instance;
        }
    }

    return children;
}

void ActOspfRoutesRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route")
    {
        route = value;
    }
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

ActOspfRoutesRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "act-ospf-routes";
}

ActOspfRoutesRpc::Instance::~Instance()
{
}

bool ActOspfRoutesRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfRoutesRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfRoutesRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ActOspfRoutesRpc::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfRoutesRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfRoutesRpc::Instance::get_children()
{
    return children;
}

void ActOspfRoutesRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfRedistributionRpc::ActOspfRedistributionRpc()
    :
    redistribution{YType::empty, "redistribution"}
    	,
    instance(std::make_shared<ActOspfRedistributionRpc::Instance>())
{
    instance->parent = this;
    children["instance"] = instance;

    yang_name = "act-ospf-redistribution"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfRedistributionRpc::~ActOspfRedistributionRpc()
{
}

bool ActOspfRedistributionRpc::has_data() const
{
    return redistribution.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfRedistributionRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(redistribution.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfRedistributionRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-redistribution";

    return path_buffer.str();

}

EntityPath ActOspfRedistributionRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redistribution.is_set || is_set(redistribution.operation)) leaf_name_data.push_back(redistribution.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfRedistributionRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance")
    {
        if(instance != nullptr)
        {
            children["instance"] = instance;
        }
        else
        {
            instance = std::make_shared<ActOspfRedistributionRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfRedistributionRpc::get_children()
{
    if(children.find("instance") == children.end())
    {
        if(instance != nullptr)
        {
            children["instance"] = instance;
        }
    }

    return children;
}

void ActOspfRedistributionRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "redistribution")
    {
        redistribution = value;
    }
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

ActOspfRedistributionRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "act-ospf-redistribution";
}

ActOspfRedistributionRpc::Instance::~Instance()
{
}

bool ActOspfRedistributionRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfRedistributionRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfRedistributionRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ActOspfRedistributionRpc::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfRedistributionRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfRedistributionRpc::Instance::get_children()
{
    return children;
}

void ActOspfRedistributionRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfStatisticsRpc::ActOspfStatisticsRpc()
    :
    all{YType::empty, "all"},
    interface_name{YType::empty, "interface-name"},
    message_queue{YType::empty, "message-queue"},
    neighbor{YType::empty, "neighbor"},
    spf{YType::empty, "spf"}
    	,
    instance(std::make_shared<ActOspfStatisticsRpc::Instance>())
{
    instance->parent = this;
    children["instance"] = instance;

    yang_name = "act-ospf-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfStatisticsRpc::~ActOspfStatisticsRpc()
{
}

bool ActOspfStatisticsRpc::has_data() const
{
    return all.is_set
	|| interface_name.is_set
	|| message_queue.is_set
	|| neighbor.is_set
	|| spf.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(interface_name.operation)
	|| is_set(message_queue.operation)
	|| is_set(neighbor.operation)
	|| is_set(spf.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics";

    return path_buffer.str();

}

EntityPath ActOspfStatisticsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (message_queue.is_set || is_set(message_queue.operation)) leaf_name_data.push_back(message_queue.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (spf.is_set || is_set(spf.operation)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance")
    {
        if(instance != nullptr)
        {
            children["instance"] = instance;
        }
        else
        {
            instance = std::make_shared<ActOspfStatisticsRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfStatisticsRpc::get_children()
{
    if(children.find("instance") == children.end())
    {
        if(instance != nullptr)
        {
            children["instance"] = instance;
        }
    }

    return children;
}

void ActOspfStatisticsRpc::set_value(const std::string & value_path, std::string value)
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

ActOspfStatisticsRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "act-ospf-statistics";
}

ActOspfStatisticsRpc::Instance::~Instance()
{
}

bool ActOspfStatisticsRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfStatisticsRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfStatisticsRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ActOspfStatisticsRpc::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfStatisticsRpc::Instance::get_children()
{
    return children;
}

void ActOspfStatisticsRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfStatisticsNeighborRpc::ActOspfStatisticsNeighborRpc()
    :
    instance(std::make_shared<ActOspfStatisticsNeighborRpc::Instance>())
	,neighbor(std::make_shared<ActOspfStatisticsNeighborRpc::Neighbor>())
{
    instance->parent = this;
    children["instance"] = instance;

    neighbor->parent = this;
    children["neighbor"] = neighbor;

    yang_name = "act-ospf-statistics-neighbor"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfStatisticsNeighborRpc::~ActOspfStatisticsNeighborRpc()
{
}

bool ActOspfStatisticsNeighborRpc::has_data() const
{
    return (instance !=  nullptr && instance->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfStatisticsNeighborRpc::has_operation() const
{
    return is_set(operation)
	|| (instance !=  nullptr && instance->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfStatisticsNeighborRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics-neighbor";

    return path_buffer.str();

}

EntityPath ActOspfStatisticsNeighborRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsNeighborRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance")
    {
        if(instance != nullptr)
        {
            children["instance"] = instance;
        }
        else
        {
            instance = std::make_shared<ActOspfStatisticsNeighborRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
        else
        {
            neighbor = std::make_shared<ActOspfStatisticsNeighborRpc::Neighbor>();
            neighbor->parent = this;
            children["neighbor"] = neighbor;
        }
        return children.at("neighbor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfStatisticsNeighborRpc::get_children()
{
    if(children.find("instance") == children.end())
    {
        if(instance != nullptr)
        {
            children["instance"] = instance;
        }
    }

    if(children.find("neighbor") == children.end())
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
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

ActOspfStatisticsNeighborRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "act-ospf-statistics-neighbor";
}

ActOspfStatisticsNeighborRpc::Instance::~Instance()
{
}

bool ActOspfStatisticsNeighborRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfStatisticsNeighborRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfStatisticsNeighborRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ActOspfStatisticsNeighborRpc::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsNeighborRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfStatisticsNeighborRpc::Instance::get_children()
{
    return children;
}

void ActOspfStatisticsNeighborRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfStatisticsNeighborRpc::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_id{YType::str, "neighbor-id"}
{
    yang_name = "neighbor"; yang_parent_name = "act-ospf-statistics-neighbor";
}

ActOspfStatisticsNeighborRpc::Neighbor::~Neighbor()
{
}

bool ActOspfStatisticsNeighborRpc::Neighbor::has_data() const
{
    return interface_name.is_set
	|| neighbor_id.is_set;
}

bool ActOspfStatisticsNeighborRpc::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_id.operation);
}

std::string ActOspfStatisticsNeighborRpc::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath ActOspfStatisticsNeighborRpc::Neighbor::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsNeighborRpc::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfStatisticsNeighborRpc::Neighbor::get_children()
{
    return children;
}

void ActOspfStatisticsNeighborRpc::Neighbor::set_value(const std::string & value_path, std::string value)
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
    instance(std::make_shared<ActOspfStatisticsInterfaceRpc::Instance>())
	,interface(std::make_shared<ActOspfStatisticsInterfaceRpc::Interface>())
{
    instance->parent = this;
    children["instance"] = instance;

    interface->parent = this;
    children["interface"] = interface;

    yang_name = "act-ospf-statistics-interface"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfStatisticsInterfaceRpc::~ActOspfStatisticsInterfaceRpc()
{
}

bool ActOspfStatisticsInterfaceRpc::has_data() const
{
    return (instance !=  nullptr && instance->has_data())
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfStatisticsInterfaceRpc::has_operation() const
{
    return is_set(operation)
	|| (instance !=  nullptr && instance->has_operation())
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfStatisticsInterfaceRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-statistics-interface";

    return path_buffer.str();

}

EntityPath ActOspfStatisticsInterfaceRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsInterfaceRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance")
    {
        if(instance != nullptr)
        {
            children["instance"] = instance;
        }
        else
        {
            instance = std::make_shared<ActOspfStatisticsInterfaceRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    if(child_yang_name == "interface")
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
        else
        {
            interface = std::make_shared<ActOspfStatisticsInterfaceRpc::Interface>();
            interface->parent = this;
            children["interface"] = interface;
        }
        return children.at("interface");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfStatisticsInterfaceRpc::get_children()
{
    if(children.find("instance") == children.end())
    {
        if(instance != nullptr)
        {
            children["instance"] = instance;
        }
    }

    if(children.find("interface") == children.end())
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
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

ActOspfStatisticsInterfaceRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "act-ospf-statistics-interface";
}

ActOspfStatisticsInterfaceRpc::Instance::~Instance()
{
}

bool ActOspfStatisticsInterfaceRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfStatisticsInterfaceRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfStatisticsInterfaceRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ActOspfStatisticsInterfaceRpc::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsInterfaceRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfStatisticsInterfaceRpc::Instance::get_children()
{
    return children;
}

void ActOspfStatisticsInterfaceRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfStatisticsInterfaceRpc::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "act-ospf-statistics-interface";
}

ActOspfStatisticsInterfaceRpc::Interface::~Interface()
{
}

bool ActOspfStatisticsInterfaceRpc::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfStatisticsInterfaceRpc::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfStatisticsInterfaceRpc::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath ActOspfStatisticsInterfaceRpc::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfStatisticsInterfaceRpc::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfStatisticsInterfaceRpc::Interface::get_children()
{
    return children;
}

void ActOspfStatisticsInterfaceRpc::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ActOspfProcessRpc::ActOspfProcessRpc()
    :
    process{YType::empty, "process"}
    	,
    instance(std::make_shared<ActOspfProcessRpc::Instance>())
{
    instance->parent = this;
    children["instance"] = instance;

    yang_name = "act-ospf-process"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfProcessRpc::~ActOspfProcessRpc()
{
}

bool ActOspfProcessRpc::has_data() const
{
    return process.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfProcessRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfProcessRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-process";

    return path_buffer.str();

}

EntityPath ActOspfProcessRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.operation)) leaf_name_data.push_back(process.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfProcessRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance")
    {
        if(instance != nullptr)
        {
            children["instance"] = instance;
        }
        else
        {
            instance = std::make_shared<ActOspfProcessRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfProcessRpc::get_children()
{
    if(children.find("instance") == children.end())
    {
        if(instance != nullptr)
        {
            children["instance"] = instance;
        }
    }

    return children;
}

void ActOspfProcessRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process")
    {
        process = value;
    }
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

ActOspfProcessRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "act-ospf-process";
}

ActOspfProcessRpc::Instance::~Instance()
{
}

bool ActOspfProcessRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfProcessRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfProcessRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ActOspfProcessRpc::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfProcessRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfProcessRpc::Instance::get_children()
{
    return children;
}

void ActOspfProcessRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfInstanceVrfRpc::ActOspfInstanceVrfRpc()
    :
    instance(std::make_shared<ActOspfInstanceVrfRpc::Instance>())
{
    instance->parent = this;
    children["instance"] = instance;

    yang_name = "act-ospf-instance-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-ospf-act";
}

ActOspfInstanceVrfRpc::~ActOspfInstanceVrfRpc()
{
}

bool ActOspfInstanceVrfRpc::has_data() const
{
    return (instance !=  nullptr && instance->has_data());
}

bool ActOspfInstanceVrfRpc::has_operation() const
{
    return is_set(operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfInstanceVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance")
    {
        if(instance != nullptr)
        {
            children["instance"] = instance;
        }
        else
        {
            instance = std::make_shared<ActOspfInstanceVrfRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::get_children()
{
    if(children.find("instance") == children.end())
    {
        if(instance != nullptr)
        {
            children["instance"] = instance;
        }
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

ActOspfInstanceVrfRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
    	,
    all(std::make_shared<ActOspfInstanceVrfRpc::Instance::All>())
	,all_inclusive(std::make_shared<ActOspfInstanceVrfRpc::Instance::AllInclusive>())
	,vrf(std::make_shared<ActOspfInstanceVrfRpc::Instance::Vrf>())
{
    all->parent = this;
    children["all"] = all;

    all_inclusive->parent = this;
    children["all-inclusive"] = all_inclusive;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "instance"; yang_parent_name = "act-ospf-instance-vrf";
}

ActOspfInstanceVrfRpc::Instance::~Instance()
{
}

bool ActOspfInstanceVrfRpc::Instance::has_data() const
{
    return instance_identifier.is_set
	|| (all !=  nullptr && all->has_data())
	|| (all_inclusive !=  nullptr && all_inclusive->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool ActOspfInstanceVrfRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation)
	|| (all !=  nullptr && all->has_operation())
	|| (all_inclusive !=  nullptr && all_inclusive->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string ActOspfInstanceVrfRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all")
    {
        if(all != nullptr)
        {
            children["all"] = all;
        }
        else
        {
            all = std::make_shared<ActOspfInstanceVrfRpc::Instance::All>();
            all->parent = this;
            children["all"] = all;
        }
        return children.at("all");
    }

    if(child_yang_name == "all-inclusive")
    {
        if(all_inclusive != nullptr)
        {
            children["all-inclusive"] = all_inclusive;
        }
        else
        {
            all_inclusive = std::make_shared<ActOspfInstanceVrfRpc::Instance::AllInclusive>();
            all_inclusive->parent = this;
            children["all-inclusive"] = all_inclusive;
        }
        return children.at("all-inclusive");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<ActOspfInstanceVrfRpc::Instance::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::get_children()
{
    if(children.find("all") == children.end())
    {
        if(all != nullptr)
        {
            children["all"] = all;
        }
    }

    if(children.find("all-inclusive") == children.end())
    {
        if(all_inclusive != nullptr)
        {
            children["all-inclusive"] = all_inclusive;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void ActOspfInstanceVrfRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfInstanceVrfRpc::Instance::Vrf::Vrf()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"},
    vrf_name{YType::str, "vrf-name"}
    	,
    stats(std::make_shared<ActOspfInstanceVrfRpc::Instance::Vrf::Stats>())
{
    stats->parent = this;
    children["stats"] = stats;

    yang_name = "vrf"; yang_parent_name = "instance";
}

ActOspfInstanceVrfRpc::Instance::Vrf::~Vrf()
{
}

bool ActOspfInstanceVrfRpc::Instance::Vrf::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| vrf_name.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ActOspfInstanceVrfRpc::Instance::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation)
	|| is_set(redistribution.operation)
	|| is_set(route.operation)
	|| is_set(vrf_name.operation)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ActOspfInstanceVrfRpc::Instance::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/instance/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stats")
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
        else
        {
            stats = std::make_shared<ActOspfInstanceVrfRpc::Instance::Vrf::Stats>();
            stats->parent = this;
            children["stats"] = stats;
        }
        return children.at("stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::Vrf::get_children()
{
    if(children.find("stats") == children.end())
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
    }

    return children;
}

void ActOspfInstanceVrfRpc::Instance::Vrf::set_value(const std::string & value_path, std::string value)
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

ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Stats()
    :
    message_queue{YType::empty, "message-queue"},
    spf{YType::empty, "spf"}
    	,
    interface(std::make_shared<ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Interface>())
	,neighbor(std::make_shared<ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor>())
{
    interface->parent = this;
    children["interface"] = interface;

    neighbor->parent = this;
    children["neighbor"] = neighbor;

    yang_name = "stats"; yang_parent_name = "vrf";
}

ActOspfInstanceVrfRpc::Instance::Vrf::Stats::~Stats()
{
}

bool ActOspfInstanceVrfRpc::Instance::Vrf::Stats::has_data() const
{
    return message_queue.is_set
	|| spf.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfInstanceVrfRpc::Instance::Vrf::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(message_queue.operation)
	|| is_set(spf.operation)
	|| (interface !=  nullptr && interface->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfInstanceVrfRpc::Instance::Vrf::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::Vrf::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/instance/vrf/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::Vrf::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
        else
        {
            interface = std::make_shared<ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Interface>();
            interface->parent = this;
            children["interface"] = interface;
        }
        return children.at("interface");
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
        else
        {
            neighbor = std::make_shared<ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor>();
            neighbor->parent = this;
            children["neighbor"] = neighbor;
        }
        return children.at("neighbor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::Vrf::Stats::get_children()
{
    if(children.find("interface") == children.end())
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
    }

    if(children.find("neighbor") == children.end())
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
    }

    return children;
}

void ActOspfInstanceVrfRpc::Instance::Vrf::Stats::set_value(const std::string & value_path, std::string value)
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

ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "stats";
}

ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Interface::~Interface()
{
}

bool ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/instance/vrf/stats/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Interface::get_children()
{
    return children;
}

void ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface>())
{
    interface->parent = this;
    children["interface"] = interface;

    yang_name = "neighbor"; yang_parent_name = "stats";
}

ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::~Neighbor()
{
}

bool ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_id.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/instance/vrf/stats/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
        else
        {
            interface = std::make_shared<ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface>();
            interface->parent = this;
            children["interface"] = interface;
        }
        return children.at("interface");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::get_children()
{
    if(children.find("interface") == children.end())
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
    }

    return children;
}

void ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "neighbor";
}

ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::~Interface()
{
}

bool ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/instance/vrf/stats/neighbor/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::get_children()
{
    return children;
}

void ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ActOspfInstanceVrfRpc::Instance::All::All()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"}
    	,
    stats(std::make_shared<ActOspfInstanceVrfRpc::Instance::All::Stats>())
{
    stats->parent = this;
    children["stats"] = stats;

    yang_name = "all"; yang_parent_name = "instance";
}

ActOspfInstanceVrfRpc::Instance::All::~All()
{
}

bool ActOspfInstanceVrfRpc::Instance::All::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ActOspfInstanceVrfRpc::Instance::All::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation)
	|| is_set(redistribution.operation)
	|| is_set(route.operation)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ActOspfInstanceVrfRpc::Instance::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/instance/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stats")
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
        else
        {
            stats = std::make_shared<ActOspfInstanceVrfRpc::Instance::All::Stats>();
            stats->parent = this;
            children["stats"] = stats;
        }
        return children.at("stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::All::get_children()
{
    if(children.find("stats") == children.end())
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
    }

    return children;
}

void ActOspfInstanceVrfRpc::Instance::All::set_value(const std::string & value_path, std::string value)
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

ActOspfInstanceVrfRpc::Instance::All::Stats::Stats()
    :
    message_queue{YType::empty, "message-queue"},
    spf{YType::empty, "spf"}
    	,
    interface(std::make_shared<ActOspfInstanceVrfRpc::Instance::All::Stats::Interface>())
	,neighbor(std::make_shared<ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor>())
{
    interface->parent = this;
    children["interface"] = interface;

    neighbor->parent = this;
    children["neighbor"] = neighbor;

    yang_name = "stats"; yang_parent_name = "all";
}

ActOspfInstanceVrfRpc::Instance::All::Stats::~Stats()
{
}

bool ActOspfInstanceVrfRpc::Instance::All::Stats::has_data() const
{
    return message_queue.is_set
	|| spf.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfInstanceVrfRpc::Instance::All::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(message_queue.operation)
	|| is_set(spf.operation)
	|| (interface !=  nullptr && interface->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfInstanceVrfRpc::Instance::All::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::All::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/instance/all/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::All::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
        else
        {
            interface = std::make_shared<ActOspfInstanceVrfRpc::Instance::All::Stats::Interface>();
            interface->parent = this;
            children["interface"] = interface;
        }
        return children.at("interface");
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
        else
        {
            neighbor = std::make_shared<ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor>();
            neighbor->parent = this;
            children["neighbor"] = neighbor;
        }
        return children.at("neighbor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::All::Stats::get_children()
{
    if(children.find("interface") == children.end())
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
    }

    if(children.find("neighbor") == children.end())
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
    }

    return children;
}

void ActOspfInstanceVrfRpc::Instance::All::Stats::set_value(const std::string & value_path, std::string value)
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

ActOspfInstanceVrfRpc::Instance::All::Stats::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "stats";
}

ActOspfInstanceVrfRpc::Instance::All::Stats::Interface::~Interface()
{
}

bool ActOspfInstanceVrfRpc::Instance::All::Stats::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrfRpc::Instance::All::Stats::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfInstanceVrfRpc::Instance::All::Stats::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::All::Stats::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/instance/all/stats/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::All::Stats::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::All::Stats::Interface::get_children()
{
    return children;
}

void ActOspfInstanceVrfRpc::Instance::All::Stats::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Interface>())
{
    interface->parent = this;
    children["interface"] = interface;

    yang_name = "neighbor"; yang_parent_name = "stats";
}

ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::~Neighbor()
{
}

bool ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_id.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/instance/all/stats/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
        else
        {
            interface = std::make_shared<ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Interface>();
            interface->parent = this;
            children["interface"] = interface;
        }
        return children.at("interface");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::get_children()
{
    if(children.find("interface") == children.end())
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
    }

    return children;
}

void ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "neighbor";
}

ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::~Interface()
{
}

bool ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/instance/all/stats/neighbor/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::get_children()
{
    return children;
}

void ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ActOspfInstanceVrfRpc::Instance::AllInclusive::AllInclusive()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"}
    	,
    stats(std::make_shared<ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats>())
{
    stats->parent = this;
    children["stats"] = stats;

    yang_name = "all-inclusive"; yang_parent_name = "instance";
}

ActOspfInstanceVrfRpc::Instance::AllInclusive::~AllInclusive()
{
}

bool ActOspfInstanceVrfRpc::Instance::AllInclusive::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ActOspfInstanceVrfRpc::Instance::AllInclusive::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation)
	|| is_set(redistribution.operation)
	|| is_set(route.operation)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ActOspfInstanceVrfRpc::Instance::AllInclusive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-inclusive";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::AllInclusive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/instance/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::AllInclusive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stats")
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
        else
        {
            stats = std::make_shared<ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats>();
            stats->parent = this;
            children["stats"] = stats;
        }
        return children.at("stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::AllInclusive::get_children()
{
    if(children.find("stats") == children.end())
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
    }

    return children;
}

void ActOspfInstanceVrfRpc::Instance::AllInclusive::set_value(const std::string & value_path, std::string value)
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

ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Stats()
    :
    message_queue{YType::empty, "message-queue"},
    spf{YType::empty, "spf"}
    	,
    interface(std::make_shared<ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Interface>())
	,neighbor(std::make_shared<ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor>())
{
    interface->parent = this;
    children["interface"] = interface;

    neighbor->parent = this;
    children["neighbor"] = neighbor;

    yang_name = "stats"; yang_parent_name = "all-inclusive";
}

ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::~Stats()
{
}

bool ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::has_data() const
{
    return message_queue.is_set
	|| spf.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(message_queue.operation)
	|| is_set(spf.operation)
	|| (interface !=  nullptr && interface->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/instance/all-inclusive/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
        else
        {
            interface = std::make_shared<ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Interface>();
            interface->parent = this;
            children["interface"] = interface;
        }
        return children.at("interface");
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
        else
        {
            neighbor = std::make_shared<ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor>();
            neighbor->parent = this;
            children["neighbor"] = neighbor;
        }
        return children.at("neighbor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::get_children()
{
    if(children.find("interface") == children.end())
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
    }

    if(children.find("neighbor") == children.end())
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
    }

    return children;
}

void ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::set_value(const std::string & value_path, std::string value)
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

ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "stats";
}

ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Interface::~Interface()
{
}

bool ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/instance/all-inclusive/stats/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Interface::get_children()
{
    return children;
}

void ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface>())
{
    interface->parent = this;
    children["interface"] = interface;

    yang_name = "neighbor"; yang_parent_name = "stats";
}

ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::~Neighbor()
{
}

bool ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_id.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/instance/all-inclusive/stats/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
        else
        {
            interface = std::make_shared<ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface>();
            interface->parent = this;
            children["interface"] = interface;
        }
        return children.at("interface");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::get_children()
{
    if(children.find("interface") == children.end())
    {
        if(interface != nullptr)
        {
            children["interface"] = interface;
        }
    }

    return children;
}

void ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "neighbor";
}

ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::~Interface()
{
}

bool ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ospf-act:act-ospf-instance-vrf/instance/all-inclusive/stats/neighbor/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::get_children()
{
    return children;
}

void ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}


}
}

