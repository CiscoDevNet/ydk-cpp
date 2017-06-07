
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lib_mpp_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lib_mpp_oper {

MppAfIdBaseIdentity::MppAfIdBaseIdentity()
     : Identity("Cisco-IOS-XR-lib-mpp-oper-sub1:Mpp-af-id-base")
{
}

MppAfIdBaseIdentity::~MppAfIdBaseIdentity()
{
}

ManagementPlaneProtection::ManagementPlaneProtection()
    :
    inband(std::make_shared<ManagementPlaneProtection::Inband>())
	,outband(std::make_shared<ManagementPlaneProtection::Outband>())
{
    inband->parent = this;

    outband->parent = this;

    yang_name = "management-plane-protection"; yang_parent_name = "Cisco-IOS-XR-lib-mpp-oper";
}

ManagementPlaneProtection::~ManagementPlaneProtection()
{
}

bool ManagementPlaneProtection::has_data() const
{
    return (inband !=  nullptr && inband->has_data())
	|| (outband !=  nullptr && outband->has_data());
}

bool ManagementPlaneProtection::has_operation() const
{
    return is_set(operation)
	|| (inband !=  nullptr && inband->has_operation())
	|| (outband !=  nullptr && outband->has_operation());
}

std::string ManagementPlaneProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection";

    return path_buffer.str();

}

const EntityPath ManagementPlaneProtection::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ManagementPlaneProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inband")
    {
        if(inband == nullptr)
        {
            inband = std::make_shared<ManagementPlaneProtection::Inband>();
        }
        return inband;
    }

    if(child_yang_name == "outband")
    {
        if(outband == nullptr)
        {
            outband = std::make_shared<ManagementPlaneProtection::Outband>();
        }
        return outband;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inband != nullptr)
    {
        children["inband"] = inband;
    }

    if(outband != nullptr)
    {
        children["outband"] = outband;
    }

    return children;
}

void ManagementPlaneProtection::set_value(const std::string & value_path, std::string value)
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

ManagementPlaneProtection::Outband::Outband()
    :
    interfaces(std::make_shared<ManagementPlaneProtection::Outband::Interfaces>())
	,vrf(std::make_shared<ManagementPlaneProtection::Outband::Vrf>())
{
    interfaces->parent = this;

    vrf->parent = this;

    yang_name = "outband"; yang_parent_name = "management-plane-protection";
}

ManagementPlaneProtection::Outband::~Outband()
{
}

bool ManagementPlaneProtection::Outband::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool ManagementPlaneProtection::Outband::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string ManagementPlaneProtection::Outband::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outband";

    return path_buffer.str();

}

const EntityPath ManagementPlaneProtection::Outband::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Outband::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<ManagementPlaneProtection::Outband::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<ManagementPlaneProtection::Outband::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Outband::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void ManagementPlaneProtection::Outband::set_value(const std::string & value_path, std::string value)
{
}

ManagementPlaneProtection::Outband::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "vrf"; yang_parent_name = "outband";
}

ManagementPlaneProtection::Outband::Vrf::~Vrf()
{
}

bool ManagementPlaneProtection::Outband::Vrf::has_data() const
{
    return vrf_name.is_set;
}

bool ManagementPlaneProtection::Outband::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation);
}

std::string ManagementPlaneProtection::Outband::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath ManagementPlaneProtection::Outband::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection/outband/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Outband::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Outband::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ManagementPlaneProtection::Outband::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

ManagementPlaneProtection::Outband::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "outband";
}

ManagementPlaneProtection::Outband::Interfaces::~Interfaces()
{
}

bool ManagementPlaneProtection::Outband::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool ManagementPlaneProtection::Outband::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ManagementPlaneProtection::Outband::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath ManagementPlaneProtection::Outband::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection/outband/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Outband::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ManagementPlaneProtection::Outband::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Outband::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ManagementPlaneProtection::Outband::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

ManagementPlaneProtection::Outband::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

ManagementPlaneProtection::Outband::Interfaces::Interface::~Interface()
{
}

bool ManagementPlaneProtection::Outband::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool ManagementPlaneProtection::Outband::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ManagementPlaneProtection::Outband::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath ManagementPlaneProtection::Outband::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection/outband/interfaces/" << get_segment_path();
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

std::shared_ptr<Entity> ManagementPlaneProtection::Outband::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        for(auto const & c : protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol>();
        c->parent = this;
        protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Outband::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ManagementPlaneProtection::Outband::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::Protocol()
    :
    allow{YType::enumeration, "allow"},
    is_all_peers_allowed{YType::boolean, "is-all-peers-allowed"}
{
    yang_name = "protocol"; yang_parent_name = "interface";
}

ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::~Protocol()
{
}

bool ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::has_data() const
{
    for (std::size_t index=0; index<peer_address.size(); index++)
    {
        if(peer_address[index]->has_data())
            return true;
    }
    return allow.is_set
	|| is_all_peers_allowed.is_set;
}

bool ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::has_operation() const
{
    for (std::size_t index=0; index<peer_address.size(); index++)
    {
        if(peer_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(allow.operation)
	|| is_set(is_all_peers_allowed.operation);
}

std::string ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XR_lib_mpp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow.is_set || is_set(allow.operation)) leaf_name_data.push_back(allow.get_name_leafdata());
    if (is_all_peers_allowed.is_set || is_set(is_all_peers_allowed.operation)) leaf_name_data.push_back(is_all_peers_allowed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-address")
    {
        for(auto const & c : peer_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress>();
        c->parent = this;
        peer_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow")
    {
        allow = value;
    }
    if(value_path == "is-all-peers-allowed")
    {
        is_all_peers_allowed = value;
    }
}

ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::PeerAddress()
    :
    af_name{YType::identityref, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "peer-address"; yang_parent_name = "protocol";
}

ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::~PeerAddress()
{
}

bool ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-address";

    return path_buffer.str();

}

const EntityPath ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerAddress' in Cisco_IOS_XR_lib_mpp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

ManagementPlaneProtection::Inband::Inband()
    :
    interfaces(std::make_shared<ManagementPlaneProtection::Inband::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "inband"; yang_parent_name = "management-plane-protection";
}

ManagementPlaneProtection::Inband::~Inband()
{
}

bool ManagementPlaneProtection::Inband::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool ManagementPlaneProtection::Inband::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string ManagementPlaneProtection::Inband::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inband";

    return path_buffer.str();

}

const EntityPath ManagementPlaneProtection::Inband::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void ManagementPlaneProtection::Inband::set_value(const std::string & value_path, std::string value)
{
}

ManagementPlaneProtection::Inband::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "inband";
}

ManagementPlaneProtection::Inband::Interfaces::~Interfaces()
{
}

bool ManagementPlaneProtection::Inband::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool ManagementPlaneProtection::Inband::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ManagementPlaneProtection::Inband::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath ManagementPlaneProtection::Inband::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection/inband/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Inband::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ManagementPlaneProtection::Inband::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Inband::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ManagementPlaneProtection::Inband::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

ManagementPlaneProtection::Inband::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

ManagementPlaneProtection::Inband::Interfaces::Interface::~Interface()
{
}

bool ManagementPlaneProtection::Inband::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool ManagementPlaneProtection::Inband::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ManagementPlaneProtection::Inband::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath ManagementPlaneProtection::Inband::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-oper:management-plane-protection/inband/interfaces/" << get_segment_path();
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

std::shared_ptr<Entity> ManagementPlaneProtection::Inband::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        for(auto const & c : protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol>();
        c->parent = this;
        protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Inband::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ManagementPlaneProtection::Inband::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::Protocol()
    :
    allow{YType::enumeration, "allow"},
    is_all_peers_allowed{YType::boolean, "is-all-peers-allowed"}
{
    yang_name = "protocol"; yang_parent_name = "interface";
}

ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::~Protocol()
{
}

bool ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::has_data() const
{
    for (std::size_t index=0; index<peer_address.size(); index++)
    {
        if(peer_address[index]->has_data())
            return true;
    }
    return allow.is_set
	|| is_all_peers_allowed.is_set;
}

bool ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::has_operation() const
{
    for (std::size_t index=0; index<peer_address.size(); index++)
    {
        if(peer_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(allow.operation)
	|| is_set(is_all_peers_allowed.operation);
}

std::string ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XR_lib_mpp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow.is_set || is_set(allow.operation)) leaf_name_data.push_back(allow.get_name_leafdata());
    if (is_all_peers_allowed.is_set || is_set(is_all_peers_allowed.operation)) leaf_name_data.push_back(is_all_peers_allowed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-address")
    {
        for(auto const & c : peer_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress>();
        c->parent = this;
        peer_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow")
    {
        allow = value;
    }
    if(value_path == "is-all-peers-allowed")
    {
        is_all_peers_allowed = value;
    }
}

ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::PeerAddress()
    :
    af_name{YType::identityref, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "peer-address"; yang_parent_name = "protocol";
}

ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::~PeerAddress()
{
}

bool ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-address";

    return path_buffer.str();

}

const EntityPath ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerAddress' in Cisco_IOS_XR_lib_mpp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Ipv4Identity::Ipv4Identity()
     : Identity("Cisco-IOS-XR-lib-mpp-oper-sub1:ipv4")
{
}

Ipv4Identity::~Ipv4Identity()
{
}

Ipv6Identity::Ipv6Identity()
     : Identity("Cisco-IOS-XR-lib-mpp-oper-sub1:ipv6")
{
}

Ipv6Identity::~Ipv6Identity()
{
}

const Enum::YLeaf MppAllowEnum::ssh {0, "ssh"};
const Enum::YLeaf MppAllowEnum::telnet {1, "telnet"};
const Enum::YLeaf MppAllowEnum::snmp {2, "snmp"};
const Enum::YLeaf MppAllowEnum::tftp {3, "tftp"};
const Enum::YLeaf MppAllowEnum::http {4, "http"};
const Enum::YLeaf MppAllowEnum::xr_xml {5, "xr-xml"};
const Enum::YLeaf MppAllowEnum::netconf {6, "netconf"};
const Enum::YLeaf MppAllowEnum::all {7, "all"};


}
}

