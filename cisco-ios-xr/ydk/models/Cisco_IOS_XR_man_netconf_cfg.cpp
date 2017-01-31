
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_man_netconf_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_man_netconf_cfg {

NetconfYang::Agent::Ssh::Ssh()
    :
    	enable{YType::empty, "enable"}
{
    yang_name = "ssh"; yang_parent_name = "agent";
}

NetconfYang::Agent::Ssh::~Ssh()
{
}

bool NetconfYang::Agent::Ssh::has_data() const
{
    return enable.is_set;
}

bool NetconfYang::Agent::Ssh::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string NetconfYang::Agent::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";

    return path_buffer.str();

}

EntityPath NetconfYang::Agent::Ssh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-netconf-cfg:netconf-yang/agent/" << get_segment_path();
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

Entity* NetconfYang::Agent::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NetconfYang::Agent::Ssh::get_children()
{
    return children;
}

void NetconfYang::Agent::Ssh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

NetconfYang::Agent::Session::Session()
    :
    	absolute_timeout{YType::uint32, "absolute-timeout"},
	 idle_timeout{YType::uint32, "idle-timeout"},
	 limit{YType::uint32, "limit"}
{
    yang_name = "session"; yang_parent_name = "agent";
}

NetconfYang::Agent::Session::~Session()
{
}

bool NetconfYang::Agent::Session::has_data() const
{
    return absolute_timeout.is_set
	|| idle_timeout.is_set
	|| limit.is_set;
}

bool NetconfYang::Agent::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(absolute_timeout.operation)
	|| is_set(idle_timeout.operation)
	|| is_set(limit.operation);
}

std::string NetconfYang::Agent::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath NetconfYang::Agent::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-netconf-cfg:netconf-yang/agent/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_timeout.is_set || is_set(absolute_timeout.operation)) leaf_name_data.push_back(absolute_timeout.get_name_leafdata());
    if (idle_timeout.is_set || is_set(idle_timeout.operation)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());
    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetconfYang::Agent::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NetconfYang::Agent::Session::get_children()
{
    return children;
}

void NetconfYang::Agent::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "absolute-timeout")
    {
        absolute_timeout = value;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
    }
    if(value_path == "limit")
    {
        limit = value;
    }
}

NetconfYang::Agent::Agent()
    :
    	rate_limit{YType::uint32, "rate-limit"}
    	,
    session(std::make_unique<NetconfYang::Agent::Session>())
	,ssh(std::make_unique<NetconfYang::Agent::Ssh>())
{
    session->parent = this;
    children["session"] = session.get();

    ssh->parent = this;
    children["ssh"] = ssh.get();

    yang_name = "agent"; yang_parent_name = "netconf-yang";
}

NetconfYang::Agent::~Agent()
{
}

bool NetconfYang::Agent::has_data() const
{
    return rate_limit.is_set
	|| (session !=  nullptr && session->has_data())
	|| (ssh !=  nullptr && ssh->has_data());
}

bool NetconfYang::Agent::has_operation() const
{
    return is_set(operation)
	|| is_set(rate_limit.operation)
	|| (session !=  nullptr && session->has_operation())
	|| (ssh !=  nullptr && ssh->has_operation());
}

std::string NetconfYang::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";

    return path_buffer.str();

}

EntityPath NetconfYang::Agent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-netconf-cfg:netconf-yang/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetconfYang::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            session = std::make_unique<NetconfYang::Agent::Session>();
            session->parent = this;
            children["session"] = session.get();
        }
        return children.at("session");
    }

    if(child_yang_name == "ssh")
    {
        if(ssh != nullptr)
        {
            children["ssh"] = ssh.get();
        }
        else
        {
            ssh = std::make_unique<NetconfYang::Agent::Ssh>();
            ssh->parent = this;
            children["ssh"] = ssh.get();
        }
        return children.at("ssh");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetconfYang::Agent::get_children()
{
    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
    }

    if(children.find("ssh") == children.end())
    {
        if(ssh != nullptr)
        {
            children["ssh"] = ssh.get();
        }
    }

    return children;
}

void NetconfYang::Agent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
}

NetconfYang::NetconfYang()
    :
    agent(std::make_unique<NetconfYang::Agent>())
{
    agent->parent = this;
    children["agent"] = agent.get();

    yang_name = "netconf-yang"; yang_parent_name = "Cisco-IOS-XR-man-netconf-cfg";
}

NetconfYang::~NetconfYang()
{
}

bool NetconfYang::has_data() const
{
    return (agent !=  nullptr && agent->has_data());
}

bool NetconfYang::has_operation() const
{
    return is_set(operation)
	|| (agent !=  nullptr && agent->has_operation());
}

std::string NetconfYang::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-netconf-cfg:netconf-yang";

    return path_buffer.str();

}

EntityPath NetconfYang::get_entity_path(Entity* ancestor) const
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

Entity* NetconfYang::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            agent = std::make_unique<NetconfYang::Agent>();
            agent->parent = this;
            children["agent"] = agent.get();
        }
        return children.at("agent");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetconfYang::get_children()
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

void NetconfYang::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> NetconfYang::clone_ptr()
{
    return std::make_unique<NetconfYang>();
}


}
}

