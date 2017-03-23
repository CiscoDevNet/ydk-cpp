
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_act.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ospfv3_act {

ActOspfv3RoutesRpc::ActOspfv3RoutesRpc()
    :
    route{YType::empty, "route"}
    	,
    instance(std::make_shared<ActOspfv3RoutesRpc::Instance>())
{
    instance->parent = this;
    children["instance"] = instance;

    yang_name = "act-ospfv3-routes"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act";
}

ActOspfv3RoutesRpc::~ActOspfv3RoutesRpc()
{
}

bool ActOspfv3RoutesRpc::has_data() const
{
    return route.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfv3RoutesRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(route.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfv3RoutesRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-routes";

    return path_buffer.str();

}

EntityPath ActOspfv3RoutesRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfv3RoutesRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            instance = std::make_shared<ActOspfv3RoutesRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3RoutesRpc::get_children()
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

void ActOspfv3RoutesRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route")
    {
        route = value;
    }
}

std::shared_ptr<Entity> ActOspfv3RoutesRpc::clone_ptr() const
{
    return std::make_shared<ActOspfv3RoutesRpc>();
}

std::string ActOspfv3RoutesRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfv3RoutesRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfv3RoutesRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ActOspfv3RoutesRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "act-ospfv3-routes";
}

ActOspfv3RoutesRpc::Instance::~Instance()
{
}

bool ActOspfv3RoutesRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfv3RoutesRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfv3RoutesRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ActOspfv3RoutesRpc::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3RoutesRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3RoutesRpc::Instance::get_children()
{
    return children;
}

void ActOspfv3RoutesRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfv3RedistributionRpc::ActOspfv3RedistributionRpc()
    :
    redistribution{YType::empty, "redistribution"}
    	,
    instance(std::make_shared<ActOspfv3RedistributionRpc::Instance>())
{
    instance->parent = this;
    children["instance"] = instance;

    yang_name = "act-ospfv3-redistribution"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act";
}

ActOspfv3RedistributionRpc::~ActOspfv3RedistributionRpc()
{
}

bool ActOspfv3RedistributionRpc::has_data() const
{
    return redistribution.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfv3RedistributionRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(redistribution.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfv3RedistributionRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-redistribution";

    return path_buffer.str();

}

EntityPath ActOspfv3RedistributionRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfv3RedistributionRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            instance = std::make_shared<ActOspfv3RedistributionRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3RedistributionRpc::get_children()
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

void ActOspfv3RedistributionRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "redistribution")
    {
        redistribution = value;
    }
}

std::shared_ptr<Entity> ActOspfv3RedistributionRpc::clone_ptr() const
{
    return std::make_shared<ActOspfv3RedistributionRpc>();
}

std::string ActOspfv3RedistributionRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfv3RedistributionRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfv3RedistributionRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ActOspfv3RedistributionRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "act-ospfv3-redistribution";
}

ActOspfv3RedistributionRpc::Instance::~Instance()
{
}

bool ActOspfv3RedistributionRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfv3RedistributionRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfv3RedistributionRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ActOspfv3RedistributionRpc::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3RedistributionRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3RedistributionRpc::Instance::get_children()
{
    return children;
}

void ActOspfv3RedistributionRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfv3ProcessRpc::ActOspfv3ProcessRpc()
    :
    process{YType::empty, "process"}
    	,
    instance(std::make_shared<ActOspfv3ProcessRpc::Instance>())
{
    instance->parent = this;
    children["instance"] = instance;

    yang_name = "act-ospfv3-process"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act";
}

ActOspfv3ProcessRpc::~ActOspfv3ProcessRpc()
{
}

bool ActOspfv3ProcessRpc::has_data() const
{
    return process.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfv3ProcessRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfv3ProcessRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-process";

    return path_buffer.str();

}

EntityPath ActOspfv3ProcessRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfv3ProcessRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            instance = std::make_shared<ActOspfv3ProcessRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3ProcessRpc::get_children()
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

void ActOspfv3ProcessRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process")
    {
        process = value;
    }
}

std::shared_ptr<Entity> ActOspfv3ProcessRpc::clone_ptr() const
{
    return std::make_shared<ActOspfv3ProcessRpc>();
}

std::string ActOspfv3ProcessRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfv3ProcessRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfv3ProcessRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ActOspfv3ProcessRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "act-ospfv3-process";
}

ActOspfv3ProcessRpc::Instance::~Instance()
{
}

bool ActOspfv3ProcessRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfv3ProcessRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfv3ProcessRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ActOspfv3ProcessRpc::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3ProcessRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3ProcessRpc::Instance::get_children()
{
    return children;
}

void ActOspfv3ProcessRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfv3StatisticsNeighborRpc::ActOspfv3StatisticsNeighborRpc()
    :
    instance(std::make_shared<ActOspfv3StatisticsNeighborRpc::Instance>())
	,neighbor(std::make_shared<ActOspfv3StatisticsNeighborRpc::Neighbor>())
{
    instance->parent = this;
    children["instance"] = instance;

    neighbor->parent = this;
    children["neighbor"] = neighbor;

    yang_name = "act-ospfv3-statistics-neighbor"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act";
}

ActOspfv3StatisticsNeighborRpc::~ActOspfv3StatisticsNeighborRpc()
{
}

bool ActOspfv3StatisticsNeighborRpc::has_data() const
{
    return (instance !=  nullptr && instance->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfv3StatisticsNeighborRpc::has_operation() const
{
    return is_set(operation)
	|| (instance !=  nullptr && instance->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfv3StatisticsNeighborRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-statistics-neighbor";

    return path_buffer.str();

}

EntityPath ActOspfv3StatisticsNeighborRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfv3StatisticsNeighborRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            instance = std::make_shared<ActOspfv3StatisticsNeighborRpc::Instance>();
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
            neighbor = std::make_shared<ActOspfv3StatisticsNeighborRpc::Neighbor>();
            neighbor->parent = this;
            children["neighbor"] = neighbor;
        }
        return children.at("neighbor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3StatisticsNeighborRpc::get_children()
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

void ActOspfv3StatisticsNeighborRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ActOspfv3StatisticsNeighborRpc::clone_ptr() const
{
    return std::make_shared<ActOspfv3StatisticsNeighborRpc>();
}

std::string ActOspfv3StatisticsNeighborRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfv3StatisticsNeighborRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfv3StatisticsNeighborRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ActOspfv3StatisticsNeighborRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "act-ospfv3-statistics-neighbor";
}

ActOspfv3StatisticsNeighborRpc::Instance::~Instance()
{
}

bool ActOspfv3StatisticsNeighborRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfv3StatisticsNeighborRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfv3StatisticsNeighborRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ActOspfv3StatisticsNeighborRpc::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3StatisticsNeighborRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3StatisticsNeighborRpc::Instance::get_children()
{
    return children;
}

void ActOspfv3StatisticsNeighborRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfv3StatisticsNeighborRpc::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_id{YType::str, "neighbor-id"}
{
    yang_name = "neighbor"; yang_parent_name = "act-ospfv3-statistics-neighbor";
}

ActOspfv3StatisticsNeighborRpc::Neighbor::~Neighbor()
{
}

bool ActOspfv3StatisticsNeighborRpc::Neighbor::has_data() const
{
    return interface_name.is_set
	|| neighbor_id.is_set;
}

bool ActOspfv3StatisticsNeighborRpc::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_id.operation);
}

std::string ActOspfv3StatisticsNeighborRpc::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath ActOspfv3StatisticsNeighborRpc::Neighbor::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3StatisticsNeighborRpc::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3StatisticsNeighborRpc::Neighbor::get_children()
{
    return children;
}

void ActOspfv3StatisticsNeighborRpc::Neighbor::set_value(const std::string & value_path, std::string value)
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

ActOspfv3StatisticsRpc::ActOspfv3StatisticsRpc()
    :
    neighbor{YType::empty, "neighbor"},
    prefix_priority{YType::empty, "prefix-priority"},
    spf{YType::empty, "spf"}
    	,
    instance(std::make_shared<ActOspfv3StatisticsRpc::Instance>())
{
    instance->parent = this;
    children["instance"] = instance;

    yang_name = "act-ospfv3-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act";
}

ActOspfv3StatisticsRpc::~ActOspfv3StatisticsRpc()
{
}

bool ActOspfv3StatisticsRpc::has_data() const
{
    return neighbor.is_set
	|| prefix_priority.is_set
	|| spf.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ActOspfv3StatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor.operation)
	|| is_set(prefix_priority.operation)
	|| is_set(spf.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfv3StatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-statistics";

    return path_buffer.str();

}

EntityPath ActOspfv3StatisticsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (prefix_priority.is_set || is_set(prefix_priority.operation)) leaf_name_data.push_back(prefix_priority.get_name_leafdata());
    if (spf.is_set || is_set(spf.operation)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3StatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            instance = std::make_shared<ActOspfv3StatisticsRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3StatisticsRpc::get_children()
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

void ActOspfv3StatisticsRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "prefix-priority")
    {
        prefix_priority = value;
    }
    if(value_path == "spf")
    {
        spf = value;
    }
}

std::shared_ptr<Entity> ActOspfv3StatisticsRpc::clone_ptr() const
{
    return std::make_shared<ActOspfv3StatisticsRpc>();
}

std::string ActOspfv3StatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfv3StatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfv3StatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ActOspfv3StatisticsRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "act-ospfv3-statistics";
}

ActOspfv3StatisticsRpc::Instance::~Instance()
{
}

bool ActOspfv3StatisticsRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ActOspfv3StatisticsRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ActOspfv3StatisticsRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ActOspfv3StatisticsRpc::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3StatisticsRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3StatisticsRpc::Instance::get_children()
{
    return children;
}

void ActOspfv3StatisticsRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfv3InstanceVrfRpc::ActOspfv3InstanceVrfRpc()
    :
    instance(std::make_shared<ActOspfv3InstanceVrfRpc::Instance>())
{
    instance->parent = this;
    children["instance"] = instance;

    yang_name = "act-ospfv3-instance-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act";
}

ActOspfv3InstanceVrfRpc::~ActOspfv3InstanceVrfRpc()
{
}

bool ActOspfv3InstanceVrfRpc::has_data() const
{
    return (instance !=  nullptr && instance->has_data());
}

bool ActOspfv3InstanceVrfRpc::has_operation() const
{
    return is_set(operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ActOspfv3InstanceVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf";

    return path_buffer.str();

}

EntityPath ActOspfv3InstanceVrfRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ActOspfv3InstanceVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            instance = std::make_shared<ActOspfv3InstanceVrfRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3InstanceVrfRpc::get_children()
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

void ActOspfv3InstanceVrfRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ActOspfv3InstanceVrfRpc::clone_ptr() const
{
    return std::make_shared<ActOspfv3InstanceVrfRpc>();
}

std::string ActOspfv3InstanceVrfRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ActOspfv3InstanceVrfRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ActOspfv3InstanceVrfRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ActOspfv3InstanceVrfRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
    	,
    all(std::make_shared<ActOspfv3InstanceVrfRpc::Instance::All>())
	,all_inclusive(std::make_shared<ActOspfv3InstanceVrfRpc::Instance::AllInclusive>())
	,vrf(std::make_shared<ActOspfv3InstanceVrfRpc::Instance::Vrf>())
{
    all->parent = this;
    children["all"] = all;

    all_inclusive->parent = this;
    children["all-inclusive"] = all_inclusive;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "instance"; yang_parent_name = "act-ospfv3-instance-vrf";
}

ActOspfv3InstanceVrfRpc::Instance::~Instance()
{
}

bool ActOspfv3InstanceVrfRpc::Instance::has_data() const
{
    return instance_identifier.is_set
	|| (all !=  nullptr && all->has_data())
	|| (all_inclusive !=  nullptr && all_inclusive->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool ActOspfv3InstanceVrfRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation)
	|| (all !=  nullptr && all->has_operation())
	|| (all_inclusive !=  nullptr && all_inclusive->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string ActOspfv3InstanceVrfRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ActOspfv3InstanceVrfRpc::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.operation)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrfRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            all = std::make_shared<ActOspfv3InstanceVrfRpc::Instance::All>();
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
            all_inclusive = std::make_shared<ActOspfv3InstanceVrfRpc::Instance::AllInclusive>();
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
            vrf = std::make_shared<ActOspfv3InstanceVrfRpc::Instance::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3InstanceVrfRpc::Instance::get_children()
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

void ActOspfv3InstanceVrfRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ActOspfv3InstanceVrfRpc::Instance::Vrf::Vrf()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"},
    vrf_name{YType::str, "vrf-name"}
    	,
    stats(std::make_shared<ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats>())
{
    stats->parent = this;
    children["stats"] = stats;

    yang_name = "vrf"; yang_parent_name = "instance";
}

ActOspfv3InstanceVrfRpc::Instance::Vrf::~Vrf()
{
}

bool ActOspfv3InstanceVrfRpc::Instance::Vrf::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| vrf_name.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ActOspfv3InstanceVrfRpc::Instance::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation)
	|| is_set(redistribution.operation)
	|| is_set(route.operation)
	|| is_set(vrf_name.operation)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ActOspfv3InstanceVrfRpc::Instance::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath ActOspfv3InstanceVrfRpc::Instance::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/instance/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfv3InstanceVrfRpc::Instance::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            stats = std::make_shared<ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats>();
            stats->parent = this;
            children["stats"] = stats;
        }
        return children.at("stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3InstanceVrfRpc::Instance::Vrf::get_children()
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

void ActOspfv3InstanceVrfRpc::Instance::Vrf::set_value(const std::string & value_path, std::string value)
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

ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Stats()
    :
    prefix_priority{YType::empty, "prefix-priority"},
    spf{YType::empty, "spf"}
    	,
    neighbor(std::make_shared<ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor>())
{
    neighbor->parent = this;
    children["neighbor"] = neighbor;

    yang_name = "stats"; yang_parent_name = "vrf";
}

ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::~Stats()
{
}

bool ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::has_data() const
{
    return prefix_priority.is_set
	|| spf.is_set
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_priority.operation)
	|| is_set(spf.operation)
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

EntityPath ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/instance/vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_priority.is_set || is_set(prefix_priority.operation)) leaf_name_data.push_back(prefix_priority.get_name_leafdata());
    if (spf.is_set || is_set(spf.operation)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
        else
        {
            neighbor = std::make_shared<ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor>();
            neighbor->parent = this;
            children["neighbor"] = neighbor;
        }
        return children.at("neighbor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::get_children()
{
    if(children.find("neighbor") == children.end())
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
    }

    return children;
}

void ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-priority")
    {
        prefix_priority = value;
    }
    if(value_path == "spf")
    {
        spf = value;
    }
}

ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface>())
{
    interface->parent = this;
    children["interface"] = interface;

    yang_name = "neighbor"; yang_parent_name = "stats";
}

ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::~Neighbor()
{
}

bool ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_id.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/instance/vrf/stats/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            interface = std::make_shared<ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface>();
            interface->parent = this;
            children["interface"] = interface;
        }
        return children.at("interface");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::get_children()
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

void ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "neighbor";
}

ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::~Interface()
{
}

bool ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/instance/vrf/stats/neighbor/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::get_children()
{
    return children;
}

void ActOspfv3InstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ActOspfv3InstanceVrfRpc::Instance::All::All()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"}
    	,
    stats(std::make_shared<ActOspfv3InstanceVrfRpc::Instance::All::Stats>())
{
    stats->parent = this;
    children["stats"] = stats;

    yang_name = "all"; yang_parent_name = "instance";
}

ActOspfv3InstanceVrfRpc::Instance::All::~All()
{
}

bool ActOspfv3InstanceVrfRpc::Instance::All::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ActOspfv3InstanceVrfRpc::Instance::All::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation)
	|| is_set(redistribution.operation)
	|| is_set(route.operation)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ActOspfv3InstanceVrfRpc::Instance::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

EntityPath ActOspfv3InstanceVrfRpc::Instance::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/instance/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfv3InstanceVrfRpc::Instance::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            stats = std::make_shared<ActOspfv3InstanceVrfRpc::Instance::All::Stats>();
            stats->parent = this;
            children["stats"] = stats;
        }
        return children.at("stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3InstanceVrfRpc::Instance::All::get_children()
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

void ActOspfv3InstanceVrfRpc::Instance::All::set_value(const std::string & value_path, std::string value)
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

ActOspfv3InstanceVrfRpc::Instance::All::Stats::Stats()
    :
    prefix_priority{YType::empty, "prefix-priority"},
    spf{YType::empty, "spf"}
    	,
    neighbor(std::make_shared<ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor>())
{
    neighbor->parent = this;
    children["neighbor"] = neighbor;

    yang_name = "stats"; yang_parent_name = "all";
}

ActOspfv3InstanceVrfRpc::Instance::All::Stats::~Stats()
{
}

bool ActOspfv3InstanceVrfRpc::Instance::All::Stats::has_data() const
{
    return prefix_priority.is_set
	|| spf.is_set
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfv3InstanceVrfRpc::Instance::All::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_priority.operation)
	|| is_set(spf.operation)
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfv3InstanceVrfRpc::Instance::All::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

EntityPath ActOspfv3InstanceVrfRpc::Instance::All::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/instance/all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_priority.is_set || is_set(prefix_priority.operation)) leaf_name_data.push_back(prefix_priority.get_name_leafdata());
    if (spf.is_set || is_set(spf.operation)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrfRpc::Instance::All::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
        else
        {
            neighbor = std::make_shared<ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor>();
            neighbor->parent = this;
            children["neighbor"] = neighbor;
        }
        return children.at("neighbor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3InstanceVrfRpc::Instance::All::Stats::get_children()
{
    if(children.find("neighbor") == children.end())
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
    }

    return children;
}

void ActOspfv3InstanceVrfRpc::Instance::All::Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-priority")
    {
        prefix_priority = value;
    }
    if(value_path == "spf")
    {
        spf = value;
    }
}

ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::Interface>())
{
    interface->parent = this;
    children["interface"] = interface;

    yang_name = "neighbor"; yang_parent_name = "stats";
}

ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::~Neighbor()
{
}

bool ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_id.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/instance/all/stats/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            interface = std::make_shared<ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::Interface>();
            interface->parent = this;
            children["interface"] = interface;
        }
        return children.at("interface");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::get_children()
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

void ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "neighbor";
}

ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::~Interface()
{
}

bool ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/instance/all/stats/neighbor/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::get_children()
{
    return children;
}

void ActOspfv3InstanceVrfRpc::Instance::All::Stats::Neighbor::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ActOspfv3InstanceVrfRpc::Instance::AllInclusive::AllInclusive()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"}
    	,
    stats(std::make_shared<ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats>())
{
    stats->parent = this;
    children["stats"] = stats;

    yang_name = "all-inclusive"; yang_parent_name = "instance";
}

ActOspfv3InstanceVrfRpc::Instance::AllInclusive::~AllInclusive()
{
}

bool ActOspfv3InstanceVrfRpc::Instance::AllInclusive::has_data() const
{
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ActOspfv3InstanceVrfRpc::Instance::AllInclusive::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation)
	|| is_set(redistribution.operation)
	|| is_set(route.operation)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ActOspfv3InstanceVrfRpc::Instance::AllInclusive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-inclusive";

    return path_buffer.str();

}

EntityPath ActOspfv3InstanceVrfRpc::Instance::AllInclusive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/instance/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfv3InstanceVrfRpc::Instance::AllInclusive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            stats = std::make_shared<ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats>();
            stats->parent = this;
            children["stats"] = stats;
        }
        return children.at("stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3InstanceVrfRpc::Instance::AllInclusive::get_children()
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

void ActOspfv3InstanceVrfRpc::Instance::AllInclusive::set_value(const std::string & value_path, std::string value)
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

ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Stats()
    :
    prefix_priority{YType::empty, "prefix-priority"},
    spf{YType::empty, "spf"}
    	,
    neighbor(std::make_shared<ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor>())
{
    neighbor->parent = this;
    children["neighbor"] = neighbor;

    yang_name = "stats"; yang_parent_name = "all-inclusive";
}

ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::~Stats()
{
}

bool ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::has_data() const
{
    return prefix_priority.is_set
	|| spf.is_set
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_priority.operation)
	|| is_set(spf.operation)
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

EntityPath ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/instance/all-inclusive/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_priority.is_set || is_set(prefix_priority.operation)) leaf_name_data.push_back(prefix_priority.get_name_leafdata());
    if (spf.is_set || is_set(spf.operation)) leaf_name_data.push_back(spf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
        else
        {
            neighbor = std::make_shared<ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor>();
            neighbor->parent = this;
            children["neighbor"] = neighbor;
        }
        return children.at("neighbor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::get_children()
{
    if(children.find("neighbor") == children.end())
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
    }

    return children;
}

void ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-priority")
    {
        prefix_priority = value;
    }
    if(value_path == "spf")
    {
        spf = value;
    }
}

ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
    	,
    interface(std::make_shared<ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface>())
{
    interface->parent = this;
    children["interface"] = interface;

    yang_name = "neighbor"; yang_parent_name = "stats";
}

ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::~Neighbor()
{
}

bool ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::has_data() const
{
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_id.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/instance/all-inclusive/stats/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            interface = std::make_shared<ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface>();
            interface->parent = this;
            children["interface"] = interface;
        }
        return children.at("interface");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::get_children()
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

void ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "neighbor";
}

ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::~Interface()
{
}

bool ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::has_data() const
{
    return interface_name.is_set;
}

bool ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:act-ospfv3-instance-vrf/instance/all-inclusive/stats/neighbor/" << get_segment_path();
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

std::shared_ptr<Entity> ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::get_children()
{
    return children;
}

void ActOspfv3InstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}


}
}

