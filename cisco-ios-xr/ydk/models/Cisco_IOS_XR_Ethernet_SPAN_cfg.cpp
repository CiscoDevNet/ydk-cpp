
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_Ethernet_SPAN_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_Ethernet_SPAN_cfg {

SpanMonitorSession::Sessions::Session::Destination::Destination()
    :
    	destination_interface_name{YType::str, "destination-interface-name"},
	 destination_ipv4_address{YType::str, "destination-ipv4-address"},
	 destination_ipv6_address{YType::str, "destination-ipv6-address"},
	 destination_type{YType::enumeration, "destination-type"}
{
    yang_name = "destination"; yang_parent_name = "session";
}

SpanMonitorSession::Sessions::Session::Destination::~Destination()
{
}

bool SpanMonitorSession::Sessions::Session::Destination::has_data() const
{
    return destination_interface_name.is_set
	|| destination_ipv4_address.is_set
	|| destination_ipv6_address.is_set
	|| destination_type.is_set;
}

bool SpanMonitorSession::Sessions::Session::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_interface_name.operation)
	|| is_set(destination_ipv4_address.operation)
	|| is_set(destination_ipv6_address.operation)
	|| is_set(destination_type.operation);
}

std::string SpanMonitorSession::Sessions::Session::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Sessions::Session::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_interface_name.is_set || is_set(destination_interface_name.operation)) leaf_name_data.push_back(destination_interface_name.get_name_leafdata());
    if (destination_ipv4_address.is_set || is_set(destination_ipv4_address.operation)) leaf_name_data.push_back(destination_ipv4_address.get_name_leafdata());
    if (destination_ipv6_address.is_set || is_set(destination_ipv6_address.operation)) leaf_name_data.push_back(destination_ipv6_address.get_name_leafdata());
    if (destination_type.is_set || is_set(destination_type.operation)) leaf_name_data.push_back(destination_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Sessions::Session::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Sessions::Session::Destination::get_children()
{
    return children;
}

void SpanMonitorSession::Sessions::Session::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-interface-name")
    {
        destination_interface_name = value;
    }
    if(value_path == "destination-ipv4-address")
    {
        destination_ipv4_address = value;
    }
    if(value_path == "destination-ipv6-address")
    {
        destination_ipv6_address = value;
    }
    if(value_path == "destination-type")
    {
        destination_type = value;
    }
}

SpanMonitorSession::Sessions::Session::Session()
    :
    	session{YType::str, "session"},
	 class_{YType::enumeration, "class"}
    	,
    destination(std::make_unique<SpanMonitorSession::Sessions::Session::Destination>())
{
    destination->parent = this;
    children["destination"] = destination.get();

    yang_name = "session"; yang_parent_name = "sessions";
}

SpanMonitorSession::Sessions::Session::~Session()
{
}

bool SpanMonitorSession::Sessions::Session::has_data() const
{
    return session.is_set
	|| class_.is_set
	|| (destination !=  nullptr && destination->has_data());
}

bool SpanMonitorSession::Sessions::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(session.operation)
	|| is_set(class_.operation)
	|| (destination !=  nullptr && is_set(destination->operation));
}

std::string SpanMonitorSession::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session='" <<session.get() <<"']";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-session/sessions/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.operation)) leaf_name_data.push_back(session.get_name_leafdata());
    if (class_.is_set || is_set(class_.operation)) leaf_name_data.push_back(class_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination")
    {
        if(destination != nullptr)
        {
            children["destination"] = destination.get();
        }
        else
        {
            destination = std::make_unique<SpanMonitorSession::Sessions::Session::Destination>();
            destination->parent = this;
            children["destination"] = destination.get();
        }
        return children.at("destination");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Sessions::Session::get_children()
{
    if(children.find("destination") == children.end())
    {
        if(destination != nullptr)
        {
            children["destination"] = destination.get();
        }
    }

    return children;
}

void SpanMonitorSession::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session")
    {
        session = value;
    }
    if(value_path == "class")
    {
        class_ = value;
    }
}

SpanMonitorSession::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "span-monitor-session";
}

SpanMonitorSession::Sessions::~Sessions()
{
}

bool SpanMonitorSession::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool SpanMonitorSession::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SpanMonitorSession::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-session/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SpanMonitorSession::Sessions::Session>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Sessions::get_children()
{
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SpanMonitorSession::Sessions::set_value(const std::string & value_path, std::string value)
{
}

SpanMonitorSession::SpanMonitorSession()
    :
    sessions(std::make_unique<SpanMonitorSession::Sessions>())
{
    sessions->parent = this;
    children["sessions"] = sessions.get();

    yang_name = "span-monitor-session"; yang_parent_name = "Cisco-IOS-XR-Ethernet-SPAN-cfg";
}

SpanMonitorSession::~SpanMonitorSession()
{
}

bool SpanMonitorSession::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data());
}

bool SpanMonitorSession::has_operation() const
{
    return is_set(operation)
	|| (sessions !=  nullptr && is_set(sessions->operation));
}

std::string SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-session";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions.get();
        }
        else
        {
            sessions = std::make_unique<SpanMonitorSession::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions.get();
        }
        return children.at("sessions");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::get_children()
{
    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions.get();
        }
    }

    return children;
}

void SpanMonitorSession::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> SpanMonitorSession::clone_ptr()
{
    return std::make_unique<SpanMonitorSession>();
}

const Enum::Value SpanTrafficDirectionEnum::rx_only {1, "rx-only"};
const Enum::Value SpanTrafficDirectionEnum::tx_only {2, "tx-only"};

const Enum::Value SpanMirrorIntervalEnum::Y_512 {1, "512"};
const Enum::Value SpanMirrorIntervalEnum::Y_1k {2, "1k"};
const Enum::Value SpanMirrorIntervalEnum::Y_2k {3, "2k"};
const Enum::Value SpanMirrorIntervalEnum::Y_4k {4, "4k"};
const Enum::Value SpanMirrorIntervalEnum::Y_8k {5, "8k"};
const Enum::Value SpanMirrorIntervalEnum::Y_16k {6, "16k"};

const Enum::Value SpanDestinationEnum::interface {0, "interface"};
const Enum::Value SpanDestinationEnum::pseudowire {1, "pseudowire"};
const Enum::Value SpanDestinationEnum::ipv4_address {2, "ipv4-address"};
const Enum::Value SpanDestinationEnum::ipv6_address {3, "ipv6-address"};


}
}

