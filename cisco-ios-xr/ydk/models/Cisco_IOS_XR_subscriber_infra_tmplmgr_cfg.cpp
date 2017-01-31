
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg {

DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    	direction{YType::enumeration, "direction"},
	 port_level_enable{YType::empty, "port-level-enable"},
	 session_name{YType::str, "session-name"}
{
    yang_name = "attachment"; yang_parent_name = "span-monitor-session";
}

DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    return direction.is_set
	|| port_level_enable.is_set
	|| session_name.is_set;
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(port_level_enable.operation)
	|| is_set(session_name.operation);
}

std::string DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.operation)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
}

DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    	session_class{YType::enumeration, "session-class"},
	 acl{YType::empty, "acl"},
	 mirror_first{YType::uint32, "mirror-first"},
	 mirror_interval{YType::enumeration, "mirror-interval"}
    	,
    attachment(nullptr) // presence node
{
    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions";
}

DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    return session_class.is_set
	|| acl.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (attachment !=  nullptr && attachment->has_data());
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_class.operation)
	|| is_set(acl.operation)
	|| is_set(mirror_first.operation)
	|| is_set(mirror_interval.operation)
	|| (attachment !=  nullptr && attachment->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session" <<"[session-class='" <<session_class.get() <<"']";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.operation)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.operation)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.operation)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attachment")
    {
        if(attachment != nullptr)
        {
            children["attachment"] = attachment.get();
        }
        else
        {
            attachment = std::make_unique<DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment>();
            attachment->parent = this;
            children["attachment"] = attachment.get();
        }
        return children.at("attachment");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::get_children()
{
    if(children.find("attachment") == children.end())
    {
        if(attachment != nullptr)
        {
            children["attachment"] = attachment.get();
        }
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-class")
    {
        session_class = value;
    }
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "mirror-first")
    {
        mirror_first = value;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
    }
}

DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSessions()
{
    yang_name = "span-monitor-sessions"; yang_parent_name = "ppp";
}

DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::has_data() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-subscriber-cfg:span-monitor-sessions";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "span-monitor-session")
    {
        for(auto const & c : span_monitor_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession>();
        c->parent = this;
        span_monitor_session.push_back(std::move(c));
        children[segment_path] = span_monitor_session.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::get_children()
{
    for (auto const & c : span_monitor_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::Outbound()
    :
    	common_acl_name{YType::str, "common-acl-name"},
	 hardware_count{YType::empty, "hardware-count"},
	 interface_statistics{YType::empty, "interface-statistics"},
	 name{YType::str, "name"}
{
    yang_name = "outbound"; yang_parent_name = "ipv4-packet-filter";
}

DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::~Outbound()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::has_data() const
{
    return common_acl_name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::has_operation() const
{
    return is_set(operation)
	|| is_set(common_acl_name.operation)
	|| is_set(hardware_count.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(name.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.operation)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::Inbound()
    :
    	common_acl_name{YType::str, "common-acl-name"},
	 hardware_count{YType::empty, "hardware-count"},
	 interface_statistics{YType::empty, "interface-statistics"},
	 name{YType::str, "name"}
{
    yang_name = "inbound"; yang_parent_name = "ipv4-packet-filter";
}

DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::~Inbound()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::has_data() const
{
    return common_acl_name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::has_operation() const
{
    return is_set(operation)
	|| is_set(common_acl_name.operation)
	|| is_set(hardware_count.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(name.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.operation)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Ipv4PacketFilter()
    :
    inbound(std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound>())
	,outbound(nullptr) // presence node
{
    inbound->parent = this;
    children["inbound"] = inbound.get();

    yang_name = "ipv4-packet-filter"; yang_parent_name = "ppp";
}

DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::~Ipv4PacketFilter()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::has_operation() const
{
    return is_set(operation)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv4-packet-filter";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inbound")
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound.get();
        }
        else
        {
            inbound = std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound>();
            inbound->parent = this;
            children["inbound"] = inbound.get();
        }
        return children.at("inbound");
    }

    if(child_yang_name == "outbound")
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound.get();
        }
        else
        {
            outbound = std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound>();
            outbound->parent = this;
            children["outbound"] = outbound.get();
        }
        return children.at("outbound");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::get_children()
{
    if(children.find("inbound") == children.end())
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound.get();
        }
    }

    if(children.find("outbound") == children.end())
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound.get();
        }
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::Inbound()
    :
    	common_acl_name{YType::str, "common-acl-name"},
	 interface_statistics{YType::empty, "interface-statistics"},
	 name{YType::str, "name"}
{
    yang_name = "inbound"; yang_parent_name = "ipv6-packet-filter";
}

DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::~Inbound()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::has_data() const
{
    return common_acl_name.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::has_operation() const
{
    return is_set(operation)
	|| is_set(common_acl_name.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(name.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::Outbound()
    :
    	common_acl_name{YType::str, "common-acl-name"},
	 interface_statistics{YType::empty, "interface-statistics"},
	 name{YType::str, "name"}
{
    yang_name = "outbound"; yang_parent_name = "ipv6-packet-filter";
}

DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::~Outbound()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::has_data() const
{
    return common_acl_name.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::has_operation() const
{
    return is_set(operation)
	|| is_set(common_acl_name.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(name.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Ipv6PacketFilter()
    :
    inbound(std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound>())
	,outbound(nullptr) // presence node
{
    inbound->parent = this;
    children["inbound"] = inbound.get();

    yang_name = "ipv6-packet-filter"; yang_parent_name = "ppp";
}

DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::~Ipv6PacketFilter()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::has_operation() const
{
    return is_set(operation)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv6-packet-filter";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inbound")
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound.get();
        }
        else
        {
            inbound = std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound>();
            inbound->parent = this;
            children["inbound"] = inbound.get();
        }
        return children.at("inbound");
    }

    if(child_yang_name == "outbound")
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound.get();
        }
        else
        {
            outbound = std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound>();
            outbound->parent = this;
            children["outbound"] = outbound.get();
        }
        return children.at("outbound");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::get_children()
{
    if(children.find("inbound") == children.end())
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound.get();
        }
    }

    if(children.find("outbound") == children.end())
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound.get();
        }
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::ExplicitTracking()
    :
    	access_list_name{YType::str, "access-list-name"},
	 enable{YType::boolean, "enable"}
{
    yang_name = "explicit-tracking"; yang_parent_name = "default-vrf";
}

DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::~ExplicitTracking()
{
}

bool DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::has_data() const
{
    return access_list_name.is_set
	|| enable.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(enable.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::DefaultVrf()
    :
    	access_group{YType::str, "access-group"},
	 max_groups{YType::uint32, "max-groups"},
	 multicast{YType::int32, "multicast"},
	 query_interval{YType::uint32, "query-interval"},
	 query_max_response_time{YType::uint32, "query-max-response-time"},
	 robustness{YType::uint32, "robustness"},
	 version{YType::uint32, "version"}
    	,
    explicit_tracking(nullptr) // presence node
{
    yang_name = "default-vrf"; yang_parent_name = "igmp";
}

DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::~DefaultVrf()
{
}

bool DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::has_data() const
{
    return access_group.is_set
	|| max_groups.is_set
	|| multicast.is_set
	|| query_interval.is_set
	|| query_max_response_time.is_set
	|| robustness.is_set
	|| version.is_set
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(access_group.operation)
	|| is_set(max_groups.operation)
	|| is_set(multicast.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_max_response_time.operation)
	|| is_set(robustness.operation)
	|| is_set(version.operation)
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.operation)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (max_groups.is_set || is_set(max_groups.operation)) leaf_name_data.push_back(max_groups.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.operation)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
        else
        {
            explicit_tracking = std::make_unique<DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking>();
            explicit_tracking->parent = this;
            children["explicit-tracking"] = explicit_tracking.get();
        }
        return children.at("explicit-tracking");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::get_children()
{
    if(children.find("explicit-tracking") == children.end())
    {
        if(explicit_tracking != nullptr)
        {
            children["explicit-tracking"] = explicit_tracking.get();
        }
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-group")
    {
        access_group = value;
    }
    if(value_path == "max-groups")
    {
        max_groups = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

DynamicTemplate::Ppps::Ppp::Igmp::Igmp()
    :
    default_vrf(std::make_unique<DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf>())
{
    default_vrf->parent = this;
    children["default-vrf"] = default_vrf.get();

    yang_name = "igmp"; yang_parent_name = "ppp";
}

DynamicTemplate::Ppps::Ppp::Igmp::~Igmp()
{
}

bool DynamicTemplate::Ppps::Ppp::Igmp::has_data() const
{
    return (default_vrf !=  nullptr && default_vrf->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Igmp::has_operation() const
{
    return is_set(operation)
	|| (default_vrf !=  nullptr && default_vrf->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-dyn-tmpl-cfg:igmp";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Igmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf.get();
        }
        else
        {
            default_vrf = std::make_unique<DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf>();
            default_vrf->parent = this;
            children["default-vrf"] = default_vrf.get();
        }
        return children.at("default-vrf");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Igmp::get_children()
{
    if(children.find("default-vrf") == children.end())
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf.get();
        }
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Igmp::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::Ppps::Ppp::Ipv4Network::Ipv4Network()
    :
    	mtu{YType::uint32, "mtu"},
	 rpf{YType::boolean, "rpf"},
	 unnumbered{YType::str, "unnumbered"},
	 unreachables{YType::boolean, "unreachables"}
{
    yang_name = "ipv4-network"; yang_parent_name = "ppp";
}

DynamicTemplate::Ppps::Ppp::Ipv4Network::~Ipv4Network()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv4Network::has_data() const
{
    return mtu.is_set
	|| rpf.is_set
	|| unnumbered.is_set
	|| unreachables.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv4Network::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(rpf.operation)
	|| is_set(unnumbered.operation)
	|| is_set(unreachables.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv4Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Ipv4Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.operation)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.operation)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.operation)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Ipv4Network::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv4Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "rpf")
    {
        rpf = value;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
    }
}

DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::AutoConfiguration()
    :
    	enable{YType::empty, "enable"}
{
    yang_name = "auto-configuration"; yang_parent_name = "addresses";
}

DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::~AutoConfiguration()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::has_data() const
{
    return enable.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-configuration";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::Addresses()
    :
    auto_configuration(std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration>())
{
    auto_configuration->parent = this;
    children["auto-configuration"] = auto_configuration.get();

    yang_name = "addresses"; yang_parent_name = "ipv6-network";
}

DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::~Addresses()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::has_data() const
{
    return (auto_configuration !=  nullptr && auto_configuration->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::has_operation() const
{
    return is_set(operation)
	|| (auto_configuration !=  nullptr && auto_configuration->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-configuration")
    {
        if(auto_configuration != nullptr)
        {
            children["auto-configuration"] = auto_configuration.get();
        }
        else
        {
            auto_configuration = std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration>();
            auto_configuration->parent = this;
            children["auto-configuration"] = auto_configuration.get();
        }
        return children.at("auto-configuration");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::get_children()
{
    if(children.find("auto-configuration") == children.end())
    {
        if(auto_configuration != nullptr)
        {
            children["auto-configuration"] = auto_configuration.get();
        }
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::Ppps::Ppp::Ipv6Network::Ipv6Network()
    :
    	mtu{YType::uint32, "mtu"},
	 unreachables{YType::empty, "unreachables"},
	 verify{YType::enumeration, "verify"}
    	,
    addresses(std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses>())
{
    addresses->parent = this;
    children["addresses"] = addresses.get();

    yang_name = "ipv6-network"; yang_parent_name = "ppp";
}

DynamicTemplate::Ppps::Ppp::Ipv6Network::~Ipv6Network()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Network::has_data() const
{
    return mtu.is_set
	|| unreachables.is_set
	|| verify.is_set
	|| (addresses !=  nullptr && addresses->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Network::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(unreachables.operation)
	|| is_set(verify.operation)
	|| (addresses !=  nullptr && addresses->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Ipv6Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.operation)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addresses")
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses.get();
        }
        else
        {
            addresses = std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses>();
            addresses->parent = this;
            children["addresses"] = addresses.get();
        }
        return children.at("addresses");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Ipv6Network::get_children()
{
    if(children.find("addresses") == children.end())
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses.get();
        }
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::FramedPrefix()
    :
    	prefix{YType::str, "prefix"},
	 prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "framed-prefix"; yang_parent_name = "ipv6-neighbor";
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::~FramedPrefix()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "framed-prefix";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::DuplicateAddressDetection()
    :
    	attempts{YType::uint32, "attempts"}
{
    yang_name = "duplicate-address-detection"; yang_parent_name = "ipv6-neighbor";
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::~DuplicateAddressDetection()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::has_data() const
{
    return attempts.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::has_operation() const
{
    return is_set(operation)
	|| is_set(attempts.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duplicate-address-detection";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attempts.is_set || is_set(attempts.operation)) leaf_name_data.push_back(attempts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attempts")
    {
        attempts = value;
    }
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::RaInitial()
    :
    	count{YType::uint32, "count"},
	 interval{YType::uint32, "interval"}
{
    yang_name = "ra-initial"; yang_parent_name = "ipv6-neighbor";
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::~RaInitial()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::has_data() const
{
    return count.is_set
	|| interval.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(interval.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra-initial";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::Ipv6Neighbor()
    :
    	framed_prefix_pool{YType::str, "framed-prefix-pool"},
	 managed_config{YType::empty, "managed-config"},
	 ns_interval{YType::uint32, "ns-interval"},
	 nud_enable{YType::empty, "nud-enable"},
	 other_config{YType::empty, "other-config"},
	 ra_hop_limit{YType::enumeration, "ra-hop-limit"},
	 ra_interval{YType::uint32, "ra-interval"},
	 ra_lifetime{YType::uint32, "ra-lifetime"},
	 ra_suppress{YType::empty, "ra-suppress"},
	 ra_suppress_mtu{YType::empty, "ra-suppress-mtu"},
	 ra_unicast{YType::empty, "ra-unicast"},
	 reachable_time{YType::uint32, "reachable-time"},
	 router_preference{YType::enumeration, "router-preference"},
	 start_ra_on_ipv6_enable{YType::empty, "start-ra-on-ipv6-enable"},
	 suppress_cache_learning{YType::empty, "suppress-cache-learning"}
    	,
    duplicate_address_detection(std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection>())
	,framed_prefix(nullptr) // presence node
	,ra_initial(nullptr) // presence node
{
    duplicate_address_detection->parent = this;
    children["duplicate-address-detection"] = duplicate_address_detection.get();

    yang_name = "ipv6-neighbor"; yang_parent_name = "ppp";
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::~Ipv6Neighbor()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::has_data() const
{
    return framed_prefix_pool.is_set
	|| managed_config.is_set
	|| ns_interval.is_set
	|| nud_enable.is_set
	|| other_config.is_set
	|| ra_hop_limit.is_set
	|| ra_interval.is_set
	|| ra_lifetime.is_set
	|| ra_suppress.is_set
	|| ra_suppress_mtu.is_set
	|| ra_unicast.is_set
	|| reachable_time.is_set
	|| router_preference.is_set
	|| start_ra_on_ipv6_enable.is_set
	|| suppress_cache_learning.is_set
	|| (duplicate_address_detection !=  nullptr && duplicate_address_detection->has_data())
	|| (framed_prefix !=  nullptr && framed_prefix->has_data())
	|| (ra_initial !=  nullptr && ra_initial->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(framed_prefix_pool.operation)
	|| is_set(managed_config.operation)
	|| is_set(ns_interval.operation)
	|| is_set(nud_enable.operation)
	|| is_set(other_config.operation)
	|| is_set(ra_hop_limit.operation)
	|| is_set(ra_interval.operation)
	|| is_set(ra_lifetime.operation)
	|| is_set(ra_suppress.operation)
	|| is_set(ra_suppress_mtu.operation)
	|| is_set(ra_unicast.operation)
	|| is_set(reachable_time.operation)
	|| is_set(router_preference.operation)
	|| is_set(start_ra_on_ipv6_enable.operation)
	|| is_set(suppress_cache_learning.operation)
	|| (duplicate_address_detection !=  nullptr && duplicate_address_detection->has_operation())
	|| (framed_prefix !=  nullptr && framed_prefix->has_operation())
	|| (ra_initial !=  nullptr && ra_initial->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (framed_prefix_pool.is_set || is_set(framed_prefix_pool.operation)) leaf_name_data.push_back(framed_prefix_pool.get_name_leafdata());
    if (managed_config.is_set || is_set(managed_config.operation)) leaf_name_data.push_back(managed_config.get_name_leafdata());
    if (ns_interval.is_set || is_set(ns_interval.operation)) leaf_name_data.push_back(ns_interval.get_name_leafdata());
    if (nud_enable.is_set || is_set(nud_enable.operation)) leaf_name_data.push_back(nud_enable.get_name_leafdata());
    if (other_config.is_set || is_set(other_config.operation)) leaf_name_data.push_back(other_config.get_name_leafdata());
    if (ra_hop_limit.is_set || is_set(ra_hop_limit.operation)) leaf_name_data.push_back(ra_hop_limit.get_name_leafdata());
    if (ra_interval.is_set || is_set(ra_interval.operation)) leaf_name_data.push_back(ra_interval.get_name_leafdata());
    if (ra_lifetime.is_set || is_set(ra_lifetime.operation)) leaf_name_data.push_back(ra_lifetime.get_name_leafdata());
    if (ra_suppress.is_set || is_set(ra_suppress.operation)) leaf_name_data.push_back(ra_suppress.get_name_leafdata());
    if (ra_suppress_mtu.is_set || is_set(ra_suppress_mtu.operation)) leaf_name_data.push_back(ra_suppress_mtu.get_name_leafdata());
    if (ra_unicast.is_set || is_set(ra_unicast.operation)) leaf_name_data.push_back(ra_unicast.get_name_leafdata());
    if (reachable_time.is_set || is_set(reachable_time.operation)) leaf_name_data.push_back(reachable_time.get_name_leafdata());
    if (router_preference.is_set || is_set(router_preference.operation)) leaf_name_data.push_back(router_preference.get_name_leafdata());
    if (start_ra_on_ipv6_enable.is_set || is_set(start_ra_on_ipv6_enable.operation)) leaf_name_data.push_back(start_ra_on_ipv6_enable.get_name_leafdata());
    if (suppress_cache_learning.is_set || is_set(suppress_cache_learning.operation)) leaf_name_data.push_back(suppress_cache_learning.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "duplicate-address-detection")
    {
        if(duplicate_address_detection != nullptr)
        {
            children["duplicate-address-detection"] = duplicate_address_detection.get();
        }
        else
        {
            duplicate_address_detection = std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection>();
            duplicate_address_detection->parent = this;
            children["duplicate-address-detection"] = duplicate_address_detection.get();
        }
        return children.at("duplicate-address-detection");
    }

    if(child_yang_name == "framed-prefix")
    {
        if(framed_prefix != nullptr)
        {
            children["framed-prefix"] = framed_prefix.get();
        }
        else
        {
            framed_prefix = std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix>();
            framed_prefix->parent = this;
            children["framed-prefix"] = framed_prefix.get();
        }
        return children.at("framed-prefix");
    }

    if(child_yang_name == "ra-initial")
    {
        if(ra_initial != nullptr)
        {
            children["ra-initial"] = ra_initial.get();
        }
        else
        {
            ra_initial = std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial>();
            ra_initial->parent = this;
            children["ra-initial"] = ra_initial.get();
        }
        return children.at("ra-initial");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::get_children()
{
    if(children.find("duplicate-address-detection") == children.end())
    {
        if(duplicate_address_detection != nullptr)
        {
            children["duplicate-address-detection"] = duplicate_address_detection.get();
        }
    }

    if(children.find("framed-prefix") == children.end())
    {
        if(framed_prefix != nullptr)
        {
            children["framed-prefix"] = framed_prefix.get();
        }
    }

    if(children.find("ra-initial") == children.end())
    {
        if(ra_initial != nullptr)
        {
            children["ra-initial"] = ra_initial.get();
        }
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "framed-prefix-pool")
    {
        framed_prefix_pool = value;
    }
    if(value_path == "managed-config")
    {
        managed_config = value;
    }
    if(value_path == "ns-interval")
    {
        ns_interval = value;
    }
    if(value_path == "nud-enable")
    {
        nud_enable = value;
    }
    if(value_path == "other-config")
    {
        other_config = value;
    }
    if(value_path == "ra-hop-limit")
    {
        ra_hop_limit = value;
    }
    if(value_path == "ra-interval")
    {
        ra_interval = value;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime = value;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress = value;
    }
    if(value_path == "ra-suppress-mtu")
    {
        ra_suppress_mtu = value;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast = value;
    }
    if(value_path == "reachable-time")
    {
        reachable_time = value;
    }
    if(value_path == "router-preference")
    {
        router_preference = value;
    }
    if(value_path == "start-ra-on-ipv6-enable")
    {
        start_ra_on_ipv6_enable = value;
    }
    if(value_path == "suppress-cache-learning")
    {
        suppress_cache_learning = value;
    }
}

DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::DelegatedPrefix()
    :
    	prefix{YType::str, "prefix"},
	 prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "delegated-prefix"; yang_parent_name = "dhcpv6";
}

DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::~DelegatedPrefix()
{
}

bool DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated-prefix";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

DynamicTemplate::Ppps::Ppp::Dhcpv6::Dhcpv6()
    :
    	address_pool{YType::str, "address-pool"},
	 class_{YType::str, "class"},
	 delegated_prefix_pool{YType::str, "delegated-prefix-pool"},
	 dns_ipv6address{YType::str, "dns-ipv6address"},
	 stateful_address{YType::str, "stateful-address"}
    	,
    delegated_prefix(nullptr) // presence node
{
    yang_name = "dhcpv6"; yang_parent_name = "ppp";
}

DynamicTemplate::Ppps::Ppp::Dhcpv6::~Dhcpv6()
{
}

bool DynamicTemplate::Ppps::Ppp::Dhcpv6::has_data() const
{
    return address_pool.is_set
	|| class_.is_set
	|| delegated_prefix_pool.is_set
	|| dns_ipv6address.is_set
	|| stateful_address.is_set
	|| (delegated_prefix !=  nullptr && delegated_prefix->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Dhcpv6::has_operation() const
{
    return is_set(operation)
	|| is_set(address_pool.operation)
	|| is_set(class_.operation)
	|| is_set(delegated_prefix_pool.operation)
	|| is_set(dns_ipv6address.operation)
	|| is_set(stateful_address.operation)
	|| (delegated_prefix !=  nullptr && delegated_prefix->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Dhcpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-subscriber-cfg:dhcpv6";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Dhcpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_pool.is_set || is_set(address_pool.operation)) leaf_name_data.push_back(address_pool.get_name_leafdata());
    if (class_.is_set || is_set(class_.operation)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (delegated_prefix_pool.is_set || is_set(delegated_prefix_pool.operation)) leaf_name_data.push_back(delegated_prefix_pool.get_name_leafdata());
    if (dns_ipv6address.is_set || is_set(dns_ipv6address.operation)) leaf_name_data.push_back(dns_ipv6address.get_name_leafdata());
    if (stateful_address.is_set || is_set(stateful_address.operation)) leaf_name_data.push_back(stateful_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Dhcpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "delegated-prefix")
    {
        if(delegated_prefix != nullptr)
        {
            children["delegated-prefix"] = delegated_prefix.get();
        }
        else
        {
            delegated_prefix = std::make_unique<DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix>();
            delegated_prefix->parent = this;
            children["delegated-prefix"] = delegated_prefix.get();
        }
        return children.at("delegated-prefix");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Dhcpv6::get_children()
{
    if(children.find("delegated-prefix") == children.end())
    {
        if(delegated_prefix != nullptr)
        {
            children["delegated-prefix"] = delegated_prefix.get();
        }
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Dhcpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-pool")
    {
        address_pool = value;
    }
    if(value_path == "class")
    {
        class_ = value;
    }
    if(value_path == "delegated-prefix-pool")
    {
        delegated_prefix_pool = value;
    }
    if(value_path == "dns-ipv6address")
    {
        dns_ipv6address = value;
    }
    if(value_path == "stateful-address")
    {
        stateful_address = value;
    }
}

DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::ServicePolicy()
    :
    	input{YType::str, "input"}
{
    yang_name = "service-policy"; yang_parent_name = "pbr";
}

DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::~ServicePolicy()
{
}

bool DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::has_data() const
{
    return input.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input = value;
    }
}

DynamicTemplate::Ppps::Ppp::Pbr::Pbr()
    :
    	service_policy_in{YType::str, "service-policy-in"}
    	,
    service_policy(std::make_unique<DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy>())
{
    service_policy->parent = this;
    children["service-policy"] = service_policy.get();

    yang_name = "pbr"; yang_parent_name = "ppp";
}

DynamicTemplate::Ppps::Ppp::Pbr::~Pbr()
{
}

bool DynamicTemplate::Ppps::Ppp::Pbr::has_data() const
{
    return service_policy_in.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Pbr::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_in.operation)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Pbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-subscriber-cfg:pbr";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Pbr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_in.is_set || is_set(service_policy_in.operation)) leaf_name_data.push_back(service_policy_in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Pbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy.get();
        }
        else
        {
            service_policy = std::make_unique<DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy>();
            service_policy->parent = this;
            children["service-policy"] = service_policy.get();
        }
        return children.at("service-policy");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Pbr::get_children()
{
    if(children.find("service-policy") == children.end())
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy.get();
        }
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Pbr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in = value;
    }
}

DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::Input()
    :
    	account_stats{YType::boolean, "account-stats"},
	 merge{YType::boolean, "merge"},
	 merge_id{YType::uint32, "merge-id"},
	 policy_name{YType::str, "policy-name"},
	 spi_name{YType::str, "spi-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::~Input()
{
}

bool DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::has_data() const
{
    return account_stats.is_set
	|| merge.is_set
	|| merge_id.is_set
	|| policy_name.is_set
	|| spi_name.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(account_stats.operation)
	|| is_set(merge.operation)
	|| is_set(merge_id.operation)
	|| is_set(policy_name.operation)
	|| is_set(spi_name.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_stats.is_set || is_set(account_stats.operation)) leaf_name_data.push_back(account_stats.get_name_leafdata());
    if (merge.is_set || is_set(merge.operation)) leaf_name_data.push_back(merge.get_name_leafdata());
    if (merge_id.is_set || is_set(merge_id.operation)) leaf_name_data.push_back(merge_id.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-stats")
    {
        account_stats = value;
    }
    if(value_path == "merge")
    {
        merge = value;
    }
    if(value_path == "merge-id")
    {
        merge_id = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
}

DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::Output()
    :
    	account_stats{YType::boolean, "account-stats"},
	 merge{YType::boolean, "merge"},
	 merge_id{YType::uint32, "merge-id"},
	 policy_name{YType::str, "policy-name"},
	 spi_name{YType::str, "spi-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::~Output()
{
}

bool DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::has_data() const
{
    return account_stats.is_set
	|| merge.is_set
	|| merge_id.is_set
	|| policy_name.is_set
	|| spi_name.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(account_stats.operation)
	|| is_set(merge.operation)
	|| is_set(merge_id.operation)
	|| is_set(policy_name.operation)
	|| is_set(spi_name.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_stats.is_set || is_set(account_stats.operation)) leaf_name_data.push_back(account_stats.get_name_leafdata());
    if (merge.is_set || is_set(merge.operation)) leaf_name_data.push_back(merge.get_name_leafdata());
    if (merge_id.is_set || is_set(merge_id.operation)) leaf_name_data.push_back(merge_id.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-stats")
    {
        account_stats = value;
    }
    if(value_path == "merge")
    {
        merge = value;
    }
    if(value_path == "merge-id")
    {
        merge_id = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
}

DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::ServicePolicy()
    :
    input(nullptr) // presence node
	,output(nullptr) // presence node
{
    yang_name = "service-policy"; yang_parent_name = "qos";
}

DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::~ServicePolicy()
{
}

bool DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
        else
        {
            input = std::make_unique<DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input>();
            input->parent = this;
            children["input"] = input.get();
        }
        return children.at("input");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
        else
        {
            output = std::make_unique<DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output>();
            output->parent = this;
            children["output"] = output.get();
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::Ppps::Ppp::Qos::Account::Account()
    :
    	aal{YType::enumeration, "aal"},
	 atm_cell_tax{YType::empty, "atm-cell-tax"},
	 encapsulation{YType::enumeration, "encapsulation"},
	 user_defined{YType::int32, "user-defined"}
{
    yang_name = "account"; yang_parent_name = "qos";
}

DynamicTemplate::Ppps::Ppp::Qos::Account::~Account()
{
}

bool DynamicTemplate::Ppps::Ppp::Qos::Account::has_data() const
{
    return aal.is_set
	|| atm_cell_tax.is_set
	|| encapsulation.is_set
	|| user_defined.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Qos::Account::has_operation() const
{
    return is_set(operation)
	|| is_set(aal.operation)
	|| is_set(atm_cell_tax.operation)
	|| is_set(encapsulation.operation)
	|| is_set(user_defined.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Qos::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Qos::Account::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aal.is_set || is_set(aal.operation)) leaf_name_data.push_back(aal.get_name_leafdata());
    if (atm_cell_tax.is_set || is_set(atm_cell_tax.operation)) leaf_name_data.push_back(atm_cell_tax.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (user_defined.is_set || is_set(user_defined.operation)) leaf_name_data.push_back(user_defined.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Qos::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Qos::Account::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Qos::Account::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aal")
    {
        aal = value;
    }
    if(value_path == "atm-cell-tax")
    {
        atm_cell_tax = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "user-defined")
    {
        user_defined = value;
    }
}

DynamicTemplate::Ppps::Ppp::Qos::Output::Output()
    :
    	minimum_bandwidth{YType::uint32, "minimum-bandwidth"}
{
    yang_name = "output"; yang_parent_name = "qos";
}

DynamicTemplate::Ppps::Ppp::Qos::Output::~Output()
{
}

bool DynamicTemplate::Ppps::Ppp::Qos::Output::has_data() const
{
    return minimum_bandwidth.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Qos::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_bandwidth.operation);
}

std::string DynamicTemplate::Ppps::Ppp::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Qos::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.operation)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Qos::Output::get_children()
{
    return children;
}

void DynamicTemplate::Ppps::Ppp::Qos::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
    }
}

DynamicTemplate::Ppps::Ppp::Qos::Qos()
    :
    account(std::make_unique<DynamicTemplate::Ppps::Ppp::Qos::Account>())
	,output(std::make_unique<DynamicTemplate::Ppps::Ppp::Qos::Output>())
	,service_policy(std::make_unique<DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy>())
{
    account->parent = this;
    children["account"] = account.get();

    output->parent = this;
    children["output"] = output.get();

    service_policy->parent = this;
    children["service-policy"] = service_policy.get();

    yang_name = "qos"; yang_parent_name = "ppp";
}

DynamicTemplate::Ppps::Ppp::Qos::~Qos()
{
}

bool DynamicTemplate::Ppps::Ppp::Qos::has_data() const
{
    return (account !=  nullptr && account->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Qos::has_operation() const
{
    return is_set(operation)
	|| (account !=  nullptr && account->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-bng-cfg:qos";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "account")
    {
        if(account != nullptr)
        {
            children["account"] = account.get();
        }
        else
        {
            account = std::make_unique<DynamicTemplate::Ppps::Ppp::Qos::Account>();
            account->parent = this;
            children["account"] = account.get();
        }
        return children.at("account");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
        else
        {
            output = std::make_unique<DynamicTemplate::Ppps::Ppp::Qos::Output>();
            output->parent = this;
            children["output"] = output.get();
        }
        return children.at("output");
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy.get();
        }
        else
        {
            service_policy = std::make_unique<DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy>();
            service_policy->parent = this;
            children["service-policy"] = service_policy.get();
        }
        return children.at("service-policy");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::Qos::get_children()
{
    if(children.find("account") == children.end())
    {
        if(account != nullptr)
        {
            children["account"] = account.get();
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
    }

    if(children.find("service-policy") == children.end())
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy.get();
        }
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Qos::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::Ppps::Ppp::Ppp()
    :
    	template_name{YType::str, "template-name"},
	 vrf{YType::str, "vrf"}
    	,
    dhcpv6(std::make_unique<DynamicTemplate::Ppps::Ppp::Dhcpv6>())
	,igmp(std::make_unique<DynamicTemplate::Ppps::Ppp::Igmp>())
	,ipv4_network(std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv4Network>())
	,ipv4_packet_filter(std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter>())
	,ipv6_neighbor(std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor>())
	,ipv6_network(std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6Network>())
	,ipv6_packet_filter(std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter>())
	,pbr(std::make_unique<DynamicTemplate::Ppps::Ppp::Pbr>())
	,qos(std::make_unique<DynamicTemplate::Ppps::Ppp::Qos>())
	,span_monitor_sessions(std::make_unique<DynamicTemplate::Ppps::Ppp::SpanMonitorSessions>())
{
    dhcpv6->parent = this;
    children["dhcpv6"] = dhcpv6.get();

    igmp->parent = this;
    children["igmp"] = igmp.get();

    ipv4_network->parent = this;
    children["ipv4-network"] = ipv4_network.get();

    ipv4_packet_filter->parent = this;
    children["ipv4-packet-filter"] = ipv4_packet_filter.get();

    ipv6_neighbor->parent = this;
    children["ipv6-neighbor"] = ipv6_neighbor.get();

    ipv6_network->parent = this;
    children["ipv6-network"] = ipv6_network.get();

    ipv6_packet_filter->parent = this;
    children["ipv6-packet-filter"] = ipv6_packet_filter.get();

    pbr->parent = this;
    children["pbr"] = pbr.get();

    qos->parent = this;
    children["qos"] = qos.get();

    span_monitor_sessions->parent = this;
    children["span-monitor-sessions"] = span_monitor_sessions.get();

    yang_name = "ppp"; yang_parent_name = "ppps";
}

DynamicTemplate::Ppps::Ppp::~Ppp()
{
}

bool DynamicTemplate::Ppps::Ppp::has_data() const
{
    return template_name.is_set
	|| vrf.is_set
	|| (dhcpv6 !=  nullptr && dhcpv6->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (ipv4_network !=  nullptr && ipv4_network->has_data())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_data())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_data())
	|| (ipv6_network !=  nullptr && ipv6_network->has_data())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_data())
	|| (pbr !=  nullptr && pbr->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data());
}

bool DynamicTemplate::Ppps::Ppp::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(vrf.operation)
	|| (dhcpv6 !=  nullptr && dhcpv6->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (ipv4_network !=  nullptr && ipv4_network->has_operation())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_operation())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_operation())
	|| (ipv6_network !=  nullptr && ipv6_network->has_operation())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_operation())
	|| (pbr !=  nullptr && pbr->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp" <<"[template-name='" <<template_name.get() <<"']";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::Ppp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template/ppps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dhcpv6")
    {
        if(dhcpv6 != nullptr)
        {
            children["dhcpv6"] = dhcpv6.get();
        }
        else
        {
            dhcpv6 = std::make_unique<DynamicTemplate::Ppps::Ppp::Dhcpv6>();
            dhcpv6->parent = this;
            children["dhcpv6"] = dhcpv6.get();
        }
        return children.at("dhcpv6");
    }

    if(child_yang_name == "igmp")
    {
        if(igmp != nullptr)
        {
            children["igmp"] = igmp.get();
        }
        else
        {
            igmp = std::make_unique<DynamicTemplate::Ppps::Ppp::Igmp>();
            igmp->parent = this;
            children["igmp"] = igmp.get();
        }
        return children.at("igmp");
    }

    if(child_yang_name == "ipv4-network")
    {
        if(ipv4_network != nullptr)
        {
            children["ipv4-network"] = ipv4_network.get();
        }
        else
        {
            ipv4_network = std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv4Network>();
            ipv4_network->parent = this;
            children["ipv4-network"] = ipv4_network.get();
        }
        return children.at("ipv4-network");
    }

    if(child_yang_name == "ipv4-packet-filter")
    {
        if(ipv4_packet_filter != nullptr)
        {
            children["ipv4-packet-filter"] = ipv4_packet_filter.get();
        }
        else
        {
            ipv4_packet_filter = std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter>();
            ipv4_packet_filter->parent = this;
            children["ipv4-packet-filter"] = ipv4_packet_filter.get();
        }
        return children.at("ipv4-packet-filter");
    }

    if(child_yang_name == "ipv6-neighbor")
    {
        if(ipv6_neighbor != nullptr)
        {
            children["ipv6-neighbor"] = ipv6_neighbor.get();
        }
        else
        {
            ipv6_neighbor = std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor>();
            ipv6_neighbor->parent = this;
            children["ipv6-neighbor"] = ipv6_neighbor.get();
        }
        return children.at("ipv6-neighbor");
    }

    if(child_yang_name == "ipv6-network")
    {
        if(ipv6_network != nullptr)
        {
            children["ipv6-network"] = ipv6_network.get();
        }
        else
        {
            ipv6_network = std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6Network>();
            ipv6_network->parent = this;
            children["ipv6-network"] = ipv6_network.get();
        }
        return children.at("ipv6-network");
    }

    if(child_yang_name == "ipv6-packet-filter")
    {
        if(ipv6_packet_filter != nullptr)
        {
            children["ipv6-packet-filter"] = ipv6_packet_filter.get();
        }
        else
        {
            ipv6_packet_filter = std::make_unique<DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter>();
            ipv6_packet_filter->parent = this;
            children["ipv6-packet-filter"] = ipv6_packet_filter.get();
        }
        return children.at("ipv6-packet-filter");
    }

    if(child_yang_name == "pbr")
    {
        if(pbr != nullptr)
        {
            children["pbr"] = pbr.get();
        }
        else
        {
            pbr = std::make_unique<DynamicTemplate::Ppps::Ppp::Pbr>();
            pbr->parent = this;
            children["pbr"] = pbr.get();
        }
        return children.at("pbr");
    }

    if(child_yang_name == "qos")
    {
        if(qos != nullptr)
        {
            children["qos"] = qos.get();
        }
        else
        {
            qos = std::make_unique<DynamicTemplate::Ppps::Ppp::Qos>();
            qos->parent = this;
            children["qos"] = qos.get();
        }
        return children.at("qos");
    }

    if(child_yang_name == "span-monitor-sessions")
    {
        if(span_monitor_sessions != nullptr)
        {
            children["span-monitor-sessions"] = span_monitor_sessions.get();
        }
        else
        {
            span_monitor_sessions = std::make_unique<DynamicTemplate::Ppps::Ppp::SpanMonitorSessions>();
            span_monitor_sessions->parent = this;
            children["span-monitor-sessions"] = span_monitor_sessions.get();
        }
        return children.at("span-monitor-sessions");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::Ppps::Ppp::get_children()
{
    if(children.find("dhcpv6") == children.end())
    {
        if(dhcpv6 != nullptr)
        {
            children["dhcpv6"] = dhcpv6.get();
        }
    }

    if(children.find("igmp") == children.end())
    {
        if(igmp != nullptr)
        {
            children["igmp"] = igmp.get();
        }
    }

    if(children.find("ipv4-network") == children.end())
    {
        if(ipv4_network != nullptr)
        {
            children["ipv4-network"] = ipv4_network.get();
        }
    }

    if(children.find("ipv4-packet-filter") == children.end())
    {
        if(ipv4_packet_filter != nullptr)
        {
            children["ipv4-packet-filter"] = ipv4_packet_filter.get();
        }
    }

    if(children.find("ipv6-neighbor") == children.end())
    {
        if(ipv6_neighbor != nullptr)
        {
            children["ipv6-neighbor"] = ipv6_neighbor.get();
        }
    }

    if(children.find("ipv6-network") == children.end())
    {
        if(ipv6_network != nullptr)
        {
            children["ipv6-network"] = ipv6_network.get();
        }
    }

    if(children.find("ipv6-packet-filter") == children.end())
    {
        if(ipv6_packet_filter != nullptr)
        {
            children["ipv6-packet-filter"] = ipv6_packet_filter.get();
        }
    }

    if(children.find("pbr") == children.end())
    {
        if(pbr != nullptr)
        {
            children["pbr"] = pbr.get();
        }
    }

    if(children.find("qos") == children.end())
    {
        if(qos != nullptr)
        {
            children["qos"] = qos.get();
        }
    }

    if(children.find("span-monitor-sessions") == children.end())
    {
        if(span_monitor_sessions != nullptr)
        {
            children["span-monitor-sessions"] = span_monitor_sessions.get();
        }
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

DynamicTemplate::Ppps::Ppps()
{
    yang_name = "ppps"; yang_parent_name = "dynamic-template";
}

DynamicTemplate::Ppps::~Ppps()
{
}

bool DynamicTemplate::Ppps::has_data() const
{
    for (std::size_t index=0; index<ppp.size(); index++)
    {
        if(ppp[index]->has_data())
            return true;
    }
    return false;
}

bool DynamicTemplate::Ppps::has_operation() const
{
    for (std::size_t index=0; index<ppp.size(); index++)
    {
        if(ppp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DynamicTemplate::Ppps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppps";

    return path_buffer.str();

}

EntityPath DynamicTemplate::Ppps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::Ppps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ppp")
    {
        for(auto const & c : ppp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<DynamicTemplate::Ppps::Ppp>();
        c->parent = this;
        ppp.push_back(std::move(c));
        children[segment_path] = ppp.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::Ppps::get_children()
{
    for (auto const & c : ppp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void DynamicTemplate::Ppps::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    	direction{YType::enumeration, "direction"},
	 port_level_enable{YType::empty, "port-level-enable"},
	 session_name{YType::str, "session-name"}
{
    yang_name = "attachment"; yang_parent_name = "span-monitor-session";
}

DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    return direction.is_set
	|| port_level_enable.is_set
	|| session_name.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(port_level_enable.operation)
	|| is_set(session_name.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.operation)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    	session_class{YType::enumeration, "session-class"},
	 acl{YType::empty, "acl"},
	 mirror_first{YType::uint32, "mirror-first"},
	 mirror_interval{YType::enumeration, "mirror-interval"}
    	,
    attachment(nullptr) // presence node
{
    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions";
}

DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    return session_class.is_set
	|| acl.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (attachment !=  nullptr && attachment->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_class.operation)
	|| is_set(acl.operation)
	|| is_set(mirror_first.operation)
	|| is_set(mirror_interval.operation)
	|| (attachment !=  nullptr && attachment->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session" <<"[session-class='" <<session_class.get() <<"']";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.operation)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.operation)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.operation)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attachment")
    {
        if(attachment != nullptr)
        {
            children["attachment"] = attachment.get();
        }
        else
        {
            attachment = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment>();
            attachment->parent = this;
            children["attachment"] = attachment.get();
        }
        return children.at("attachment");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::get_children()
{
    if(children.find("attachment") == children.end())
    {
        if(attachment != nullptr)
        {
            children["attachment"] = attachment.get();
        }
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-class")
    {
        session_class = value;
    }
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "mirror-first")
    {
        mirror_first = value;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSessions()
{
    yang_name = "span-monitor-sessions"; yang_parent_name = "ip-subscriber";
}

DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::has_data() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-subscriber-cfg:span-monitor-sessions";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "span-monitor-session")
    {
        for(auto const & c : span_monitor_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession>();
        c->parent = this;
        span_monitor_session.push_back(std::move(c));
        children[segment_path] = span_monitor_session.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::get_children()
{
    for (auto const & c : span_monitor_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::Outbound()
    :
    	common_acl_name{YType::str, "common-acl-name"},
	 hardware_count{YType::empty, "hardware-count"},
	 interface_statistics{YType::empty, "interface-statistics"},
	 name{YType::str, "name"}
{
    yang_name = "outbound"; yang_parent_name = "ipv4-packet-filter";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::~Outbound()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::has_data() const
{
    return common_acl_name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::has_operation() const
{
    return is_set(operation)
	|| is_set(common_acl_name.operation)
	|| is_set(hardware_count.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(name.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.operation)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::Inbound()
    :
    	common_acl_name{YType::str, "common-acl-name"},
	 hardware_count{YType::empty, "hardware-count"},
	 interface_statistics{YType::empty, "interface-statistics"},
	 name{YType::str, "name"}
{
    yang_name = "inbound"; yang_parent_name = "ipv4-packet-filter";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::~Inbound()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::has_data() const
{
    return common_acl_name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::has_operation() const
{
    return is_set(operation)
	|| is_set(common_acl_name.operation)
	|| is_set(hardware_count.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(name.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.operation)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Ipv4PacketFilter()
    :
    inbound(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound>())
	,outbound(nullptr) // presence node
{
    inbound->parent = this;
    children["inbound"] = inbound.get();

    yang_name = "ipv4-packet-filter"; yang_parent_name = "ip-subscriber";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::~Ipv4PacketFilter()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::has_operation() const
{
    return is_set(operation)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv4-packet-filter";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inbound")
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound.get();
        }
        else
        {
            inbound = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound>();
            inbound->parent = this;
            children["inbound"] = inbound.get();
        }
        return children.at("inbound");
    }

    if(child_yang_name == "outbound")
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound.get();
        }
        else
        {
            outbound = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound>();
            outbound->parent = this;
            children["outbound"] = outbound.get();
        }
        return children.at("outbound");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::get_children()
{
    if(children.find("inbound") == children.end())
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound.get();
        }
    }

    if(children.find("outbound") == children.end())
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound.get();
        }
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::Inbound()
    :
    	common_acl_name{YType::str, "common-acl-name"},
	 interface_statistics{YType::empty, "interface-statistics"},
	 name{YType::str, "name"}
{
    yang_name = "inbound"; yang_parent_name = "ipv6-packet-filter";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::~Inbound()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::has_data() const
{
    return common_acl_name.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::has_operation() const
{
    return is_set(operation)
	|| is_set(common_acl_name.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(name.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::Outbound()
    :
    	common_acl_name{YType::str, "common-acl-name"},
	 interface_statistics{YType::empty, "interface-statistics"},
	 name{YType::str, "name"}
{
    yang_name = "outbound"; yang_parent_name = "ipv6-packet-filter";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::~Outbound()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::has_data() const
{
    return common_acl_name.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::has_operation() const
{
    return is_set(operation)
	|| is_set(common_acl_name.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(name.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Ipv6PacketFilter()
    :
    inbound(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound>())
	,outbound(nullptr) // presence node
{
    inbound->parent = this;
    children["inbound"] = inbound.get();

    yang_name = "ipv6-packet-filter"; yang_parent_name = "ip-subscriber";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::~Ipv6PacketFilter()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::has_operation() const
{
    return is_set(operation)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv6-packet-filter";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inbound")
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound.get();
        }
        else
        {
            inbound = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound>();
            inbound->parent = this;
            children["inbound"] = inbound.get();
        }
        return children.at("inbound");
    }

    if(child_yang_name == "outbound")
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound.get();
        }
        else
        {
            outbound = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound>();
            outbound->parent = this;
            children["outbound"] = outbound.get();
        }
        return children.at("outbound");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::get_children()
{
    if(children.find("inbound") == children.end())
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound.get();
        }
    }

    if(children.find("outbound") == children.end())
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound.get();
        }
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::Ipv4Network()
    :
    	mtu{YType::uint32, "mtu"},
	 rpf{YType::boolean, "rpf"},
	 unnumbered{YType::str, "unnumbered"},
	 unreachables{YType::boolean, "unreachables"}
{
    yang_name = "ipv4-network"; yang_parent_name = "ip-subscriber";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::~Ipv4Network()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::has_data() const
{
    return mtu.is_set
	|| rpf.is_set
	|| unnumbered.is_set
	|| unreachables.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(rpf.operation)
	|| is_set(unnumbered.operation)
	|| is_set(unreachables.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.operation)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.operation)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.operation)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "rpf")
    {
        rpf = value;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::AutoConfiguration()
    :
    	enable{YType::empty, "enable"}
{
    yang_name = "auto-configuration"; yang_parent_name = "addresses";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::~AutoConfiguration()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::has_data() const
{
    return enable.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-configuration";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::Addresses()
    :
    auto_configuration(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration>())
{
    auto_configuration->parent = this;
    children["auto-configuration"] = auto_configuration.get();

    yang_name = "addresses"; yang_parent_name = "ipv6-network";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::~Addresses()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::has_data() const
{
    return (auto_configuration !=  nullptr && auto_configuration->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::has_operation() const
{
    return is_set(operation)
	|| (auto_configuration !=  nullptr && auto_configuration->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-configuration")
    {
        if(auto_configuration != nullptr)
        {
            children["auto-configuration"] = auto_configuration.get();
        }
        else
        {
            auto_configuration = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration>();
            auto_configuration->parent = this;
            children["auto-configuration"] = auto_configuration.get();
        }
        return children.at("auto-configuration");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::get_children()
{
    if(children.find("auto-configuration") == children.end())
    {
        if(auto_configuration != nullptr)
        {
            children["auto-configuration"] = auto_configuration.get();
        }
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Ipv6Network()
    :
    	mtu{YType::uint32, "mtu"},
	 unreachables{YType::empty, "unreachables"},
	 verify{YType::enumeration, "verify"}
    	,
    addresses(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses>())
{
    addresses->parent = this;
    children["addresses"] = addresses.get();

    yang_name = "ipv6-network"; yang_parent_name = "ip-subscriber";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::~Ipv6Network()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::has_data() const
{
    return mtu.is_set
	|| unreachables.is_set
	|| verify.is_set
	|| (addresses !=  nullptr && addresses->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(unreachables.operation)
	|| is_set(verify.operation)
	|| (addresses !=  nullptr && addresses->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.operation)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addresses")
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses.get();
        }
        else
        {
            addresses = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses>();
            addresses->parent = this;
            children["addresses"] = addresses.get();
        }
        return children.at("addresses");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::get_children()
{
    if(children.find("addresses") == children.end())
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses.get();
        }
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::FramedPrefix()
    :
    	prefix{YType::str, "prefix"},
	 prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "framed-prefix"; yang_parent_name = "ipv6-neighbor";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::~FramedPrefix()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "framed-prefix";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::DuplicateAddressDetection()
    :
    	attempts{YType::uint32, "attempts"}
{
    yang_name = "duplicate-address-detection"; yang_parent_name = "ipv6-neighbor";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::~DuplicateAddressDetection()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::has_data() const
{
    return attempts.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::has_operation() const
{
    return is_set(operation)
	|| is_set(attempts.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duplicate-address-detection";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attempts.is_set || is_set(attempts.operation)) leaf_name_data.push_back(attempts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attempts")
    {
        attempts = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::RaInitial()
    :
    	count{YType::uint32, "count"},
	 interval{YType::uint32, "interval"}
{
    yang_name = "ra-initial"; yang_parent_name = "ipv6-neighbor";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::~RaInitial()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::has_data() const
{
    return count.is_set
	|| interval.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(interval.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra-initial";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::Ipv6Neighbor()
    :
    	framed_prefix_pool{YType::str, "framed-prefix-pool"},
	 managed_config{YType::empty, "managed-config"},
	 ns_interval{YType::uint32, "ns-interval"},
	 nud_enable{YType::empty, "nud-enable"},
	 other_config{YType::empty, "other-config"},
	 ra_hop_limit{YType::enumeration, "ra-hop-limit"},
	 ra_interval{YType::uint32, "ra-interval"},
	 ra_lifetime{YType::uint32, "ra-lifetime"},
	 ra_suppress{YType::empty, "ra-suppress"},
	 ra_suppress_mtu{YType::empty, "ra-suppress-mtu"},
	 ra_unicast{YType::empty, "ra-unicast"},
	 reachable_time{YType::uint32, "reachable-time"},
	 router_preference{YType::enumeration, "router-preference"},
	 start_ra_on_ipv6_enable{YType::empty, "start-ra-on-ipv6-enable"},
	 suppress_cache_learning{YType::empty, "suppress-cache-learning"}
    	,
    duplicate_address_detection(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection>())
	,framed_prefix(nullptr) // presence node
	,ra_initial(nullptr) // presence node
{
    duplicate_address_detection->parent = this;
    children["duplicate-address-detection"] = duplicate_address_detection.get();

    yang_name = "ipv6-neighbor"; yang_parent_name = "ip-subscriber";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::~Ipv6Neighbor()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::has_data() const
{
    return framed_prefix_pool.is_set
	|| managed_config.is_set
	|| ns_interval.is_set
	|| nud_enable.is_set
	|| other_config.is_set
	|| ra_hop_limit.is_set
	|| ra_interval.is_set
	|| ra_lifetime.is_set
	|| ra_suppress.is_set
	|| ra_suppress_mtu.is_set
	|| ra_unicast.is_set
	|| reachable_time.is_set
	|| router_preference.is_set
	|| start_ra_on_ipv6_enable.is_set
	|| suppress_cache_learning.is_set
	|| (duplicate_address_detection !=  nullptr && duplicate_address_detection->has_data())
	|| (framed_prefix !=  nullptr && framed_prefix->has_data())
	|| (ra_initial !=  nullptr && ra_initial->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(framed_prefix_pool.operation)
	|| is_set(managed_config.operation)
	|| is_set(ns_interval.operation)
	|| is_set(nud_enable.operation)
	|| is_set(other_config.operation)
	|| is_set(ra_hop_limit.operation)
	|| is_set(ra_interval.operation)
	|| is_set(ra_lifetime.operation)
	|| is_set(ra_suppress.operation)
	|| is_set(ra_suppress_mtu.operation)
	|| is_set(ra_unicast.operation)
	|| is_set(reachable_time.operation)
	|| is_set(router_preference.operation)
	|| is_set(start_ra_on_ipv6_enable.operation)
	|| is_set(suppress_cache_learning.operation)
	|| (duplicate_address_detection !=  nullptr && duplicate_address_detection->has_operation())
	|| (framed_prefix !=  nullptr && framed_prefix->has_operation())
	|| (ra_initial !=  nullptr && ra_initial->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (framed_prefix_pool.is_set || is_set(framed_prefix_pool.operation)) leaf_name_data.push_back(framed_prefix_pool.get_name_leafdata());
    if (managed_config.is_set || is_set(managed_config.operation)) leaf_name_data.push_back(managed_config.get_name_leafdata());
    if (ns_interval.is_set || is_set(ns_interval.operation)) leaf_name_data.push_back(ns_interval.get_name_leafdata());
    if (nud_enable.is_set || is_set(nud_enable.operation)) leaf_name_data.push_back(nud_enable.get_name_leafdata());
    if (other_config.is_set || is_set(other_config.operation)) leaf_name_data.push_back(other_config.get_name_leafdata());
    if (ra_hop_limit.is_set || is_set(ra_hop_limit.operation)) leaf_name_data.push_back(ra_hop_limit.get_name_leafdata());
    if (ra_interval.is_set || is_set(ra_interval.operation)) leaf_name_data.push_back(ra_interval.get_name_leafdata());
    if (ra_lifetime.is_set || is_set(ra_lifetime.operation)) leaf_name_data.push_back(ra_lifetime.get_name_leafdata());
    if (ra_suppress.is_set || is_set(ra_suppress.operation)) leaf_name_data.push_back(ra_suppress.get_name_leafdata());
    if (ra_suppress_mtu.is_set || is_set(ra_suppress_mtu.operation)) leaf_name_data.push_back(ra_suppress_mtu.get_name_leafdata());
    if (ra_unicast.is_set || is_set(ra_unicast.operation)) leaf_name_data.push_back(ra_unicast.get_name_leafdata());
    if (reachable_time.is_set || is_set(reachable_time.operation)) leaf_name_data.push_back(reachable_time.get_name_leafdata());
    if (router_preference.is_set || is_set(router_preference.operation)) leaf_name_data.push_back(router_preference.get_name_leafdata());
    if (start_ra_on_ipv6_enable.is_set || is_set(start_ra_on_ipv6_enable.operation)) leaf_name_data.push_back(start_ra_on_ipv6_enable.get_name_leafdata());
    if (suppress_cache_learning.is_set || is_set(suppress_cache_learning.operation)) leaf_name_data.push_back(suppress_cache_learning.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "duplicate-address-detection")
    {
        if(duplicate_address_detection != nullptr)
        {
            children["duplicate-address-detection"] = duplicate_address_detection.get();
        }
        else
        {
            duplicate_address_detection = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection>();
            duplicate_address_detection->parent = this;
            children["duplicate-address-detection"] = duplicate_address_detection.get();
        }
        return children.at("duplicate-address-detection");
    }

    if(child_yang_name == "framed-prefix")
    {
        if(framed_prefix != nullptr)
        {
            children["framed-prefix"] = framed_prefix.get();
        }
        else
        {
            framed_prefix = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix>();
            framed_prefix->parent = this;
            children["framed-prefix"] = framed_prefix.get();
        }
        return children.at("framed-prefix");
    }

    if(child_yang_name == "ra-initial")
    {
        if(ra_initial != nullptr)
        {
            children["ra-initial"] = ra_initial.get();
        }
        else
        {
            ra_initial = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial>();
            ra_initial->parent = this;
            children["ra-initial"] = ra_initial.get();
        }
        return children.at("ra-initial");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::get_children()
{
    if(children.find("duplicate-address-detection") == children.end())
    {
        if(duplicate_address_detection != nullptr)
        {
            children["duplicate-address-detection"] = duplicate_address_detection.get();
        }
    }

    if(children.find("framed-prefix") == children.end())
    {
        if(framed_prefix != nullptr)
        {
            children["framed-prefix"] = framed_prefix.get();
        }
    }

    if(children.find("ra-initial") == children.end())
    {
        if(ra_initial != nullptr)
        {
            children["ra-initial"] = ra_initial.get();
        }
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "framed-prefix-pool")
    {
        framed_prefix_pool = value;
    }
    if(value_path == "managed-config")
    {
        managed_config = value;
    }
    if(value_path == "ns-interval")
    {
        ns_interval = value;
    }
    if(value_path == "nud-enable")
    {
        nud_enable = value;
    }
    if(value_path == "other-config")
    {
        other_config = value;
    }
    if(value_path == "ra-hop-limit")
    {
        ra_hop_limit = value;
    }
    if(value_path == "ra-interval")
    {
        ra_interval = value;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime = value;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress = value;
    }
    if(value_path == "ra-suppress-mtu")
    {
        ra_suppress_mtu = value;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast = value;
    }
    if(value_path == "reachable-time")
    {
        reachable_time = value;
    }
    if(value_path == "router-preference")
    {
        router_preference = value;
    }
    if(value_path == "start-ra-on-ipv6-enable")
    {
        start_ra_on_ipv6_enable = value;
    }
    if(value_path == "suppress-cache-learning")
    {
        suppress_cache_learning = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::DelegatedPrefix()
    :
    	prefix{YType::str, "prefix"},
	 prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "delegated-prefix"; yang_parent_name = "dhcpv6";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::~DelegatedPrefix()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated-prefix";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::Dhcpv6()
    :
    	address_pool{YType::str, "address-pool"},
	 class_{YType::str, "class"},
	 delegated_prefix_pool{YType::str, "delegated-prefix-pool"},
	 dns_ipv6address{YType::str, "dns-ipv6address"},
	 stateful_address{YType::str, "stateful-address"}
    	,
    delegated_prefix(nullptr) // presence node
{
    yang_name = "dhcpv6"; yang_parent_name = "ip-subscriber";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::~Dhcpv6()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::has_data() const
{
    return address_pool.is_set
	|| class_.is_set
	|| delegated_prefix_pool.is_set
	|| dns_ipv6address.is_set
	|| stateful_address.is_set
	|| (delegated_prefix !=  nullptr && delegated_prefix->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::has_operation() const
{
    return is_set(operation)
	|| is_set(address_pool.operation)
	|| is_set(class_.operation)
	|| is_set(delegated_prefix_pool.operation)
	|| is_set(dns_ipv6address.operation)
	|| is_set(stateful_address.operation)
	|| (delegated_prefix !=  nullptr && delegated_prefix->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-subscriber-cfg:dhcpv6";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_pool.is_set || is_set(address_pool.operation)) leaf_name_data.push_back(address_pool.get_name_leafdata());
    if (class_.is_set || is_set(class_.operation)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (delegated_prefix_pool.is_set || is_set(delegated_prefix_pool.operation)) leaf_name_data.push_back(delegated_prefix_pool.get_name_leafdata());
    if (dns_ipv6address.is_set || is_set(dns_ipv6address.operation)) leaf_name_data.push_back(dns_ipv6address.get_name_leafdata());
    if (stateful_address.is_set || is_set(stateful_address.operation)) leaf_name_data.push_back(stateful_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "delegated-prefix")
    {
        if(delegated_prefix != nullptr)
        {
            children["delegated-prefix"] = delegated_prefix.get();
        }
        else
        {
            delegated_prefix = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix>();
            delegated_prefix->parent = this;
            children["delegated-prefix"] = delegated_prefix.get();
        }
        return children.at("delegated-prefix");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::get_children()
{
    if(children.find("delegated-prefix") == children.end())
    {
        if(delegated_prefix != nullptr)
        {
            children["delegated-prefix"] = delegated_prefix.get();
        }
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-pool")
    {
        address_pool = value;
    }
    if(value_path == "class")
    {
        class_ = value;
    }
    if(value_path == "delegated-prefix-pool")
    {
        delegated_prefix_pool = value;
    }
    if(value_path == "dns-ipv6address")
    {
        dns_ipv6address = value;
    }
    if(value_path == "stateful-address")
    {
        stateful_address = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::ServicePolicy()
    :
    	input{YType::str, "input"}
{
    yang_name = "service-policy"; yang_parent_name = "pbr";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::~ServicePolicy()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::has_data() const
{
    return input.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::Pbr()
    :
    	service_policy_in{YType::str, "service-policy-in"}
    	,
    service_policy(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy>())
{
    service_policy->parent = this;
    children["service-policy"] = service_policy.get();

    yang_name = "pbr"; yang_parent_name = "ip-subscriber";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::~Pbr()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::has_data() const
{
    return service_policy_in.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_in.operation)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-subscriber-cfg:pbr";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_in.is_set || is_set(service_policy_in.operation)) leaf_name_data.push_back(service_policy_in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy.get();
        }
        else
        {
            service_policy = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy>();
            service_policy->parent = this;
            children["service-policy"] = service_policy.get();
        }
        return children.at("service-policy");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::get_children()
{
    if(children.find("service-policy") == children.end())
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy.get();
        }
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::Input()
    :
    	account_stats{YType::boolean, "account-stats"},
	 merge{YType::boolean, "merge"},
	 merge_id{YType::uint32, "merge-id"},
	 policy_name{YType::str, "policy-name"},
	 spi_name{YType::str, "spi-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::~Input()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::has_data() const
{
    return account_stats.is_set
	|| merge.is_set
	|| merge_id.is_set
	|| policy_name.is_set
	|| spi_name.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(account_stats.operation)
	|| is_set(merge.operation)
	|| is_set(merge_id.operation)
	|| is_set(policy_name.operation)
	|| is_set(spi_name.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_stats.is_set || is_set(account_stats.operation)) leaf_name_data.push_back(account_stats.get_name_leafdata());
    if (merge.is_set || is_set(merge.operation)) leaf_name_data.push_back(merge.get_name_leafdata());
    if (merge_id.is_set || is_set(merge_id.operation)) leaf_name_data.push_back(merge_id.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-stats")
    {
        account_stats = value;
    }
    if(value_path == "merge")
    {
        merge = value;
    }
    if(value_path == "merge-id")
    {
        merge_id = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::Output()
    :
    	account_stats{YType::boolean, "account-stats"},
	 merge{YType::boolean, "merge"},
	 merge_id{YType::uint32, "merge-id"},
	 policy_name{YType::str, "policy-name"},
	 spi_name{YType::str, "spi-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::~Output()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::has_data() const
{
    return account_stats.is_set
	|| merge.is_set
	|| merge_id.is_set
	|| policy_name.is_set
	|| spi_name.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(account_stats.operation)
	|| is_set(merge.operation)
	|| is_set(merge_id.operation)
	|| is_set(policy_name.operation)
	|| is_set(spi_name.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_stats.is_set || is_set(account_stats.operation)) leaf_name_data.push_back(account_stats.get_name_leafdata());
    if (merge.is_set || is_set(merge.operation)) leaf_name_data.push_back(merge.get_name_leafdata());
    if (merge_id.is_set || is_set(merge_id.operation)) leaf_name_data.push_back(merge_id.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-stats")
    {
        account_stats = value;
    }
    if(value_path == "merge")
    {
        merge = value;
    }
    if(value_path == "merge-id")
    {
        merge_id = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::ServicePolicy()
    :
    input(nullptr) // presence node
	,output(nullptr) // presence node
{
    yang_name = "service-policy"; yang_parent_name = "qos";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::~ServicePolicy()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
        else
        {
            input = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input>();
            input->parent = this;
            children["input"] = input.get();
        }
        return children.at("input");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
        else
        {
            output = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output>();
            output->parent = this;
            children["output"] = output.get();
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::Account()
    :
    	aal{YType::enumeration, "aal"},
	 atm_cell_tax{YType::empty, "atm-cell-tax"},
	 encapsulation{YType::enumeration, "encapsulation"},
	 user_defined{YType::int32, "user-defined"}
{
    yang_name = "account"; yang_parent_name = "qos";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::~Account()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::has_data() const
{
    return aal.is_set
	|| atm_cell_tax.is_set
	|| encapsulation.is_set
	|| user_defined.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::has_operation() const
{
    return is_set(operation)
	|| is_set(aal.operation)
	|| is_set(atm_cell_tax.operation)
	|| is_set(encapsulation.operation)
	|| is_set(user_defined.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aal.is_set || is_set(aal.operation)) leaf_name_data.push_back(aal.get_name_leafdata());
    if (atm_cell_tax.is_set || is_set(atm_cell_tax.operation)) leaf_name_data.push_back(atm_cell_tax.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (user_defined.is_set || is_set(user_defined.operation)) leaf_name_data.push_back(user_defined.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aal")
    {
        aal = value;
    }
    if(value_path == "atm-cell-tax")
    {
        atm_cell_tax = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "user-defined")
    {
        user_defined = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::Output()
    :
    	minimum_bandwidth{YType::uint32, "minimum-bandwidth"}
{
    yang_name = "output"; yang_parent_name = "qos";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::~Output()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::has_data() const
{
    return minimum_bandwidth.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_bandwidth.operation);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.operation)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::get_children()
{
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Qos()
    :
    account(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account>())
	,output(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output>())
	,service_policy(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy>())
{
    account->parent = this;
    children["account"] = account.get();

    output->parent = this;
    children["output"] = output.get();

    service_policy->parent = this;
    children["service-policy"] = service_policy.get();

    yang_name = "qos"; yang_parent_name = "ip-subscriber";
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::~Qos()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::has_data() const
{
    return (account !=  nullptr && account->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::has_operation() const
{
    return is_set(operation)
	|| (account !=  nullptr && account->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-bng-cfg:qos";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "account")
    {
        if(account != nullptr)
        {
            children["account"] = account.get();
        }
        else
        {
            account = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account>();
            account->parent = this;
            children["account"] = account.get();
        }
        return children.at("account");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
        else
        {
            output = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output>();
            output->parent = this;
            children["output"] = output.get();
        }
        return children.at("output");
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy.get();
        }
        else
        {
            service_policy = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy>();
            service_policy->parent = this;
            children["service-policy"] = service_policy.get();
        }
        return children.at("service-policy");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::Qos::get_children()
{
    if(children.find("account") == children.end())
    {
        if(account != nullptr)
        {
            children["account"] = account.get();
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
    }

    if(children.find("service-policy") == children.end())
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy.get();
        }
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::IpSubscribers::IpSubscriber::IpSubscriber()
    :
    	template_name{YType::str, "template-name"},
	 vrf{YType::str, "vrf"}
    	,
    dhcpv6(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6>())
	,ipv4_network(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network>())
	,ipv4_packet_filter(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter>())
	,ipv6_neighbor(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor>())
	,ipv6_network(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network>())
	,ipv6_packet_filter(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter>())
	,pbr(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Pbr>())
	,qos(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Qos>())
	,span_monitor_sessions(std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions>())
{
    dhcpv6->parent = this;
    children["dhcpv6"] = dhcpv6.get();

    ipv4_network->parent = this;
    children["ipv4-network"] = ipv4_network.get();

    ipv4_packet_filter->parent = this;
    children["ipv4-packet-filter"] = ipv4_packet_filter.get();

    ipv6_neighbor->parent = this;
    children["ipv6-neighbor"] = ipv6_neighbor.get();

    ipv6_network->parent = this;
    children["ipv6-network"] = ipv6_network.get();

    ipv6_packet_filter->parent = this;
    children["ipv6-packet-filter"] = ipv6_packet_filter.get();

    pbr->parent = this;
    children["pbr"] = pbr.get();

    qos->parent = this;
    children["qos"] = qos.get();

    span_monitor_sessions->parent = this;
    children["span-monitor-sessions"] = span_monitor_sessions.get();

    yang_name = "ip-subscriber"; yang_parent_name = "ip-subscribers";
}

DynamicTemplate::IpSubscribers::IpSubscriber::~IpSubscriber()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::has_data() const
{
    return template_name.is_set
	|| vrf.is_set
	|| (dhcpv6 !=  nullptr && dhcpv6->has_data())
	|| (ipv4_network !=  nullptr && ipv4_network->has_data())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_data())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_data())
	|| (ipv6_network !=  nullptr && ipv6_network->has_data())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_data())
	|| (pbr !=  nullptr && pbr->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(vrf.operation)
	|| (dhcpv6 !=  nullptr && dhcpv6->has_operation())
	|| (ipv4_network !=  nullptr && ipv4_network->has_operation())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_operation())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_operation())
	|| (ipv6_network !=  nullptr && ipv6_network->has_operation())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_operation())
	|| (pbr !=  nullptr && pbr->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber" <<"[template-name='" <<template_name.get() <<"']";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::IpSubscriber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template/ip-subscribers/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::IpSubscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dhcpv6")
    {
        if(dhcpv6 != nullptr)
        {
            children["dhcpv6"] = dhcpv6.get();
        }
        else
        {
            dhcpv6 = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6>();
            dhcpv6->parent = this;
            children["dhcpv6"] = dhcpv6.get();
        }
        return children.at("dhcpv6");
    }

    if(child_yang_name == "ipv4-network")
    {
        if(ipv4_network != nullptr)
        {
            children["ipv4-network"] = ipv4_network.get();
        }
        else
        {
            ipv4_network = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network>();
            ipv4_network->parent = this;
            children["ipv4-network"] = ipv4_network.get();
        }
        return children.at("ipv4-network");
    }

    if(child_yang_name == "ipv4-packet-filter")
    {
        if(ipv4_packet_filter != nullptr)
        {
            children["ipv4-packet-filter"] = ipv4_packet_filter.get();
        }
        else
        {
            ipv4_packet_filter = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter>();
            ipv4_packet_filter->parent = this;
            children["ipv4-packet-filter"] = ipv4_packet_filter.get();
        }
        return children.at("ipv4-packet-filter");
    }

    if(child_yang_name == "ipv6-neighbor")
    {
        if(ipv6_neighbor != nullptr)
        {
            children["ipv6-neighbor"] = ipv6_neighbor.get();
        }
        else
        {
            ipv6_neighbor = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor>();
            ipv6_neighbor->parent = this;
            children["ipv6-neighbor"] = ipv6_neighbor.get();
        }
        return children.at("ipv6-neighbor");
    }

    if(child_yang_name == "ipv6-network")
    {
        if(ipv6_network != nullptr)
        {
            children["ipv6-network"] = ipv6_network.get();
        }
        else
        {
            ipv6_network = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network>();
            ipv6_network->parent = this;
            children["ipv6-network"] = ipv6_network.get();
        }
        return children.at("ipv6-network");
    }

    if(child_yang_name == "ipv6-packet-filter")
    {
        if(ipv6_packet_filter != nullptr)
        {
            children["ipv6-packet-filter"] = ipv6_packet_filter.get();
        }
        else
        {
            ipv6_packet_filter = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter>();
            ipv6_packet_filter->parent = this;
            children["ipv6-packet-filter"] = ipv6_packet_filter.get();
        }
        return children.at("ipv6-packet-filter");
    }

    if(child_yang_name == "pbr")
    {
        if(pbr != nullptr)
        {
            children["pbr"] = pbr.get();
        }
        else
        {
            pbr = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Pbr>();
            pbr->parent = this;
            children["pbr"] = pbr.get();
        }
        return children.at("pbr");
    }

    if(child_yang_name == "qos")
    {
        if(qos != nullptr)
        {
            children["qos"] = qos.get();
        }
        else
        {
            qos = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::Qos>();
            qos->parent = this;
            children["qos"] = qos.get();
        }
        return children.at("qos");
    }

    if(child_yang_name == "span-monitor-sessions")
    {
        if(span_monitor_sessions != nullptr)
        {
            children["span-monitor-sessions"] = span_monitor_sessions.get();
        }
        else
        {
            span_monitor_sessions = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions>();
            span_monitor_sessions->parent = this;
            children["span-monitor-sessions"] = span_monitor_sessions.get();
        }
        return children.at("span-monitor-sessions");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::IpSubscriber::get_children()
{
    if(children.find("dhcpv6") == children.end())
    {
        if(dhcpv6 != nullptr)
        {
            children["dhcpv6"] = dhcpv6.get();
        }
    }

    if(children.find("ipv4-network") == children.end())
    {
        if(ipv4_network != nullptr)
        {
            children["ipv4-network"] = ipv4_network.get();
        }
    }

    if(children.find("ipv4-packet-filter") == children.end())
    {
        if(ipv4_packet_filter != nullptr)
        {
            children["ipv4-packet-filter"] = ipv4_packet_filter.get();
        }
    }

    if(children.find("ipv6-neighbor") == children.end())
    {
        if(ipv6_neighbor != nullptr)
        {
            children["ipv6-neighbor"] = ipv6_neighbor.get();
        }
    }

    if(children.find("ipv6-network") == children.end())
    {
        if(ipv6_network != nullptr)
        {
            children["ipv6-network"] = ipv6_network.get();
        }
    }

    if(children.find("ipv6-packet-filter") == children.end())
    {
        if(ipv6_packet_filter != nullptr)
        {
            children["ipv6-packet-filter"] = ipv6_packet_filter.get();
        }
    }

    if(children.find("pbr") == children.end())
    {
        if(pbr != nullptr)
        {
            children["pbr"] = pbr.get();
        }
    }

    if(children.find("qos") == children.end())
    {
        if(qos != nullptr)
        {
            children["qos"] = qos.get();
        }
    }

    if(children.find("span-monitor-sessions") == children.end())
    {
        if(span_monitor_sessions != nullptr)
        {
            children["span-monitor-sessions"] = span_monitor_sessions.get();
        }
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

DynamicTemplate::IpSubscribers::IpSubscribers()
{
    yang_name = "ip-subscribers"; yang_parent_name = "dynamic-template";
}

DynamicTemplate::IpSubscribers::~IpSubscribers()
{
}

bool DynamicTemplate::IpSubscribers::has_data() const
{
    for (std::size_t index=0; index<ip_subscriber.size(); index++)
    {
        if(ip_subscriber[index]->has_data())
            return true;
    }
    return false;
}

bool DynamicTemplate::IpSubscribers::has_operation() const
{
    for (std::size_t index=0; index<ip_subscriber.size(); index++)
    {
        if(ip_subscriber[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DynamicTemplate::IpSubscribers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscribers";

    return path_buffer.str();

}

EntityPath DynamicTemplate::IpSubscribers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::IpSubscribers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber")
    {
        for(auto const & c : ip_subscriber)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<DynamicTemplate::IpSubscribers::IpSubscriber>();
        c->parent = this;
        ip_subscriber.push_back(std::move(c));
        children[segment_path] = ip_subscriber.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::IpSubscribers::get_children()
{
    for (auto const & c : ip_subscriber)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void DynamicTemplate::IpSubscribers::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    	direction{YType::enumeration, "direction"},
	 port_level_enable{YType::empty, "port-level-enable"},
	 session_name{YType::str, "session-name"}
{
    yang_name = "attachment"; yang_parent_name = "span-monitor-session";
}

DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    return direction.is_set
	|| port_level_enable.is_set
	|| session_name.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(port_level_enable.operation)
	|| is_set(session_name.operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.operation)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children()
{
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    	session_class{YType::enumeration, "session-class"},
	 acl{YType::empty, "acl"},
	 mirror_first{YType::uint32, "mirror-first"},
	 mirror_interval{YType::enumeration, "mirror-interval"}
    	,
    attachment(nullptr) // presence node
{
    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions";
}

DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    return session_class.is_set
	|| acl.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (attachment !=  nullptr && attachment->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_class.operation)
	|| is_set(acl.operation)
	|| is_set(mirror_first.operation)
	|| is_set(mirror_interval.operation)
	|| (attachment !=  nullptr && attachment->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session" <<"[session-class='" <<session_class.get() <<"']";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.operation)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.operation)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.operation)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attachment")
    {
        if(attachment != nullptr)
        {
            children["attachment"] = attachment.get();
        }
        else
        {
            attachment = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment>();
            attachment->parent = this;
            children["attachment"] = attachment.get();
        }
        return children.at("attachment");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::get_children()
{
    if(children.find("attachment") == children.end())
    {
        if(attachment != nullptr)
        {
            children["attachment"] = attachment.get();
        }
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-class")
    {
        session_class = value;
    }
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "mirror-first")
    {
        mirror_first = value;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSessions()
{
    yang_name = "span-monitor-sessions"; yang_parent_name = "subscriber-service";
}

DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::has_data() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-subscriber-cfg:span-monitor-sessions";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "span-monitor-session")
    {
        for(auto const & c : span_monitor_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession>();
        c->parent = this;
        span_monitor_session.push_back(std::move(c));
        children[segment_path] = span_monitor_session.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::get_children()
{
    for (auto const & c : span_monitor_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::Outbound()
    :
    	common_acl_name{YType::str, "common-acl-name"},
	 hardware_count{YType::empty, "hardware-count"},
	 interface_statistics{YType::empty, "interface-statistics"},
	 name{YType::str, "name"}
{
    yang_name = "outbound"; yang_parent_name = "ipv4-packet-filter";
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::~Outbound()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::has_data() const
{
    return common_acl_name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::has_operation() const
{
    return is_set(operation)
	|| is_set(common_acl_name.operation)
	|| is_set(hardware_count.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(name.operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.operation)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::get_children()
{
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::Inbound()
    :
    	common_acl_name{YType::str, "common-acl-name"},
	 hardware_count{YType::empty, "hardware-count"},
	 interface_statistics{YType::empty, "interface-statistics"},
	 name{YType::str, "name"}
{
    yang_name = "inbound"; yang_parent_name = "ipv4-packet-filter";
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::~Inbound()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::has_data() const
{
    return common_acl_name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::has_operation() const
{
    return is_set(operation)
	|| is_set(common_acl_name.operation)
	|| is_set(hardware_count.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(name.operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.operation)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::get_children()
{
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Ipv4PacketFilter()
    :
    inbound(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound>())
	,outbound(nullptr) // presence node
{
    inbound->parent = this;
    children["inbound"] = inbound.get();

    yang_name = "ipv4-packet-filter"; yang_parent_name = "subscriber-service";
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::~Ipv4PacketFilter()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::has_operation() const
{
    return is_set(operation)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv4-packet-filter";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inbound")
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound.get();
        }
        else
        {
            inbound = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound>();
            inbound->parent = this;
            children["inbound"] = inbound.get();
        }
        return children.at("inbound");
    }

    if(child_yang_name == "outbound")
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound.get();
        }
        else
        {
            outbound = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound>();
            outbound->parent = this;
            children["outbound"] = outbound.get();
        }
        return children.at("outbound");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::get_children()
{
    if(children.find("inbound") == children.end())
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound.get();
        }
    }

    if(children.find("outbound") == children.end())
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound.get();
        }
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::Inbound()
    :
    	common_acl_name{YType::str, "common-acl-name"},
	 interface_statistics{YType::empty, "interface-statistics"},
	 name{YType::str, "name"}
{
    yang_name = "inbound"; yang_parent_name = "ipv6-packet-filter";
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::~Inbound()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::has_data() const
{
    return common_acl_name.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::has_operation() const
{
    return is_set(operation)
	|| is_set(common_acl_name.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(name.operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::get_children()
{
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::Outbound()
    :
    	common_acl_name{YType::str, "common-acl-name"},
	 interface_statistics{YType::empty, "interface-statistics"},
	 name{YType::str, "name"}
{
    yang_name = "outbound"; yang_parent_name = "ipv6-packet-filter";
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::~Outbound()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::has_data() const
{
    return common_acl_name.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::has_operation() const
{
    return is_set(operation)
	|| is_set(common_acl_name.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(name.operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::get_children()
{
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Ipv6PacketFilter()
    :
    inbound(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound>())
	,outbound(nullptr) // presence node
{
    inbound->parent = this;
    children["inbound"] = inbound.get();

    yang_name = "ipv6-packet-filter"; yang_parent_name = "subscriber-service";
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::~Ipv6PacketFilter()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::has_operation() const
{
    return is_set(operation)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv6-packet-filter";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inbound")
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound.get();
        }
        else
        {
            inbound = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound>();
            inbound->parent = this;
            children["inbound"] = inbound.get();
        }
        return children.at("inbound");
    }

    if(child_yang_name == "outbound")
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound.get();
        }
        else
        {
            outbound = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound>();
            outbound->parent = this;
            children["outbound"] = outbound.get();
        }
        return children.at("outbound");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::get_children()
{
    if(children.find("inbound") == children.end())
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound.get();
        }
    }

    if(children.find("outbound") == children.end())
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound.get();
        }
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::Ipv4Network()
    :
    	mtu{YType::uint32, "mtu"},
	 rpf{YType::boolean, "rpf"},
	 unnumbered{YType::str, "unnumbered"},
	 unreachables{YType::boolean, "unreachables"}
{
    yang_name = "ipv4-network"; yang_parent_name = "subscriber-service";
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::~Ipv4Network()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::has_data() const
{
    return mtu.is_set
	|| rpf.is_set
	|| unnumbered.is_set
	|| unreachables.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(rpf.operation)
	|| is_set(unnumbered.operation)
	|| is_set(unreachables.operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.operation)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.operation)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.operation)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::get_children()
{
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "rpf")
    {
        rpf = value;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::AutoConfiguration()
    :
    	enable{YType::empty, "enable"}
{
    yang_name = "auto-configuration"; yang_parent_name = "addresses";
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::~AutoConfiguration()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::has_data() const
{
    return enable.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-configuration";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::get_children()
{
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::Addresses()
    :
    auto_configuration(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration>())
{
    auto_configuration->parent = this;
    children["auto-configuration"] = auto_configuration.get();

    yang_name = "addresses"; yang_parent_name = "ipv6-network";
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::~Addresses()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::has_data() const
{
    return (auto_configuration !=  nullptr && auto_configuration->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::has_operation() const
{
    return is_set(operation)
	|| (auto_configuration !=  nullptr && auto_configuration->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-configuration")
    {
        if(auto_configuration != nullptr)
        {
            children["auto-configuration"] = auto_configuration.get();
        }
        else
        {
            auto_configuration = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration>();
            auto_configuration->parent = this;
            children["auto-configuration"] = auto_configuration.get();
        }
        return children.at("auto-configuration");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::get_children()
{
    if(children.find("auto-configuration") == children.end())
    {
        if(auto_configuration != nullptr)
        {
            children["auto-configuration"] = auto_configuration.get();
        }
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Ipv6Network()
    :
    	mtu{YType::uint32, "mtu"},
	 unreachables{YType::empty, "unreachables"},
	 verify{YType::enumeration, "verify"}
    	,
    addresses(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses>())
{
    addresses->parent = this;
    children["addresses"] = addresses.get();

    yang_name = "ipv6-network"; yang_parent_name = "subscriber-service";
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::~Ipv6Network()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::has_data() const
{
    return mtu.is_set
	|| unreachables.is_set
	|| verify.is_set
	|| (addresses !=  nullptr && addresses->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(unreachables.operation)
	|| is_set(verify.operation)
	|| (addresses !=  nullptr && addresses->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.operation)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addresses")
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses.get();
        }
        else
        {
            addresses = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses>();
            addresses->parent = this;
            children["addresses"] = addresses.get();
        }
        return children.at("addresses");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::get_children()
{
    if(children.find("addresses") == children.end())
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses.get();
        }
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::FramedPrefix()
    :
    	prefix{YType::str, "prefix"},
	 prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "framed-prefix"; yang_parent_name = "ipv6-neighbor";
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::~FramedPrefix()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "framed-prefix";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::get_children()
{
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::DuplicateAddressDetection()
    :
    	attempts{YType::uint32, "attempts"}
{
    yang_name = "duplicate-address-detection"; yang_parent_name = "ipv6-neighbor";
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::~DuplicateAddressDetection()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::has_data() const
{
    return attempts.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::has_operation() const
{
    return is_set(operation)
	|| is_set(attempts.operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duplicate-address-detection";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attempts.is_set || is_set(attempts.operation)) leaf_name_data.push_back(attempts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::get_children()
{
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attempts")
    {
        attempts = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::RaInitial()
    :
    	count{YType::uint32, "count"},
	 interval{YType::uint32, "interval"}
{
    yang_name = "ra-initial"; yang_parent_name = "ipv6-neighbor";
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::~RaInitial()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::has_data() const
{
    return count.is_set
	|| interval.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(interval.operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra-initial";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::get_children()
{
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::Ipv6Neighbor()
    :
    	framed_prefix_pool{YType::str, "framed-prefix-pool"},
	 managed_config{YType::empty, "managed-config"},
	 ns_interval{YType::uint32, "ns-interval"},
	 nud_enable{YType::empty, "nud-enable"},
	 other_config{YType::empty, "other-config"},
	 ra_hop_limit{YType::enumeration, "ra-hop-limit"},
	 ra_interval{YType::uint32, "ra-interval"},
	 ra_lifetime{YType::uint32, "ra-lifetime"},
	 ra_suppress{YType::empty, "ra-suppress"},
	 ra_suppress_mtu{YType::empty, "ra-suppress-mtu"},
	 ra_unicast{YType::empty, "ra-unicast"},
	 reachable_time{YType::uint32, "reachable-time"},
	 router_preference{YType::enumeration, "router-preference"},
	 start_ra_on_ipv6_enable{YType::empty, "start-ra-on-ipv6-enable"},
	 suppress_cache_learning{YType::empty, "suppress-cache-learning"}
    	,
    duplicate_address_detection(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection>())
	,framed_prefix(nullptr) // presence node
	,ra_initial(nullptr) // presence node
{
    duplicate_address_detection->parent = this;
    children["duplicate-address-detection"] = duplicate_address_detection.get();

    yang_name = "ipv6-neighbor"; yang_parent_name = "subscriber-service";
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::~Ipv6Neighbor()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::has_data() const
{
    return framed_prefix_pool.is_set
	|| managed_config.is_set
	|| ns_interval.is_set
	|| nud_enable.is_set
	|| other_config.is_set
	|| ra_hop_limit.is_set
	|| ra_interval.is_set
	|| ra_lifetime.is_set
	|| ra_suppress.is_set
	|| ra_suppress_mtu.is_set
	|| ra_unicast.is_set
	|| reachable_time.is_set
	|| router_preference.is_set
	|| start_ra_on_ipv6_enable.is_set
	|| suppress_cache_learning.is_set
	|| (duplicate_address_detection !=  nullptr && duplicate_address_detection->has_data())
	|| (framed_prefix !=  nullptr && framed_prefix->has_data())
	|| (ra_initial !=  nullptr && ra_initial->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(framed_prefix_pool.operation)
	|| is_set(managed_config.operation)
	|| is_set(ns_interval.operation)
	|| is_set(nud_enable.operation)
	|| is_set(other_config.operation)
	|| is_set(ra_hop_limit.operation)
	|| is_set(ra_interval.operation)
	|| is_set(ra_lifetime.operation)
	|| is_set(ra_suppress.operation)
	|| is_set(ra_suppress_mtu.operation)
	|| is_set(ra_unicast.operation)
	|| is_set(reachable_time.operation)
	|| is_set(router_preference.operation)
	|| is_set(start_ra_on_ipv6_enable.operation)
	|| is_set(suppress_cache_learning.operation)
	|| (duplicate_address_detection !=  nullptr && duplicate_address_detection->has_operation())
	|| (framed_prefix !=  nullptr && framed_prefix->has_operation())
	|| (ra_initial !=  nullptr && ra_initial->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (framed_prefix_pool.is_set || is_set(framed_prefix_pool.operation)) leaf_name_data.push_back(framed_prefix_pool.get_name_leafdata());
    if (managed_config.is_set || is_set(managed_config.operation)) leaf_name_data.push_back(managed_config.get_name_leafdata());
    if (ns_interval.is_set || is_set(ns_interval.operation)) leaf_name_data.push_back(ns_interval.get_name_leafdata());
    if (nud_enable.is_set || is_set(nud_enable.operation)) leaf_name_data.push_back(nud_enable.get_name_leafdata());
    if (other_config.is_set || is_set(other_config.operation)) leaf_name_data.push_back(other_config.get_name_leafdata());
    if (ra_hop_limit.is_set || is_set(ra_hop_limit.operation)) leaf_name_data.push_back(ra_hop_limit.get_name_leafdata());
    if (ra_interval.is_set || is_set(ra_interval.operation)) leaf_name_data.push_back(ra_interval.get_name_leafdata());
    if (ra_lifetime.is_set || is_set(ra_lifetime.operation)) leaf_name_data.push_back(ra_lifetime.get_name_leafdata());
    if (ra_suppress.is_set || is_set(ra_suppress.operation)) leaf_name_data.push_back(ra_suppress.get_name_leafdata());
    if (ra_suppress_mtu.is_set || is_set(ra_suppress_mtu.operation)) leaf_name_data.push_back(ra_suppress_mtu.get_name_leafdata());
    if (ra_unicast.is_set || is_set(ra_unicast.operation)) leaf_name_data.push_back(ra_unicast.get_name_leafdata());
    if (reachable_time.is_set || is_set(reachable_time.operation)) leaf_name_data.push_back(reachable_time.get_name_leafdata());
    if (router_preference.is_set || is_set(router_preference.operation)) leaf_name_data.push_back(router_preference.get_name_leafdata());
    if (start_ra_on_ipv6_enable.is_set || is_set(start_ra_on_ipv6_enable.operation)) leaf_name_data.push_back(start_ra_on_ipv6_enable.get_name_leafdata());
    if (suppress_cache_learning.is_set || is_set(suppress_cache_learning.operation)) leaf_name_data.push_back(suppress_cache_learning.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "duplicate-address-detection")
    {
        if(duplicate_address_detection != nullptr)
        {
            children["duplicate-address-detection"] = duplicate_address_detection.get();
        }
        else
        {
            duplicate_address_detection = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection>();
            duplicate_address_detection->parent = this;
            children["duplicate-address-detection"] = duplicate_address_detection.get();
        }
        return children.at("duplicate-address-detection");
    }

    if(child_yang_name == "framed-prefix")
    {
        if(framed_prefix != nullptr)
        {
            children["framed-prefix"] = framed_prefix.get();
        }
        else
        {
            framed_prefix = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix>();
            framed_prefix->parent = this;
            children["framed-prefix"] = framed_prefix.get();
        }
        return children.at("framed-prefix");
    }

    if(child_yang_name == "ra-initial")
    {
        if(ra_initial != nullptr)
        {
            children["ra-initial"] = ra_initial.get();
        }
        else
        {
            ra_initial = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial>();
            ra_initial->parent = this;
            children["ra-initial"] = ra_initial.get();
        }
        return children.at("ra-initial");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::get_children()
{
    if(children.find("duplicate-address-detection") == children.end())
    {
        if(duplicate_address_detection != nullptr)
        {
            children["duplicate-address-detection"] = duplicate_address_detection.get();
        }
    }

    if(children.find("framed-prefix") == children.end())
    {
        if(framed_prefix != nullptr)
        {
            children["framed-prefix"] = framed_prefix.get();
        }
    }

    if(children.find("ra-initial") == children.end())
    {
        if(ra_initial != nullptr)
        {
            children["ra-initial"] = ra_initial.get();
        }
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "framed-prefix-pool")
    {
        framed_prefix_pool = value;
    }
    if(value_path == "managed-config")
    {
        managed_config = value;
    }
    if(value_path == "ns-interval")
    {
        ns_interval = value;
    }
    if(value_path == "nud-enable")
    {
        nud_enable = value;
    }
    if(value_path == "other-config")
    {
        other_config = value;
    }
    if(value_path == "ra-hop-limit")
    {
        ra_hop_limit = value;
    }
    if(value_path == "ra-interval")
    {
        ra_interval = value;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime = value;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress = value;
    }
    if(value_path == "ra-suppress-mtu")
    {
        ra_suppress_mtu = value;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast = value;
    }
    if(value_path == "reachable-time")
    {
        reachable_time = value;
    }
    if(value_path == "router-preference")
    {
        router_preference = value;
    }
    if(value_path == "start-ra-on-ipv6-enable")
    {
        start_ra_on_ipv6_enable = value;
    }
    if(value_path == "suppress-cache-learning")
    {
        suppress_cache_learning = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::ServicePolicy()
    :
    	input{YType::str, "input"}
{
    yang_name = "service-policy"; yang_parent_name = "pbr";
}

DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::~ServicePolicy()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::has_data() const
{
    return input.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::get_children()
{
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Pbr::Pbr()
    :
    	service_policy_in{YType::str, "service-policy-in"}
    	,
    service_policy(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy>())
{
    service_policy->parent = this;
    children["service-policy"] = service_policy.get();

    yang_name = "pbr"; yang_parent_name = "subscriber-service";
}

DynamicTemplate::SubscriberServices::SubscriberService::Pbr::~Pbr()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Pbr::has_data() const
{
    return service_policy_in.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Pbr::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_in.operation)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Pbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-subscriber-cfg:pbr";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Pbr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_in.is_set || is_set(service_policy_in.operation)) leaf_name_data.push_back(service_policy_in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Pbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy.get();
        }
        else
        {
            service_policy = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy>();
            service_policy->parent = this;
            children["service-policy"] = service_policy.get();
        }
        return children.at("service-policy");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Pbr::get_children()
{
    if(children.find("service-policy") == children.end())
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy.get();
        }
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Pbr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::Input()
    :
    	account_stats{YType::boolean, "account-stats"},
	 merge{YType::boolean, "merge"},
	 merge_id{YType::uint32, "merge-id"},
	 policy_name{YType::str, "policy-name"},
	 spi_name{YType::str, "spi-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::~Input()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::has_data() const
{
    return account_stats.is_set
	|| merge.is_set
	|| merge_id.is_set
	|| policy_name.is_set
	|| spi_name.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(account_stats.operation)
	|| is_set(merge.operation)
	|| is_set(merge_id.operation)
	|| is_set(policy_name.operation)
	|| is_set(spi_name.operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_stats.is_set || is_set(account_stats.operation)) leaf_name_data.push_back(account_stats.get_name_leafdata());
    if (merge.is_set || is_set(merge.operation)) leaf_name_data.push_back(merge.get_name_leafdata());
    if (merge_id.is_set || is_set(merge_id.operation)) leaf_name_data.push_back(merge_id.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::get_children()
{
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-stats")
    {
        account_stats = value;
    }
    if(value_path == "merge")
    {
        merge = value;
    }
    if(value_path == "merge-id")
    {
        merge_id = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::Output()
    :
    	account_stats{YType::boolean, "account-stats"},
	 merge{YType::boolean, "merge"},
	 merge_id{YType::uint32, "merge-id"},
	 policy_name{YType::str, "policy-name"},
	 spi_name{YType::str, "spi-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::~Output()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::has_data() const
{
    return account_stats.is_set
	|| merge.is_set
	|| merge_id.is_set
	|| policy_name.is_set
	|| spi_name.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(account_stats.operation)
	|| is_set(merge.operation)
	|| is_set(merge_id.operation)
	|| is_set(policy_name.operation)
	|| is_set(spi_name.operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_stats.is_set || is_set(account_stats.operation)) leaf_name_data.push_back(account_stats.get_name_leafdata());
    if (merge.is_set || is_set(merge.operation)) leaf_name_data.push_back(merge.get_name_leafdata());
    if (merge_id.is_set || is_set(merge_id.operation)) leaf_name_data.push_back(merge_id.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::get_children()
{
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-stats")
    {
        account_stats = value;
    }
    if(value_path == "merge")
    {
        merge = value;
    }
    if(value_path == "merge-id")
    {
        merge_id = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::ServicePolicy()
    :
    input(nullptr) // presence node
	,output(nullptr) // presence node
{
    yang_name = "service-policy"; yang_parent_name = "qos";
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::~ServicePolicy()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
        else
        {
            input = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input>();
            input->parent = this;
            children["input"] = input.get();
        }
        return children.at("input");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
        else
        {
            output = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output>();
            output->parent = this;
            children["output"] = output.get();
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::Account()
    :
    	aal{YType::enumeration, "aal"},
	 atm_cell_tax{YType::empty, "atm-cell-tax"},
	 encapsulation{YType::enumeration, "encapsulation"},
	 user_defined{YType::int32, "user-defined"}
{
    yang_name = "account"; yang_parent_name = "qos";
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::~Account()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::has_data() const
{
    return aal.is_set
	|| atm_cell_tax.is_set
	|| encapsulation.is_set
	|| user_defined.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::has_operation() const
{
    return is_set(operation)
	|| is_set(aal.operation)
	|| is_set(atm_cell_tax.operation)
	|| is_set(encapsulation.operation)
	|| is_set(user_defined.operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aal.is_set || is_set(aal.operation)) leaf_name_data.push_back(aal.get_name_leafdata());
    if (atm_cell_tax.is_set || is_set(atm_cell_tax.operation)) leaf_name_data.push_back(atm_cell_tax.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (user_defined.is_set || is_set(user_defined.operation)) leaf_name_data.push_back(user_defined.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::get_children()
{
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aal")
    {
        aal = value;
    }
    if(value_path == "atm-cell-tax")
    {
        atm_cell_tax = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "user-defined")
    {
        user_defined = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::Output()
    :
    	minimum_bandwidth{YType::uint32, "minimum-bandwidth"}
{
    yang_name = "output"; yang_parent_name = "qos";
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::~Output()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::has_data() const
{
    return minimum_bandwidth.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_bandwidth.operation);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.operation)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::get_children()
{
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::Qos()
    :
    account(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account>())
	,output(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output>())
	,service_policy(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy>())
{
    account->parent = this;
    children["account"] = account.get();

    output->parent = this;
    children["output"] = output.get();

    service_policy->parent = this;
    children["service-policy"] = service_policy.get();

    yang_name = "qos"; yang_parent_name = "subscriber-service";
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::~Qos()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::has_data() const
{
    return (account !=  nullptr && account->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::has_operation() const
{
    return is_set(operation)
	|| (account !=  nullptr && account->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-bng-cfg:qos";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "account")
    {
        if(account != nullptr)
        {
            children["account"] = account.get();
        }
        else
        {
            account = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account>();
            account->parent = this;
            children["account"] = account.get();
        }
        return children.at("account");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
        else
        {
            output = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output>();
            output->parent = this;
            children["output"] = output.get();
        }
        return children.at("output");
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy.get();
        }
        else
        {
            service_policy = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy>();
            service_policy->parent = this;
            children["service-policy"] = service_policy.get();
        }
        return children.at("service-policy");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::Qos::get_children()
{
    if(children.find("account") == children.end())
    {
        if(account != nullptr)
        {
            children["account"] = account.get();
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
    }

    if(children.find("service-policy") == children.end())
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy.get();
        }
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::SubscriberServices::SubscriberService::SubscriberService()
    :
    	template_name{YType::str, "template-name"},
	 vrf{YType::str, "vrf"}
    	,
    ipv4_network(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network>())
	,ipv4_packet_filter(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter>())
	,ipv6_neighbor(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor>())
	,ipv6_network(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network>())
	,ipv6_packet_filter(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter>())
	,pbr(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Pbr>())
	,qos(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Qos>())
	,span_monitor_sessions(std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions>())
{
    ipv4_network->parent = this;
    children["ipv4-network"] = ipv4_network.get();

    ipv4_packet_filter->parent = this;
    children["ipv4-packet-filter"] = ipv4_packet_filter.get();

    ipv6_neighbor->parent = this;
    children["ipv6-neighbor"] = ipv6_neighbor.get();

    ipv6_network->parent = this;
    children["ipv6-network"] = ipv6_network.get();

    ipv6_packet_filter->parent = this;
    children["ipv6-packet-filter"] = ipv6_packet_filter.get();

    pbr->parent = this;
    children["pbr"] = pbr.get();

    qos->parent = this;
    children["qos"] = qos.get();

    span_monitor_sessions->parent = this;
    children["span-monitor-sessions"] = span_monitor_sessions.get();

    yang_name = "subscriber-service"; yang_parent_name = "subscriber-services";
}

DynamicTemplate::SubscriberServices::SubscriberService::~SubscriberService()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::has_data() const
{
    return template_name.is_set
	|| vrf.is_set
	|| (ipv4_network !=  nullptr && ipv4_network->has_data())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_data())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_data())
	|| (ipv6_network !=  nullptr && ipv6_network->has_data())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_data())
	|| (pbr !=  nullptr && pbr->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(vrf.operation)
	|| (ipv4_network !=  nullptr && ipv4_network->has_operation())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_operation())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_operation())
	|| (ipv6_network !=  nullptr && ipv6_network->has_operation())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_operation())
	|| (pbr !=  nullptr && pbr->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-service" <<"[template-name='" <<template_name.get() <<"']";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::SubscriberService::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template/subscriber-services/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::SubscriberService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-network")
    {
        if(ipv4_network != nullptr)
        {
            children["ipv4-network"] = ipv4_network.get();
        }
        else
        {
            ipv4_network = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network>();
            ipv4_network->parent = this;
            children["ipv4-network"] = ipv4_network.get();
        }
        return children.at("ipv4-network");
    }

    if(child_yang_name == "ipv4-packet-filter")
    {
        if(ipv4_packet_filter != nullptr)
        {
            children["ipv4-packet-filter"] = ipv4_packet_filter.get();
        }
        else
        {
            ipv4_packet_filter = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter>();
            ipv4_packet_filter->parent = this;
            children["ipv4-packet-filter"] = ipv4_packet_filter.get();
        }
        return children.at("ipv4-packet-filter");
    }

    if(child_yang_name == "ipv6-neighbor")
    {
        if(ipv6_neighbor != nullptr)
        {
            children["ipv6-neighbor"] = ipv6_neighbor.get();
        }
        else
        {
            ipv6_neighbor = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor>();
            ipv6_neighbor->parent = this;
            children["ipv6-neighbor"] = ipv6_neighbor.get();
        }
        return children.at("ipv6-neighbor");
    }

    if(child_yang_name == "ipv6-network")
    {
        if(ipv6_network != nullptr)
        {
            children["ipv6-network"] = ipv6_network.get();
        }
        else
        {
            ipv6_network = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network>();
            ipv6_network->parent = this;
            children["ipv6-network"] = ipv6_network.get();
        }
        return children.at("ipv6-network");
    }

    if(child_yang_name == "ipv6-packet-filter")
    {
        if(ipv6_packet_filter != nullptr)
        {
            children["ipv6-packet-filter"] = ipv6_packet_filter.get();
        }
        else
        {
            ipv6_packet_filter = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter>();
            ipv6_packet_filter->parent = this;
            children["ipv6-packet-filter"] = ipv6_packet_filter.get();
        }
        return children.at("ipv6-packet-filter");
    }

    if(child_yang_name == "pbr")
    {
        if(pbr != nullptr)
        {
            children["pbr"] = pbr.get();
        }
        else
        {
            pbr = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Pbr>();
            pbr->parent = this;
            children["pbr"] = pbr.get();
        }
        return children.at("pbr");
    }

    if(child_yang_name == "qos")
    {
        if(qos != nullptr)
        {
            children["qos"] = qos.get();
        }
        else
        {
            qos = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::Qos>();
            qos->parent = this;
            children["qos"] = qos.get();
        }
        return children.at("qos");
    }

    if(child_yang_name == "span-monitor-sessions")
    {
        if(span_monitor_sessions != nullptr)
        {
            children["span-monitor-sessions"] = span_monitor_sessions.get();
        }
        else
        {
            span_monitor_sessions = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions>();
            span_monitor_sessions->parent = this;
            children["span-monitor-sessions"] = span_monitor_sessions.get();
        }
        return children.at("span-monitor-sessions");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::SubscriberService::get_children()
{
    if(children.find("ipv4-network") == children.end())
    {
        if(ipv4_network != nullptr)
        {
            children["ipv4-network"] = ipv4_network.get();
        }
    }

    if(children.find("ipv4-packet-filter") == children.end())
    {
        if(ipv4_packet_filter != nullptr)
        {
            children["ipv4-packet-filter"] = ipv4_packet_filter.get();
        }
    }

    if(children.find("ipv6-neighbor") == children.end())
    {
        if(ipv6_neighbor != nullptr)
        {
            children["ipv6-neighbor"] = ipv6_neighbor.get();
        }
    }

    if(children.find("ipv6-network") == children.end())
    {
        if(ipv6_network != nullptr)
        {
            children["ipv6-network"] = ipv6_network.get();
        }
    }

    if(children.find("ipv6-packet-filter") == children.end())
    {
        if(ipv6_packet_filter != nullptr)
        {
            children["ipv6-packet-filter"] = ipv6_packet_filter.get();
        }
    }

    if(children.find("pbr") == children.end())
    {
        if(pbr != nullptr)
        {
            children["pbr"] = pbr.get();
        }
    }

    if(children.find("qos") == children.end())
    {
        if(qos != nullptr)
        {
            children["qos"] = qos.get();
        }
    }

    if(children.find("span-monitor-sessions") == children.end())
    {
        if(span_monitor_sessions != nullptr)
        {
            children["span-monitor-sessions"] = span_monitor_sessions.get();
        }
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

DynamicTemplate::SubscriberServices::SubscriberServices()
{
    yang_name = "subscriber-services"; yang_parent_name = "dynamic-template";
}

DynamicTemplate::SubscriberServices::~SubscriberServices()
{
}

bool DynamicTemplate::SubscriberServices::has_data() const
{
    for (std::size_t index=0; index<subscriber_service.size(); index++)
    {
        if(subscriber_service[index]->has_data())
            return true;
    }
    return false;
}

bool DynamicTemplate::SubscriberServices::has_operation() const
{
    for (std::size_t index=0; index<subscriber_service.size(); index++)
    {
        if(subscriber_service[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DynamicTemplate::SubscriberServices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-services";

    return path_buffer.str();

}

EntityPath DynamicTemplate::SubscriberServices::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::SubscriberServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscriber-service")
    {
        for(auto const & c : subscriber_service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<DynamicTemplate::SubscriberServices::SubscriberService>();
        c->parent = this;
        subscriber_service.push_back(std::move(c));
        children[segment_path] = subscriber_service.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::SubscriberServices::get_children()
{
    for (auto const & c : subscriber_service)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void DynamicTemplate::SubscriberServices::set_value(const std::string & value_path, std::string value)
{
}

DynamicTemplate::DynamicTemplate()
    :
    ip_subscribers(std::make_unique<DynamicTemplate::IpSubscribers>())
	,ppps(std::make_unique<DynamicTemplate::Ppps>())
	,subscriber_services(std::make_unique<DynamicTemplate::SubscriberServices>())
{
    ip_subscribers->parent = this;
    children["ip-subscribers"] = ip_subscribers.get();

    ppps->parent = this;
    children["ppps"] = ppps.get();

    subscriber_services->parent = this;
    children["subscriber-services"] = subscriber_services.get();

    yang_name = "dynamic-template"; yang_parent_name = "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg";
}

DynamicTemplate::~DynamicTemplate()
{
}

bool DynamicTemplate::has_data() const
{
    return (ip_subscribers !=  nullptr && ip_subscribers->has_data())
	|| (ppps !=  nullptr && ppps->has_data())
	|| (subscriber_services !=  nullptr && subscriber_services->has_data());
}

bool DynamicTemplate::has_operation() const
{
    return is_set(operation)
	|| (ip_subscribers !=  nullptr && ip_subscribers->has_operation())
	|| (ppps !=  nullptr && ppps->has_operation())
	|| (subscriber_services !=  nullptr && subscriber_services->has_operation());
}

std::string DynamicTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template";

    return path_buffer.str();

}

EntityPath DynamicTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* DynamicTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscribers")
    {
        if(ip_subscribers != nullptr)
        {
            children["ip-subscribers"] = ip_subscribers.get();
        }
        else
        {
            ip_subscribers = std::make_unique<DynamicTemplate::IpSubscribers>();
            ip_subscribers->parent = this;
            children["ip-subscribers"] = ip_subscribers.get();
        }
        return children.at("ip-subscribers");
    }

    if(child_yang_name == "ppps")
    {
        if(ppps != nullptr)
        {
            children["ppps"] = ppps.get();
        }
        else
        {
            ppps = std::make_unique<DynamicTemplate::Ppps>();
            ppps->parent = this;
            children["ppps"] = ppps.get();
        }
        return children.at("ppps");
    }

    if(child_yang_name == "subscriber-services")
    {
        if(subscriber_services != nullptr)
        {
            children["subscriber-services"] = subscriber_services.get();
        }
        else
        {
            subscriber_services = std::make_unique<DynamicTemplate::SubscriberServices>();
            subscriber_services->parent = this;
            children["subscriber-services"] = subscriber_services.get();
        }
        return children.at("subscriber-services");
    }

    return nullptr;
}

std::map<std::string, Entity*> & DynamicTemplate::get_children()
{
    if(children.find("ip-subscribers") == children.end())
    {
        if(ip_subscribers != nullptr)
        {
            children["ip-subscribers"] = ip_subscribers.get();
        }
    }

    if(children.find("ppps") == children.end())
    {
        if(ppps != nullptr)
        {
            children["ppps"] = ppps.get();
        }
    }

    if(children.find("subscriber-services") == children.end())
    {
        if(subscriber_services != nullptr)
        {
            children["subscriber-services"] = subscriber_services.get();
        }
    }

    return children;
}

void DynamicTemplate::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> DynamicTemplate::clone_ptr()
{
    return std::make_unique<DynamicTemplate>();
}


}
}

