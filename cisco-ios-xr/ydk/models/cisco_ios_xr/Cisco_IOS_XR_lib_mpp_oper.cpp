
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lib_mpp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lib_mpp_oper {

MppAfIdBase::MppAfIdBase()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XR-lib-mpp-oper", "Cisco-IOS-XR-lib-mpp-oper", "Cisco-IOS-XR-lib-mpp-oper:Mpp-af-id-base")
{

}

MppAfIdBase::~MppAfIdBase()
{
}

ManagementPlaneProtection::ManagementPlaneProtection()
    :
    outband(std::make_shared<ManagementPlaneProtection::Outband>())
    , inband(std::make_shared<ManagementPlaneProtection::Inband>())
{
    outband->parent = this;
    inband->parent = this;

    yang_name = "management-plane-protection"; yang_parent_name = "Cisco-IOS-XR-lib-mpp-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

ManagementPlaneProtection::~ManagementPlaneProtection()
{
}

bool ManagementPlaneProtection::has_data() const
{
    if (is_presence_container) return true;
    return (outband !=  nullptr && outband->has_data())
	|| (inband !=  nullptr && inband->has_data());
}

bool ManagementPlaneProtection::has_operation() const
{
    return is_set(yfilter)
	|| (outband !=  nullptr && outband->has_operation())
	|| (inband !=  nullptr && inband->has_operation());
}

std::string ManagementPlaneProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ManagementPlaneProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ManagementPlaneProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outband")
    {
        if(outband == nullptr)
        {
            outband = std::make_shared<ManagementPlaneProtection::Outband>();
        }
        return outband;
    }

    if(child_yang_name == "inband")
    {
        if(inband == nullptr)
        {
            inband = std::make_shared<ManagementPlaneProtection::Inband>();
        }
        return inband;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(outband != nullptr)
    {
        children["outband"] = outband;
    }

    if(inband != nullptr)
    {
        children["inband"] = inband;
    }

    return children;
}

void ManagementPlaneProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ManagementPlaneProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ManagementPlaneProtection::clone_ptr() const
{
    return std::make_shared<ManagementPlaneProtection>();
}

std::string ManagementPlaneProtection::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ManagementPlaneProtection::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ManagementPlaneProtection::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ManagementPlaneProtection::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ManagementPlaneProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outband" || name == "inband")
        return true;
    return false;
}

ManagementPlaneProtection::Outband::Outband()
    :
    vrf(std::make_shared<ManagementPlaneProtection::Outband::Vrf>())
    , interfaces(std::make_shared<ManagementPlaneProtection::Outband::Interfaces>())
{
    vrf->parent = this;
    interfaces->parent = this;

    yang_name = "outband"; yang_parent_name = "management-plane-protection"; is_top_level_class = false; has_list_ancestor = false; 
}

ManagementPlaneProtection::Outband::~Outband()
{
}

bool ManagementPlaneProtection::Outband::has_data() const
{
    if (is_presence_container) return true;
    return (vrf !=  nullptr && vrf->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool ManagementPlaneProtection::Outband::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string ManagementPlaneProtection::Outband::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string ManagementPlaneProtection::Outband::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outband";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ManagementPlaneProtection::Outband::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Outband::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<ManagementPlaneProtection::Outband::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<ManagementPlaneProtection::Outband::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Outband::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void ManagementPlaneProtection::Outband::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ManagementPlaneProtection::Outband::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ManagementPlaneProtection::Outband::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "interfaces")
        return true;
    return false;
}

ManagementPlaneProtection::Outband::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "vrf"; yang_parent_name = "outband"; is_top_level_class = false; has_list_ancestor = false; 
}

ManagementPlaneProtection::Outband::Vrf::~Vrf()
{
}

bool ManagementPlaneProtection::Outband::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set;
}

bool ManagementPlaneProtection::Outband::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ManagementPlaneProtection::Outband::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection/outband/" << get_segment_path();
    return path_buffer.str();
}

std::string ManagementPlaneProtection::Outband::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ManagementPlaneProtection::Outband::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Outband::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Outband::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ManagementPlaneProtection::Outband::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ManagementPlaneProtection::Outband::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ManagementPlaneProtection::Outband::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

ManagementPlaneProtection::Outband::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "outband"; is_top_level_class = false; has_list_ancestor = false; 
}

ManagementPlaneProtection::Outband::Interfaces::~Interfaces()
{
}

bool ManagementPlaneProtection::Outband::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool ManagementPlaneProtection::Outband::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ManagementPlaneProtection::Outband::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection/outband/" << get_segment_path();
    return path_buffer.str();
}

std::string ManagementPlaneProtection::Outband::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ManagementPlaneProtection::Outband::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Outband::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<ManagementPlaneProtection::Outband::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Outband::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ManagementPlaneProtection::Outband::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ManagementPlaneProtection::Outband::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ManagementPlaneProtection::Outband::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

ManagementPlaneProtection::Outband::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    protocol(this, {})
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

ManagementPlaneProtection::Outband::Interfaces::Interface::~Interface()
{
}

bool ManagementPlaneProtection::Outband::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool ManagementPlaneProtection::Outband::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ManagementPlaneProtection::Outband::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection/outband/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string ManagementPlaneProtection::Outband::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ManagementPlaneProtection::Outband::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Outband::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        auto c = std::make_shared<ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol>();
        c->parent = this;
        protocol.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Outband::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : protocol.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ManagementPlaneProtection::Outband::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ManagementPlaneProtection::Outband::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ManagementPlaneProtection::Outband::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "interface-name")
        return true;
    return false;
}

ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::Protocol()
    :
    allow{YType::enumeration, "allow"},
    is_all_peers_allowed{YType::boolean, "is-all-peers-allowed"}
        ,
    peer_address(this, {})
{

    yang_name = "protocol"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::~Protocol()
{
}

bool ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_address.len(); index++)
    {
        if(peer_address[index]->has_data())
            return true;
    }
    return allow.is_set
	|| is_all_peers_allowed.is_set;
}

bool ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::has_operation() const
{
    for (std::size_t index=0; index<peer_address.len(); index++)
    {
        if(peer_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(allow.yfilter)
	|| ydk::is_set(is_all_peers_allowed.yfilter);
}

std::string ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow.is_set || is_set(allow.yfilter)) leaf_name_data.push_back(allow.get_name_leafdata());
    if (is_all_peers_allowed.is_set || is_set(is_all_peers_allowed.yfilter)) leaf_name_data.push_back(is_all_peers_allowed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-address")
    {
        auto c = std::make_shared<ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress>();
        c->parent = this;
        peer_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : peer_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow")
    {
        allow = value;
        allow.value_namespace = name_space;
        allow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-all-peers-allowed")
    {
        is_all_peers_allowed = value;
        is_all_peers_allowed.value_namespace = name_space;
        is_all_peers_allowed.value_namespace_prefix = name_space_prefix;
    }
}

void ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow")
    {
        allow.yfilter = yfilter;
    }
    if(value_path == "is-all-peers-allowed")
    {
        is_all_peers_allowed.yfilter = yfilter;
    }
}

bool ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-address" || name == "allow" || name == "is-all-peers-allowed")
        return true;
    return false;
}

ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::PeerAddress()
    :
    af_name{YType::identityref, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "peer-address"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::~PeerAddress()
{
}

bool ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

ManagementPlaneProtection::Inband::Inband()
    :
    interfaces(std::make_shared<ManagementPlaneProtection::Inband::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "inband"; yang_parent_name = "management-plane-protection"; is_top_level_class = false; has_list_ancestor = false; 
}

ManagementPlaneProtection::Inband::~Inband()
{
}

bool ManagementPlaneProtection::Inband::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool ManagementPlaneProtection::Inband::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string ManagementPlaneProtection::Inband::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string ManagementPlaneProtection::Inband::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inband";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ManagementPlaneProtection::Inband::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Inband::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<ManagementPlaneProtection::Inband::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Inband::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void ManagementPlaneProtection::Inband::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ManagementPlaneProtection::Inband::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ManagementPlaneProtection::Inband::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces")
        return true;
    return false;
}

ManagementPlaneProtection::Inband::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "inband"; is_top_level_class = false; has_list_ancestor = false; 
}

ManagementPlaneProtection::Inband::Interfaces::~Interfaces()
{
}

bool ManagementPlaneProtection::Inband::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool ManagementPlaneProtection::Inband::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ManagementPlaneProtection::Inband::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection/inband/" << get_segment_path();
    return path_buffer.str();
}

std::string ManagementPlaneProtection::Inband::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ManagementPlaneProtection::Inband::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Inband::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<ManagementPlaneProtection::Inband::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Inband::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ManagementPlaneProtection::Inband::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ManagementPlaneProtection::Inband::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ManagementPlaneProtection::Inband::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

ManagementPlaneProtection::Inband::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    protocol(this, {})
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

ManagementPlaneProtection::Inband::Interfaces::Interface::~Interface()
{
}

bool ManagementPlaneProtection::Inband::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool ManagementPlaneProtection::Inband::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ManagementPlaneProtection::Inband::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection/inband/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string ManagementPlaneProtection::Inband::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ManagementPlaneProtection::Inband::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Inband::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        auto c = std::make_shared<ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol>();
        c->parent = this;
        protocol.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Inband::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : protocol.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ManagementPlaneProtection::Inband::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ManagementPlaneProtection::Inband::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ManagementPlaneProtection::Inband::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "interface-name")
        return true;
    return false;
}

ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::Protocol()
    :
    allow{YType::enumeration, "allow"},
    is_all_peers_allowed{YType::boolean, "is-all-peers-allowed"}
        ,
    peer_address(this, {})
{

    yang_name = "protocol"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::~Protocol()
{
}

bool ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_address.len(); index++)
    {
        if(peer_address[index]->has_data())
            return true;
    }
    return allow.is_set
	|| is_all_peers_allowed.is_set;
}

bool ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::has_operation() const
{
    for (std::size_t index=0; index<peer_address.len(); index++)
    {
        if(peer_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(allow.yfilter)
	|| ydk::is_set(is_all_peers_allowed.yfilter);
}

std::string ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow.is_set || is_set(allow.yfilter)) leaf_name_data.push_back(allow.get_name_leafdata());
    if (is_all_peers_allowed.is_set || is_set(is_all_peers_allowed.yfilter)) leaf_name_data.push_back(is_all_peers_allowed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-address")
    {
        auto c = std::make_shared<ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress>();
        c->parent = this;
        peer_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : peer_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow")
    {
        allow = value;
        allow.value_namespace = name_space;
        allow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-all-peers-allowed")
    {
        is_all_peers_allowed = value;
        is_all_peers_allowed.value_namespace = name_space;
        is_all_peers_allowed.value_namespace_prefix = name_space_prefix;
    }
}

void ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow")
    {
        allow.yfilter = yfilter;
    }
    if(value_path == "is-all-peers-allowed")
    {
        is_all_peers_allowed.yfilter = yfilter;
    }
}

bool ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-address" || name == "allow" || name == "is-all-peers-allowed")
        return true;
    return false;
}

ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::PeerAddress()
    :
    af_name{YType::identityref, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "peer-address"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::~PeerAddress()
{
}

bool ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv4::Ipv4()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XR-lib-mpp-oper", "Cisco-IOS-XR-lib-mpp-oper", "Cisco-IOS-XR-lib-mpp-oper:ipv4")
{

}

Ipv4::~Ipv4()
{
}

Ipv6::Ipv6()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XR-lib-mpp-oper", "Cisco-IOS-XR-lib-mpp-oper", "Cisco-IOS-XR-lib-mpp-oper:ipv6")
{

}

Ipv6::~Ipv6()
{
}

const Enum::YLeaf MppAllow::ssh {0, "ssh"};
const Enum::YLeaf MppAllow::telnet {1, "telnet"};
const Enum::YLeaf MppAllow::snmp {2, "snmp"};
const Enum::YLeaf MppAllow::tftp {3, "tftp"};
const Enum::YLeaf MppAllow::http {4, "http"};
const Enum::YLeaf MppAllow::xr_xml {5, "xr-xml"};
const Enum::YLeaf MppAllow::netconf {6, "netconf"};
const Enum::YLeaf MppAllow::all {7, "all"};


}
}

