
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_man_ems_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_man_ems_cfg {

Grpc::Grpc()
    :
    port{YType::uint32, "port"},
    vrf{YType::str, "vrf"},
    enable{YType::empty, "enable"},
    max_request_per_user{YType::uint32, "max-request-per-user"},
    address_family{YType::str, "address-family"},
    max_request_total{YType::uint32, "max-request-total"}
    	,
    service_layer(std::make_shared<Grpc::ServiceLayer>())
	,tls(std::make_shared<Grpc::Tls>())
{
    service_layer->parent = this;
    tls->parent = this;

    yang_name = "grpc"; yang_parent_name = "Cisco-IOS-XR-man-ems-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Grpc::~Grpc()
{
}

bool Grpc::has_data() const
{
    return port.is_set
	|| vrf.is_set
	|| enable.is_set
	|| max_request_per_user.is_set
	|| address_family.is_set
	|| max_request_total.is_set
	|| (service_layer !=  nullptr && service_layer->has_data())
	|| (tls !=  nullptr && tls->has_data());
}

bool Grpc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(max_request_per_user.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(max_request_total.yfilter)
	|| (service_layer !=  nullptr && service_layer->has_operation())
	|| (tls !=  nullptr && tls->has_operation());
}

std::string Grpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ems-cfg:grpc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grpc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (max_request_per_user.is_set || is_set(max_request_per_user.yfilter)) leaf_name_data.push_back(max_request_per_user.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (max_request_total.is_set || is_set(max_request_total.yfilter)) leaf_name_data.push_back(max_request_total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Grpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-layer")
    {
        if(service_layer == nullptr)
        {
            service_layer = std::make_shared<Grpc::ServiceLayer>();
        }
        return service_layer;
    }

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
    if(service_layer != nullptr)
    {
        children["service-layer"] = service_layer;
    }

    if(tls != nullptr)
    {
        children["tls"] = tls;
    }

    return children;
}

void Grpc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-request-per-user")
    {
        max_request_per_user = value;
        max_request_per_user.value_namespace = name_space;
        max_request_per_user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-request-total")
    {
        max_request_total = value;
        max_request_total.value_namespace = name_space;
        max_request_total.value_namespace_prefix = name_space_prefix;
    }
}

void Grpc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "max-request-per-user")
    {
        max_request_per_user.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "max-request-total")
    {
        max_request_total.yfilter = yfilter;
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

std::map<std::pair<std::string, std::string>, std::string> Grpc::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Grpc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-layer" || name == "tls" || name == "port" || name == "vrf" || name == "enable" || name == "max-request-per-user" || name == "address-family" || name == "max-request-total")
        return true;
    return false;
}

Grpc::ServiceLayer::ServiceLayer()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "service-layer"; yang_parent_name = "grpc"; is_top_level_class = false; has_list_ancestor = false;
}

Grpc::ServiceLayer::~ServiceLayer()
{
}

bool Grpc::ServiceLayer::has_data() const
{
    return enable.is_set;
}

bool Grpc::ServiceLayer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Grpc::ServiceLayer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ems-cfg:grpc/" << get_segment_path();
    return path_buffer.str();
}

std::string Grpc::ServiceLayer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-layer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grpc::ServiceLayer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Grpc::ServiceLayer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Grpc::ServiceLayer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Grpc::ServiceLayer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Grpc::ServiceLayer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Grpc::ServiceLayer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Grpc::Tls::Tls()
    :
    trustpoint{YType::str, "trustpoint"},
    enable{YType::empty, "enable"}
{

    yang_name = "tls"; yang_parent_name = "grpc"; is_top_level_class = false; has_list_ancestor = false;
}

Grpc::Tls::~Tls()
{
}

bool Grpc::Tls::has_data() const
{
    return trustpoint.is_set
	|| enable.is_set;
}

bool Grpc::Tls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Grpc::Tls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ems-cfg:grpc/" << get_segment_path();
    return path_buffer.str();
}

std::string Grpc::Tls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grpc::Tls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

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

void Grpc::Tls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Grpc::Tls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Grpc::Tls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint" || name == "enable")
        return true;
    return false;
}


}
}

