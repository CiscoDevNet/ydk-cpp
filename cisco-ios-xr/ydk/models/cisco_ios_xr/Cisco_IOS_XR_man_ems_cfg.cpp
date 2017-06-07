
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_man_ems_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_man_ems_cfg {

Grpc::Grpc()
    :
    address_family{YType::str, "address-family"},
    enable{YType::empty, "enable"},
    max_request_per_user{YType::uint32, "max-request-per-user"},
    max_request_total{YType::uint32, "max-request-total"},
    port{YType::uint32, "port"}
    	,
    tls(std::make_shared<Grpc::Tls>())
{
    tls->parent = this;

    yang_name = "grpc"; yang_parent_name = "Cisco-IOS-XR-man-ems-cfg";
}

Grpc::~Grpc()
{
}

bool Grpc::has_data() const
{
    return address_family.is_set
	|| enable.is_set
	|| max_request_per_user.is_set
	|| max_request_total.is_set
	|| port.is_set
	|| (tls !=  nullptr && tls->has_data());
}

bool Grpc::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(enable.operation)
	|| is_set(max_request_per_user.operation)
	|| is_set(max_request_total.operation)
	|| is_set(port.operation)
	|| (tls !=  nullptr && tls->has_operation());
}

std::string Grpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ems-cfg:grpc";

    return path_buffer.str();

}

const EntityPath Grpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (max_request_per_user.is_set || is_set(max_request_per_user.operation)) leaf_name_data.push_back(max_request_per_user.get_name_leafdata());
    if (max_request_total.is_set || is_set(max_request_total.operation)) leaf_name_data.push_back(max_request_total.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Grpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tls")
    {
        if(tls == nullptr)
        {
            tls = std::make_shared<Grpc::Tls>();
        }
        return tls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Grpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tls != nullptr)
    {
        children["tls"] = tls;
    }

    return children;
}

void Grpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "max-request-per-user")
    {
        max_request_per_user = value;
    }
    if(value_path == "max-request-total")
    {
        max_request_total = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

std::shared_ptr<Entity> Grpc::clone_ptr() const
{
    return std::make_shared<Grpc>();
}

std::string Grpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Grpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Grpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Grpc::Tls::Tls()
    :
    enable{YType::empty, "enable"},
    trustpoint{YType::str, "trustpoint"}
{
    yang_name = "tls"; yang_parent_name = "grpc";
}

Grpc::Tls::~Tls()
{
}

bool Grpc::Tls::has_data() const
{
    return enable.is_set
	|| trustpoint.is_set;
}

bool Grpc::Tls::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(trustpoint.operation);
}

std::string Grpc::Tls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tls";

    return path_buffer.str();

}

const EntityPath Grpc::Tls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-ems-cfg:grpc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (trustpoint.is_set || is_set(trustpoint.operation)) leaf_name_data.push_back(trustpoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Grpc::Tls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Grpc::Tls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Grpc::Tls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "trustpoint")
    {
        trustpoint = value;
    }
}


}
}

