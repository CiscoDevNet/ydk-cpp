
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lib_mpp_cfg_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lib_mpp_cfg {

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::HttpProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "http-protocol"; yang_parent_name = "all-interfaces";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::~HttpProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http-protocol";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "http-protocol";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/http-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/http-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v4/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/http-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v6/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/http-protocol/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::TftpProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "tftp-protocol"; yang_parent_name = "all-interfaces";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::~TftpProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp-protocol";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "tftp-protocol";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/tftp-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/tftp-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v4/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/tftp-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v6/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/tftp-protocol/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::NetconfProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "netconf-protocol"; yang_parent_name = "all-interfaces";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::~NetconfProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-protocol";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "netconf-protocol";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/netconf-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/netconf-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v4/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/netconf-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v6/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/netconf-protocol/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::XrXml()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "xr-xml"; yang_parent_name = "all-interfaces";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::~XrXml()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xr-xml";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "xr-xml";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/xr-xml/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/xr-xml/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v4/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/xr-xml/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v6/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::SshProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "ssh-protocol"; yang_parent_name = "all-interfaces";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::~SshProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh-protocol";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "ssh-protocol";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/ssh-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/ssh-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v4/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/ssh-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v6/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::SnmpProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "snmp-protocol"; yang_parent_name = "all-interfaces";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::~SnmpProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-protocol";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "snmp-protocol";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/snmp-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/snmp-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v4/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/snmp-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v6/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::TelnetProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "telnet-protocol"; yang_parent_name = "all-interfaces";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::~TelnetProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet-protocol";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "telnet-protocol";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/telnet-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/telnet-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v4/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/telnet-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v6/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::AllProtocols()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "all-protocols"; yang_parent_name = "all-interfaces";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::~AllProtocols()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-protocols";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "all-protocols";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/all-protocols/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/all-protocols/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v4/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/all-protocols/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v6/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}


}
}

