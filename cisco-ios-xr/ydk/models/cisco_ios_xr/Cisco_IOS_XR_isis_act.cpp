
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
    input(std::make_shared<ClearIsisProcessRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-isis-process"; yang_parent_name = "Cisco-IOS-XR-isis-act";
}

ClearIsisProcessRpc::~ClearIsisProcessRpc()
{
}

bool ClearIsisProcessRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearIsisProcessRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearIsisProcessRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-process";

    return path_buffer.str();

}

const EntityPath ClearIsisProcessRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearIsisProcessRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearIsisProcessRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisProcessRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearIsisProcessRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearIsisProcessRpc::Input::Input()
    :
    process{YType::empty, "process"}
    	,
    instance(std::make_shared<ClearIsisProcessRpc::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-isis-process";
}

ClearIsisProcessRpc::Input::~Input()
{
}

bool ClearIsisProcessRpc::Input::has_data() const
{
    return process.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearIsisProcessRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearIsisProcessRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearIsisProcessRpc::Input::get_entity_path(Entity* ancestor) const
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

    if (process.is_set || is_set(process.operation)) leaf_name_data.push_back(process.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsisProcessRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearIsisProcessRpc::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisProcessRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearIsisProcessRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process")
    {
        process = value;
    }
}

ClearIsisProcessRpc::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ClearIsisProcessRpc::Input::Instance::~Instance()
{
}

bool ClearIsisProcessRpc::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearIsisProcessRpc::Input::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ClearIsisProcessRpc::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ClearIsisProcessRpc::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-process/input/" << get_segment_path();
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

std::shared_ptr<Entity> ClearIsisProcessRpc::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisProcessRpc::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearIsisProcessRpc::Input::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ClearIsisRouteRpc::ClearIsisRouteRpc()
    :
    input(std::make_shared<ClearIsisRouteRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-isis-route"; yang_parent_name = "Cisco-IOS-XR-isis-act";
}

ClearIsisRouteRpc::~ClearIsisRouteRpc()
{
}

bool ClearIsisRouteRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearIsisRouteRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearIsisRouteRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-route";

    return path_buffer.str();

}

const EntityPath ClearIsisRouteRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearIsisRouteRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearIsisRouteRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisRouteRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearIsisRouteRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearIsisRouteRpc::Input::Input()
    :
    route{YType::empty, "route"}
    	,
    instance(std::make_shared<ClearIsisRouteRpc::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-isis-route";
}

ClearIsisRouteRpc::Input::~Input()
{
}

bool ClearIsisRouteRpc::Input::has_data() const
{
    return route.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearIsisRouteRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(route.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearIsisRouteRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearIsisRouteRpc::Input::get_entity_path(Entity* ancestor) const
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

    if (route.is_set || is_set(route.operation)) leaf_name_data.push_back(route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsisRouteRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearIsisRouteRpc::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisRouteRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearIsisRouteRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route")
    {
        route = value;
    }
}

ClearIsisRouteRpc::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ClearIsisRouteRpc::Input::Instance::~Instance()
{
}

bool ClearIsisRouteRpc::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearIsisRouteRpc::Input::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ClearIsisRouteRpc::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ClearIsisRouteRpc::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-route/input/" << get_segment_path();
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

std::shared_ptr<Entity> ClearIsisRouteRpc::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisRouteRpc::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearIsisRouteRpc::Input::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ClearIsisStatRpc::ClearIsisStatRpc()
    :
    input(std::make_shared<ClearIsisStatRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-isis-stat"; yang_parent_name = "Cisco-IOS-XR-isis-act";
}

ClearIsisStatRpc::~ClearIsisStatRpc()
{
}

bool ClearIsisStatRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearIsisStatRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearIsisStatRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-stat";

    return path_buffer.str();

}

const EntityPath ClearIsisStatRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearIsisStatRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearIsisStatRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisStatRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
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

ClearIsisStatRpc::Input::Input()
    :
    instance(std::make_shared<ClearIsisStatRpc::Input::Instance>())
	,statistics(std::make_shared<ClearIsisStatRpc::Input::Statistics>())
{
    instance->parent = this;

    statistics->parent = this;

    yang_name = "input"; yang_parent_name = "clear-isis-stat";
}

ClearIsisStatRpc::Input::~Input()
{
}

bool ClearIsisStatRpc::Input::has_data() const
{
    return (instance !=  nullptr && instance->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool ClearIsisStatRpc::Input::has_operation() const
{
    return is_set(operation)
	|| (instance !=  nullptr && instance->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string ClearIsisStatRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearIsisStatRpc::Input::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsisStatRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearIsisStatRpc::Input::Instance>();
        }
        return instance;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<ClearIsisStatRpc::Input::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisStatRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void ClearIsisStatRpc::Input::set_value(const std::string & value_path, std::string value)
{
}

ClearIsisStatRpc::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ClearIsisStatRpc::Input::Instance::~Instance()
{
}

bool ClearIsisStatRpc::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearIsisStatRpc::Input::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ClearIsisStatRpc::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ClearIsisStatRpc::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-stat/input/" << get_segment_path();
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

std::shared_ptr<Entity> ClearIsisStatRpc::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisStatRpc::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearIsisStatRpc::Input::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ClearIsisStatRpc::Input::Statistics::Statistics()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "statistics"; yang_parent_name = "input";
}

ClearIsisStatRpc::Input::Statistics::~Statistics()
{
}

bool ClearIsisStatRpc::Input::Statistics::has_data() const
{
    return interface_name.is_set;
}

bool ClearIsisStatRpc::Input::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ClearIsisStatRpc::Input::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath ClearIsisStatRpc::Input::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-stat/input/" << get_segment_path();
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

std::shared_ptr<Entity> ClearIsisStatRpc::Input::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisStatRpc::Input::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearIsisStatRpc::Input::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ClearIsisDistRpc::ClearIsisDistRpc()
    :
    input(std::make_shared<ClearIsisDistRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-isis-dist"; yang_parent_name = "Cisco-IOS-XR-isis-act";
}

ClearIsisDistRpc::~ClearIsisDistRpc()
{
}

bool ClearIsisDistRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearIsisDistRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearIsisDistRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-dist";

    return path_buffer.str();

}

const EntityPath ClearIsisDistRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearIsisDistRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearIsisDistRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisDistRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearIsisDistRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearIsisDistRpc::Input::Input()
    :
    distribution{YType::empty, "distribution"}
    	,
    instance(std::make_shared<ClearIsisDistRpc::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-isis-dist";
}

ClearIsisDistRpc::Input::~Input()
{
}

bool ClearIsisDistRpc::Input::has_data() const
{
    return distribution.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearIsisDistRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(distribution.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearIsisDistRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearIsisDistRpc::Input::get_entity_path(Entity* ancestor) const
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

    if (distribution.is_set || is_set(distribution.operation)) leaf_name_data.push_back(distribution.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsisDistRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearIsisDistRpc::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisDistRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearIsisDistRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distribution")
    {
        distribution = value;
    }
}

ClearIsisDistRpc::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ClearIsisDistRpc::Input::Instance::~Instance()
{
}

bool ClearIsisDistRpc::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearIsisDistRpc::Input::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ClearIsisDistRpc::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ClearIsisDistRpc::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-dist/input/" << get_segment_path();
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

std::shared_ptr<Entity> ClearIsisDistRpc::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisDistRpc::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearIsisDistRpc::Input::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

ClearIsisRpc::ClearIsisRpc()
    :
    input(std::make_shared<ClearIsisRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-isis"; yang_parent_name = "Cisco-IOS-XR-isis-act";
}

ClearIsisRpc::~ClearIsisRpc()
{
}

bool ClearIsisRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearIsisRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearIsisRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-isis-act:clear-isis";

    return path_buffer.str();

}

const EntityPath ClearIsisRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearIsisRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearIsisRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearIsisRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearIsisRpc::Input::Input()
    :
    route{YType::empty, "route"},
    rt_type{YType::enumeration, "rt-type"},
    topology{YType::str, "topology"}
    	,
    instance(std::make_shared<ClearIsisRpc::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-isis";
}

ClearIsisRpc::Input::~Input()
{
}

bool ClearIsisRpc::Input::has_data() const
{
    return route.is_set
	|| rt_type.is_set
	|| topology.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearIsisRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(route.operation)
	|| is_set(rt_type.operation)
	|| is_set(topology.operation)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearIsisRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearIsisRpc::Input::get_entity_path(Entity* ancestor) const
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

    if (route.is_set || is_set(route.operation)) leaf_name_data.push_back(route.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());
    if (topology.is_set || is_set(topology.operation)) leaf_name_data.push_back(topology.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsisRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearIsisRpc::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearIsisRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearIsisRpc::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ClearIsisRpc::Input::Instance::~Instance()
{
}

bool ClearIsisRpc::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearIsisRpc::Input::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_identifier.operation);
}

std::string ClearIsisRpc::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ClearIsisRpc::Input::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-isis-act:clear-isis/input/" << get_segment_path();
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

std::shared_ptr<Entity> ClearIsisRpc::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisRpc::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearIsisRpc::Input::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
    }
}

const Enum::YLeaf ClearIsisRpc::Input::RtTypeEnum::AFI_ALL_MULTICAST {0, "AFI-ALL-MULTICAST"};
const Enum::YLeaf ClearIsisRpc::Input::RtTypeEnum::AFI_ALL_SAFI_ALL {1, "AFI-ALL-SAFI-ALL"};
const Enum::YLeaf ClearIsisRpc::Input::RtTypeEnum::AFI_ALL_UNICAST {2, "AFI-ALL-UNICAST"};
const Enum::YLeaf ClearIsisRpc::Input::RtTypeEnum::IPv4_MULTICAST {3, "IPv4-MULTICAST"};
const Enum::YLeaf ClearIsisRpc::Input::RtTypeEnum::IPv4_SAFI_ALL {4, "IPv4-SAFI-ALL"};
const Enum::YLeaf ClearIsisRpc::Input::RtTypeEnum::IPv4_UNICAST {5, "IPv4-UNICAST"};
const Enum::YLeaf ClearIsisRpc::Input::RtTypeEnum::IPv6_MULTICAST {6, "IPv6-MULTICAST"};
const Enum::YLeaf ClearIsisRpc::Input::RtTypeEnum::IPv6_SAFI_ALL {7, "IPv6-SAFI-ALL"};
const Enum::YLeaf ClearIsisRpc::Input::RtTypeEnum::IPv6_UNICAST {8, "IPv6-UNICAST"};


}
}

