
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_act_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

ClearBgpInstanceVrfAsGracefulRpc::ClearBgpInstanceVrfAsGracefulRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAsGracefulRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-as-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAsGracefulRpc::~ClearBgpInstanceVrfAsGracefulRpc()
{
}

bool ClearBgpInstanceVrfAsGracefulRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAsGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAsGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-as-graceful";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAsGracefulRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAsGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAsGracefulRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAsGracefulRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAsGracefulRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAsGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAsGracefulRpc>();
}

std::string ClearBgpInstanceVrfAsGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAsGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAsGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAsGracefulRpc::Input::Input()
    :
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-as-graceful";
}

ClearBgpInstanceVrfAsGracefulRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAsGracefulRpc::Input::has_data() const
{
    return as_number.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAsGracefulRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAsGracefulRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAsGracefulRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-as-graceful/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAsGracefulRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAsGracefulRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAsGracefulRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAsRpc::ClearBgpInstanceVrfAsRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAsRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-as"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAsRpc::~ClearBgpInstanceVrfAsRpc()
{
}

bool ClearBgpInstanceVrfAsRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAsRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-as";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAsRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAsRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAsRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAsRpc>();
}

std::string ClearBgpInstanceVrfAsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAsRpc::Input::Input()
    :
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-as";
}

ClearBgpInstanceVrfAsRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAsRpc::Input::has_data() const
{
    return as_number.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAsRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAsRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAsRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-as/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAsRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAsRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAsRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfExternalGracefulRpc::ClearBgpInstanceVrfExternalGracefulRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfExternalGracefulRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-external-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfExternalGracefulRpc::~ClearBgpInstanceVrfExternalGracefulRpc()
{
}

bool ClearBgpInstanceVrfExternalGracefulRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfExternalGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfExternalGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-external-graceful";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfExternalGracefulRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfExternalGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfExternalGracefulRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfExternalGracefulRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfExternalGracefulRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfExternalGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfExternalGracefulRpc>();
}

std::string ClearBgpInstanceVrfExternalGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfExternalGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfExternalGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfExternalGracefulRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-external-graceful";
}

ClearBgpInstanceVrfExternalGracefulRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfExternalGracefulRpc::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfExternalGracefulRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfExternalGracefulRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfExternalGracefulRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-external-graceful/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfExternalGracefulRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfExternalGracefulRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfExternalGracefulRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfExternalRpc::ClearBgpInstanceVrfExternalRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfExternalRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-external"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfExternalRpc::~ClearBgpInstanceVrfExternalRpc()
{
}

bool ClearBgpInstanceVrfExternalRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfExternalRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfExternalRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-external";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfExternalRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfExternalRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfExternalRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfExternalRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfExternalRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfExternalRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfExternalRpc>();
}

std::string ClearBgpInstanceVrfExternalRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfExternalRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfExternalRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfExternalRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-external";
}

ClearBgpInstanceVrfExternalRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfExternalRpc::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfExternalRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfExternalRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfExternalRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-external/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfExternalRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfExternalRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfExternalRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-all-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::~ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft-in-prefix-filter";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-all-soft-in-prefix-filter";
}

ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft-in-prefix-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiAllSoftInRpc::ClearBgpInstanceVrfAfiSafiAllSoftInRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftInRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-all-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAllSoftInRpc::~ClearBgpInstanceVrfAfiSafiAllSoftInRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft-in";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAllSoftInRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftInRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoftInRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftInRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftInRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAllSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAllSoftInRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-all-soft-in";
}

ClearBgpInstanceVrfAfiSafiAllSoftInRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAllSoftInRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft-in/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftInRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoftInRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftInRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::ClearBgpInstanceVrfAfiSafiAllSoftOutRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-all-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::~ClearBgpInstanceVrfAfiSafiAllSoftOutRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft-out";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftOutRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-all-soft-out";
}

ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft-out/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiAllSoftRpc::ClearBgpInstanceVrfAfiSafiAllSoftRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-all-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAllSoftRpc::~ClearBgpInstanceVrfAfiSafiAllSoftRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAllSoftRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAllSoftRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoftRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAllSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAllSoftRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-all-soft";
}

ClearBgpInstanceVrfAfiSafiAllSoftRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAllSoftRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAllSoftRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoftRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::~ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-long-lived-stale";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-long-lived-stale";
}

ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-long-lived-stale/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::~ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in-prefix-filter";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in-prefix-filter";
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in-prefix-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::~ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in";
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::~ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft-out";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft-out";
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft-out/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::~ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft";
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-as-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::~ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft-in-prefix-filter";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-as-soft-in-prefix-filter";
}

ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft-in-prefix-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiAsSoftInRpc::ClearBgpInstanceVrfAfiSafiAsSoftInRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftInRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-as-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAsSoftInRpc::~ClearBgpInstanceVrfAfiSafiAsSoftInRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft-in";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAsSoftInRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftInRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoftInRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftInRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftInRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAsSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAsSoftInRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-as-soft-in";
}

ClearBgpInstanceVrfAfiSafiAsSoftInRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAsSoftInRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft-in/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftInRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoftInRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftInRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::ClearBgpInstanceVrfAfiSafiAsSoftOutRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-as-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::~ClearBgpInstanceVrfAfiSafiAsSoftOutRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft-out";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftOutRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-as-soft-out";
}

ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft-out/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiAsSoftRpc::ClearBgpInstanceVrfAfiSafiAsSoftRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-as-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAsSoftRpc::~ClearBgpInstanceVrfAfiSafiAsSoftRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAsSoftRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAsSoftRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoftRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAsSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAsSoftRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-as-soft";
}

ClearBgpInstanceVrfAfiSafiAsSoftRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAsSoftRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiAsSoftRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoftRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-dampening-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::~ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-dampening-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-dampening-ipv4-prefix";
}

ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-dampening-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiDampeningRpc::ClearBgpInstanceVrfAfiSafiDampeningRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-dampening"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiDampeningRpc::~ClearBgpInstanceVrfAfiSafiDampeningRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiDampeningRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiDampeningRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiDampeningRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-dampening";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiDampeningRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiDampeningRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiDampeningRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiDampeningRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiDampeningRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiDampeningRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiDampeningRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-dampening";
}

ClearBgpInstanceVrfAfiSafiDampeningRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiDampeningRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiDampeningRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiDampeningRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiDampeningRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-dampening/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiDampeningRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiDampeningRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-external-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::~ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft-in-prefix-filter";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-external-soft-in-prefix-filter";
}

ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft-in-prefix-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::ClearBgpInstanceVrfAfiSafiExternalSoftInRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-external-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::~ClearBgpInstanceVrfAfiSafiExternalSoftInRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft-in";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftInRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-external-soft-in";
}

ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft-in/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-external-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::~ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft-out";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-external-soft-out";
}

ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft-out/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiExternalSoftRpc::ClearBgpInstanceVrfAfiSafiExternalSoftRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-external-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiExternalSoftRpc::~ClearBgpInstanceVrfAfiSafiExternalSoftRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiExternalSoftRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoftRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiExternalSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiExternalSoftRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-external-soft";
}

ClearBgpInstanceVrfAfiSafiExternalSoftRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiExternalSoftRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoftRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv4-prefix";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-regexp"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::~ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-regexp";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    regexp_pattern{YType::str, "regexp-pattern"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-regexp";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| regexp_pattern.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(regexp_pattern.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-regexp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (regexp_pattern.is_set || is_set(regexp_pattern.operation)) leaf_name_data.push_back(regexp_pattern.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "regexp-pattern")
    {
        regexp_pattern = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-route-policy"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::~ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-route-policy";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    route_policy_name{YType::str, "route-policy-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-route-policy";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| route_policy_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-route-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::~ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::~ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-nexthop-performance-statistics";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-nexthop-performance-statistics";
}

ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-nexthop-performance-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::~ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-nexthop-registration-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-nexthop-registration-ip-addr";
}

ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-nexthop-registration-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-self-originated"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::~ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-self-originated";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-self-originated";
}

ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-self-originated/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiShutdownRpc::ClearBgpInstanceVrfAfiSafiShutdownRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiShutdownRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiShutdownRpc::~ClearBgpInstanceVrfAfiSafiShutdownRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiShutdownRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiShutdownRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiShutdownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-shutdown";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiShutdownRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiShutdownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiShutdownRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiShutdownRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiShutdownRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiShutdownRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiShutdownRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiShutdownRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiShutdownRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiShutdownRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiShutdownRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-shutdown";
}

ClearBgpInstanceVrfAfiSafiShutdownRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiShutdownRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiShutdownRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiShutdownRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiShutdownRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-shutdown/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiShutdownRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiShutdownRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiShutdownRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-address-family-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-address-family-update-parent";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-address-family-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-address-family";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-address-family";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-update-parent";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "sub-group")
    {
        sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "sub-group")
    {
        sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-update-parent";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-dampening-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::~ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-dampening-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-dampening-ipv6-prefix";
}

ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-dampening-ipv6-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv6-prefix";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv6-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::~ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc()
{
}

bool ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-nexthop-performance-statistics";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc>();
}

std::string ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-nexthop-performance-statistics";
}

ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-nexthop-performance-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::~ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc()
{
}

bool ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-nexthop-registration-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc>();
}

std::string ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-nexthop-registration-ip-addr";
}

ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-nexthop-registration-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfPeerDropsAllRpc::ClearBgpInstanceVrfPeerDropsAllRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfPeerDropsAllRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-peer-drops-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfPeerDropsAllRpc::~ClearBgpInstanceVrfPeerDropsAllRpc()
{
}

bool ClearBgpInstanceVrfPeerDropsAllRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfPeerDropsAllRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfPeerDropsAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-peer-drops-all";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfPeerDropsAllRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfPeerDropsAllRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfPeerDropsAllRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfPeerDropsAllRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsAllRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfPeerDropsAllRpc>();
}

std::string ClearBgpInstanceVrfPeerDropsAllRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfPeerDropsAllRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfPeerDropsAllRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfPeerDropsAllRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-peer-drops-all";
}

ClearBgpInstanceVrfPeerDropsAllRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfPeerDropsAllRpc::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfPeerDropsAllRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfPeerDropsAllRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfPeerDropsAllRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-peer-drops-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsAllRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfPeerDropsAllRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfPeerDropsAllRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfPeerDropsIpAddrRpc::ClearBgpInstanceVrfPeerDropsIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfPeerDropsIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-peer-drops-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfPeerDropsIpAddrRpc::~ClearBgpInstanceVrfPeerDropsIpAddrRpc()
{
}

bool ClearBgpInstanceVrfPeerDropsIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfPeerDropsIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfPeerDropsIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-peer-drops-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfPeerDropsIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfPeerDropsIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfPeerDropsIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfPeerDropsIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfPeerDropsIpAddrRpc>();
}

std::string ClearBgpInstanceVrfPeerDropsIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfPeerDropsIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfPeerDropsIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfPeerDropsIpAddrRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-peer-drops-ip-addr";
}

ClearBgpInstanceVrfPeerDropsIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfPeerDropsIpAddrRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfPeerDropsIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfPeerDropsIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfPeerDropsIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-peer-drops-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfPeerDropsIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfPeerDropsIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfPerformanceStatisticsRpc::ClearBgpInstanceVrfPerformanceStatisticsRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfPerformanceStatisticsRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfPerformanceStatisticsRpc::~ClearBgpInstanceVrfPerformanceStatisticsRpc()
{
}

bool ClearBgpInstanceVrfPerformanceStatisticsRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-performance-statistics";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfPerformanceStatisticsRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfPerformanceStatisticsRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfPerformanceStatisticsRpc>();
}

std::string ClearBgpInstanceVrfPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfPerformanceStatisticsRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-performance-statistics";
}

ClearBgpInstanceVrfPerformanceStatisticsRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfPerformanceStatisticsRpc::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfPerformanceStatisticsRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfPerformanceStatisticsRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfPerformanceStatisticsRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-performance-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfPerformanceStatisticsRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfPerformanceStatisticsRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfPerformanceStatisticsRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfShutdownRpc::ClearBgpInstanceVrfShutdownRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfShutdownRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfShutdownRpc::~ClearBgpInstanceVrfShutdownRpc()
{
}

bool ClearBgpInstanceVrfShutdownRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfShutdownRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfShutdownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-shutdown";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfShutdownRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfShutdownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfShutdownRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfShutdownRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfShutdownRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfShutdownRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfShutdownRpc>();
}

std::string ClearBgpInstanceVrfShutdownRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfShutdownRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfShutdownRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfShutdownRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-shutdown";
}

ClearBgpInstanceVrfShutdownRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfShutdownRpc::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfShutdownRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfShutdownRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfShutdownRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-shutdown/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfShutdownRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfShutdownRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfShutdownRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::~ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-address-family-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-address-family-update-parent";
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-address-family-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::~ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-address-family";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-address-family";
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh-update-parent";
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh";
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-update-parent";
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr";
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group-update-parent";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::has_data() const
{
    return instance_name.is_set
	|| sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "sub-group")
    {
        sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::Input::has_data() const
{
    return instance_name.is_set
	|| sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "sub-group")
    {
        sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::has_data() const
{
    return instance_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::has_data() const
{
    return instance_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::~ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-update-group-update-parent";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::Input::has_data() const
{
    return instance_name.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::~ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-update-group";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::Input::has_data() const
{
    return instance_name.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpAfiSafiDampeningIpv4PrefixRpc::ClearBgpAfiSafiDampeningIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpAfiSafiDampeningIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-dampening-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiDampeningIpv4PrefixRpc::~ClearBgpAfiSafiDampeningIpv4PrefixRpc()
{
}

bool ClearBgpAfiSafiDampeningIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiDampeningIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiDampeningIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpAfiSafiDampeningIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiDampeningIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiDampeningIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpAfiSafiDampeningIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiDampeningIpv4PrefixRpc>();
}

std::string ClearBgpAfiSafiDampeningIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiDampeningIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiDampeningIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiDampeningIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-dampening-ipv4-prefix";
}

ClearBgpAfiSafiDampeningIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpAfiSafiDampeningIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpAfiSafiDampeningIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpAfiSafiDampeningIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpAfiSafiDampeningIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiDampeningIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpAfiSafiDampeningIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
}

ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-flap-statistics-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::~ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc>();
}

std::string ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-flap-statistics-ipv4-prefix";
}

ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
}

ClearBgpAfiSafiDampeningIpv6PrefixRpc::ClearBgpAfiSafiDampeningIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpAfiSafiDampeningIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-dampening-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiDampeningIpv6PrefixRpc::~ClearBgpAfiSafiDampeningIpv6PrefixRpc()
{
}

bool ClearBgpAfiSafiDampeningIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiDampeningIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiDampeningIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpAfiSafiDampeningIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiDampeningIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiDampeningIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpAfiSafiDampeningIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiDampeningIpv6PrefixRpc>();
}

std::string ClearBgpAfiSafiDampeningIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiDampeningIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiDampeningIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiDampeningIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-dampening-ipv6-prefix";
}

ClearBgpAfiSafiDampeningIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpAfiSafiDampeningIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpAfiSafiDampeningIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string ClearBgpAfiSafiDampeningIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpAfiSafiDampeningIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening-ipv6-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiDampeningIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpAfiSafiDampeningIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-flap-statistics-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::~ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc>();
}

std::string ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-flap-statistics-ipv6-prefix";
}

ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ipv6-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

ClearBgpNexthopPerformanceStatisticsRpc::ClearBgpNexthopPerformanceStatisticsRpc()
{
    yang_name = "clear-bgp-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpNexthopPerformanceStatisticsRpc::~ClearBgpNexthopPerformanceStatisticsRpc()
{
}

bool ClearBgpNexthopPerformanceStatisticsRpc::has_data() const
{
    return false;
}

bool ClearBgpNexthopPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpNexthopPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-nexthop-performance-statistics";

    return path_buffer.str();

}

const EntityPath ClearBgpNexthopPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpNexthopPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpNexthopPerformanceStatisticsRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpNexthopPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpNexthopPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpNexthopPerformanceStatisticsRpc>();
}

std::string ClearBgpNexthopPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpNexthopPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpNexthopPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpNexthopRegistrationIpAddrRpc::ClearBgpNexthopRegistrationIpAddrRpc()
    :
    input(std::make_shared<ClearBgpNexthopRegistrationIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpNexthopRegistrationIpAddrRpc::~ClearBgpNexthopRegistrationIpAddrRpc()
{
}

bool ClearBgpNexthopRegistrationIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpNexthopRegistrationIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpNexthopRegistrationIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-nexthop-registration-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpNexthopRegistrationIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpNexthopRegistrationIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpNexthopRegistrationIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpNexthopRegistrationIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpNexthopRegistrationIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpNexthopRegistrationIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpNexthopRegistrationIpAddrRpc>();
}

std::string ClearBgpNexthopRegistrationIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpNexthopRegistrationIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpNexthopRegistrationIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpNexthopRegistrationIpAddrRpc::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-nexthop-registration-ip-addr";
}

ClearBgpNexthopRegistrationIpAddrRpc::Input::~Input()
{
}

bool ClearBgpNexthopRegistrationIpAddrRpc::Input::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpNexthopRegistrationIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpNexthopRegistrationIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpNexthopRegistrationIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-nexthop-registration-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpNexthopRegistrationIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpNexthopRegistrationIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpNexthopRegistrationIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpPeerDropsAllRpc::ClearBgpPeerDropsAllRpc()
{
    yang_name = "clear-bgp-peer-drops-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpPeerDropsAllRpc::~ClearBgpPeerDropsAllRpc()
{
}

bool ClearBgpPeerDropsAllRpc::has_data() const
{
    return false;
}

bool ClearBgpPeerDropsAllRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpPeerDropsAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-peer-drops-all";

    return path_buffer.str();

}

const EntityPath ClearBgpPeerDropsAllRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpPeerDropsAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpPeerDropsAllRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpPeerDropsAllRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpPeerDropsAllRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpPeerDropsAllRpc>();
}

std::string ClearBgpPeerDropsAllRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpPeerDropsAllRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpPeerDropsAllRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpPeerDropsIpAddrRpc::ClearBgpPeerDropsIpAddrRpc()
    :
    input(std::make_shared<ClearBgpPeerDropsIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-peer-drops-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpPeerDropsIpAddrRpc::~ClearBgpPeerDropsIpAddrRpc()
{
}

bool ClearBgpPeerDropsIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpPeerDropsIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpPeerDropsIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-peer-drops-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpPeerDropsIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpPeerDropsIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpPeerDropsIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpPeerDropsIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpPeerDropsIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpPeerDropsIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpPeerDropsIpAddrRpc>();
}

std::string ClearBgpPeerDropsIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpPeerDropsIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpPeerDropsIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpPeerDropsIpAddrRpc::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-peer-drops-ip-addr";
}

ClearBgpPeerDropsIpAddrRpc::Input::~Input()
{
}

bool ClearBgpPeerDropsIpAddrRpc::Input::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpPeerDropsIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpPeerDropsIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpPeerDropsIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-peer-drops-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpPeerDropsIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpPeerDropsIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpPeerDropsIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpPerformanceStatisticsRpc::ClearBgpPerformanceStatisticsRpc()
{
    yang_name = "clear-bgp-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpPerformanceStatisticsRpc::~ClearBgpPerformanceStatisticsRpc()
{
}

bool ClearBgpPerformanceStatisticsRpc::has_data() const
{
    return false;
}

bool ClearBgpPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-performance-statistics";

    return path_buffer.str();

}

const EntityPath ClearBgpPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpPerformanceStatisticsRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpPerformanceStatisticsRpc>();
}

std::string ClearBgpPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpRpkiServerAllSerialQueryRpc::ClearBgpRpkiServerAllSerialQueryRpc()
{
    yang_name = "clear-bgp-rpki-server-all-serial-query"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpRpkiServerAllSerialQueryRpc::~ClearBgpRpkiServerAllSerialQueryRpc()
{
}

bool ClearBgpRpkiServerAllSerialQueryRpc::has_data() const
{
    return false;
}

bool ClearBgpRpkiServerAllSerialQueryRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpRpkiServerAllSerialQueryRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-server-all-serial-query";

    return path_buffer.str();

}

const EntityPath ClearBgpRpkiServerAllSerialQueryRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpRpkiServerAllSerialQueryRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpRpkiServerAllSerialQueryRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpRpkiServerAllSerialQueryRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpRpkiServerAllSerialQueryRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiServerAllSerialQueryRpc>();
}

std::string ClearBgpRpkiServerAllSerialQueryRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiServerAllSerialQueryRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiServerAllSerialQueryRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpRpkiServerAllRpc::ClearBgpRpkiServerAllRpc()
{
    yang_name = "clear-bgp-rpki-server-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpRpkiServerAllRpc::~ClearBgpRpkiServerAllRpc()
{
}

bool ClearBgpRpkiServerAllRpc::has_data() const
{
    return false;
}

bool ClearBgpRpkiServerAllRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpRpkiServerAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-server-all";

    return path_buffer.str();

}

const EntityPath ClearBgpRpkiServerAllRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpRpkiServerAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpRpkiServerAllRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpRpkiServerAllRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpRpkiServerAllRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiServerAllRpc>();
}

std::string ClearBgpRpkiServerAllRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiServerAllRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiServerAllRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpRpkiServerRpkiServerRpc::ClearBgpRpkiServerRpkiServerRpc()
    :
    input(std::make_shared<ClearBgpRpkiServerRpkiServerRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-rpki-server-rpki-server"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpRpkiServerRpkiServerRpc::~ClearBgpRpkiServerRpkiServerRpc()
{
}

bool ClearBgpRpkiServerRpkiServerRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpRpkiServerRpkiServerRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpRpkiServerRpkiServerRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-server-rpki-server";

    return path_buffer.str();

}

const EntityPath ClearBgpRpkiServerRpkiServerRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpRpkiServerRpkiServerRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpRpkiServerRpkiServerRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpRpkiServerRpkiServerRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpRpkiServerRpkiServerRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpRpkiServerRpkiServerRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiServerRpkiServerRpc>();
}

std::string ClearBgpRpkiServerRpkiServerRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiServerRpkiServerRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiServerRpkiServerRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpRpkiServerRpkiServerRpc::Input::Input()
    :
    rpki_server{YType::str, "rpki-server"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-rpki-server-rpki-server";
}

ClearBgpRpkiServerRpkiServerRpc::Input::~Input()
{
}

bool ClearBgpRpkiServerRpkiServerRpc::Input::has_data() const
{
    return rpki_server.is_set;
}

bool ClearBgpRpkiServerRpkiServerRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(rpki_server.operation);
}

std::string ClearBgpRpkiServerRpkiServerRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpRpkiServerRpkiServerRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-server-rpki-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpki_server.is_set || is_set(rpki_server.operation)) leaf_name_data.push_back(rpki_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpRpkiServerRpkiServerRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpRpkiServerRpkiServerRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpRpkiServerRpkiServerRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rpki-server")
    {
        rpki_server = value;
    }
}

ClearBgpRpkiValidationIpv4Rpc::ClearBgpRpkiValidationIpv4Rpc()
{
    yang_name = "clear-bgp-rpki-validation-ipv4"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpRpkiValidationIpv4Rpc::~ClearBgpRpkiValidationIpv4Rpc()
{
}

bool ClearBgpRpkiValidationIpv4Rpc::has_data() const
{
    return false;
}

bool ClearBgpRpkiValidationIpv4Rpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpRpkiValidationIpv4Rpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-validation-ipv4";

    return path_buffer.str();

}

const EntityPath ClearBgpRpkiValidationIpv4Rpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpRpkiValidationIpv4Rpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpRpkiValidationIpv4Rpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpRpkiValidationIpv4Rpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpRpkiValidationIpv4Rpc::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiValidationIpv4Rpc>();
}

std::string ClearBgpRpkiValidationIpv4Rpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiValidationIpv4Rpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiValidationIpv4Rpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}


}
}

