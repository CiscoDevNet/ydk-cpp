
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
    max_streams{YType::uint32, "max-streams"},
    enable{YType::empty, "enable"},
    max_streams_per_user{YType::uint32, "max-streams-per-user"},
    max_request_per_user{YType::uint32, "max-request-per-user"},
    no_tls{YType::empty, "no-tls"},
    tls_trustpoint{YType::str, "tls-trustpoint"},
    dscp{YType::str, "dscp"},
    address_family{YType::str, "address-family"},
    tls_mutual{YType::empty, "tls-mutual"},
    max_request_total{YType::uint32, "max-request-total"}
        ,
    service_layer(std::make_shared<Grpc::ServiceLayer>())
    , tls_cipher(std::make_shared<Grpc::TlsCipher>())
{
    service_layer->parent = this;
    tls_cipher->parent = this;

    yang_name = "grpc"; yang_parent_name = "Cisco-IOS-XR-man-ems-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Grpc::~Grpc()
{
}

bool Grpc::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| vrf.is_set
	|| max_streams.is_set
	|| enable.is_set
	|| max_streams_per_user.is_set
	|| max_request_per_user.is_set
	|| no_tls.is_set
	|| tls_trustpoint.is_set
	|| dscp.is_set
	|| address_family.is_set
	|| tls_mutual.is_set
	|| max_request_total.is_set
	|| (service_layer !=  nullptr && service_layer->has_data())
	|| (tls_cipher !=  nullptr && tls_cipher->has_data());
}

bool Grpc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(max_streams.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(max_streams_per_user.yfilter)
	|| ydk::is_set(max_request_per_user.yfilter)
	|| ydk::is_set(no_tls.yfilter)
	|| ydk::is_set(tls_trustpoint.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(tls_mutual.yfilter)
	|| ydk::is_set(max_request_total.yfilter)
	|| (service_layer !=  nullptr && service_layer->has_operation())
	|| (tls_cipher !=  nullptr && tls_cipher->has_operation());
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
    if (max_streams.is_set || is_set(max_streams.yfilter)) leaf_name_data.push_back(max_streams.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (max_streams_per_user.is_set || is_set(max_streams_per_user.yfilter)) leaf_name_data.push_back(max_streams_per_user.get_name_leafdata());
    if (max_request_per_user.is_set || is_set(max_request_per_user.yfilter)) leaf_name_data.push_back(max_request_per_user.get_name_leafdata());
    if (no_tls.is_set || is_set(no_tls.yfilter)) leaf_name_data.push_back(no_tls.get_name_leafdata());
    if (tls_trustpoint.is_set || is_set(tls_trustpoint.yfilter)) leaf_name_data.push_back(tls_trustpoint.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (tls_mutual.is_set || is_set(tls_mutual.yfilter)) leaf_name_data.push_back(tls_mutual.get_name_leafdata());
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

    if(child_yang_name == "tls-cipher")
    {
        if(tls_cipher == nullptr)
        {
            tls_cipher = std::make_shared<Grpc::TlsCipher>();
        }
        return tls_cipher;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Grpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_layer != nullptr)
    {
        children["service-layer"] = service_layer;
    }

    if(tls_cipher != nullptr)
    {
        children["tls-cipher"] = tls_cipher;
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
    if(value_path == "max-streams")
    {
        max_streams = value;
        max_streams.value_namespace = name_space;
        max_streams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-streams-per-user")
    {
        max_streams_per_user = value;
        max_streams_per_user.value_namespace = name_space;
        max_streams_per_user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-request-per-user")
    {
        max_request_per_user = value;
        max_request_per_user.value_namespace = name_space;
        max_request_per_user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-tls")
    {
        no_tls = value;
        no_tls.value_namespace = name_space;
        no_tls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tls-trustpoint")
    {
        tls_trustpoint = value;
        tls_trustpoint.value_namespace = name_space;
        tls_trustpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tls-mutual")
    {
        tls_mutual = value;
        tls_mutual.value_namespace = name_space;
        tls_mutual.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "max-streams")
    {
        max_streams.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "max-streams-per-user")
    {
        max_streams_per_user.yfilter = yfilter;
    }
    if(value_path == "max-request-per-user")
    {
        max_request_per_user.yfilter = yfilter;
    }
    if(value_path == "no-tls")
    {
        no_tls.yfilter = yfilter;
    }
    if(value_path == "tls-trustpoint")
    {
        tls_trustpoint.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "tls-mutual")
    {
        tls_mutual.yfilter = yfilter;
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
    if(name == "service-layer" || name == "tls-cipher" || name == "port" || name == "vrf" || name == "max-streams" || name == "enable" || name == "max-streams-per-user" || name == "max-request-per-user" || name == "no-tls" || name == "tls-trustpoint" || name == "dscp" || name == "address-family" || name == "tls-mutual" || name == "max-request-total")
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
    if (is_presence_container) return true;
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
    char count=0;
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

Grpc::TlsCipher::TlsCipher()
    :
    default_{YType::enumeration, "default"},
    enable{YType::str, "enable"},
    disable{YType::str, "disable"}
{

    yang_name = "tls-cipher"; yang_parent_name = "grpc"; is_top_level_class = false; has_list_ancestor = false; 
}

Grpc::TlsCipher::~TlsCipher()
{
}

bool Grpc::TlsCipher::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| enable.is_set
	|| disable.is_set;
}

bool Grpc::TlsCipher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Grpc::TlsCipher::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ems-cfg:grpc/" << get_segment_path();
    return path_buffer.str();
}

std::string Grpc::TlsCipher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tls-cipher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grpc::TlsCipher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Grpc::TlsCipher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Grpc::TlsCipher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Grpc::TlsCipher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Grpc::TlsCipher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Grpc::TlsCipher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "enable" || name == "disable")
        return true;
    return false;
}

const Enum::YLeaf Dscp::default_ {0, "default"};
const Enum::YLeaf Dscp::af11 {10, "af11"};
const Enum::YLeaf Dscp::af12 {12, "af12"};
const Enum::YLeaf Dscp::af13 {14, "af13"};
const Enum::YLeaf Dscp::af21 {18, "af21"};
const Enum::YLeaf Dscp::af22 {20, "af22"};
const Enum::YLeaf Dscp::af23 {22, "af23"};
const Enum::YLeaf Dscp::af31 {26, "af31"};
const Enum::YLeaf Dscp::af32 {28, "af32"};
const Enum::YLeaf Dscp::af33 {30, "af33"};
const Enum::YLeaf Dscp::af41 {34, "af41"};
const Enum::YLeaf Dscp::af42 {36, "af42"};
const Enum::YLeaf Dscp::af43 {38, "af43"};
const Enum::YLeaf Dscp::cs1 {8, "cs1"};
const Enum::YLeaf Dscp::cs2 {16, "cs2"};
const Enum::YLeaf Dscp::cs3 {24, "cs3"};
const Enum::YLeaf Dscp::cs4 {32, "cs4"};
const Enum::YLeaf Dscp::cs5 {40, "cs5"};
const Enum::YLeaf Dscp::cs6 {48, "cs6"};
const Enum::YLeaf Dscp::cs7 {56, "cs7"};
const Enum::YLeaf Dscp::ef {46, "ef"};

const Enum::YLeaf GrpCTlsCipherDefault::disable {1, "disable"};
const Enum::YLeaf GrpCTlsCipherDefault::enable {2, "enable"};


}
}

