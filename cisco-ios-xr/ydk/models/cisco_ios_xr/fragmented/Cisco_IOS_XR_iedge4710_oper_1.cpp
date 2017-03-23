
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_iedge4710_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_iedge4710_oper {

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet;

    pppoe->parent = this;
    children["pppoe"] = pppoe;

    yang_name = "state-xr"; yang_parent_name = "ipv4-address-vrf-summary";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        else
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        else
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
        else
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe;
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet;

    pppoe->parent = this;
    children["pppoe"] = pppoe;

    yang_name = "address-family-xr"; yang_parent_name = "ipv4-address-vrf-summary";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamilyXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        else
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        else
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
        else
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe;
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummaries()
{
    yang_name = "address-family-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::~AddressFamilySummaries()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::has_data() const
{
    for (std::size_t index=0; index<address_family_summary.size(); index++)
    {
        if(address_family_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::has_operation() const
{
    for (std::size_t index=0; index<address_family_summary.size(); index++)
    {
        if(address_family_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamilySummaries' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-summary")
    {
        for(auto const & c : address_family_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary>();
        c->parent = this;
        address_family_summary.push_back(std::move(c));
        children[segment_path] = address_family_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::get_children()
{
    for (auto const & c : address_family_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilySummary()
    :
    address_family{YType::enumeration, "address-family"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr;

    state_xr->parent = this;
    children["state-xr"] = state_xr;

    yang_name = "address-family-summary"; yang_parent_name = "address-family-summaries";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::~AddressFamilySummary()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::has_data() const
{
    return address_family.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-summary" <<"[address-family='" <<address_family <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamilySummary' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr;
        }
        else
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr;
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr;
        }
        else
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr;
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr;
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet;

    pppoe->parent = this;
    children["pppoe"] = pppoe;

    yang_name = "state-xr"; yang_parent_name = "address-family-summary";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        else
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        else
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
        else
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe;
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet;

    pppoe->parent = this;
    children["pppoe"] = pppoe;

    yang_name = "address-family-xr"; yang_parent_name = "address-family-summary";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamilyXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        else
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        else
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
        else
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe;
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummaries()
{
    yang_name = "username-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::~UsernameSummaries()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::has_data() const
{
    for (std::size_t index=0; index<username_summary.size(); index++)
    {
        if(username_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::has_operation() const
{
    for (std::size_t index=0; index<username_summary.size(); index++)
    {
        if(username_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsernameSummaries' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "username-summary")
    {
        for(auto const & c : username_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary>();
        c->parent = this;
        username_summary.push_back(std::move(c));
        children[segment_path] = username_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::UsernameSummaries::get_children()
{
    for (auto const & c : username_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::UsernameSummary()
    :
    username{YType::str, "username"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr;

    state_xr->parent = this;
    children["state-xr"] = state_xr;

    yang_name = "username-summary"; yang_parent_name = "username-summaries";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::~UsernameSummary()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::has_data() const
{
    return username.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(username.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username-summary" <<"[username='" <<username <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsernameSummary' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr;
        }
        else
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr;
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr;
        }
        else
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr;
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr;
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "username")
    {
        username = value;
    }
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet;

    pppoe->parent = this;
    children["pppoe"] = pppoe;

    yang_name = "state-xr"; yang_parent_name = "username-summary";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        else
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        else
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
        else
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe;
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet;

    pppoe->parent = this;
    children["pppoe"] = pppoe;

    yang_name = "address-family-xr"; yang_parent_name = "username-summary";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamilyXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        else
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        else
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
        else
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe;
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummaries()
{
    yang_name = "access-interface-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::~AccessInterfaceSummaries()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::has_data() const
{
    for (std::size_t index=0; index<access_interface_summary.size(); index++)
    {
        if(access_interface_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::has_operation() const
{
    for (std::size_t index=0; index<access_interface_summary.size(); index++)
    {
        if(access_interface_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessInterfaceSummaries' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-interface-summary")
    {
        for(auto const & c : access_interface_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary>();
        c->parent = this;
        access_interface_summary.push_back(std::move(c));
        children[segment_path] = access_interface_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::get_children()
{
    for (auto const & c : access_interface_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AccessInterfaceSummary()
    :
    interface_name{YType::str, "interface-name"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr;

    state_xr->parent = this;
    children["state-xr"] = state_xr;

    yang_name = "access-interface-summary"; yang_parent_name = "access-interface-summaries";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::~AccessInterfaceSummary()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::has_data() const
{
    return interface_name.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-summary" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessInterfaceSummary' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr;
        }
        else
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr;
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr;
        }
        else
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr;
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr;
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet;

    pppoe->parent = this;
    children["pppoe"] = pppoe;

    yang_name = "state-xr"; yang_parent_name = "access-interface-summary";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        else
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        else
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
        else
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe;
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet;

    pppoe->parent = this;
    children["pppoe"] = pppoe;

    yang_name = "address-family-xr"; yang_parent_name = "access-interface-summary";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamilyXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        else
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        else
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
        else
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe;
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummaries()
{
    yang_name = "ipv4-address-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::~Ipv4AddressSummaries()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv4_address_summary.size(); index++)
    {
        if(ipv4_address_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address_summary.size(); index++)
    {
        if(ipv4_address_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4AddressSummaries' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address-summary")
    {
        for(auto const & c : ipv4_address_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary>();
        c->parent = this;
        ipv4_address_summary.push_back(std::move(c));
        children[segment_path] = ipv4_address_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::get_children()
{
    for (auto const & c : ipv4_address_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::Ipv4AddressSummary()
    :
    address{YType::str, "address"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr;

    state_xr->parent = this;
    children["state-xr"] = state_xr;

    yang_name = "ipv4-address-summary"; yang_parent_name = "ipv4-address-summaries";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::~Ipv4AddressSummary()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::has_data() const
{
    return address.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-summary" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4AddressSummary' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr;
        }
        else
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr;
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr;
        }
        else
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr;
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr;
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet;

    pppoe->parent = this;
    children["pppoe"] = pppoe;

    yang_name = "state-xr"; yang_parent_name = "ipv4-address-summary";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        else
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        else
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
        else
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe;
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet;

    pppoe->parent = this;
    children["pppoe"] = pppoe;

    yang_name = "address-family-xr"; yang_parent_name = "ipv4-address-summary";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamilyXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        else
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        else
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
        else
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe;
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummaries()
{
    yang_name = "vrf-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::VrfSummaries::~VrfSummaries()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::has_data() const
{
    for (std::size_t index=0; index<vrf_summary.size(); index++)
    {
        if(vrf_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::has_operation() const
{
    for (std::size_t index=0; index<vrf_summary.size(); index++)
    {
        if(vrf_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfSummaries' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-summary")
    {
        for(auto const & c : vrf_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary>();
        c->parent = this;
        vrf_summary.push_back(std::move(c));
        children[segment_path] = vrf_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::VrfSummaries::get_children()
{
    for (auto const & c : vrf_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::VrfSummary()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr;

    state_xr->parent = this;
    children["state-xr"] = state_xr;

    yang_name = "vrf-summary"; yang_parent_name = "vrf-summaries";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::~VrfSummary()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::has_data() const
{
    return vrf_name.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfSummary' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr;
        }
        else
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr;
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr;
        }
        else
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr;
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr;
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet;

    pppoe->parent = this;
    children["pppoe"] = pppoe;

    yang_name = "state-xr"; yang_parent_name = "vrf-summary";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        else
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        else
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
        else
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe;
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet;

    pppoe->parent = this;
    children["pppoe"] = pppoe;

    yang_name = "address-family-xr"; yang_parent_name = "vrf-summary";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamilyXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        else
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        else
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
        else
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe;
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet;
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::Sessions::~Sessions()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sessions' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Sessions::get_children()
{
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Session_()
    :
    session_id{YType::str, "session-id"},
    access_interface_name{YType::str, "access-interface-name"},
    account_session_id{YType::str, "account-session-id"},
    af_up_status{YType::uint32, "af-up-status"},
    circuit_id{YType::str, "circuit-id"},
    clientname{YType::str, "clientname"},
    delegated_ipv6_prefix{YType::str, "delegated-ipv6-prefix"},
    formattedname{YType::str, "formattedname"},
    idle_state_change_time{YType::str, "idle-state-change-time"},
    interface_name{YType::str, "interface-name"},
    ipv6_interface_id{YType::str, "ipv6-interface-id"},
    is_session_authentic{YType::boolean, "is-session-authentic"},
    is_session_author{YType::boolean, "is-session-author"},
    lac_address{YType::str, "lac-address"},
    lns_address{YType::str, "lns-address"},
    mac_address{YType::str, "mac-address"},
    nas_port{YType::str, "nas-port"},
    pending_callbacks{YType::uint64, "pending-callbacks"},
    pppoe_sub_type{YType::enumeration, "pppoe-sub-type"},
    remote_id{YType::str, "remote-id"},
    session_creation_time{YType::str, "session-creation-time"},
    session_ip_address{YType::str, "session-ip-address"},
    session_ipv4_state{YType::enumeration, "session-ipv4-state"},
    session_ipv6_address{YType::str, "session-ipv6-address"},
    session_ipv6_prefix{YType::str, "session-ipv6-prefix"},
    session_ipv6_state{YType::enumeration, "session-ipv6-state"},
    session_state{YType::enumeration, "session-state"},
    session_type{YType::enumeration, "session-type"},
    total_session_idle_time{YType::uint32, "total-session-idle-time"},
    tunnel_client_authentication_id{YType::str, "tunnel-client-authentication-id"},
    tunnel_server_authentication_id{YType::str, "tunnel-server-authentication-id"},
    username{YType::str, "username"},
    vrf_name{YType::str, "vrf-name"}
    	,
    accounting(std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting>())
	,mobility_attributes(std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes>())
	,user_profile_attributes(std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes>())
{
    accounting->parent = this;
    children["accounting"] = accounting;

    mobility_attributes->parent = this;
    children["mobility-attributes"] = mobility_attributes;

    user_profile_attributes->parent = this;
    children["user-profile-attributes"] = user_profile_attributes;

    yang_name = "session"; yang_parent_name = "sessions";
}

Subscriber::Session::Nodes::Node::Sessions::Session_::~Session_()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::has_data() const
{
    for (std::size_t index=0; index<session_change_of_authorization.size(); index++)
    {
        if(session_change_of_authorization[index]->has_data())
            return true;
    }
    return session_id.is_set
	|| access_interface_name.is_set
	|| account_session_id.is_set
	|| af_up_status.is_set
	|| circuit_id.is_set
	|| clientname.is_set
	|| delegated_ipv6_prefix.is_set
	|| formattedname.is_set
	|| idle_state_change_time.is_set
	|| interface_name.is_set
	|| ipv6_interface_id.is_set
	|| is_session_authentic.is_set
	|| is_session_author.is_set
	|| lac_address.is_set
	|| lns_address.is_set
	|| mac_address.is_set
	|| nas_port.is_set
	|| pending_callbacks.is_set
	|| pppoe_sub_type.is_set
	|| remote_id.is_set
	|| session_creation_time.is_set
	|| session_ip_address.is_set
	|| session_ipv4_state.is_set
	|| session_ipv6_address.is_set
	|| session_ipv6_prefix.is_set
	|| session_ipv6_state.is_set
	|| session_state.is_set
	|| session_type.is_set
	|| total_session_idle_time.is_set
	|| tunnel_client_authentication_id.is_set
	|| tunnel_server_authentication_id.is_set
	|| username.is_set
	|| vrf_name.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (mobility_attributes !=  nullptr && mobility_attributes->has_data())
	|| (user_profile_attributes !=  nullptr && user_profile_attributes->has_data());
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::has_operation() const
{
    for (std::size_t index=0; index<session_change_of_authorization.size(); index++)
    {
        if(session_change_of_authorization[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(access_interface_name.operation)
	|| is_set(account_session_id.operation)
	|| is_set(af_up_status.operation)
	|| is_set(circuit_id.operation)
	|| is_set(clientname.operation)
	|| is_set(delegated_ipv6_prefix.operation)
	|| is_set(formattedname.operation)
	|| is_set(idle_state_change_time.operation)
	|| is_set(interface_name.operation)
	|| is_set(ipv6_interface_id.operation)
	|| is_set(is_session_authentic.operation)
	|| is_set(is_session_author.operation)
	|| is_set(lac_address.operation)
	|| is_set(lns_address.operation)
	|| is_set(mac_address.operation)
	|| is_set(nas_port.operation)
	|| is_set(pending_callbacks.operation)
	|| is_set(pppoe_sub_type.operation)
	|| is_set(remote_id.operation)
	|| is_set(session_creation_time.operation)
	|| is_set(session_ip_address.operation)
	|| is_set(session_ipv4_state.operation)
	|| is_set(session_ipv6_address.operation)
	|| is_set(session_ipv6_prefix.operation)
	|| is_set(session_ipv6_state.operation)
	|| is_set(session_state.operation)
	|| is_set(session_type.operation)
	|| is_set(total_session_idle_time.operation)
	|| is_set(tunnel_client_authentication_id.operation)
	|| is_set(tunnel_server_authentication_id.operation)
	|| is_set(username.operation)
	|| is_set(vrf_name.operation)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (mobility_attributes !=  nullptr && mobility_attributes->has_operation())
	|| (user_profile_attributes !=  nullptr && user_profile_attributes->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session-id='" <<session_id <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Sessions::Session_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Session_' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (access_interface_name.is_set || is_set(access_interface_name.operation)) leaf_name_data.push_back(access_interface_name.get_name_leafdata());
    if (account_session_id.is_set || is_set(account_session_id.operation)) leaf_name_data.push_back(account_session_id.get_name_leafdata());
    if (af_up_status.is_set || is_set(af_up_status.operation)) leaf_name_data.push_back(af_up_status.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.operation)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (clientname.is_set || is_set(clientname.operation)) leaf_name_data.push_back(clientname.get_name_leafdata());
    if (delegated_ipv6_prefix.is_set || is_set(delegated_ipv6_prefix.operation)) leaf_name_data.push_back(delegated_ipv6_prefix.get_name_leafdata());
    if (formattedname.is_set || is_set(formattedname.operation)) leaf_name_data.push_back(formattedname.get_name_leafdata());
    if (idle_state_change_time.is_set || is_set(idle_state_change_time.operation)) leaf_name_data.push_back(idle_state_change_time.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ipv6_interface_id.is_set || is_set(ipv6_interface_id.operation)) leaf_name_data.push_back(ipv6_interface_id.get_name_leafdata());
    if (is_session_authentic.is_set || is_set(is_session_authentic.operation)) leaf_name_data.push_back(is_session_authentic.get_name_leafdata());
    if (is_session_author.is_set || is_set(is_session_author.operation)) leaf_name_data.push_back(is_session_author.get_name_leafdata());
    if (lac_address.is_set || is_set(lac_address.operation)) leaf_name_data.push_back(lac_address.get_name_leafdata());
    if (lns_address.is_set || is_set(lns_address.operation)) leaf_name_data.push_back(lns_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (nas_port.is_set || is_set(nas_port.operation)) leaf_name_data.push_back(nas_port.get_name_leafdata());
    if (pending_callbacks.is_set || is_set(pending_callbacks.operation)) leaf_name_data.push_back(pending_callbacks.get_name_leafdata());
    if (pppoe_sub_type.is_set || is_set(pppoe_sub_type.operation)) leaf_name_data.push_back(pppoe_sub_type.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.operation)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (session_creation_time.is_set || is_set(session_creation_time.operation)) leaf_name_data.push_back(session_creation_time.get_name_leafdata());
    if (session_ip_address.is_set || is_set(session_ip_address.operation)) leaf_name_data.push_back(session_ip_address.get_name_leafdata());
    if (session_ipv4_state.is_set || is_set(session_ipv4_state.operation)) leaf_name_data.push_back(session_ipv4_state.get_name_leafdata());
    if (session_ipv6_address.is_set || is_set(session_ipv6_address.operation)) leaf_name_data.push_back(session_ipv6_address.get_name_leafdata());
    if (session_ipv6_prefix.is_set || is_set(session_ipv6_prefix.operation)) leaf_name_data.push_back(session_ipv6_prefix.get_name_leafdata());
    if (session_ipv6_state.is_set || is_set(session_ipv6_state.operation)) leaf_name_data.push_back(session_ipv6_state.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.operation)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (total_session_idle_time.is_set || is_set(total_session_idle_time.operation)) leaf_name_data.push_back(total_session_idle_time.get_name_leafdata());
    if (tunnel_client_authentication_id.is_set || is_set(tunnel_client_authentication_id.operation)) leaf_name_data.push_back(tunnel_client_authentication_id.get_name_leafdata());
    if (tunnel_server_authentication_id.is_set || is_set(tunnel_server_authentication_id.operation)) leaf_name_data.push_back(tunnel_server_authentication_id.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting")
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting;
        }
        else
        {
            accounting = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting>();
            accounting->parent = this;
            children["accounting"] = accounting;
        }
        return children.at("accounting");
    }

    if(child_yang_name == "mobility-attributes")
    {
        if(mobility_attributes != nullptr)
        {
            children["mobility-attributes"] = mobility_attributes;
        }
        else
        {
            mobility_attributes = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes>();
            mobility_attributes->parent = this;
            children["mobility-attributes"] = mobility_attributes;
        }
        return children.at("mobility-attributes");
    }

    if(child_yang_name == "session-change-of-authorization")
    {
        for(auto const & c : session_change_of_authorization)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization>();
        c->parent = this;
        session_change_of_authorization.push_back(std::move(c));
        children[segment_path] = session_change_of_authorization.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "user-profile-attributes")
    {
        if(user_profile_attributes != nullptr)
        {
            children["user-profile-attributes"] = user_profile_attributes;
        }
        else
        {
            user_profile_attributes = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes>();
            user_profile_attributes->parent = this;
            children["user-profile-attributes"] = user_profile_attributes;
        }
        return children.at("user-profile-attributes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Sessions::Session_::get_children()
{
    if(children.find("accounting") == children.end())
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting;
        }
    }

    if(children.find("mobility-attributes") == children.end())
    {
        if(mobility_attributes != nullptr)
        {
            children["mobility-attributes"] = mobility_attributes;
        }
    }

    for (auto const & c : session_change_of_authorization)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("user-profile-attributes") == children.end())
    {
        if(user_profile_attributes != nullptr)
        {
            children["user-profile-attributes"] = user_profile_attributes;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "access-interface-name")
    {
        access_interface_name = value;
    }
    if(value_path == "account-session-id")
    {
        account_session_id = value;
    }
    if(value_path == "af-up-status")
    {
        af_up_status = value;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
    }
    if(value_path == "clientname")
    {
        clientname = value;
    }
    if(value_path == "delegated-ipv6-prefix")
    {
        delegated_ipv6_prefix = value;
    }
    if(value_path == "formattedname")
    {
        formattedname = value;
    }
    if(value_path == "idle-state-change-time")
    {
        idle_state_change_time = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ipv6-interface-id")
    {
        ipv6_interface_id = value;
    }
    if(value_path == "is-session-authentic")
    {
        is_session_authentic = value;
    }
    if(value_path == "is-session-author")
    {
        is_session_author = value;
    }
    if(value_path == "lac-address")
    {
        lac_address = value;
    }
    if(value_path == "lns-address")
    {
        lns_address = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "nas-port")
    {
        nas_port = value;
    }
    if(value_path == "pending-callbacks")
    {
        pending_callbacks = value;
    }
    if(value_path == "pppoe-sub-type")
    {
        pppoe_sub_type = value;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
    }
    if(value_path == "session-creation-time")
    {
        session_creation_time = value;
    }
    if(value_path == "session-ip-address")
    {
        session_ip_address = value;
    }
    if(value_path == "session-ipv4-state")
    {
        session_ipv4_state = value;
    }
    if(value_path == "session-ipv6-address")
    {
        session_ipv6_address = value;
    }
    if(value_path == "session-ipv6-prefix")
    {
        session_ipv6_prefix = value;
    }
    if(value_path == "session-ipv6-state")
    {
        session_ipv6_state = value;
    }
    if(value_path == "session-state")
    {
        session_state = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "total-session-idle-time")
    {
        total_session_idle_time = value;
    }
    if(value_path == "tunnel-client-authentication-id")
    {
        tunnel_client_authentication_id = value;
    }
    if(value_path == "tunnel-server-authentication-id")
    {
        tunnel_server_authentication_id = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::Accounting()
{
    yang_name = "accounting"; yang_parent_name = "session";
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::~Accounting()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::has_data() const
{
    for (std::size_t index=0; index<accounting_session.size(); index++)
    {
        if(accounting_session[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::has_operation() const
{
    for (std::size_t index=0; index<accounting_session.size(); index++)
    {
        if(accounting_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Accounting' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting-session")
    {
        for(auto const & c : accounting_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession>();
        c->parent = this;
        accounting_session.push_back(std::move(c));
        children[segment_path] = accounting_session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::get_children()
{
    for (auto const & c : accounting_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::AccountingSession()
    :
    accepted_interim_updates{YType::uint32, "accepted-interim-updates"},
    account_session_id{YType::str, "account-session-id"},
    accounting_start_time{YType::str, "accounting-start-time"},
    accounting_state_rc{YType::uint32, "accounting-state-rc"},
    accounting_stop_state{YType::uint32, "accounting-stop-state"},
    interim_interval{YType::uint32, "interim-interval"},
    is_interim_accounting_enabled{YType::boolean, "is-interim-accounting-enabled"},
    last_interim_update_attempt_time{YType::str, "last-interim-update-attempt-time"},
    last_successful_interim_update_time{YType::str, "last-successful-interim-update-time"},
    method_list_name{YType::str, "method-list-name"},
    next_interim_update_attempt_time{YType::uint32, "next-interim-update-attempt-time"},
    record_context_name{YType::str, "record-context-name"},
    rejected_interim_updates{YType::uint32, "rejected-interim-updates"},
    sent_interim_update_failures{YType::uint32, "sent-interim-update-failures"},
    sent_interim_updates{YType::uint32, "sent-interim-updates"}
{
    yang_name = "accounting-session"; yang_parent_name = "accounting";
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::~AccountingSession()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::has_data() const
{
    return accepted_interim_updates.is_set
	|| account_session_id.is_set
	|| accounting_start_time.is_set
	|| accounting_state_rc.is_set
	|| accounting_stop_state.is_set
	|| interim_interval.is_set
	|| is_interim_accounting_enabled.is_set
	|| last_interim_update_attempt_time.is_set
	|| last_successful_interim_update_time.is_set
	|| method_list_name.is_set
	|| next_interim_update_attempt_time.is_set
	|| record_context_name.is_set
	|| rejected_interim_updates.is_set
	|| sent_interim_update_failures.is_set
	|| sent_interim_updates.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_interim_updates.operation)
	|| is_set(account_session_id.operation)
	|| is_set(accounting_start_time.operation)
	|| is_set(accounting_state_rc.operation)
	|| is_set(accounting_stop_state.operation)
	|| is_set(interim_interval.operation)
	|| is_set(is_interim_accounting_enabled.operation)
	|| is_set(last_interim_update_attempt_time.operation)
	|| is_set(last_successful_interim_update_time.operation)
	|| is_set(method_list_name.operation)
	|| is_set(next_interim_update_attempt_time.operation)
	|| is_set(record_context_name.operation)
	|| is_set(rejected_interim_updates.operation)
	|| is_set(sent_interim_update_failures.operation)
	|| is_set(sent_interim_updates.operation);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-session";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountingSession' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_interim_updates.is_set || is_set(accepted_interim_updates.operation)) leaf_name_data.push_back(accepted_interim_updates.get_name_leafdata());
    if (account_session_id.is_set || is_set(account_session_id.operation)) leaf_name_data.push_back(account_session_id.get_name_leafdata());
    if (accounting_start_time.is_set || is_set(accounting_start_time.operation)) leaf_name_data.push_back(accounting_start_time.get_name_leafdata());
    if (accounting_state_rc.is_set || is_set(accounting_state_rc.operation)) leaf_name_data.push_back(accounting_state_rc.get_name_leafdata());
    if (accounting_stop_state.is_set || is_set(accounting_stop_state.operation)) leaf_name_data.push_back(accounting_stop_state.get_name_leafdata());
    if (interim_interval.is_set || is_set(interim_interval.operation)) leaf_name_data.push_back(interim_interval.get_name_leafdata());
    if (is_interim_accounting_enabled.is_set || is_set(is_interim_accounting_enabled.operation)) leaf_name_data.push_back(is_interim_accounting_enabled.get_name_leafdata());
    if (last_interim_update_attempt_time.is_set || is_set(last_interim_update_attempt_time.operation)) leaf_name_data.push_back(last_interim_update_attempt_time.get_name_leafdata());
    if (last_successful_interim_update_time.is_set || is_set(last_successful_interim_update_time.operation)) leaf_name_data.push_back(last_successful_interim_update_time.get_name_leafdata());
    if (method_list_name.is_set || is_set(method_list_name.operation)) leaf_name_data.push_back(method_list_name.get_name_leafdata());
    if (next_interim_update_attempt_time.is_set || is_set(next_interim_update_attempt_time.operation)) leaf_name_data.push_back(next_interim_update_attempt_time.get_name_leafdata());
    if (record_context_name.is_set || is_set(record_context_name.operation)) leaf_name_data.push_back(record_context_name.get_name_leafdata());
    if (rejected_interim_updates.is_set || is_set(rejected_interim_updates.operation)) leaf_name_data.push_back(rejected_interim_updates.get_name_leafdata());
    if (sent_interim_update_failures.is_set || is_set(sent_interim_update_failures.operation)) leaf_name_data.push_back(sent_interim_update_failures.get_name_leafdata());
    if (sent_interim_updates.is_set || is_set(sent_interim_updates.operation)) leaf_name_data.push_back(sent_interim_updates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-interim-updates")
    {
        accepted_interim_updates = value;
    }
    if(value_path == "account-session-id")
    {
        account_session_id = value;
    }
    if(value_path == "accounting-start-time")
    {
        accounting_start_time = value;
    }
    if(value_path == "accounting-state-rc")
    {
        accounting_state_rc = value;
    }
    if(value_path == "accounting-stop-state")
    {
        accounting_stop_state = value;
    }
    if(value_path == "interim-interval")
    {
        interim_interval = value;
    }
    if(value_path == "is-interim-accounting-enabled")
    {
        is_interim_accounting_enabled = value;
    }
    if(value_path == "last-interim-update-attempt-time")
    {
        last_interim_update_attempt_time = value;
    }
    if(value_path == "last-successful-interim-update-time")
    {
        last_successful_interim_update_time = value;
    }
    if(value_path == "method-list-name")
    {
        method_list_name = value;
    }
    if(value_path == "next-interim-update-attempt-time")
    {
        next_interim_update_attempt_time = value;
    }
    if(value_path == "record-context-name")
    {
        record_context_name = value;
    }
    if(value_path == "rejected-interim-updates")
    {
        rejected_interim_updates = value;
    }
    if(value_path == "sent-interim-update-failures")
    {
        sent_interim_update_failures = value;
    }
    if(value_path == "sent-interim-updates")
    {
        sent_interim_updates = value;
    }
}

Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::UserProfileAttributes()
    :
    accounting_session_id{YType::str, "accounting-session-id"},
    actual_data_rate_downstream{YType::uint32, "actual-data-rate-downstream"},
    actual_data_rate_upstream{YType::uint32, "actual-data-rate-upstream"},
    attainable_data_rate_downstream{YType::uint32, "attainable-data-rate-downstream"},
    attainable_data_rate_upstream{YType::uint32, "attainable-data-rate-upstream"},
    authorization_service_type{YType::enumeration, "authorization-service-type"},
    circuit_id{YType::str, "circuit-id"},
    connection_receive_speed{YType::uint32, "connection-receive-speed"},
    connection_transmission_speed{YType::uint32, "connection-transmission-speed"},
    destination_station_id{YType::str, "destination-station-id"},
    downstream_parameterized_qos_policy{YType::str, "downstream-parameterized-qos-policy"},
    downstream_qos_policy{YType::str, "downstream-qos-policy"},
    egress_access_list{YType::str, "egress-access-list"},
    formatted_calling_station_id{YType::str, "formatted-calling-station-id"},
    ingress_access_list{YType::str, "ingress-access-list"},
    interface_name{YType::str, "interface-name"},
    interface_type{YType::enumeration, "interface-type"},
    interim_accounting_interval{YType::uint32, "interim-accounting-interval"},
    ip_netmask{YType::str, "ip-netmask"},
    ipv4_unnumbered{YType::str, "ipv4-unnumbered"},
    ipv4mtu{YType::uint32, "ipv4mtu"},
    is_interworking_functionality{YType::boolean, "is-interworking-functionality"},
    max_data_rate_downstream{YType::uint32, "max-data-rate-downstream"},
    max_data_rate_upstream{YType::uint32, "max-data-rate-upstream"},
    max_interleaving_delay_downstream{YType::uint32, "max-interleaving-delay-downstream"},
    max_interleaving_delay_upstream{YType::uint32, "max-interleaving-delay-upstream"},
    min_data_rate_downstream{YType::uint32, "min-data-rate-downstream"},
    min_data_rate_downstream_low_power{YType::uint32, "min-data-rate-downstream-low-power"},
    min_data_rate_upstream_low_power{YType::uint32, "min-data-rate-upstream-low-power"},
    parent_interface_name{YType::str, "parent-interface-name"},
    pool_address{YType::str, "pool-address"},
    primary_dns_server_address{YType::str, "primary-dns-server-address"},
    primary_net_bios_server_address{YType::str, "primary-net-bios-server-address"},
    remote_id{YType::str, "remote-id"},
    route{YType::str, "route"},
    secondary_dns_server_address{YType::str, "secondary-dns-server-address"},
    secondary_net_bios_server_address{YType::str, "secondary-net-bios-server-address"},
    session_termination_cause{YType::enumeration, "session-termination-cause"},
    session_timeout{YType::uint32, "session-timeout"},
    strict_rpf_packets{YType::uint32, "strict-rpf-packets"},
    tunnel_client_authentication_id{YType::str, "tunnel-client-authentication-id"},
    tunnel_client_endpoint{YType::str, "tunnel-client-endpoint"},
    tunnel_medium{YType::enumeration, "tunnel-medium"},
    tunnel_preference{YType::uint32, "tunnel-preference"},
    tunnel_protocol{YType::enumeration, "tunnel-protocol"},
    tunnel_server_endpoint{YType::str, "tunnel-server-endpoint"},
    tunnel_tos_setting{YType::uint32, "tunnel-tos-setting"},
    upstream_parameterized_qos_policy{YType::str, "upstream-parameterized-qos-policy"},
    upstream_qos_policy{YType::str, "upstream-qos-policy"}
{
    yang_name = "user-profile-attributes"; yang_parent_name = "session";
}

Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::~UserProfileAttributes()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::has_data() const
{
    return accounting_session_id.is_set
	|| actual_data_rate_downstream.is_set
	|| actual_data_rate_upstream.is_set
	|| attainable_data_rate_downstream.is_set
	|| attainable_data_rate_upstream.is_set
	|| authorization_service_type.is_set
	|| circuit_id.is_set
	|| connection_receive_speed.is_set
	|| connection_transmission_speed.is_set
	|| destination_station_id.is_set
	|| downstream_parameterized_qos_policy.is_set
	|| downstream_qos_policy.is_set
	|| egress_access_list.is_set
	|| formatted_calling_station_id.is_set
	|| ingress_access_list.is_set
	|| interface_name.is_set
	|| interface_type.is_set
	|| interim_accounting_interval.is_set
	|| ip_netmask.is_set
	|| ipv4_unnumbered.is_set
	|| ipv4mtu.is_set
	|| is_interworking_functionality.is_set
	|| max_data_rate_downstream.is_set
	|| max_data_rate_upstream.is_set
	|| max_interleaving_delay_downstream.is_set
	|| max_interleaving_delay_upstream.is_set
	|| min_data_rate_downstream.is_set
	|| min_data_rate_downstream_low_power.is_set
	|| min_data_rate_upstream_low_power.is_set
	|| parent_interface_name.is_set
	|| pool_address.is_set
	|| primary_dns_server_address.is_set
	|| primary_net_bios_server_address.is_set
	|| remote_id.is_set
	|| route.is_set
	|| secondary_dns_server_address.is_set
	|| secondary_net_bios_server_address.is_set
	|| session_termination_cause.is_set
	|| session_timeout.is_set
	|| strict_rpf_packets.is_set
	|| tunnel_client_authentication_id.is_set
	|| tunnel_client_endpoint.is_set
	|| tunnel_medium.is_set
	|| tunnel_preference.is_set
	|| tunnel_protocol.is_set
	|| tunnel_server_endpoint.is_set
	|| tunnel_tos_setting.is_set
	|| upstream_parameterized_qos_policy.is_set
	|| upstream_qos_policy.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(accounting_session_id.operation)
	|| is_set(actual_data_rate_downstream.operation)
	|| is_set(actual_data_rate_upstream.operation)
	|| is_set(attainable_data_rate_downstream.operation)
	|| is_set(attainable_data_rate_upstream.operation)
	|| is_set(authorization_service_type.operation)
	|| is_set(circuit_id.operation)
	|| is_set(connection_receive_speed.operation)
	|| is_set(connection_transmission_speed.operation)
	|| is_set(destination_station_id.operation)
	|| is_set(downstream_parameterized_qos_policy.operation)
	|| is_set(downstream_qos_policy.operation)
	|| is_set(egress_access_list.operation)
	|| is_set(formatted_calling_station_id.operation)
	|| is_set(ingress_access_list.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_type.operation)
	|| is_set(interim_accounting_interval.operation)
	|| is_set(ip_netmask.operation)
	|| is_set(ipv4_unnumbered.operation)
	|| is_set(ipv4mtu.operation)
	|| is_set(is_interworking_functionality.operation)
	|| is_set(max_data_rate_downstream.operation)
	|| is_set(max_data_rate_upstream.operation)
	|| is_set(max_interleaving_delay_downstream.operation)
	|| is_set(max_interleaving_delay_upstream.operation)
	|| is_set(min_data_rate_downstream.operation)
	|| is_set(min_data_rate_downstream_low_power.operation)
	|| is_set(min_data_rate_upstream_low_power.operation)
	|| is_set(parent_interface_name.operation)
	|| is_set(pool_address.operation)
	|| is_set(primary_dns_server_address.operation)
	|| is_set(primary_net_bios_server_address.operation)
	|| is_set(remote_id.operation)
	|| is_set(route.operation)
	|| is_set(secondary_dns_server_address.operation)
	|| is_set(secondary_net_bios_server_address.operation)
	|| is_set(session_termination_cause.operation)
	|| is_set(session_timeout.operation)
	|| is_set(strict_rpf_packets.operation)
	|| is_set(tunnel_client_authentication_id.operation)
	|| is_set(tunnel_client_endpoint.operation)
	|| is_set(tunnel_medium.operation)
	|| is_set(tunnel_preference.operation)
	|| is_set(tunnel_protocol.operation)
	|| is_set(tunnel_server_endpoint.operation)
	|| is_set(tunnel_tos_setting.operation)
	|| is_set(upstream_parameterized_qos_policy.operation)
	|| is_set(upstream_qos_policy.operation);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-profile-attributes";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UserProfileAttributes' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting_session_id.is_set || is_set(accounting_session_id.operation)) leaf_name_data.push_back(accounting_session_id.get_name_leafdata());
    if (actual_data_rate_downstream.is_set || is_set(actual_data_rate_downstream.operation)) leaf_name_data.push_back(actual_data_rate_downstream.get_name_leafdata());
    if (actual_data_rate_upstream.is_set || is_set(actual_data_rate_upstream.operation)) leaf_name_data.push_back(actual_data_rate_upstream.get_name_leafdata());
    if (attainable_data_rate_downstream.is_set || is_set(attainable_data_rate_downstream.operation)) leaf_name_data.push_back(attainable_data_rate_downstream.get_name_leafdata());
    if (attainable_data_rate_upstream.is_set || is_set(attainable_data_rate_upstream.operation)) leaf_name_data.push_back(attainable_data_rate_upstream.get_name_leafdata());
    if (authorization_service_type.is_set || is_set(authorization_service_type.operation)) leaf_name_data.push_back(authorization_service_type.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.operation)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (connection_receive_speed.is_set || is_set(connection_receive_speed.operation)) leaf_name_data.push_back(connection_receive_speed.get_name_leafdata());
    if (connection_transmission_speed.is_set || is_set(connection_transmission_speed.operation)) leaf_name_data.push_back(connection_transmission_speed.get_name_leafdata());
    if (destination_station_id.is_set || is_set(destination_station_id.operation)) leaf_name_data.push_back(destination_station_id.get_name_leafdata());
    if (downstream_parameterized_qos_policy.is_set || is_set(downstream_parameterized_qos_policy.operation)) leaf_name_data.push_back(downstream_parameterized_qos_policy.get_name_leafdata());
    if (downstream_qos_policy.is_set || is_set(downstream_qos_policy.operation)) leaf_name_data.push_back(downstream_qos_policy.get_name_leafdata());
    if (egress_access_list.is_set || is_set(egress_access_list.operation)) leaf_name_data.push_back(egress_access_list.get_name_leafdata());
    if (formatted_calling_station_id.is_set || is_set(formatted_calling_station_id.operation)) leaf_name_data.push_back(formatted_calling_station_id.get_name_leafdata());
    if (ingress_access_list.is_set || is_set(ingress_access_list.operation)) leaf_name_data.push_back(ingress_access_list.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (interim_accounting_interval.is_set || is_set(interim_accounting_interval.operation)) leaf_name_data.push_back(interim_accounting_interval.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());
    if (ipv4_unnumbered.is_set || is_set(ipv4_unnumbered.operation)) leaf_name_data.push_back(ipv4_unnumbered.get_name_leafdata());
    if (ipv4mtu.is_set || is_set(ipv4mtu.operation)) leaf_name_data.push_back(ipv4mtu.get_name_leafdata());
    if (is_interworking_functionality.is_set || is_set(is_interworking_functionality.operation)) leaf_name_data.push_back(is_interworking_functionality.get_name_leafdata());
    if (max_data_rate_downstream.is_set || is_set(max_data_rate_downstream.operation)) leaf_name_data.push_back(max_data_rate_downstream.get_name_leafdata());
    if (max_data_rate_upstream.is_set || is_set(max_data_rate_upstream.operation)) leaf_name_data.push_back(max_data_rate_upstream.get_name_leafdata());
    if (max_interleaving_delay_downstream.is_set || is_set(max_interleaving_delay_downstream.operation)) leaf_name_data.push_back(max_interleaving_delay_downstream.get_name_leafdata());
    if (max_interleaving_delay_upstream.is_set || is_set(max_interleaving_delay_upstream.operation)) leaf_name_data.push_back(max_interleaving_delay_upstream.get_name_leafdata());
    if (min_data_rate_downstream.is_set || is_set(min_data_rate_downstream.operation)) leaf_name_data.push_back(min_data_rate_downstream.get_name_leafdata());
    if (min_data_rate_downstream_low_power.is_set || is_set(min_data_rate_downstream_low_power.operation)) leaf_name_data.push_back(min_data_rate_downstream_low_power.get_name_leafdata());
    if (min_data_rate_upstream_low_power.is_set || is_set(min_data_rate_upstream_low_power.operation)) leaf_name_data.push_back(min_data_rate_upstream_low_power.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.operation)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (pool_address.is_set || is_set(pool_address.operation)) leaf_name_data.push_back(pool_address.get_name_leafdata());
    if (primary_dns_server_address.is_set || is_set(primary_dns_server_address.operation)) leaf_name_data.push_back(primary_dns_server_address.get_name_leafdata());
    if (primary_net_bios_server_address.is_set || is_set(primary_net_bios_server_address.operation)) leaf_name_data.push_back(primary_net_bios_server_address.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.operation)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (route.is_set || is_set(route.operation)) leaf_name_data.push_back(route.get_name_leafdata());
    if (secondary_dns_server_address.is_set || is_set(secondary_dns_server_address.operation)) leaf_name_data.push_back(secondary_dns_server_address.get_name_leafdata());
    if (secondary_net_bios_server_address.is_set || is_set(secondary_net_bios_server_address.operation)) leaf_name_data.push_back(secondary_net_bios_server_address.get_name_leafdata());
    if (session_termination_cause.is_set || is_set(session_termination_cause.operation)) leaf_name_data.push_back(session_termination_cause.get_name_leafdata());
    if (session_timeout.is_set || is_set(session_timeout.operation)) leaf_name_data.push_back(session_timeout.get_name_leafdata());
    if (strict_rpf_packets.is_set || is_set(strict_rpf_packets.operation)) leaf_name_data.push_back(strict_rpf_packets.get_name_leafdata());
    if (tunnel_client_authentication_id.is_set || is_set(tunnel_client_authentication_id.operation)) leaf_name_data.push_back(tunnel_client_authentication_id.get_name_leafdata());
    if (tunnel_client_endpoint.is_set || is_set(tunnel_client_endpoint.operation)) leaf_name_data.push_back(tunnel_client_endpoint.get_name_leafdata());
    if (tunnel_medium.is_set || is_set(tunnel_medium.operation)) leaf_name_data.push_back(tunnel_medium.get_name_leafdata());
    if (tunnel_preference.is_set || is_set(tunnel_preference.operation)) leaf_name_data.push_back(tunnel_preference.get_name_leafdata());
    if (tunnel_protocol.is_set || is_set(tunnel_protocol.operation)) leaf_name_data.push_back(tunnel_protocol.get_name_leafdata());
    if (tunnel_server_endpoint.is_set || is_set(tunnel_server_endpoint.operation)) leaf_name_data.push_back(tunnel_server_endpoint.get_name_leafdata());
    if (tunnel_tos_setting.is_set || is_set(tunnel_tos_setting.operation)) leaf_name_data.push_back(tunnel_tos_setting.get_name_leafdata());
    if (upstream_parameterized_qos_policy.is_set || is_set(upstream_parameterized_qos_policy.operation)) leaf_name_data.push_back(upstream_parameterized_qos_policy.get_name_leafdata());
    if (upstream_qos_policy.is_set || is_set(upstream_qos_policy.operation)) leaf_name_data.push_back(upstream_qos_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accounting-session-id")
    {
        accounting_session_id = value;
    }
    if(value_path == "actual-data-rate-downstream")
    {
        actual_data_rate_downstream = value;
    }
    if(value_path == "actual-data-rate-upstream")
    {
        actual_data_rate_upstream = value;
    }
    if(value_path == "attainable-data-rate-downstream")
    {
        attainable_data_rate_downstream = value;
    }
    if(value_path == "attainable-data-rate-upstream")
    {
        attainable_data_rate_upstream = value;
    }
    if(value_path == "authorization-service-type")
    {
        authorization_service_type = value;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
    }
    if(value_path == "connection-receive-speed")
    {
        connection_receive_speed = value;
    }
    if(value_path == "connection-transmission-speed")
    {
        connection_transmission_speed = value;
    }
    if(value_path == "destination-station-id")
    {
        destination_station_id = value;
    }
    if(value_path == "downstream-parameterized-qos-policy")
    {
        downstream_parameterized_qos_policy = value;
    }
    if(value_path == "downstream-qos-policy")
    {
        downstream_qos_policy = value;
    }
    if(value_path == "egress-access-list")
    {
        egress_access_list = value;
    }
    if(value_path == "formatted-calling-station-id")
    {
        formatted_calling_station_id = value;
    }
    if(value_path == "ingress-access-list")
    {
        ingress_access_list = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "interim-accounting-interval")
    {
        interim_accounting_interval = value;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
    }
    if(value_path == "ipv4-unnumbered")
    {
        ipv4_unnumbered = value;
    }
    if(value_path == "ipv4mtu")
    {
        ipv4mtu = value;
    }
    if(value_path == "is-interworking-functionality")
    {
        is_interworking_functionality = value;
    }
    if(value_path == "max-data-rate-downstream")
    {
        max_data_rate_downstream = value;
    }
    if(value_path == "max-data-rate-upstream")
    {
        max_data_rate_upstream = value;
    }
    if(value_path == "max-interleaving-delay-downstream")
    {
        max_interleaving_delay_downstream = value;
    }
    if(value_path == "max-interleaving-delay-upstream")
    {
        max_interleaving_delay_upstream = value;
    }
    if(value_path == "min-data-rate-downstream")
    {
        min_data_rate_downstream = value;
    }
    if(value_path == "min-data-rate-downstream-low-power")
    {
        min_data_rate_downstream_low_power = value;
    }
    if(value_path == "min-data-rate-upstream-low-power")
    {
        min_data_rate_upstream_low_power = value;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
    }
    if(value_path == "pool-address")
    {
        pool_address = value;
    }
    if(value_path == "primary-dns-server-address")
    {
        primary_dns_server_address = value;
    }
    if(value_path == "primary-net-bios-server-address")
    {
        primary_net_bios_server_address = value;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
    }
    if(value_path == "route")
    {
        route = value;
    }
    if(value_path == "secondary-dns-server-address")
    {
        secondary_dns_server_address = value;
    }
    if(value_path == "secondary-net-bios-server-address")
    {
        secondary_net_bios_server_address = value;
    }
    if(value_path == "session-termination-cause")
    {
        session_termination_cause = value;
    }
    if(value_path == "session-timeout")
    {
        session_timeout = value;
    }
    if(value_path == "strict-rpf-packets")
    {
        strict_rpf_packets = value;
    }
    if(value_path == "tunnel-client-authentication-id")
    {
        tunnel_client_authentication_id = value;
    }
    if(value_path == "tunnel-client-endpoint")
    {
        tunnel_client_endpoint = value;
    }
    if(value_path == "tunnel-medium")
    {
        tunnel_medium = value;
    }
    if(value_path == "tunnel-preference")
    {
        tunnel_preference = value;
    }
    if(value_path == "tunnel-protocol")
    {
        tunnel_protocol = value;
    }
    if(value_path == "tunnel-server-endpoint")
    {
        tunnel_server_endpoint = value;
    }
    if(value_path == "tunnel-tos-setting")
    {
        tunnel_tos_setting = value;
    }
    if(value_path == "upstream-parameterized-qos-policy")
    {
        upstream_parameterized_qos_policy = value;
    }
    if(value_path == "upstream-qos-policy")
    {
        upstream_qos_policy = value;
    }
}

Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::MobilityAttributes()
    :
    domain_name{YType::str, "domain-name"},
    downlink_gre_key{YType::str, "downlink-gre-key"},
    lease_time{YType::str, "lease-time"},
    mobility_default_ipv4_gateway{YType::str, "mobility-default-ipv4-gateway"},
    mobility_dhcp_server{YType::str, "mobility-dhcp-server"},
    mobility_dns_server{YType::str, "mobility-dns-server"},
    mobility_ipv4_address{YType::str, "mobility-ipv4-address"},
    mobility_ipv4_netmask{YType::str, "mobility-ipv4-netmask"},
    mpc_protocol{YType::boolean, "mpc-protocol"},
    uplink_gre_key{YType::str, "uplink-gre-key"}
{
    yang_name = "mobility-attributes"; yang_parent_name = "session";
}

Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::~MobilityAttributes()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::has_data() const
{
    return domain_name.is_set
	|| downlink_gre_key.is_set
	|| lease_time.is_set
	|| mobility_default_ipv4_gateway.is_set
	|| mobility_dhcp_server.is_set
	|| mobility_dns_server.is_set
	|| mobility_ipv4_address.is_set
	|| mobility_ipv4_netmask.is_set
	|| mpc_protocol.is_set
	|| uplink_gre_key.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(downlink_gre_key.operation)
	|| is_set(lease_time.operation)
	|| is_set(mobility_default_ipv4_gateway.operation)
	|| is_set(mobility_dhcp_server.operation)
	|| is_set(mobility_dns_server.operation)
	|| is_set(mobility_ipv4_address.operation)
	|| is_set(mobility_ipv4_netmask.operation)
	|| is_set(mpc_protocol.operation)
	|| is_set(uplink_gre_key.operation);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility-attributes";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MobilityAttributes' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (downlink_gre_key.is_set || is_set(downlink_gre_key.operation)) leaf_name_data.push_back(downlink_gre_key.get_name_leafdata());
    if (lease_time.is_set || is_set(lease_time.operation)) leaf_name_data.push_back(lease_time.get_name_leafdata());
    if (mobility_default_ipv4_gateway.is_set || is_set(mobility_default_ipv4_gateway.operation)) leaf_name_data.push_back(mobility_default_ipv4_gateway.get_name_leafdata());
    if (mobility_dhcp_server.is_set || is_set(mobility_dhcp_server.operation)) leaf_name_data.push_back(mobility_dhcp_server.get_name_leafdata());
    if (mobility_dns_server.is_set || is_set(mobility_dns_server.operation)) leaf_name_data.push_back(mobility_dns_server.get_name_leafdata());
    if (mobility_ipv4_address.is_set || is_set(mobility_ipv4_address.operation)) leaf_name_data.push_back(mobility_ipv4_address.get_name_leafdata());
    if (mobility_ipv4_netmask.is_set || is_set(mobility_ipv4_netmask.operation)) leaf_name_data.push_back(mobility_ipv4_netmask.get_name_leafdata());
    if (mpc_protocol.is_set || is_set(mpc_protocol.operation)) leaf_name_data.push_back(mpc_protocol.get_name_leafdata());
    if (uplink_gre_key.is_set || is_set(uplink_gre_key.operation)) leaf_name_data.push_back(uplink_gre_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "downlink-gre-key")
    {
        downlink_gre_key = value;
    }
    if(value_path == "lease-time")
    {
        lease_time = value;
    }
    if(value_path == "mobility-default-ipv4-gateway")
    {
        mobility_default_ipv4_gateway = value;
    }
    if(value_path == "mobility-dhcp-server")
    {
        mobility_dhcp_server = value;
    }
    if(value_path == "mobility-dns-server")
    {
        mobility_dns_server = value;
    }
    if(value_path == "mobility-ipv4-address")
    {
        mobility_ipv4_address = value;
    }
    if(value_path == "mobility-ipv4-netmask")
    {
        mobility_ipv4_netmask = value;
    }
    if(value_path == "mpc-protocol")
    {
        mpc_protocol = value;
    }
    if(value_path == "uplink-gre-key")
    {
        uplink_gre_key = value;
    }
}

Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::SessionChangeOfAuthorization()
    :
    coa_reply_attributes{YType::str, "coa-reply-attributes"},
    coa_request_attributes{YType::str, "coa-request-attributes"},
    reply_time{YType::str, "reply-time"},
    request_acked{YType::boolean, "request-acked"},
    request_time{YType::str, "request-time"}
{
    yang_name = "session-change-of-authorization"; yang_parent_name = "session";
}

Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::~SessionChangeOfAuthorization()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::has_data() const
{
    return coa_reply_attributes.is_set
	|| coa_request_attributes.is_set
	|| reply_time.is_set
	|| request_acked.is_set
	|| request_time.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::has_operation() const
{
    return is_set(operation)
	|| is_set(coa_reply_attributes.operation)
	|| is_set(coa_request_attributes.operation)
	|| is_set(reply_time.operation)
	|| is_set(request_acked.operation)
	|| is_set(request_time.operation);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-change-of-authorization";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionChangeOfAuthorization' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coa_reply_attributes.is_set || is_set(coa_reply_attributes.operation)) leaf_name_data.push_back(coa_reply_attributes.get_name_leafdata());
    if (coa_request_attributes.is_set || is_set(coa_request_attributes.operation)) leaf_name_data.push_back(coa_request_attributes.get_name_leafdata());
    if (reply_time.is_set || is_set(reply_time.operation)) leaf_name_data.push_back(reply_time.get_name_leafdata());
    if (request_acked.is_set || is_set(request_acked.operation)) leaf_name_data.push_back(request_acked.get_name_leafdata());
    if (request_time.is_set || is_set(request_time.operation)) leaf_name_data.push_back(request_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "coa-reply-attributes")
    {
        coa_reply_attributes = value;
    }
    if(value_path == "coa-request-attributes")
    {
        coa_request_attributes = value;
    }
    if(value_path == "reply-time")
    {
        reply_time = value;
    }
    if(value_path == "request-acked")
    {
        request_acked = value;
    }
    if(value_path == "request-time")
    {
        request_time = value;
    }
}

IedgeLicenseManager::IedgeLicenseManager()
    :
    nodes(std::make_shared<IedgeLicenseManager::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "iedge-license-manager"; yang_parent_name = "Cisco-IOS-XR-iedge4710-oper";
}

IedgeLicenseManager::~IedgeLicenseManager()
{
}

bool IedgeLicenseManager::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool IedgeLicenseManager::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string IedgeLicenseManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-oper:iedge-license-manager";

    return path_buffer.str();

}

EntityPath IedgeLicenseManager::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> IedgeLicenseManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<IedgeLicenseManager::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & IedgeLicenseManager::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void IedgeLicenseManager::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> IedgeLicenseManager::clone_ptr() const
{
    return std::make_shared<IedgeLicenseManager>();
}

std::string IedgeLicenseManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string IedgeLicenseManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function IedgeLicenseManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

IedgeLicenseManager::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "iedge-license-manager";
}

IedgeLicenseManager::Nodes::~Nodes()
{
}

bool IedgeLicenseManager::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool IedgeLicenseManager::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IedgeLicenseManager::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath IedgeLicenseManager::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:iedge-license-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IedgeLicenseManager::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<IedgeLicenseManager::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & IedgeLicenseManager::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void IedgeLicenseManager::Nodes::set_value(const std::string & value_path, std::string value)
{
}

IedgeLicenseManager::Nodes::Node::Node()
    :
    nodeid{YType::str, "nodeid"}
    	,
    iedge_license_manager_summary(std::make_shared<IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary>())
{
    iedge_license_manager_summary->parent = this;
    children["iedge-license-manager-summary"] = iedge_license_manager_summary;

    yang_name = "node"; yang_parent_name = "nodes";
}

IedgeLicenseManager::Nodes::Node::~Node()
{
}

bool IedgeLicenseManager::Nodes::Node::has_data() const
{
    return nodeid.is_set
	|| (iedge_license_manager_summary !=  nullptr && iedge_license_manager_summary->has_data());
}

bool IedgeLicenseManager::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(nodeid.operation)
	|| (iedge_license_manager_summary !=  nullptr && iedge_license_manager_summary->has_operation());
}

std::string IedgeLicenseManager::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[nodeid='" <<nodeid <<"']";

    return path_buffer.str();

}

EntityPath IedgeLicenseManager::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:iedge-license-manager/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nodeid.is_set || is_set(nodeid.operation)) leaf_name_data.push_back(nodeid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IedgeLicenseManager::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iedge-license-manager-summary")
    {
        if(iedge_license_manager_summary != nullptr)
        {
            children["iedge-license-manager-summary"] = iedge_license_manager_summary;
        }
        else
        {
            iedge_license_manager_summary = std::make_shared<IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary>();
            iedge_license_manager_summary->parent = this;
            children["iedge-license-manager-summary"] = iedge_license_manager_summary;
        }
        return children.at("iedge-license-manager-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & IedgeLicenseManager::Nodes::Node::get_children()
{
    if(children.find("iedge-license-manager-summary") == children.end())
    {
        if(iedge_license_manager_summary != nullptr)
        {
            children["iedge-license-manager-summary"] = iedge_license_manager_summary;
        }
    }

    return children;
}

void IedgeLicenseManager::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nodeid")
    {
        nodeid = value;
    }
}

IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::IedgeLicenseManagerSummary()
    :
    session_count{YType::uint32, "session-count"},
    session_license_count{YType::uint32, "session-license-count"},
    session_limit{YType::uint32, "session-limit"},
    session_threshold{YType::uint32, "session-threshold"}
{
    yang_name = "iedge-license-manager-summary"; yang_parent_name = "node";
}

IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::~IedgeLicenseManagerSummary()
{
}

bool IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::has_data() const
{
    return session_count.is_set
	|| session_license_count.is_set
	|| session_limit.is_set
	|| session_threshold.is_set;
}

bool IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(session_count.operation)
	|| is_set(session_license_count.operation)
	|| is_set(session_limit.operation)
	|| is_set(session_threshold.operation);
}

std::string IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iedge-license-manager-summary";

    return path_buffer.str();

}

EntityPath IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IedgeLicenseManagerSummary' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_count.is_set || is_set(session_count.operation)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (session_license_count.is_set || is_set(session_license_count.operation)) leaf_name_data.push_back(session_license_count.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.operation)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (session_threshold.is_set || is_set(session_threshold.operation)) leaf_name_data.push_back(session_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::get_children()
{
    return children;
}

void IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-count")
    {
        session_count = value;
    }
    if(value_path == "session-license-count")
    {
        session_license_count = value;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
    }
    if(value_path == "session-threshold")
    {
        session_threshold = value;
    }
}


}
}

