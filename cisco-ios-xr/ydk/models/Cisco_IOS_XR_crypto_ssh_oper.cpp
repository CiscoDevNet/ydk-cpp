
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_crypto_ssh_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_crypto_ssh_oper {

Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::SessionDetailInfo()
    :
    	in_cipher{YType::enumeration, "in-cipher"},
	 in_mac{YType::enumeration, "in-mac"},
	 key_exchange{YType::enumeration, "key-exchange"},
	 out_cipher{YType::enumeration, "out-cipher"},
	 out_mac{YType::enumeration, "out-mac"},
	 public_key{YType::enumeration, "public-key"},
	 session_id{YType::uint32, "session-id"}
{
    yang_name = "session-detail-info"; yang_parent_name = "incoming-sessions";
}

Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::~SessionDetailInfo()
{
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::has_data() const
{
    return in_cipher.is_set
	|| in_mac.is_set
	|| key_exchange.is_set
	|| out_cipher.is_set
	|| out_mac.is_set
	|| public_key.is_set
	|| session_id.is_set;
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(in_cipher.operation)
	|| is_set(in_mac.operation)
	|| is_set(key_exchange.operation)
	|| is_set(out_cipher.operation)
	|| is_set(out_mac.operation)
	|| is_set(public_key.operation)
	|| is_set(session_id.operation);
}

std::string Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail-info";

    return path_buffer.str();

}

EntityPath Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::get_entity_path(Entity* ancestor) const
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

    if (in_cipher.is_set || is_set(in_cipher.operation)) leaf_name_data.push_back(in_cipher.get_name_leafdata());
    if (in_mac.is_set || is_set(in_mac.operation)) leaf_name_data.push_back(in_mac.get_name_leafdata());
    if (key_exchange.is_set || is_set(key_exchange.operation)) leaf_name_data.push_back(key_exchange.get_name_leafdata());
    if (out_cipher.is_set || is_set(out_cipher.operation)) leaf_name_data.push_back(out_cipher.get_name_leafdata());
    if (out_mac.is_set || is_set(out_mac.operation)) leaf_name_data.push_back(out_mac.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.operation)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::get_children()
{
    return children;
}

void Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-cipher")
    {
        in_cipher = value;
    }
    if(value_path == "in-mac")
    {
        in_mac = value;
    }
    if(value_path == "key-exchange")
    {
        key_exchange = value;
    }
    if(value_path == "out-cipher")
    {
        out_cipher = value;
    }
    if(value_path == "out-mac")
    {
        out_mac = value;
    }
    if(value_path == "public-key")
    {
        public_key = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

Ssh1::Kex::Nodes::Node::IncomingSessions::IncomingSessions()
{
    yang_name = "incoming-sessions"; yang_parent_name = "node";
}

Ssh1::Kex::Nodes::Node::IncomingSessions::~IncomingSessions()
{
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::has_data() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ssh1::Kex::Nodes::Node::IncomingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-sessions";

    return path_buffer.str();

}

EntityPath Ssh1::Kex::Nodes::Node::IncomingSessions::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh1::Kex::Nodes::Node::IncomingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-detail-info")
    {
        for(auto const & c : session_detail_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo>();
        c->parent = this;
        session_detail_info.push_back(std::move(c));
        children[segment_path] = session_detail_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ssh1::Kex::Nodes::Node::IncomingSessions::get_children()
{
    for (auto const & c : session_detail_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ssh1::Kex::Nodes::Node::IncomingSessions::set_value(const std::string & value_path, std::string value)
{
}

Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::SessionDetailInfo()
    :
    	in_cipher{YType::enumeration, "in-cipher"},
	 in_mac{YType::enumeration, "in-mac"},
	 key_exchange{YType::enumeration, "key-exchange"},
	 out_cipher{YType::enumeration, "out-cipher"},
	 out_mac{YType::enumeration, "out-mac"},
	 public_key{YType::enumeration, "public-key"},
	 session_id{YType::uint32, "session-id"}
{
    yang_name = "session-detail-info"; yang_parent_name = "outgoing-connections";
}

Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::~SessionDetailInfo()
{
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::has_data() const
{
    return in_cipher.is_set
	|| in_mac.is_set
	|| key_exchange.is_set
	|| out_cipher.is_set
	|| out_mac.is_set
	|| public_key.is_set
	|| session_id.is_set;
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(in_cipher.operation)
	|| is_set(in_mac.operation)
	|| is_set(key_exchange.operation)
	|| is_set(out_cipher.operation)
	|| is_set(out_mac.operation)
	|| is_set(public_key.operation)
	|| is_set(session_id.operation);
}

std::string Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail-info";

    return path_buffer.str();

}

EntityPath Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::get_entity_path(Entity* ancestor) const
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

    if (in_cipher.is_set || is_set(in_cipher.operation)) leaf_name_data.push_back(in_cipher.get_name_leafdata());
    if (in_mac.is_set || is_set(in_mac.operation)) leaf_name_data.push_back(in_mac.get_name_leafdata());
    if (key_exchange.is_set || is_set(key_exchange.operation)) leaf_name_data.push_back(key_exchange.get_name_leafdata());
    if (out_cipher.is_set || is_set(out_cipher.operation)) leaf_name_data.push_back(out_cipher.get_name_leafdata());
    if (out_mac.is_set || is_set(out_mac.operation)) leaf_name_data.push_back(out_mac.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.operation)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::get_children()
{
    return children;
}

void Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-cipher")
    {
        in_cipher = value;
    }
    if(value_path == "in-mac")
    {
        in_mac = value;
    }
    if(value_path == "key-exchange")
    {
        key_exchange = value;
    }
    if(value_path == "out-cipher")
    {
        out_cipher = value;
    }
    if(value_path == "out-mac")
    {
        out_mac = value;
    }
    if(value_path == "public-key")
    {
        public_key = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

Ssh1::Kex::Nodes::Node::OutgoingConnections::OutgoingConnections()
{
    yang_name = "outgoing-connections"; yang_parent_name = "node";
}

Ssh1::Kex::Nodes::Node::OutgoingConnections::~OutgoingConnections()
{
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::has_data() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::has_operation() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ssh1::Kex::Nodes::Node::OutgoingConnections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-connections";

    return path_buffer.str();

}

EntityPath Ssh1::Kex::Nodes::Node::OutgoingConnections::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh1::Kex::Nodes::Node::OutgoingConnections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-detail-info")
    {
        for(auto const & c : session_detail_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo>();
        c->parent = this;
        session_detail_info.push_back(std::move(c));
        children[segment_path] = session_detail_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ssh1::Kex::Nodes::Node::OutgoingConnections::get_children()
{
    for (auto const & c : session_detail_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ssh1::Kex::Nodes::Node::OutgoingConnections::set_value(const std::string & value_path, std::string value)
{
}

Ssh1::Kex::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    incoming_sessions(std::make_unique<Ssh1::Kex::Nodes::Node::IncomingSessions>())
	,outgoing_connections(std::make_unique<Ssh1::Kex::Nodes::Node::OutgoingConnections>())
{
    incoming_sessions->parent = this;
    children["incoming-sessions"] = incoming_sessions.get();

    outgoing_connections->parent = this;
    children["outgoing-connections"] = outgoing_connections.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Ssh1::Kex::Nodes::Node::~Node()
{
}

bool Ssh1::Kex::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (incoming_sessions !=  nullptr && incoming_sessions->has_data())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_data());
}

bool Ssh1::Kex::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (incoming_sessions !=  nullptr && is_set(incoming_sessions->operation))
	|| (outgoing_connections !=  nullptr && is_set(outgoing_connections->operation));
}

std::string Ssh1::Kex::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ssh1::Kex::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh1/kex/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh1::Kex::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "incoming-sessions")
    {
        if(incoming_sessions != nullptr)
        {
            children["incoming-sessions"] = incoming_sessions.get();
        }
        else
        {
            incoming_sessions = std::make_unique<Ssh1::Kex::Nodes::Node::IncomingSessions>();
            incoming_sessions->parent = this;
            children["incoming-sessions"] = incoming_sessions.get();
        }
        return children.at("incoming-sessions");
    }

    if(child_yang_name == "outgoing-connections")
    {
        if(outgoing_connections != nullptr)
        {
            children["outgoing-connections"] = outgoing_connections.get();
        }
        else
        {
            outgoing_connections = std::make_unique<Ssh1::Kex::Nodes::Node::OutgoingConnections>();
            outgoing_connections->parent = this;
            children["outgoing-connections"] = outgoing_connections.get();
        }
        return children.at("outgoing-connections");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ssh1::Kex::Nodes::Node::get_children()
{
    if(children.find("incoming-sessions") == children.end())
    {
        if(incoming_sessions != nullptr)
        {
            children["incoming-sessions"] = incoming_sessions.get();
        }
    }

    if(children.find("outgoing-connections") == children.end())
    {
        if(outgoing_connections != nullptr)
        {
            children["outgoing-connections"] = outgoing_connections.get();
        }
    }

    return children;
}

void Ssh1::Kex::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Ssh1::Kex::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "kex";
}

Ssh1::Kex::Nodes::~Nodes()
{
}

bool Ssh1::Kex::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh1::Kex::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ssh1::Kex::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Ssh1::Kex::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh1/kex/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh1::Kex::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ssh1::Kex::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ssh1::Kex::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ssh1::Kex::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Ssh1::Kex::Kex()
    :
    nodes(std::make_unique<Ssh1::Kex::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "kex"; yang_parent_name = "ssh1";
}

Ssh1::Kex::~Kex()
{
}

bool Ssh1::Kex::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Ssh1::Kex::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string Ssh1::Kex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "kex";

    return path_buffer.str();

}

EntityPath Ssh1::Kex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh1/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh1::Kex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<Ssh1::Kex::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ssh1::Kex::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void Ssh1::Kex::set_value(const std::string & value_path, std::string value)
{
}

Ssh1::Ssh1()
    :
    kex(std::make_unique<Ssh1::Kex>())
{
    kex->parent = this;
    children["kex"] = kex.get();

    yang_name = "ssh1"; yang_parent_name = "Cisco-IOS-XR-crypto-ssh-oper";
}

Ssh1::~Ssh1()
{
}

bool Ssh1::has_data() const
{
    return (kex !=  nullptr && kex->has_data());
}

bool Ssh1::has_operation() const
{
    return is_set(operation)
	|| (kex !=  nullptr && is_set(kex->operation));
}

std::string Ssh1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh1";

    return path_buffer.str();

}

EntityPath Ssh1::get_entity_path(Entity* ancestor) const
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

Entity* Ssh1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "kex")
    {
        if(kex != nullptr)
        {
            children["kex"] = kex.get();
        }
        else
        {
            kex = std::make_unique<Ssh1::Kex>();
            kex->parent = this;
            children["kex"] = kex.get();
        }
        return children.at("kex");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ssh1::get_children()
{
    if(children.find("kex") == children.end())
    {
        if(kex != nullptr)
        {
            children["kex"] = kex.get();
        }
    }

    return children;
}

void Ssh1::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Ssh1::clone_ptr()
{
    return std::make_unique<Ssh1>();
}
Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::SessionBriefInfo()
    :
    	authentication_type{YType::enumeration, "authentication-type"},
	 channel_id{YType::uint32, "channel-id"},
	 connection_type{YType::enumeration, "connection-type"},
	 host_address{YType::str, "host-address"},
	 node_name{YType::str, "node-name"},
	 session_id{YType::uint32, "session-id"},
	 session_state{YType::enumeration, "session-state"},
	 user_id{YType::str, "user-id"},
	 version{YType::enumeration, "version"},
	 vty_assigned{YType::boolean, "vty-assigned"},
	 vty_line_number{YType::uint32, "vty-line-number"}
{
    yang_name = "session-brief-info"; yang_parent_name = "incoming-sessions";
}

Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::~SessionBriefInfo()
{
}

bool Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::has_data() const
{
    return authentication_type.is_set
	|| channel_id.is_set
	|| connection_type.is_set
	|| host_address.is_set
	|| node_name.is_set
	|| session_id.is_set
	|| session_state.is_set
	|| user_id.is_set
	|| version.is_set
	|| vty_assigned.is_set
	|| vty_line_number.is_set;
}

bool Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_type.operation)
	|| is_set(channel_id.operation)
	|| is_set(connection_type.operation)
	|| is_set(host_address.operation)
	|| is_set(node_name.operation)
	|| is_set(session_id.operation)
	|| is_set(session_state.operation)
	|| is_set(user_id.operation)
	|| is_set(version.operation)
	|| is_set(vty_assigned.operation)
	|| is_set(vty_line_number.operation);
}

std::string Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-brief-info";

    return path_buffer.str();

}

EntityPath Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/incoming-sessions/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_type.is_set || is_set(authentication_type.operation)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (channel_id.is_set || is_set(channel_id.operation)) leaf_name_data.push_back(channel_id.get_name_leafdata());
    if (connection_type.is_set || is_set(connection_type.operation)) leaf_name_data.push_back(connection_type.get_name_leafdata());
    if (host_address.is_set || is_set(host_address.operation)) leaf_name_data.push_back(host_address.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.operation)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.operation)) leaf_name_data.push_back(user_id.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vty_assigned.is_set || is_set(vty_assigned.operation)) leaf_name_data.push_back(vty_assigned.get_name_leafdata());
    if (vty_line_number.is_set || is_set(vty_line_number.operation)) leaf_name_data.push_back(vty_line_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::get_children()
{
    return children;
}

void Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-type")
    {
        authentication_type = value;
    }
    if(value_path == "channel-id")
    {
        channel_id = value;
    }
    if(value_path == "connection-type")
    {
        connection_type = value;
    }
    if(value_path == "host-address")
    {
        host_address = value;
    }
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "session-state")
    {
        session_state = value;
    }
    if(value_path == "user-id")
    {
        user_id = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "vty-assigned")
    {
        vty_assigned = value;
    }
    if(value_path == "vty-line-number")
    {
        vty_line_number = value;
    }
}

Ssh::Session::Brief::IncomingSessions::IncomingSessions()
{
    yang_name = "incoming-sessions"; yang_parent_name = "brief";
}

Ssh::Session::Brief::IncomingSessions::~IncomingSessions()
{
}

bool Ssh::Session::Brief::IncomingSessions::has_data() const
{
    for (std::size_t index=0; index<session_brief_info.size(); index++)
    {
        if(session_brief_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Brief::IncomingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_brief_info.size(); index++)
    {
        if(session_brief_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ssh::Session::Brief::IncomingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-sessions";

    return path_buffer.str();

}

EntityPath Ssh::Session::Brief::IncomingSessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh::Session::Brief::IncomingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-brief-info")
    {
        for(auto const & c : session_brief_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ssh::Session::Brief::IncomingSessions::SessionBriefInfo>();
        c->parent = this;
        session_brief_info.push_back(std::move(c));
        children[segment_path] = session_brief_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ssh::Session::Brief::IncomingSessions::get_children()
{
    for (auto const & c : session_brief_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ssh::Session::Brief::IncomingSessions::set_value(const std::string & value_path, std::string value)
{
}

Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::SessionBriefInfo()
    :
    	authentication_type{YType::enumeration, "authentication-type"},
	 channel_id{YType::uint32, "channel-id"},
	 connection_type{YType::enumeration, "connection-type"},
	 host_address{YType::str, "host-address"},
	 node_name{YType::str, "node-name"},
	 session_id{YType::uint32, "session-id"},
	 session_state{YType::enumeration, "session-state"},
	 user_id{YType::str, "user-id"},
	 version{YType::enumeration, "version"},
	 vty_assigned{YType::boolean, "vty-assigned"},
	 vty_line_number{YType::uint32, "vty-line-number"}
{
    yang_name = "session-brief-info"; yang_parent_name = "outgoing-sessions";
}

Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::~SessionBriefInfo()
{
}

bool Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::has_data() const
{
    return authentication_type.is_set
	|| channel_id.is_set
	|| connection_type.is_set
	|| host_address.is_set
	|| node_name.is_set
	|| session_id.is_set
	|| session_state.is_set
	|| user_id.is_set
	|| version.is_set
	|| vty_assigned.is_set
	|| vty_line_number.is_set;
}

bool Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_type.operation)
	|| is_set(channel_id.operation)
	|| is_set(connection_type.operation)
	|| is_set(host_address.operation)
	|| is_set(node_name.operation)
	|| is_set(session_id.operation)
	|| is_set(session_state.operation)
	|| is_set(user_id.operation)
	|| is_set(version.operation)
	|| is_set(vty_assigned.operation)
	|| is_set(vty_line_number.operation);
}

std::string Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-brief-info";

    return path_buffer.str();

}

EntityPath Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/outgoing-sessions/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_type.is_set || is_set(authentication_type.operation)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (channel_id.is_set || is_set(channel_id.operation)) leaf_name_data.push_back(channel_id.get_name_leafdata());
    if (connection_type.is_set || is_set(connection_type.operation)) leaf_name_data.push_back(connection_type.get_name_leafdata());
    if (host_address.is_set || is_set(host_address.operation)) leaf_name_data.push_back(host_address.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.operation)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.operation)) leaf_name_data.push_back(user_id.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vty_assigned.is_set || is_set(vty_assigned.operation)) leaf_name_data.push_back(vty_assigned.get_name_leafdata());
    if (vty_line_number.is_set || is_set(vty_line_number.operation)) leaf_name_data.push_back(vty_line_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::get_children()
{
    return children;
}

void Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-type")
    {
        authentication_type = value;
    }
    if(value_path == "channel-id")
    {
        channel_id = value;
    }
    if(value_path == "connection-type")
    {
        connection_type = value;
    }
    if(value_path == "host-address")
    {
        host_address = value;
    }
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "session-state")
    {
        session_state = value;
    }
    if(value_path == "user-id")
    {
        user_id = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "vty-assigned")
    {
        vty_assigned = value;
    }
    if(value_path == "vty-line-number")
    {
        vty_line_number = value;
    }
}

Ssh::Session::Brief::OutgoingSessions::OutgoingSessions()
{
    yang_name = "outgoing-sessions"; yang_parent_name = "brief";
}

Ssh::Session::Brief::OutgoingSessions::~OutgoingSessions()
{
}

bool Ssh::Session::Brief::OutgoingSessions::has_data() const
{
    for (std::size_t index=0; index<session_brief_info.size(); index++)
    {
        if(session_brief_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Brief::OutgoingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_brief_info.size(); index++)
    {
        if(session_brief_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ssh::Session::Brief::OutgoingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-sessions";

    return path_buffer.str();

}

EntityPath Ssh::Session::Brief::OutgoingSessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh::Session::Brief::OutgoingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-brief-info")
    {
        for(auto const & c : session_brief_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo>();
        c->parent = this;
        session_brief_info.push_back(std::move(c));
        children[segment_path] = session_brief_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ssh::Session::Brief::OutgoingSessions::get_children()
{
    for (auto const & c : session_brief_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ssh::Session::Brief::OutgoingSessions::set_value(const std::string & value_path, std::string value)
{
}

Ssh::Session::Brief::Brief()
    :
    incoming_sessions(std::make_unique<Ssh::Session::Brief::IncomingSessions>())
	,outgoing_sessions(std::make_unique<Ssh::Session::Brief::OutgoingSessions>())
{
    incoming_sessions->parent = this;
    children["incoming-sessions"] = incoming_sessions.get();

    outgoing_sessions->parent = this;
    children["outgoing-sessions"] = outgoing_sessions.get();

    yang_name = "brief"; yang_parent_name = "session";
}

Ssh::Session::Brief::~Brief()
{
}

bool Ssh::Session::Brief::has_data() const
{
    return (incoming_sessions !=  nullptr && incoming_sessions->has_data())
	|| (outgoing_sessions !=  nullptr && outgoing_sessions->has_data());
}

bool Ssh::Session::Brief::has_operation() const
{
    return is_set(operation)
	|| (incoming_sessions !=  nullptr && is_set(incoming_sessions->operation))
	|| (outgoing_sessions !=  nullptr && is_set(outgoing_sessions->operation));
}

std::string Ssh::Session::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

EntityPath Ssh::Session::Brief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh::Session::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "incoming-sessions")
    {
        if(incoming_sessions != nullptr)
        {
            children["incoming-sessions"] = incoming_sessions.get();
        }
        else
        {
            incoming_sessions = std::make_unique<Ssh::Session::Brief::IncomingSessions>();
            incoming_sessions->parent = this;
            children["incoming-sessions"] = incoming_sessions.get();
        }
        return children.at("incoming-sessions");
    }

    if(child_yang_name == "outgoing-sessions")
    {
        if(outgoing_sessions != nullptr)
        {
            children["outgoing-sessions"] = outgoing_sessions.get();
        }
        else
        {
            outgoing_sessions = std::make_unique<Ssh::Session::Brief::OutgoingSessions>();
            outgoing_sessions->parent = this;
            children["outgoing-sessions"] = outgoing_sessions.get();
        }
        return children.at("outgoing-sessions");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ssh::Session::Brief::get_children()
{
    if(children.find("incoming-sessions") == children.end())
    {
        if(incoming_sessions != nullptr)
        {
            children["incoming-sessions"] = incoming_sessions.get();
        }
    }

    if(children.find("outgoing-sessions") == children.end())
    {
        if(outgoing_sessions != nullptr)
        {
            children["outgoing-sessions"] = outgoing_sessions.get();
        }
    }

    return children;
}

void Ssh::Session::Brief::set_value(const std::string & value_path, std::string value)
{
}

Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::SessionDetailInfo()
    :
    	in_cipher{YType::enumeration, "in-cipher"},
	 in_mac{YType::enumeration, "in-mac"},
	 key_exchange{YType::enumeration, "key-exchange"},
	 out_cipher{YType::enumeration, "out-cipher"},
	 out_mac{YType::enumeration, "out-mac"},
	 public_key{YType::enumeration, "public-key"},
	 session_id{YType::uint32, "session-id"}
{
    yang_name = "session-detail-info"; yang_parent_name = "incoming-sessions";
}

Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::~SessionDetailInfo()
{
}

bool Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::has_data() const
{
    return in_cipher.is_set
	|| in_mac.is_set
	|| key_exchange.is_set
	|| out_cipher.is_set
	|| out_mac.is_set
	|| public_key.is_set
	|| session_id.is_set;
}

bool Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(in_cipher.operation)
	|| is_set(in_mac.operation)
	|| is_set(key_exchange.operation)
	|| is_set(out_cipher.operation)
	|| is_set(out_mac.operation)
	|| is_set(public_key.operation)
	|| is_set(session_id.operation);
}

std::string Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail-info";

    return path_buffer.str();

}

EntityPath Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/detail/incoming-sessions/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_cipher.is_set || is_set(in_cipher.operation)) leaf_name_data.push_back(in_cipher.get_name_leafdata());
    if (in_mac.is_set || is_set(in_mac.operation)) leaf_name_data.push_back(in_mac.get_name_leafdata());
    if (key_exchange.is_set || is_set(key_exchange.operation)) leaf_name_data.push_back(key_exchange.get_name_leafdata());
    if (out_cipher.is_set || is_set(out_cipher.operation)) leaf_name_data.push_back(out_cipher.get_name_leafdata());
    if (out_mac.is_set || is_set(out_mac.operation)) leaf_name_data.push_back(out_mac.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.operation)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::get_children()
{
    return children;
}

void Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-cipher")
    {
        in_cipher = value;
    }
    if(value_path == "in-mac")
    {
        in_mac = value;
    }
    if(value_path == "key-exchange")
    {
        key_exchange = value;
    }
    if(value_path == "out-cipher")
    {
        out_cipher = value;
    }
    if(value_path == "out-mac")
    {
        out_mac = value;
    }
    if(value_path == "public-key")
    {
        public_key = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

Ssh::Session::Detail::IncomingSessions::IncomingSessions()
{
    yang_name = "incoming-sessions"; yang_parent_name = "detail";
}

Ssh::Session::Detail::IncomingSessions::~IncomingSessions()
{
}

bool Ssh::Session::Detail::IncomingSessions::has_data() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Detail::IncomingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ssh::Session::Detail::IncomingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-sessions";

    return path_buffer.str();

}

EntityPath Ssh::Session::Detail::IncomingSessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/detail/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh::Session::Detail::IncomingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-detail-info")
    {
        for(auto const & c : session_detail_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ssh::Session::Detail::IncomingSessions::SessionDetailInfo>();
        c->parent = this;
        session_detail_info.push_back(std::move(c));
        children[segment_path] = session_detail_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ssh::Session::Detail::IncomingSessions::get_children()
{
    for (auto const & c : session_detail_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ssh::Session::Detail::IncomingSessions::set_value(const std::string & value_path, std::string value)
{
}

Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::SessionDetailInfo()
    :
    	in_cipher{YType::enumeration, "in-cipher"},
	 in_mac{YType::enumeration, "in-mac"},
	 key_exchange{YType::enumeration, "key-exchange"},
	 out_cipher{YType::enumeration, "out-cipher"},
	 out_mac{YType::enumeration, "out-mac"},
	 public_key{YType::enumeration, "public-key"},
	 session_id{YType::uint32, "session-id"}
{
    yang_name = "session-detail-info"; yang_parent_name = "outgoing-connections";
}

Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::~SessionDetailInfo()
{
}

bool Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::has_data() const
{
    return in_cipher.is_set
	|| in_mac.is_set
	|| key_exchange.is_set
	|| out_cipher.is_set
	|| out_mac.is_set
	|| public_key.is_set
	|| session_id.is_set;
}

bool Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(in_cipher.operation)
	|| is_set(in_mac.operation)
	|| is_set(key_exchange.operation)
	|| is_set(out_cipher.operation)
	|| is_set(out_mac.operation)
	|| is_set(public_key.operation)
	|| is_set(session_id.operation);
}

std::string Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail-info";

    return path_buffer.str();

}

EntityPath Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/detail/outgoing-connections/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_cipher.is_set || is_set(in_cipher.operation)) leaf_name_data.push_back(in_cipher.get_name_leafdata());
    if (in_mac.is_set || is_set(in_mac.operation)) leaf_name_data.push_back(in_mac.get_name_leafdata());
    if (key_exchange.is_set || is_set(key_exchange.operation)) leaf_name_data.push_back(key_exchange.get_name_leafdata());
    if (out_cipher.is_set || is_set(out_cipher.operation)) leaf_name_data.push_back(out_cipher.get_name_leafdata());
    if (out_mac.is_set || is_set(out_mac.operation)) leaf_name_data.push_back(out_mac.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.operation)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::get_children()
{
    return children;
}

void Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-cipher")
    {
        in_cipher = value;
    }
    if(value_path == "in-mac")
    {
        in_mac = value;
    }
    if(value_path == "key-exchange")
    {
        key_exchange = value;
    }
    if(value_path == "out-cipher")
    {
        out_cipher = value;
    }
    if(value_path == "out-mac")
    {
        out_mac = value;
    }
    if(value_path == "public-key")
    {
        public_key = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

Ssh::Session::Detail::OutgoingConnections::OutgoingConnections()
{
    yang_name = "outgoing-connections"; yang_parent_name = "detail";
}

Ssh::Session::Detail::OutgoingConnections::~OutgoingConnections()
{
}

bool Ssh::Session::Detail::OutgoingConnections::has_data() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Detail::OutgoingConnections::has_operation() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ssh::Session::Detail::OutgoingConnections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-connections";

    return path_buffer.str();

}

EntityPath Ssh::Session::Detail::OutgoingConnections::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/detail/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh::Session::Detail::OutgoingConnections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-detail-info")
    {
        for(auto const & c : session_detail_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo>();
        c->parent = this;
        session_detail_info.push_back(std::move(c));
        children[segment_path] = session_detail_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ssh::Session::Detail::OutgoingConnections::get_children()
{
    for (auto const & c : session_detail_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ssh::Session::Detail::OutgoingConnections::set_value(const std::string & value_path, std::string value)
{
}

Ssh::Session::Detail::Detail()
    :
    incoming_sessions(std::make_unique<Ssh::Session::Detail::IncomingSessions>())
	,outgoing_connections(std::make_unique<Ssh::Session::Detail::OutgoingConnections>())
{
    incoming_sessions->parent = this;
    children["incoming-sessions"] = incoming_sessions.get();

    outgoing_connections->parent = this;
    children["outgoing-connections"] = outgoing_connections.get();

    yang_name = "detail"; yang_parent_name = "session";
}

Ssh::Session::Detail::~Detail()
{
}

bool Ssh::Session::Detail::has_data() const
{
    return (incoming_sessions !=  nullptr && incoming_sessions->has_data())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_data());
}

bool Ssh::Session::Detail::has_operation() const
{
    return is_set(operation)
	|| (incoming_sessions !=  nullptr && is_set(incoming_sessions->operation))
	|| (outgoing_connections !=  nullptr && is_set(outgoing_connections->operation));
}

std::string Ssh::Session::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath Ssh::Session::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh::Session::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "incoming-sessions")
    {
        if(incoming_sessions != nullptr)
        {
            children["incoming-sessions"] = incoming_sessions.get();
        }
        else
        {
            incoming_sessions = std::make_unique<Ssh::Session::Detail::IncomingSessions>();
            incoming_sessions->parent = this;
            children["incoming-sessions"] = incoming_sessions.get();
        }
        return children.at("incoming-sessions");
    }

    if(child_yang_name == "outgoing-connections")
    {
        if(outgoing_connections != nullptr)
        {
            children["outgoing-connections"] = outgoing_connections.get();
        }
        else
        {
            outgoing_connections = std::make_unique<Ssh::Session::Detail::OutgoingConnections>();
            outgoing_connections->parent = this;
            children["outgoing-connections"] = outgoing_connections.get();
        }
        return children.at("outgoing-connections");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ssh::Session::Detail::get_children()
{
    if(children.find("incoming-sessions") == children.end())
    {
        if(incoming_sessions != nullptr)
        {
            children["incoming-sessions"] = incoming_sessions.get();
        }
    }

    if(children.find("outgoing-connections") == children.end())
    {
        if(outgoing_connections != nullptr)
        {
            children["outgoing-connections"] = outgoing_connections.get();
        }
    }

    return children;
}

void Ssh::Session::Detail::set_value(const std::string & value_path, std::string value)
{
}

Ssh::Session::Session()
    :
    brief(std::make_unique<Ssh::Session::Brief>())
	,detail(std::make_unique<Ssh::Session::Detail>())
{
    brief->parent = this;
    children["brief"] = brief.get();

    detail->parent = this;
    children["detail"] = detail.get();

    yang_name = "session"; yang_parent_name = "ssh";
}

Ssh::Session::~Session()
{
}

bool Ssh::Session::has_data() const
{
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Ssh::Session::has_operation() const
{
    return is_set(operation)
	|| (brief !=  nullptr && is_set(brief->operation))
	|| (detail !=  nullptr && is_set(detail->operation));
}

std::string Ssh::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath Ssh::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ssh::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief")
    {
        if(brief != nullptr)
        {
            children["brief"] = brief.get();
        }
        else
        {
            brief = std::make_unique<Ssh::Session::Brief>();
            brief->parent = this;
            children["brief"] = brief.get();
        }
        return children.at("brief");
    }

    if(child_yang_name == "detail")
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
        else
        {
            detail = std::make_unique<Ssh::Session::Detail>();
            detail->parent = this;
            children["detail"] = detail.get();
        }
        return children.at("detail");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ssh::Session::get_children()
{
    if(children.find("brief") == children.end())
    {
        if(brief != nullptr)
        {
            children["brief"] = brief.get();
        }
    }

    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
    }

    return children;
}

void Ssh::Session::set_value(const std::string & value_path, std::string value)
{
}

Ssh::Ssh()
    :
    session(std::make_unique<Ssh::Session>())
{
    session->parent = this;
    children["session"] = session.get();

    yang_name = "ssh"; yang_parent_name = "Cisco-IOS-XR-crypto-ssh-oper";
}

Ssh::~Ssh()
{
}

bool Ssh::has_data() const
{
    return (session !=  nullptr && session->has_data());
}

bool Ssh::has_operation() const
{
    return is_set(operation)
	|| (session !=  nullptr && is_set(session->operation));
}

std::string Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh";

    return path_buffer.str();

}

EntityPath Ssh::get_entity_path(Entity* ancestor) const
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

Entity* Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            session = std::make_unique<Ssh::Session>();
            session->parent = this;
            children["session"] = session.get();
        }
        return children.at("session");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ssh::get_children()
{
    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
    }

    return children;
}

void Ssh::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Ssh::clone_ptr()
{
    return std::make_unique<Ssh>();
}

const Enum::Value KexNameEnum::diffie_hellman {0, "diffie-hellman"};
const Enum::Value KexNameEnum::password_authenticated {1, "password-authenticated"};

const Enum::Value HostkeyEnum::ssh_dss {0, "ssh-dss"};
const Enum::Value HostkeyEnum::ssh_rsa {1, "ssh-rsa"};

const Enum::Value VersionEnum::v2 {0, "v2"};
const Enum::Value VersionEnum::v1 {1, "v1"};

const Enum::Value ConnectionEnum::undefined {0, "undefined"};
const Enum::Value ConnectionEnum::shell {1, "shell"};
const Enum::Value ConnectionEnum::exec {2, "exec"};
const Enum::Value ConnectionEnum::scp {3, "scp"};
const Enum::Value ConnectionEnum::sftp_subsystem {4, "sftp-subsystem"};
const Enum::Value ConnectionEnum::netconf_subsystem {5, "netconf-subsystem"};

const Enum::Value StatesEnum::open {1, "open"};
const Enum::Value StatesEnum::version_ok {2, "version-ok"};
const Enum::Value StatesEnum::key_exchange_initialize {3, "key-exchange-initialize"};
const Enum::Value StatesEnum::key_exchange_dh {4, "key-exchange-dh"};
const Enum::Value StatesEnum::new_keys {5, "new-keys"};
const Enum::Value StatesEnum::authenticate_information {6, "authenticate-information"};
const Enum::Value StatesEnum::authenticated {7, "authenticated"};
const Enum::Value StatesEnum::channel_open {8, "channel-open"};
const Enum::Value StatesEnum::pty_open {9, "pty-open"};
const Enum::Value StatesEnum::session_open {10, "session-open"};
const Enum::Value StatesEnum::rekey {11, "rekey"};
const Enum::Value StatesEnum::suspended {12, "suspended"};
const Enum::Value StatesEnum::session_closed {13, "session-closed"};

const Enum::Value MacEnum::hmac_md5 {0, "hmac-md5"};
const Enum::Value MacEnum::hmac_sha1 {1, "hmac-sha1"};

const Enum::Value CipherEnum::aes128_cbc {0, "aes128-cbc"};
const Enum::Value CipherEnum::aes192_cbc {1, "aes192-cbc"};
const Enum::Value CipherEnum::aes256_cbc {2, "aes256-cbc"};
const Enum::Value CipherEnum::triple_des_cbc {3, "triple-des-cbc"};
const Enum::Value CipherEnum::aes128_ctr {4, "aes128-ctr"};
const Enum::Value CipherEnum::aes192_ctr {5, "aes192-ctr"};
const Enum::Value CipherEnum::aes256_ctr {6, "aes256-ctr"};

const Enum::Value AuthenEnum::password {0, "password"};
const Enum::Value AuthenEnum::rsa_public_key {1, "rsa-public-key"};
const Enum::Value AuthenEnum::keyboard_interactive {2, "keyboard-interactive"};


}
}

