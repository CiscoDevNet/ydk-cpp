
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_man_xml_ttyagent_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_man_xml_ttyagent_cfg {

XrXml::Agent::Default_::Session::Session()
    :
    	timeout{YType::uint32, "timeout"}
{
    yang_name = "session"; yang_parent_name = "default";
}

XrXml::Agent::Default_::Session::~Session()
{
}

bool XrXml::Agent::Default_::Session::has_data() const
{
    return timeout.is_set;
}

bool XrXml::Agent::Default_::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string XrXml::Agent::Default_::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Default_::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/default/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* XrXml::Agent::Default_::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & XrXml::Agent::Default_::Session::get_children()
{
    return children;
}

void XrXml::Agent::Default_::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

XrXml::Agent::Default_::Throttle::Throttle()
    :
    	memory{YType::uint32, "memory"},
	 process_rate{YType::uint32, "process-rate"}
{
    yang_name = "throttle"; yang_parent_name = "default";
}

XrXml::Agent::Default_::Throttle::~Throttle()
{
}

bool XrXml::Agent::Default_::Throttle::has_data() const
{
    return memory.is_set
	|| process_rate.is_set;
}

bool XrXml::Agent::Default_::Throttle::has_operation() const
{
    return is_set(operation)
	|| is_set(memory.operation)
	|| is_set(process_rate.operation);
}

std::string XrXml::Agent::Default_::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Default_::Throttle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/default/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory.is_set || is_set(memory.operation)) leaf_name_data.push_back(memory.get_name_leafdata());
    if (process_rate.is_set || is_set(process_rate.operation)) leaf_name_data.push_back(process_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* XrXml::Agent::Default_::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & XrXml::Agent::Default_::Throttle::get_children()
{
    return children;
}

void XrXml::Agent::Default_::Throttle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "memory")
    {
        memory = value;
    }
    if(value_path == "process-rate")
    {
        process_rate = value;
    }
}

XrXml::Agent::Default_::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"},
	 access_list{YType::str, "access-list"},
	 ipv4_access_list{YType::str, "ipv4-access-list"},
	 ipv6_access_list{YType::str, "ipv6-access-list"},
	 shutdown{YType::empty, "shutdown"}
{
    yang_name = "vrf"; yang_parent_name = "vrfs";
}

XrXml::Agent::Default_::Vrfs::Vrf::~Vrf()
{
}

bool XrXml::Agent::Default_::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| access_list.is_set
	|| ipv4_access_list.is_set
	|| ipv6_access_list.is_set
	|| shutdown.is_set;
}

bool XrXml::Agent::Default_::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(access_list.operation)
	|| is_set(ipv4_access_list.operation)
	|| is_set(ipv6_access_list.operation)
	|| is_set(shutdown.operation);
}

std::string XrXml::Agent::Default_::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Default_::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/default/vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (ipv4_access_list.is_set || is_set(ipv4_access_list.operation)) leaf_name_data.push_back(ipv4_access_list.get_name_leafdata());
    if (ipv6_access_list.is_set || is_set(ipv6_access_list.operation)) leaf_name_data.push_back(ipv6_access_list.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* XrXml::Agent::Default_::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & XrXml::Agent::Default_::Vrfs::Vrf::get_children()
{
    return children;
}

void XrXml::Agent::Default_::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list = value;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

XrXml::Agent::Default_::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "default";
}

XrXml::Agent::Default_::Vrfs::~Vrfs()
{
}

bool XrXml::Agent::Default_::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool XrXml::Agent::Default_::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string XrXml::Agent::Default_::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Default_::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/default/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* XrXml::Agent::Default_::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<XrXml::Agent::Default_::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & XrXml::Agent::Default_::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void XrXml::Agent::Default_::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

XrXml::Agent::Default_::Default_()
    :
    	enable{YType::empty, "enable"},
	 ipv4_disable{YType::boolean, "ipv4-disable"},
	 ipv6_enable{YType::boolean, "ipv6-enable"},
	 iteration_size{YType::uint32, "iteration-size"},
	 streaming_size{YType::uint32, "streaming-size"}
    	,
    session(std::make_unique<XrXml::Agent::Default_::Session>())
	,throttle(std::make_unique<XrXml::Agent::Default_::Throttle>())
	,vrfs(std::make_unique<XrXml::Agent::Default_::Vrfs>())
{
    session->parent = this;
    children["session"] = session.get();

    throttle->parent = this;
    children["throttle"] = throttle.get();

    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "default"; yang_parent_name = "agent";
}

XrXml::Agent::Default_::~Default_()
{
}

bool XrXml::Agent::Default_::has_data() const
{
    return enable.is_set
	|| ipv4_disable.is_set
	|| ipv6_enable.is_set
	|| iteration_size.is_set
	|| streaming_size.is_set
	|| (session !=  nullptr && session->has_data())
	|| (throttle !=  nullptr && throttle->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool XrXml::Agent::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(ipv4_disable.operation)
	|| is_set(ipv6_enable.operation)
	|| is_set(iteration_size.operation)
	|| is_set(streaming_size.operation)
	|| (session !=  nullptr && is_set(session->operation))
	|| (throttle !=  nullptr && is_set(throttle->operation))
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string XrXml::Agent::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ipv4_disable.is_set || is_set(ipv4_disable.operation)) leaf_name_data.push_back(ipv4_disable.get_name_leafdata());
    if (ipv6_enable.is_set || is_set(ipv6_enable.operation)) leaf_name_data.push_back(ipv6_enable.get_name_leafdata());
    if (iteration_size.is_set || is_set(iteration_size.operation)) leaf_name_data.push_back(iteration_size.get_name_leafdata());
    if (streaming_size.is_set || is_set(streaming_size.operation)) leaf_name_data.push_back(streaming_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* XrXml::Agent::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
        else
        {
            session = std::make_unique<XrXml::Agent::Default_::Session>();
            session->parent = this;
            children["session"] = session.get();
        }
        return children.at("session");
    }

    if(child_yang_name == "throttle")
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle.get();
        }
        else
        {
            throttle = std::make_unique<XrXml::Agent::Default_::Throttle>();
            throttle->parent = this;
            children["throttle"] = throttle.get();
        }
        return children.at("throttle");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<XrXml::Agent::Default_::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & XrXml::Agent::Default_::get_children()
{
    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
    }

    if(children.find("throttle") == children.end())
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle.get();
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
    }

    return children;
}

void XrXml::Agent::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "ipv4-disable")
    {
        ipv4_disable = value;
    }
    if(value_path == "ipv6-enable")
    {
        ipv6_enable = value;
    }
    if(value_path == "iteration-size")
    {
        iteration_size = value;
    }
    if(value_path == "streaming-size")
    {
        streaming_size = value;
    }
}

XrXml::Agent::Tty::Session::Session()
    :
    	timeout{YType::uint32, "timeout"}
{
    yang_name = "session"; yang_parent_name = "tty";
}

XrXml::Agent::Tty::Session::~Session()
{
}

bool XrXml::Agent::Tty::Session::has_data() const
{
    return timeout.is_set;
}

bool XrXml::Agent::Tty::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string XrXml::Agent::Tty::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Tty::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/tty/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* XrXml::Agent::Tty::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & XrXml::Agent::Tty::Session::get_children()
{
    return children;
}

void XrXml::Agent::Tty::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

XrXml::Agent::Tty::Throttle::Throttle()
    :
    	memory{YType::uint32, "memory"},
	 process_rate{YType::uint32, "process-rate"}
{
    yang_name = "throttle"; yang_parent_name = "tty";
}

XrXml::Agent::Tty::Throttle::~Throttle()
{
}

bool XrXml::Agent::Tty::Throttle::has_data() const
{
    return memory.is_set
	|| process_rate.is_set;
}

bool XrXml::Agent::Tty::Throttle::has_operation() const
{
    return is_set(operation)
	|| is_set(memory.operation)
	|| is_set(process_rate.operation);
}

std::string XrXml::Agent::Tty::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Tty::Throttle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/tty/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory.is_set || is_set(memory.operation)) leaf_name_data.push_back(memory.get_name_leafdata());
    if (process_rate.is_set || is_set(process_rate.operation)) leaf_name_data.push_back(process_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* XrXml::Agent::Tty::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & XrXml::Agent::Tty::Throttle::get_children()
{
    return children;
}

void XrXml::Agent::Tty::Throttle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "memory")
    {
        memory = value;
    }
    if(value_path == "process-rate")
    {
        process_rate = value;
    }
}

XrXml::Agent::Tty::Tty()
    :
    	enable{YType::empty, "enable"},
	 iteration_size{YType::uint32, "iteration-size"},
	 streaming_size{YType::uint32, "streaming-size"}
    	,
    session(std::make_unique<XrXml::Agent::Tty::Session>())
	,throttle(std::make_unique<XrXml::Agent::Tty::Throttle>())
{
    session->parent = this;
    children["session"] = session.get();

    throttle->parent = this;
    children["throttle"] = throttle.get();

    yang_name = "tty"; yang_parent_name = "agent";
}

XrXml::Agent::Tty::~Tty()
{
}

bool XrXml::Agent::Tty::has_data() const
{
    return enable.is_set
	|| iteration_size.is_set
	|| streaming_size.is_set
	|| (session !=  nullptr && session->has_data())
	|| (throttle !=  nullptr && throttle->has_data());
}

bool XrXml::Agent::Tty::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(iteration_size.operation)
	|| is_set(streaming_size.operation)
	|| (session !=  nullptr && is_set(session->operation))
	|| (throttle !=  nullptr && is_set(throttle->operation));
}

std::string XrXml::Agent::Tty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tty";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Tty::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (iteration_size.is_set || is_set(iteration_size.operation)) leaf_name_data.push_back(iteration_size.get_name_leafdata());
    if (streaming_size.is_set || is_set(streaming_size.operation)) leaf_name_data.push_back(streaming_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* XrXml::Agent::Tty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
        else
        {
            session = std::make_unique<XrXml::Agent::Tty::Session>();
            session->parent = this;
            children["session"] = session.get();
        }
        return children.at("session");
    }

    if(child_yang_name == "throttle")
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle.get();
        }
        else
        {
            throttle = std::make_unique<XrXml::Agent::Tty::Throttle>();
            throttle->parent = this;
            children["throttle"] = throttle.get();
        }
        return children.at("throttle");
    }

    return nullptr;
}

std::map<std::string, Entity*> & XrXml::Agent::Tty::get_children()
{
    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
    }

    if(children.find("throttle") == children.end())
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle.get();
        }
    }

    return children;
}

void XrXml::Agent::Tty::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "iteration-size")
    {
        iteration_size = value;
    }
    if(value_path == "streaming-size")
    {
        streaming_size = value;
    }
}

XrXml::Agent::Ssl::Session::Session()
    :
    	timeout{YType::uint32, "timeout"}
{
    yang_name = "session"; yang_parent_name = "ssl";
}

XrXml::Agent::Ssl::Session::~Session()
{
}

bool XrXml::Agent::Ssl::Session::has_data() const
{
    return timeout.is_set;
}

bool XrXml::Agent::Ssl::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string XrXml::Agent::Ssl::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Ssl::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/ssl/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* XrXml::Agent::Ssl::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & XrXml::Agent::Ssl::Session::get_children()
{
    return children;
}

void XrXml::Agent::Ssl::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

XrXml::Agent::Ssl::Throttle::Throttle()
    :
    	memory{YType::uint32, "memory"},
	 process_rate{YType::uint32, "process-rate"}
{
    yang_name = "throttle"; yang_parent_name = "ssl";
}

XrXml::Agent::Ssl::Throttle::~Throttle()
{
}

bool XrXml::Agent::Ssl::Throttle::has_data() const
{
    return memory.is_set
	|| process_rate.is_set;
}

bool XrXml::Agent::Ssl::Throttle::has_operation() const
{
    return is_set(operation)
	|| is_set(memory.operation)
	|| is_set(process_rate.operation);
}

std::string XrXml::Agent::Ssl::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Ssl::Throttle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/ssl/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory.is_set || is_set(memory.operation)) leaf_name_data.push_back(memory.get_name_leafdata());
    if (process_rate.is_set || is_set(process_rate.operation)) leaf_name_data.push_back(process_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* XrXml::Agent::Ssl::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & XrXml::Agent::Ssl::Throttle::get_children()
{
    return children;
}

void XrXml::Agent::Ssl::Throttle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "memory")
    {
        memory = value;
    }
    if(value_path == "process-rate")
    {
        process_rate = value;
    }
}

XrXml::Agent::Ssl::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"},
	 access_list{YType::str, "access-list"},
	 ipv4_access_list{YType::str, "ipv4-access-list"},
	 ipv6_access_list{YType::str, "ipv6-access-list"},
	 shutdown{YType::empty, "shutdown"}
{
    yang_name = "vrf"; yang_parent_name = "vrfs";
}

XrXml::Agent::Ssl::Vrfs::Vrf::~Vrf()
{
}

bool XrXml::Agent::Ssl::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| access_list.is_set
	|| ipv4_access_list.is_set
	|| ipv6_access_list.is_set
	|| shutdown.is_set;
}

bool XrXml::Agent::Ssl::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(access_list.operation)
	|| is_set(ipv4_access_list.operation)
	|| is_set(ipv6_access_list.operation)
	|| is_set(shutdown.operation);
}

std::string XrXml::Agent::Ssl::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Ssl::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/ssl/vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (ipv4_access_list.is_set || is_set(ipv4_access_list.operation)) leaf_name_data.push_back(ipv4_access_list.get_name_leafdata());
    if (ipv6_access_list.is_set || is_set(ipv6_access_list.operation)) leaf_name_data.push_back(ipv6_access_list.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* XrXml::Agent::Ssl::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & XrXml::Agent::Ssl::Vrfs::Vrf::get_children()
{
    return children;
}

void XrXml::Agent::Ssl::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list = value;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

XrXml::Agent::Ssl::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "ssl";
}

XrXml::Agent::Ssl::Vrfs::~Vrfs()
{
}

bool XrXml::Agent::Ssl::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool XrXml::Agent::Ssl::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string XrXml::Agent::Ssl::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Ssl::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/ssl/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* XrXml::Agent::Ssl::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<XrXml::Agent::Ssl::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & XrXml::Agent::Ssl::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void XrXml::Agent::Ssl::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

XrXml::Agent::Ssl::Ssl()
    :
    	enable{YType::empty, "enable"},
	 iteration_size{YType::uint32, "iteration-size"},
	 streaming_size{YType::uint32, "streaming-size"}
    	,
    session(std::make_unique<XrXml::Agent::Ssl::Session>())
	,throttle(std::make_unique<XrXml::Agent::Ssl::Throttle>())
	,vrfs(std::make_unique<XrXml::Agent::Ssl::Vrfs>())
{
    session->parent = this;
    children["session"] = session.get();

    throttle->parent = this;
    children["throttle"] = throttle.get();

    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "ssl"; yang_parent_name = "agent";
}

XrXml::Agent::Ssl::~Ssl()
{
}

bool XrXml::Agent::Ssl::has_data() const
{
    return enable.is_set
	|| iteration_size.is_set
	|| streaming_size.is_set
	|| (session !=  nullptr && session->has_data())
	|| (throttle !=  nullptr && throttle->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool XrXml::Agent::Ssl::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(iteration_size.operation)
	|| is_set(streaming_size.operation)
	|| (session !=  nullptr && is_set(session->operation))
	|| (throttle !=  nullptr && is_set(throttle->operation))
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string XrXml::Agent::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Ssl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/agent/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (iteration_size.is_set || is_set(iteration_size.operation)) leaf_name_data.push_back(iteration_size.get_name_leafdata());
    if (streaming_size.is_set || is_set(streaming_size.operation)) leaf_name_data.push_back(streaming_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* XrXml::Agent::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
        else
        {
            session = std::make_unique<XrXml::Agent::Ssl::Session>();
            session->parent = this;
            children["session"] = session.get();
        }
        return children.at("session");
    }

    if(child_yang_name == "throttle")
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle.get();
        }
        else
        {
            throttle = std::make_unique<XrXml::Agent::Ssl::Throttle>();
            throttle->parent = this;
            children["throttle"] = throttle.get();
        }
        return children.at("throttle");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<XrXml::Agent::Ssl::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & XrXml::Agent::Ssl::get_children()
{
    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
    }

    if(children.find("throttle") == children.end())
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle.get();
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
    }

    return children;
}

void XrXml::Agent::Ssl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "iteration-size")
    {
        iteration_size = value;
    }
    if(value_path == "streaming-size")
    {
        streaming_size = value;
    }
}

XrXml::Agent::Agent()
    :
    default_(std::make_unique<XrXml::Agent::Default_>())
	,ssl(std::make_unique<XrXml::Agent::Ssl>())
	,tty(std::make_unique<XrXml::Agent::Tty>())
{
    default_->parent = this;
    children["default"] = default_.get();

    ssl->parent = this;
    children["ssl"] = ssl.get();

    tty->parent = this;
    children["tty"] = tty.get();

    yang_name = "agent"; yang_parent_name = "xr-xml";
}

XrXml::Agent::~Agent()
{
}

bool XrXml::Agent::has_data() const
{
    return (default_ !=  nullptr && default_->has_data())
	|| (ssl !=  nullptr && ssl->has_data())
	|| (tty !=  nullptr && tty->has_data());
}

bool XrXml::Agent::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && is_set(default_->operation))
	|| (ssl !=  nullptr && is_set(ssl->operation))
	|| (tty !=  nullptr && is_set(tty->operation));
}

std::string XrXml::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";

    return path_buffer.str();

}

EntityPath XrXml::Agent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* XrXml::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default")
    {
        if(default_ != nullptr)
        {
            children["default"] = default_.get();
        }
        else
        {
            default_ = std::make_unique<XrXml::Agent::Default_>();
            default_->parent = this;
            children["default"] = default_.get();
        }
        return children.at("default");
    }

    if(child_yang_name == "ssl")
    {
        if(ssl != nullptr)
        {
            children["ssl"] = ssl.get();
        }
        else
        {
            ssl = std::make_unique<XrXml::Agent::Ssl>();
            ssl->parent = this;
            children["ssl"] = ssl.get();
        }
        return children.at("ssl");
    }

    if(child_yang_name == "tty")
    {
        if(tty != nullptr)
        {
            children["tty"] = tty.get();
        }
        else
        {
            tty = std::make_unique<XrXml::Agent::Tty>();
            tty->parent = this;
            children["tty"] = tty.get();
        }
        return children.at("tty");
    }

    return nullptr;
}

std::map<std::string, Entity*> & XrXml::Agent::get_children()
{
    if(children.find("default") == children.end())
    {
        if(default_ != nullptr)
        {
            children["default"] = default_.get();
        }
    }

    if(children.find("ssl") == children.end())
    {
        if(ssl != nullptr)
        {
            children["ssl"] = ssl.get();
        }
    }

    if(children.find("tty") == children.end())
    {
        if(tty != nullptr)
        {
            children["tty"] = tty.get();
        }
    }

    return children;
}

void XrXml::Agent::set_value(const std::string & value_path, std::string value)
{
}

XrXml::XrXml()
    :
    agent(std::make_unique<XrXml::Agent>())
{
    agent->parent = this;
    children["agent"] = agent.get();

    yang_name = "xr-xml"; yang_parent_name = "Cisco-IOS-XR-man-xml-ttyagent-cfg";
}

XrXml::~XrXml()
{
}

bool XrXml::has_data() const
{
    return (agent !=  nullptr && agent->has_data());
}

bool XrXml::has_operation() const
{
    return is_set(operation)
	|| (agent !=  nullptr && is_set(agent->operation));
}

std::string XrXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml";

    return path_buffer.str();

}

EntityPath XrXml::get_entity_path(Entity* ancestor) const
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

Entity* XrXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "agent")
    {
        if(agent != nullptr)
        {
            children["agent"] = agent.get();
        }
        else
        {
            agent = std::make_unique<XrXml::Agent>();
            agent->parent = this;
            children["agent"] = agent.get();
        }
        return children.at("agent");
    }

    return nullptr;
}

std::map<std::string, Entity*> & XrXml::get_children()
{
    if(children.find("agent") == children.end())
    {
        if(agent != nullptr)
        {
            children["agent"] = agent.get();
        }
    }

    return children;
}

void XrXml::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> XrXml::clone_ptr()
{
    return std::make_unique<XrXml>();
}
Netconf::Agent::Tty::Throttle::Throttle()
    :
    	memory{YType::uint32, "memory"},
	 offload_memory{YType::uint32, "offload-memory"},
	 process_rate{YType::uint32, "process-rate"}
{
    yang_name = "throttle"; yang_parent_name = "tty";
}

Netconf::Agent::Tty::Throttle::~Throttle()
{
}

bool Netconf::Agent::Tty::Throttle::has_data() const
{
    return memory.is_set
	|| offload_memory.is_set
	|| process_rate.is_set;
}

bool Netconf::Agent::Tty::Throttle::has_operation() const
{
    return is_set(operation)
	|| is_set(memory.operation)
	|| is_set(offload_memory.operation)
	|| is_set(process_rate.operation);
}

std::string Netconf::Agent::Tty::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";

    return path_buffer.str();

}

EntityPath Netconf::Agent::Tty::Throttle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:netconf/agent/tty/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory.is_set || is_set(memory.operation)) leaf_name_data.push_back(memory.get_name_leafdata());
    if (offload_memory.is_set || is_set(offload_memory.operation)) leaf_name_data.push_back(offload_memory.get_name_leafdata());
    if (process_rate.is_set || is_set(process_rate.operation)) leaf_name_data.push_back(process_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Netconf::Agent::Tty::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Netconf::Agent::Tty::Throttle::get_children()
{
    return children;
}

void Netconf::Agent::Tty::Throttle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "memory")
    {
        memory = value;
    }
    if(value_path == "offload-memory")
    {
        offload_memory = value;
    }
    if(value_path == "process-rate")
    {
        process_rate = value;
    }
}

Netconf::Agent::Tty::Session::Session()
    :
    	timeout{YType::uint32, "timeout"}
{
    yang_name = "session"; yang_parent_name = "tty";
}

Netconf::Agent::Tty::Session::~Session()
{
}

bool Netconf::Agent::Tty::Session::has_data() const
{
    return timeout.is_set;
}

bool Netconf::Agent::Tty::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Netconf::Agent::Tty::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath Netconf::Agent::Tty::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:netconf/agent/tty/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Netconf::Agent::Tty::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Netconf::Agent::Tty::Session::get_children()
{
    return children;
}

void Netconf::Agent::Tty::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Netconf::Agent::Tty::Tty()
    :
    	enable{YType::empty, "enable"}
    	,
    session(std::make_unique<Netconf::Agent::Tty::Session>())
	,throttle(std::make_unique<Netconf::Agent::Tty::Throttle>())
{
    session->parent = this;
    children["session"] = session.get();

    throttle->parent = this;
    children["throttle"] = throttle.get();

    yang_name = "tty"; yang_parent_name = "agent";
}

Netconf::Agent::Tty::~Tty()
{
}

bool Netconf::Agent::Tty::has_data() const
{
    return enable.is_set
	|| (session !=  nullptr && session->has_data())
	|| (throttle !=  nullptr && throttle->has_data());
}

bool Netconf::Agent::Tty::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (session !=  nullptr && is_set(session->operation))
	|| (throttle !=  nullptr && is_set(throttle->operation));
}

std::string Netconf::Agent::Tty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tty";

    return path_buffer.str();

}

EntityPath Netconf::Agent::Tty::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:netconf/agent/" << get_segment_path();
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

Entity* Netconf::Agent::Tty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
        else
        {
            session = std::make_unique<Netconf::Agent::Tty::Session>();
            session->parent = this;
            children["session"] = session.get();
        }
        return children.at("session");
    }

    if(child_yang_name == "throttle")
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle.get();
        }
        else
        {
            throttle = std::make_unique<Netconf::Agent::Tty::Throttle>();
            throttle->parent = this;
            children["throttle"] = throttle.get();
        }
        return children.at("throttle");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Netconf::Agent::Tty::get_children()
{
    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
    }

    if(children.find("throttle") == children.end())
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle.get();
        }
    }

    return children;
}

void Netconf::Agent::Tty::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Netconf::Agent::Agent()
    :
    tty(std::make_unique<Netconf::Agent::Tty>())
{
    tty->parent = this;
    children["tty"] = tty.get();

    yang_name = "agent"; yang_parent_name = "netconf";
}

Netconf::Agent::~Agent()
{
}

bool Netconf::Agent::has_data() const
{
    return (tty !=  nullptr && tty->has_data());
}

bool Netconf::Agent::has_operation() const
{
    return is_set(operation)
	|| (tty !=  nullptr && is_set(tty->operation));
}

std::string Netconf::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";

    return path_buffer.str();

}

EntityPath Netconf::Agent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:netconf/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Netconf::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tty")
    {
        if(tty != nullptr)
        {
            children["tty"] = tty.get();
        }
        else
        {
            tty = std::make_unique<Netconf::Agent::Tty>();
            tty->parent = this;
            children["tty"] = tty.get();
        }
        return children.at("tty");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Netconf::Agent::get_children()
{
    if(children.find("tty") == children.end())
    {
        if(tty != nullptr)
        {
            children["tty"] = tty.get();
        }
    }

    return children;
}

void Netconf::Agent::set_value(const std::string & value_path, std::string value)
{
}

Netconf::Netconf()
    :
    agent(std::make_unique<Netconf::Agent>())
{
    agent->parent = this;
    children["agent"] = agent.get();

    yang_name = "netconf"; yang_parent_name = "Cisco-IOS-XR-man-xml-ttyagent-cfg";
}

Netconf::~Netconf()
{
}

bool Netconf::has_data() const
{
    return (agent !=  nullptr && agent->has_data());
}

bool Netconf::has_operation() const
{
    return is_set(operation)
	|| (agent !=  nullptr && is_set(agent->operation));
}

std::string Netconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-cfg:netconf";

    return path_buffer.str();

}

EntityPath Netconf::get_entity_path(Entity* ancestor) const
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

Entity* Netconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "agent")
    {
        if(agent != nullptr)
        {
            children["agent"] = agent.get();
        }
        else
        {
            agent = std::make_unique<Netconf::Agent>();
            agent->parent = this;
            children["agent"] = agent.get();
        }
        return children.at("agent");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Netconf::get_children()
{
    if(children.find("agent") == children.end())
    {
        if(agent != nullptr)
        {
            children["agent"] = agent.get();
        }
    }

    return children;
}

void Netconf::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Netconf::clone_ptr()
{
    return std::make_unique<Netconf>();
}


}
}

