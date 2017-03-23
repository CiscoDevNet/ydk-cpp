
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_isis_act.hpp"

namespace ydk {
namespace Cisco_IOS_XR_isis_act {

ClearIsisProcessRpc::ClearIsisProcessRpc()
    :
    process{YType::empty, "process"}
    	,
    instance(std::make_shared<ClearIsisProcessRpc::Instance>())
{
    instance->parent = this;
    children["instance"] = instance;

    yang_name = "clear-isis-process"; yang_parent_name = "Cisco-IOS-XR-isis-act";
}

ClearIsisProcessRpc::~ClearIsisProcessRpc()
{
}

bool ClearIsisProcessRpc::has_data() const
{
    return process.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearIsisProcessRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearIsisProcessRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-process";

    return path_buffer.str();

}

EntityPath ClearIsisProcessRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearIsisProcessRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            instance = std::make_shared<ClearIsisProcessRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearIsisProcessRpc::get_children()
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

void ClearIsisProcessRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process")
    {
        process = value;
    }
}

std::shared_ptr<Entity> ClearIsisProcessRpc::clone_ptr() const
{
    return std::make_shared<ClearIsisProcessRpc>();
}

std::string ClearIsisProcessRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearIsisProcessRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearIsisProcessRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearIsisProcessRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "clear-isis-process";
}

ClearIsisProcessRpc::Instance::~Instance()
{
}

bool ClearIsisProcessRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearIsisProcessRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ClearIsisProcessRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ClearIsisProcessRpc::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-process/" << get_segment_path();
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

std::shared_ptr<Entity> ClearIsisProcessRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearIsisProcessRpc::Instance::get_children()
{
    return children;
}

void ClearIsisProcessRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ClearIsisRouteRpc::ClearIsisRouteRpc()
    :
    route{YType::empty, "route"}
    	,
    instance(std::make_shared<ClearIsisRouteRpc::Instance>())
{
    instance->parent = this;
    children["instance"] = instance;

    yang_name = "clear-isis-route"; yang_parent_name = "Cisco-IOS-XR-isis-act";
}

ClearIsisRouteRpc::~ClearIsisRouteRpc()
{
}

bool ClearIsisRouteRpc::has_data() const
{
    return route.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearIsisRouteRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(route.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearIsisRouteRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-route";

    return path_buffer.str();

}

EntityPath ClearIsisRouteRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearIsisRouteRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            instance = std::make_shared<ClearIsisRouteRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearIsisRouteRpc::get_children()
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

void ClearIsisRouteRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route")
    {
        route = value;
    }
}

std::shared_ptr<Entity> ClearIsisRouteRpc::clone_ptr() const
{
    return std::make_shared<ClearIsisRouteRpc>();
}

std::string ClearIsisRouteRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearIsisRouteRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearIsisRouteRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearIsisRouteRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "clear-isis-route";
}

ClearIsisRouteRpc::Instance::~Instance()
{
}

bool ClearIsisRouteRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearIsisRouteRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ClearIsisRouteRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ClearIsisRouteRpc::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-route/" << get_segment_path();
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

std::shared_ptr<Entity> ClearIsisRouteRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearIsisRouteRpc::Instance::get_children()
{
    return children;
}

void ClearIsisRouteRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ClearIsisStatRpc::ClearIsisStatRpc()
    :
    instance(std::make_shared<ClearIsisStatRpc::Instance>())
	,statistics(std::make_shared<ClearIsisStatRpc::Statistics>())
{
    instance->parent = this;
    children["instance"] = instance;

    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "clear-isis-stat"; yang_parent_name = "Cisco-IOS-XR-isis-act";
}

ClearIsisStatRpc::~ClearIsisStatRpc()
{
}

bool ClearIsisStatRpc::has_data() const
{
    return (instance !=  nullptr && instance->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool ClearIsisStatRpc::has_operation() const
{
    return is_set(operation)
	|| (instance !=  nullptr && instance->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string ClearIsisStatRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-stat";

    return path_buffer.str();

}

EntityPath ClearIsisStatRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearIsisStatRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            instance = std::make_shared<ClearIsisStatRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<ClearIsisStatRpc::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearIsisStatRpc::get_children()
{
    if(children.find("instance") == children.end())
    {
        if(instance != nullptr)
        {
            children["instance"] = instance;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void ClearIsisStatRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearIsisStatRpc::clone_ptr() const
{
    return std::make_shared<ClearIsisStatRpc>();
}

std::string ClearIsisStatRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearIsisStatRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearIsisStatRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearIsisStatRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "clear-isis-stat";
}

ClearIsisStatRpc::Instance::~Instance()
{
}

bool ClearIsisStatRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearIsisStatRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ClearIsisStatRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ClearIsisStatRpc::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-stat/" << get_segment_path();
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

std::shared_ptr<Entity> ClearIsisStatRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearIsisStatRpc::Instance::get_children()
{
    return children;
}

void ClearIsisStatRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ClearIsisStatRpc::Statistics::Statistics()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "statistics"; yang_parent_name = "clear-isis-stat";
}

ClearIsisStatRpc::Statistics::~Statistics()
{
}

bool ClearIsisStatRpc::Statistics::has_data() const
{
    return interface_name.is_set;
}

bool ClearIsisStatRpc::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ClearIsisStatRpc::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath ClearIsisStatRpc::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-stat/" << get_segment_path();
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

std::shared_ptr<Entity> ClearIsisStatRpc::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearIsisStatRpc::Statistics::get_children()
{
    return children;
}

void ClearIsisStatRpc::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ClearIsisDistRpc::ClearIsisDistRpc()
    :
    distribution{YType::empty, "distribution"}
    	,
    instance(std::make_shared<ClearIsisDistRpc::Instance>())
{
    instance->parent = this;
    children["instance"] = instance;

    yang_name = "clear-isis-dist"; yang_parent_name = "Cisco-IOS-XR-isis-act";
}

ClearIsisDistRpc::~ClearIsisDistRpc()
{
}

bool ClearIsisDistRpc::has_data() const
{
    return distribution.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearIsisDistRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(distribution.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearIsisDistRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-dist";

    return path_buffer.str();

}

EntityPath ClearIsisDistRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distribution.is_set || is_set(distribution.operation)) leaf_name_data.push_back(distribution.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsisDistRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            instance = std::make_shared<ClearIsisDistRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearIsisDistRpc::get_children()
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

void ClearIsisDistRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distribution")
    {
        distribution = value;
    }
}

std::shared_ptr<Entity> ClearIsisDistRpc::clone_ptr() const
{
    return std::make_shared<ClearIsisDistRpc>();
}

std::string ClearIsisDistRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearIsisDistRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearIsisDistRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearIsisDistRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "clear-isis-dist";
}

ClearIsisDistRpc::Instance::~Instance()
{
}

bool ClearIsisDistRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearIsisDistRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ClearIsisDistRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ClearIsisDistRpc::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-dist/" << get_segment_path();
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

std::shared_ptr<Entity> ClearIsisDistRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearIsisDistRpc::Instance::get_children()
{
    return children;
}

void ClearIsisDistRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ClearIsisRpc::ClearIsisRpc()
    :
    route{YType::empty, "route"},
    rt_type{YType::enumeration, "rt-type"},
    topology{YType::str, "topology"}
    	,
    instance(std::make_shared<ClearIsisRpc::Instance>())
{
    instance->parent = this;
    children["instance"] = instance;

    yang_name = "clear-isis"; yang_parent_name = "Cisco-IOS-XR-isis-act";
}

ClearIsisRpc::~ClearIsisRpc()
{
}

bool ClearIsisRpc::has_data() const
{
    return route.is_set
	|| rt_type.is_set
	|| topology.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearIsisRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(route.operation)
	|| is_set(rt_type.operation)
	|| is_set(topology.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearIsisRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-isis-act:clear-isis";

    return path_buffer.str();

}

EntityPath ClearIsisRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.operation)) leaf_name_data.push_back(route.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());
    if (topology.is_set || is_set(topology.operation)) leaf_name_data.push_back(topology.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsisRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            instance = std::make_shared<ClearIsisRpc::Instance>();
            instance->parent = this;
            children["instance"] = instance;
        }
        return children.at("instance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearIsisRpc::get_children()
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

void ClearIsisRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route")
    {
        route = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
    if(value_path == "topology")
    {
        topology = value;
    }
}

std::shared_ptr<Entity> ClearIsisRpc::clone_ptr() const
{
    return std::make_shared<ClearIsisRpc>();
}

std::string ClearIsisRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearIsisRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearIsisRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearIsisRpc::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "clear-isis";
}

ClearIsisRpc::Instance::~Instance()
{
}

bool ClearIsisRpc::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearIsisRpc::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ClearIsisRpc::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath ClearIsisRpc::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-isis-act:clear-isis/" << get_segment_path();
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

std::shared_ptr<Entity> ClearIsisRpc::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearIsisRpc::Instance::get_children()
{
    return children;
}

void ClearIsisRpc::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

const Enum::YLeaf ClearIsisRpc::RtTypeEnum::AFI_ALL_MULTICAST {0, "AFI-ALL-MULTICAST"};
const Enum::YLeaf ClearIsisRpc::RtTypeEnum::AFI_ALL_SAFI_ALL {1, "AFI-ALL-SAFI-ALL"};
const Enum::YLeaf ClearIsisRpc::RtTypeEnum::AFI_ALL_UNICAST {2, "AFI-ALL-UNICAST"};
const Enum::YLeaf ClearIsisRpc::RtTypeEnum::IPv4_MULTICAST {3, "IPv4-MULTICAST"};
const Enum::YLeaf ClearIsisRpc::RtTypeEnum::IPv4_SAFI_ALL {4, "IPv4-SAFI-ALL"};
const Enum::YLeaf ClearIsisRpc::RtTypeEnum::IPv4_UNICAST {5, "IPv4-UNICAST"};
const Enum::YLeaf ClearIsisRpc::RtTypeEnum::IPv6_MULTICAST {6, "IPv6-MULTICAST"};
const Enum::YLeaf ClearIsisRpc::RtTypeEnum::IPv6_SAFI_ALL {7, "IPv6-SAFI-ALL"};
const Enum::YLeaf ClearIsisRpc::RtTypeEnum::IPv6_UNICAST {8, "IPv6-UNICAST"};


}
}

