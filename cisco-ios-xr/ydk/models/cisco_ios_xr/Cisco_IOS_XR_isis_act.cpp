
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_isis_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_isis_act {

ClearIsisProcess::ClearIsisProcess()
    :
    input(std::make_shared<ClearIsisProcess::Input>())
{
    input->parent = this;

    yang_name = "clear-isis-process"; yang_parent_name = "Cisco-IOS-XR-isis-act";
}

ClearIsisProcess::~ClearIsisProcess()
{
}

bool ClearIsisProcess::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearIsisProcess::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearIsisProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-process";

    return path_buffer.str();

}

const EntityPath ClearIsisProcess::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearIsisProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearIsisProcess::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearIsisProcess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearIsisProcess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearIsisProcess::clone_ptr() const
{
    return std::make_shared<ClearIsisProcess>();
}

std::string ClearIsisProcess::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearIsisProcess::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearIsisProcess::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearIsisProcess::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearIsisProcess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearIsisProcess::Input::Input()
    :
    process{YType::empty, "process"}
    	,
    instance(std::make_shared<ClearIsisProcess::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-isis-process";
}

ClearIsisProcess::Input::~Input()
{
}

bool ClearIsisProcess::Input::has_data() const
{
    return process.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearIsisProcess::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearIsisProcess::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearIsisProcess::Input::get_entity_path(Entity* ancestor) const
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

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsisProcess::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearIsisProcess::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisProcess::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearIsisProcess::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
}

void ClearIsisProcess::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
}

bool ClearIsisProcess::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "process")
        return true;
    return false;
}

ClearIsisProcess::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ClearIsisProcess::Input::Instance::~Instance()
{
}

bool ClearIsisProcess::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearIsisProcess::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearIsisProcess::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ClearIsisProcess::Input::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsisProcess::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisProcess::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearIsisProcess::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearIsisProcess::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearIsisProcess::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ClearIsisRoute::ClearIsisRoute()
    :
    input(std::make_shared<ClearIsisRoute::Input>())
{
    input->parent = this;

    yang_name = "clear-isis-route"; yang_parent_name = "Cisco-IOS-XR-isis-act";
}

ClearIsisRoute::~ClearIsisRoute()
{
}

bool ClearIsisRoute::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearIsisRoute::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearIsisRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-route";

    return path_buffer.str();

}

const EntityPath ClearIsisRoute::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearIsisRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearIsisRoute::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearIsisRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearIsisRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearIsisRoute::clone_ptr() const
{
    return std::make_shared<ClearIsisRoute>();
}

std::string ClearIsisRoute::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearIsisRoute::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearIsisRoute::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearIsisRoute::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearIsisRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearIsisRoute::Input::Input()
    :
    route{YType::empty, "route"}
    	,
    instance(std::make_shared<ClearIsisRoute::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-isis-route";
}

ClearIsisRoute::Input::~Input()
{
}

bool ClearIsisRoute::Input::has_data() const
{
    return route.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearIsisRoute::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearIsisRoute::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearIsisRoute::Input::get_entity_path(Entity* ancestor) const
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

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsisRoute::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearIsisRoute::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisRoute::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearIsisRoute::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
}

void ClearIsisRoute::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
}

bool ClearIsisRoute::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "route")
        return true;
    return false;
}

ClearIsisRoute::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ClearIsisRoute::Input::Instance::~Instance()
{
}

bool ClearIsisRoute::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearIsisRoute::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearIsisRoute::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ClearIsisRoute::Input::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsisRoute::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisRoute::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearIsisRoute::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearIsisRoute::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearIsisRoute::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ClearIsisStat::ClearIsisStat()
    :
    input(std::make_shared<ClearIsisStat::Input>())
{
    input->parent = this;

    yang_name = "clear-isis-stat"; yang_parent_name = "Cisco-IOS-XR-isis-act";
}

ClearIsisStat::~ClearIsisStat()
{
}

bool ClearIsisStat::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearIsisStat::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearIsisStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-stat";

    return path_buffer.str();

}

const EntityPath ClearIsisStat::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearIsisStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearIsisStat::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearIsisStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearIsisStat::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearIsisStat::clone_ptr() const
{
    return std::make_shared<ClearIsisStat>();
}

std::string ClearIsisStat::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearIsisStat::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearIsisStat::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearIsisStat::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearIsisStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearIsisStat::Input::Input()
    :
    instance(std::make_shared<ClearIsisStat::Input::Instance>())
	,statistics(std::make_shared<ClearIsisStat::Input::Statistics>())
{
    instance->parent = this;

    statistics->parent = this;

    yang_name = "input"; yang_parent_name = "clear-isis-stat";
}

ClearIsisStat::Input::~Input()
{
}

bool ClearIsisStat::Input::has_data() const
{
    return (instance !=  nullptr && instance->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool ClearIsisStat::Input::has_operation() const
{
    return is_set(yfilter)
	|| (instance !=  nullptr && instance->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string ClearIsisStat::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearIsisStat::Input::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearIsisStat::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearIsisStat::Input::Instance>();
        }
        return instance;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<ClearIsisStat::Input::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisStat::Input::get_children() const
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

void ClearIsisStat::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearIsisStat::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ClearIsisStat::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "statistics")
        return true;
    return false;
}

ClearIsisStat::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ClearIsisStat::Input::Instance::~Instance()
{
}

bool ClearIsisStat::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearIsisStat::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearIsisStat::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ClearIsisStat::Input::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsisStat::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisStat::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearIsisStat::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearIsisStat::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearIsisStat::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ClearIsisStat::Input::Statistics::Statistics()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "statistics"; yang_parent_name = "input";
}

ClearIsisStat::Input::Statistics::~Statistics()
{
}

bool ClearIsisStat::Input::Statistics::has_data() const
{
    return interface_name.is_set;
}

bool ClearIsisStat::Input::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ClearIsisStat::Input::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath ClearIsisStat::Input::Statistics::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsisStat::Input::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisStat::Input::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearIsisStat::Input::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearIsisStat::Input::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ClearIsisStat::Input::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ClearIsisDist::ClearIsisDist()
    :
    input(std::make_shared<ClearIsisDist::Input>())
{
    input->parent = this;

    yang_name = "clear-isis-dist"; yang_parent_name = "Cisco-IOS-XR-isis-act";
}

ClearIsisDist::~ClearIsisDist()
{
}

bool ClearIsisDist::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearIsisDist::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearIsisDist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-isis-act:clear-isis-dist";

    return path_buffer.str();

}

const EntityPath ClearIsisDist::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearIsisDist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearIsisDist::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisDist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearIsisDist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearIsisDist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearIsisDist::clone_ptr() const
{
    return std::make_shared<ClearIsisDist>();
}

std::string ClearIsisDist::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearIsisDist::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearIsisDist::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearIsisDist::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearIsisDist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearIsisDist::Input::Input()
    :
    distribution{YType::empty, "distribution"}
    	,
    instance(std::make_shared<ClearIsisDist::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-isis-dist";
}

ClearIsisDist::Input::~Input()
{
}

bool ClearIsisDist::Input::has_data() const
{
    return distribution.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearIsisDist::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distribution.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearIsisDist::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearIsisDist::Input::get_entity_path(Entity* ancestor) const
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

    if (distribution.is_set || is_set(distribution.yfilter)) leaf_name_data.push_back(distribution.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsisDist::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearIsisDist::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisDist::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearIsisDist::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distribution")
    {
        distribution = value;
        distribution.value_namespace = name_space;
        distribution.value_namespace_prefix = name_space_prefix;
    }
}

void ClearIsisDist::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distribution")
    {
        distribution.yfilter = yfilter;
    }
}

bool ClearIsisDist::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "distribution")
        return true;
    return false;
}

ClearIsisDist::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ClearIsisDist::Input::Instance::~Instance()
{
}

bool ClearIsisDist::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearIsisDist::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearIsisDist::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ClearIsisDist::Input::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsisDist::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsisDist::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearIsisDist::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearIsisDist::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearIsisDist::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ClearIsis::ClearIsis()
    :
    input(std::make_shared<ClearIsis::Input>())
{
    input->parent = this;

    yang_name = "clear-isis"; yang_parent_name = "Cisco-IOS-XR-isis-act";
}

ClearIsis::~ClearIsis()
{
}

bool ClearIsis::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearIsis::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearIsis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-isis-act:clear-isis";

    return path_buffer.str();

}

const EntityPath ClearIsis::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearIsis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearIsis::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearIsis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearIsis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearIsis::clone_ptr() const
{
    return std::make_shared<ClearIsis>();
}

std::string ClearIsis::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearIsis::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearIsis::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearIsis::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearIsis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearIsis::Input::Input()
    :
    route{YType::empty, "route"},
    rt_type{YType::enumeration, "rt-type"},
    topology{YType::str, "topology"}
    	,
    instance(std::make_shared<ClearIsis::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-isis";
}

ClearIsis::Input::~Input()
{
}

bool ClearIsis::Input::has_data() const
{
    return route.is_set
	|| rt_type.is_set
	|| topology.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearIsis::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(rt_type.yfilter)
	|| ydk::is_set(topology.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearIsis::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearIsis::Input::get_entity_path(Entity* ancestor) const
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

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());
    if (topology.is_set || is_set(topology.yfilter)) leaf_name_data.push_back(topology.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsis::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearIsis::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsis::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearIsis::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology")
    {
        topology = value;
        topology.value_namespace = name_space;
        topology.value_namespace_prefix = name_space_prefix;
    }
}

void ClearIsis::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
    if(value_path == "topology")
    {
        topology.yfilter = yfilter;
    }
}

bool ClearIsis::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "route" || name == "rt-type" || name == "topology")
        return true;
    return false;
}

ClearIsis::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{
    yang_name = "instance"; yang_parent_name = "input";
}

ClearIsis::Input::Instance::~Instance()
{
}

bool ClearIsis::Input::Instance::has_data() const
{
    return instance_identifier.is_set;
}

bool ClearIsis::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearIsis::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

const EntityPath ClearIsis::Input::Instance::get_entity_path(Entity* ancestor) const
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

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearIsis::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearIsis::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearIsis::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearIsis::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearIsis::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

const Enum::YLeaf ClearIsis::Input::RtType::AFI_ALL_MULTICAST {0, "AFI-ALL-MULTICAST"};
const Enum::YLeaf ClearIsis::Input::RtType::AFI_ALL_SAFI_ALL {1, "AFI-ALL-SAFI-ALL"};
const Enum::YLeaf ClearIsis::Input::RtType::AFI_ALL_UNICAST {2, "AFI-ALL-UNICAST"};
const Enum::YLeaf ClearIsis::Input::RtType::IPv4_MULTICAST {3, "IPv4-MULTICAST"};
const Enum::YLeaf ClearIsis::Input::RtType::IPv4_SAFI_ALL {4, "IPv4-SAFI-ALL"};
const Enum::YLeaf ClearIsis::Input::RtType::IPv4_UNICAST {5, "IPv4-UNICAST"};
const Enum::YLeaf ClearIsis::Input::RtType::IPv6_MULTICAST {6, "IPv6-MULTICAST"};
const Enum::YLeaf ClearIsis::Input::RtType::IPv6_SAFI_ALL {7, "IPv6-SAFI-ALL"};
const Enum::YLeaf ClearIsis::Input::RtType::IPv6_UNICAST {8, "IPv6-UNICAST"};


}
}

