
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_crypto_sam_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_crypto_sam_cfg {

Crypto::Sam::PromptInterval::PromptInterval()
    :
    	action{YType::enumeration, "action"},
	 prompt_time{YType::uint32, "prompt-time"}
{
    yang_name = "prompt-interval"; yang_parent_name = "sam";
}

Crypto::Sam::PromptInterval::~PromptInterval()
{
}

bool Crypto::Sam::PromptInterval::has_data() const
{
    return action.is_set
	|| prompt_time.is_set;
}

bool Crypto::Sam::PromptInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(prompt_time.operation);
}

std::string Crypto::Sam::PromptInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt-interval";

    return path_buffer.str();

}

EntityPath Crypto::Sam::PromptInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/sam/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (prompt_time.is_set || is_set(prompt_time.operation)) leaf_name_data.push_back(prompt_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Crypto::Sam::PromptInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Crypto::Sam::PromptInterval::get_children()
{
    return children;
}

void Crypto::Sam::PromptInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "prompt-time")
    {
        prompt_time = value;
    }
}

Crypto::Sam::Sam()
    :
    prompt_interval(nullptr) // presence node
{
    yang_name = "sam"; yang_parent_name = "crypto";
}

Crypto::Sam::~Sam()
{
}

bool Crypto::Sam::has_data() const
{
    return (prompt_interval !=  nullptr && prompt_interval->has_data());
}

bool Crypto::Sam::has_operation() const
{
    return is_set(operation)
	|| (prompt_interval !=  nullptr && is_set(prompt_interval->operation));
}

std::string Crypto::Sam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sam";

    return path_buffer.str();

}

EntityPath Crypto::Sam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Crypto::Sam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prompt-interval")
    {
        if(prompt_interval != nullptr)
        {
            children["prompt-interval"] = prompt_interval.get();
        }
        else
        {
            prompt_interval = std::make_unique<Crypto::Sam::PromptInterval>();
            prompt_interval->parent = this;
            children["prompt-interval"] = prompt_interval.get();
        }
        return children.at("prompt-interval");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Crypto::Sam::get_children()
{
    if(children.find("prompt-interval") == children.end())
    {
        if(prompt_interval != nullptr)
        {
            children["prompt-interval"] = prompt_interval.get();
        }
    }

    return children;
}

void Crypto::Sam::set_value(const std::string & value_path, std::string value)
{
}

Crypto::Ssh::Client::Client()
    :
    	client_vrf{YType::str, "client-vrf"},
	 dscp{YType::uint32, "dscp"},
	 host_public_key{YType::str, "host-public-key"},
	 source_interface{YType::str, "source-interface"}
{
    yang_name = "client"; yang_parent_name = "ssh";
}

Crypto::Ssh::Client::~Client()
{
}

bool Crypto::Ssh::Client::has_data() const
{
    return client_vrf.is_set
	|| dscp.is_set
	|| host_public_key.is_set
	|| source_interface.is_set;
}

bool Crypto::Ssh::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(client_vrf.operation)
	|| is_set(dscp.operation)
	|| is_set(host_public_key.operation)
	|| is_set(source_interface.operation);
}

std::string Crypto::Ssh::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

EntityPath Crypto::Ssh::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_vrf.is_set || is_set(client_vrf.operation)) leaf_name_data.push_back(client_vrf.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (host_public_key.is_set || is_set(host_public_key.operation)) leaf_name_data.push_back(host_public_key.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Crypto::Ssh::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Crypto::Ssh::Client::get_children()
{
    return children;
}

void Crypto::Ssh::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-vrf")
    {
        client_vrf = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "host-public-key")
    {
        host_public_key = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Crypto::Ssh::Server::VrfTable::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"},
	 enable{YType::empty, "enable"},
	 ipv4_access_list{YType::str, "ipv4-access-list"},
	 ipv6_access_list{YType::str, "ipv6-access-list"}
{
    yang_name = "vrf"; yang_parent_name = "vrf-table";
}

Crypto::Ssh::Server::VrfTable::Vrf::~Vrf()
{
}

bool Crypto::Ssh::Server::VrfTable::Vrf::has_data() const
{
    return vrf_name.is_set
	|| enable.is_set
	|| ipv4_access_list.is_set
	|| ipv6_access_list.is_set;
}

bool Crypto::Ssh::Server::VrfTable::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(enable.operation)
	|| is_set(ipv4_access_list.operation)
	|| is_set(ipv6_access_list.operation);
}

std::string Crypto::Ssh::Server::VrfTable::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Crypto::Ssh::Server::VrfTable::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/vrf-table/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ipv4_access_list.is_set || is_set(ipv4_access_list.operation)) leaf_name_data.push_back(ipv4_access_list.get_name_leafdata());
    if (ipv6_access_list.is_set || is_set(ipv6_access_list.operation)) leaf_name_data.push_back(ipv6_access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Crypto::Ssh::Server::VrfTable::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Crypto::Ssh::Server::VrfTable::Vrf::get_children()
{
    return children;
}

void Crypto::Ssh::Server::VrfTable::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list = value;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list = value;
    }
}

Crypto::Ssh::Server::VrfTable::VrfTable()
{
    yang_name = "vrf-table"; yang_parent_name = "server";
}

Crypto::Ssh::Server::VrfTable::~VrfTable()
{
}

bool Crypto::Ssh::Server::VrfTable::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Crypto::Ssh::Server::VrfTable::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Crypto::Ssh::Server::VrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-table";

    return path_buffer.str();

}

EntityPath Crypto::Ssh::Server::VrfTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Crypto::Ssh::Server::VrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Crypto::Ssh::Server::VrfTable::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Crypto::Ssh::Server::VrfTable::get_children()
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

void Crypto::Ssh::Server::VrfTable::set_value(const std::string & value_path, std::string value)
{
}

Crypto::Ssh::Server::NetconfVrfTable::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"},
	 enable{YType::empty, "enable"},
	 ipv4_access_list{YType::str, "ipv4-access-list"},
	 ipv6_access_list{YType::str, "ipv6-access-list"}
{
    yang_name = "vrf"; yang_parent_name = "netconf-vrf-table";
}

Crypto::Ssh::Server::NetconfVrfTable::Vrf::~Vrf()
{
}

bool Crypto::Ssh::Server::NetconfVrfTable::Vrf::has_data() const
{
    return vrf_name.is_set
	|| enable.is_set
	|| ipv4_access_list.is_set
	|| ipv6_access_list.is_set;
}

bool Crypto::Ssh::Server::NetconfVrfTable::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(enable.operation)
	|| is_set(ipv4_access_list.operation)
	|| is_set(ipv6_access_list.operation);
}

std::string Crypto::Ssh::Server::NetconfVrfTable::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Crypto::Ssh::Server::NetconfVrfTable::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/netconf-vrf-table/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ipv4_access_list.is_set || is_set(ipv4_access_list.operation)) leaf_name_data.push_back(ipv4_access_list.get_name_leafdata());
    if (ipv6_access_list.is_set || is_set(ipv6_access_list.operation)) leaf_name_data.push_back(ipv6_access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Crypto::Ssh::Server::NetconfVrfTable::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Crypto::Ssh::Server::NetconfVrfTable::Vrf::get_children()
{
    return children;
}

void Crypto::Ssh::Server::NetconfVrfTable::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list = value;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list = value;
    }
}

Crypto::Ssh::Server::NetconfVrfTable::NetconfVrfTable()
{
    yang_name = "netconf-vrf-table"; yang_parent_name = "server";
}

Crypto::Ssh::Server::NetconfVrfTable::~NetconfVrfTable()
{
}

bool Crypto::Ssh::Server::NetconfVrfTable::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Crypto::Ssh::Server::NetconfVrfTable::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Crypto::Ssh::Server::NetconfVrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-vrf-table";

    return path_buffer.str();

}

EntityPath Crypto::Ssh::Server::NetconfVrfTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Crypto::Ssh::Server::NetconfVrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Crypto::Ssh::Server::NetconfVrfTable::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Crypto::Ssh::Server::NetconfVrfTable::get_children()
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

void Crypto::Ssh::Server::NetconfVrfTable::set_value(const std::string & value_path, std::string value)
{
}

Crypto::Ssh::Server::Server()
    :
    	dscp{YType::uint32, "dscp"},
	 logging{YType::empty, "logging"},
	 netconf{YType::uint32, "netconf"},
	 rate_limit{YType::uint32, "rate-limit"},
	 session_limit{YType::uint32, "session-limit"},
	 timeout{YType::uint32, "timeout"},
	 v2{YType::empty, "v2"}
    	,
    netconf_vrf_table(std::make_unique<Crypto::Ssh::Server::NetconfVrfTable>())
	,vrf_table(std::make_unique<Crypto::Ssh::Server::VrfTable>())
{
    netconf_vrf_table->parent = this;
    children["netconf-vrf-table"] = netconf_vrf_table.get();

    vrf_table->parent = this;
    children["vrf-table"] = vrf_table.get();

    yang_name = "server"; yang_parent_name = "ssh";
}

Crypto::Ssh::Server::~Server()
{
}

bool Crypto::Ssh::Server::has_data() const
{
    return dscp.is_set
	|| logging.is_set
	|| netconf.is_set
	|| rate_limit.is_set
	|| session_limit.is_set
	|| timeout.is_set
	|| v2.is_set
	|| (netconf_vrf_table !=  nullptr && netconf_vrf_table->has_data())
	|| (vrf_table !=  nullptr && vrf_table->has_data());
}

bool Crypto::Ssh::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation)
	|| is_set(logging.operation)
	|| is_set(netconf.operation)
	|| is_set(rate_limit.operation)
	|| is_set(session_limit.operation)
	|| is_set(timeout.operation)
	|| is_set(v2.operation)
	|| (netconf_vrf_table !=  nullptr && is_set(netconf_vrf_table->operation))
	|| (vrf_table !=  nullptr && is_set(vrf_table->operation));
}

std::string Crypto::Ssh::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

EntityPath Crypto::Ssh::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (netconf.is_set || is_set(netconf.operation)) leaf_name_data.push_back(netconf.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.operation)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (v2.is_set || is_set(v2.operation)) leaf_name_data.push_back(v2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Crypto::Ssh::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "netconf-vrf-table")
    {
        if(netconf_vrf_table != nullptr)
        {
            children["netconf-vrf-table"] = netconf_vrf_table.get();
        }
        else
        {
            netconf_vrf_table = std::make_unique<Crypto::Ssh::Server::NetconfVrfTable>();
            netconf_vrf_table->parent = this;
            children["netconf-vrf-table"] = netconf_vrf_table.get();
        }
        return children.at("netconf-vrf-table");
    }

    if(child_yang_name == "vrf-table")
    {
        if(vrf_table != nullptr)
        {
            children["vrf-table"] = vrf_table.get();
        }
        else
        {
            vrf_table = std::make_unique<Crypto::Ssh::Server::VrfTable>();
            vrf_table->parent = this;
            children["vrf-table"] = vrf_table.get();
        }
        return children.at("vrf-table");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Crypto::Ssh::Server::get_children()
{
    if(children.find("netconf-vrf-table") == children.end())
    {
        if(netconf_vrf_table != nullptr)
        {
            children["netconf-vrf-table"] = netconf_vrf_table.get();
        }
    }

    if(children.find("vrf-table") == children.end())
    {
        if(vrf_table != nullptr)
        {
            children["vrf-table"] = vrf_table.get();
        }
    }

    return children;
}

void Crypto::Ssh::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
    if(value_path == "netconf")
    {
        netconf = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "v2")
    {
        v2 = value;
    }
}

Crypto::Ssh::Ssh()
    :
    client(std::make_unique<Crypto::Ssh::Client>())
	,server(std::make_unique<Crypto::Ssh::Server>())
{
    client->parent = this;
    children["client"] = client.get();

    server->parent = this;
    children["server"] = server.get();

    yang_name = "ssh"; yang_parent_name = "crypto";
}

Crypto::Ssh::~Ssh()
{
}

bool Crypto::Ssh::has_data() const
{
    return (client !=  nullptr && client->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Crypto::Ssh::has_operation() const
{
    return is_set(operation)
	|| (client !=  nullptr && is_set(client->operation))
	|| (server !=  nullptr && is_set(server->operation));
}

std::string Crypto::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh";

    return path_buffer.str();

}

EntityPath Crypto::Ssh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Crypto::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "client")
    {
        if(client != nullptr)
        {
            children["client"] = client.get();
        }
        else
        {
            client = std::make_unique<Crypto::Ssh::Client>();
            client->parent = this;
            children["client"] = client.get();
        }
        return children.at("client");
    }

    if(child_yang_name == "server")
    {
        if(server != nullptr)
        {
            children["server"] = server.get();
        }
        else
        {
            server = std::make_unique<Crypto::Ssh::Server>();
            server->parent = this;
            children["server"] = server.get();
        }
        return children.at("server");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Crypto::Ssh::get_children()
{
    if(children.find("client") == children.end())
    {
        if(client != nullptr)
        {
            children["client"] = client.get();
        }
    }

    if(children.find("server") == children.end())
    {
        if(server != nullptr)
        {
            children["server"] = server.get();
        }
    }

    return children;
}

void Crypto::Ssh::set_value(const std::string & value_path, std::string value)
{
}

Crypto::Crypto()
    :
    sam(std::make_unique<Crypto::Sam>())
	,ssh(std::make_unique<Crypto::Ssh>())
{
    sam->parent = this;
    children["sam"] = sam.get();

    ssh->parent = this;
    children["ssh"] = ssh.get();

    yang_name = "crypto"; yang_parent_name = "Cisco-IOS-XR-crypto-sam-cfg";
}

Crypto::~Crypto()
{
}

bool Crypto::has_data() const
{
    return (sam !=  nullptr && sam->has_data())
	|| (ssh !=  nullptr && ssh->has_data());
}

bool Crypto::has_operation() const
{
    return is_set(operation)
	|| (sam !=  nullptr && is_set(sam->operation))
	|| (ssh !=  nullptr && is_set(ssh->operation));
}

std::string Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto";

    return path_buffer.str();

}

EntityPath Crypto::get_entity_path(Entity* ancestor) const
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

Entity* Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sam")
    {
        if(sam != nullptr)
        {
            children["sam"] = sam.get();
        }
        else
        {
            sam = std::make_unique<Crypto::Sam>();
            sam->parent = this;
            children["sam"] = sam.get();
        }
        return children.at("sam");
    }

    if(child_yang_name == "ssh")
    {
        if(ssh != nullptr)
        {
            children["ssh"] = ssh.get();
        }
        else
        {
            ssh = std::make_unique<Crypto::Ssh>();
            ssh->parent = this;
            children["ssh"] = ssh.get();
        }
        return children.at("ssh");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Crypto::get_children()
{
    if(children.find("sam") == children.end())
    {
        if(sam != nullptr)
        {
            children["sam"] = sam.get();
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

void Crypto::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Crypto::clone_ptr()
{
    return std::make_unique<Crypto>();
}

const Enum::Value CryptoSamActionEnum::proceed {1, "proceed"};
const Enum::Value CryptoSamActionEnum::terminate {2, "terminate"};


}
}

