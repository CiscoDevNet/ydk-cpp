
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_ssh_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_ssh_oper {

Ssh1::Ssh1()
    :
    kex(std::make_shared<Ssh1::Kex>())
{
    kex->parent = this;

    yang_name = "ssh1"; yang_parent_name = "Cisco-IOS-XR-crypto-ssh-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Ssh1::~Ssh1()
{
}

bool Ssh1::has_data() const
{
    if (is_presence_container) return true;
    return (kex !=  nullptr && kex->has_data());
}

bool Ssh1::has_operation() const
{
    return is_set(yfilter)
	|| (kex !=  nullptr && kex->has_operation());
}

std::string Ssh1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "kex")
    {
        if(kex == nullptr)
        {
            kex = std::make_shared<Ssh1::Kex>();
        }
        return kex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(kex != nullptr)
    {
        _children["kex"] = kex;
    }

    return _children;
}

void Ssh1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Ssh1::clone_ptr() const
{
    return std::make_shared<Ssh1>();
}

std::string Ssh1::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ssh1::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ssh1::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ssh1::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ssh1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kex")
        return true;
    return false;
}

Ssh1::Kex::Kex()
    :
    nodes(std::make_shared<Ssh1::Kex::Nodes>())
{
    nodes->parent = this;

    yang_name = "kex"; yang_parent_name = "ssh1"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh1::Kex::~Kex()
{
}

bool Ssh1::Kex::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool Ssh1::Kex::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Ssh1::Kex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh1/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh1::Kex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "kex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh1::Kex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Ssh1::Kex::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh1::Kex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void Ssh1::Kex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh1::Kex::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh1::Kex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Ssh1::Kex::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "kex"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh1::Kex::Nodes::~Nodes()
{
}

bool Ssh1::Kex::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh1::Kex::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh1::Kex::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh1/kex/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh1::Kex::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh1::Kex::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Ssh1::Kex::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh1::Kex::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh1::Kex::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh1::Kex::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh1::Kex::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Ssh1::Kex::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    incoming_sessions(std::make_shared<Ssh1::Kex::Nodes::Node::IncomingSessions>())
    , outgoing_connections(std::make_shared<Ssh1::Kex::Nodes::Node::OutgoingConnections>())
{
    incoming_sessions->parent = this;
    outgoing_connections->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh1::Kex::Nodes::Node::~Node()
{
}

bool Ssh1::Kex::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (incoming_sessions !=  nullptr && incoming_sessions->has_data())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_data());
}

bool Ssh1::Kex::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (incoming_sessions !=  nullptr && incoming_sessions->has_operation())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_operation());
}

std::string Ssh1::Kex::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh1/kex/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh1::Kex::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh1::Kex::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incoming-sessions")
    {
        if(incoming_sessions == nullptr)
        {
            incoming_sessions = std::make_shared<Ssh1::Kex::Nodes::Node::IncomingSessions>();
        }
        return incoming_sessions;
    }

    if(child_yang_name == "outgoing-connections")
    {
        if(outgoing_connections == nullptr)
        {
            outgoing_connections = std::make_shared<Ssh1::Kex::Nodes::Node::OutgoingConnections>();
        }
        return outgoing_connections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh1::Kex::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(incoming_sessions != nullptr)
    {
        _children["incoming-sessions"] = incoming_sessions;
    }

    if(outgoing_connections != nullptr)
    {
        _children["outgoing-connections"] = outgoing_connections;
    }

    return _children;
}

void Ssh1::Kex::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh1::Kex::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Ssh1::Kex::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-sessions" || name == "outgoing-connections" || name == "node-name")
        return true;
    return false;
}

Ssh1::Kex::Nodes::Node::IncomingSessions::IncomingSessions()
    :
    session_detail_info(this, {})
{

    yang_name = "incoming-sessions"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ssh1::Kex::Nodes::Node::IncomingSessions::~IncomingSessions()
{
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_detail_info.len(); index++)
    {
        if(session_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_detail_info.len(); index++)
    {
        if(session_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh1::Kex::Nodes::Node::IncomingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::Nodes::Node::IncomingSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh1::Kex::Nodes::Node::IncomingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detail-info")
    {
        auto ent_ = std::make_shared<Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo>();
        ent_->parent = this;
        session_detail_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh1::Kex::Nodes::Node::IncomingSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_detail_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh1::Kex::Nodes::Node::IncomingSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh1::Kex::Nodes::Node::IncomingSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detail-info")
        return true;
    return false;
}

Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::SessionDetailInfo()
    :
    session_id{YType::uint32, "session-id"},
    key_exchange{YType::enumeration, "key-exchange"},
    public_key{YType::enumeration, "public-key"},
    in_cipher{YType::enumeration, "in-cipher"},
    out_cipher{YType::enumeration, "out-cipher"},
    in_mac{YType::enumeration, "in-mac"},
    out_mac{YType::enumeration, "out-mac"},
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"}
        ,
    next_session(std::make_shared<Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::NextSession>())
{
    next_session->parent = this;

    yang_name = "session-detail-info"; yang_parent_name = "incoming-sessions"; is_top_level_class = false; has_list_ancestor = true; 
}

Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::~SessionDetailInfo()
{
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| key_exchange.is_set
	|| public_key.is_set
	|| in_cipher.is_set
	|| out_cipher.is_set
	|| in_mac.is_set
	|| out_mac.is_set
	|| start_time.is_set
	|| end_time.is_set
	|| (next_session !=  nullptr && next_session->has_data());
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(key_exchange.yfilter)
	|| ydk::is_set(public_key.yfilter)
	|| ydk::is_set(in_cipher.yfilter)
	|| ydk::is_set(out_cipher.yfilter)
	|| ydk::is_set(in_mac.yfilter)
	|| ydk::is_set(out_mac.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| (next_session !=  nullptr && next_session->has_operation());
}

std::string Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (key_exchange.is_set || is_set(key_exchange.yfilter)) leaf_name_data.push_back(key_exchange.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.yfilter)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (in_cipher.is_set || is_set(in_cipher.yfilter)) leaf_name_data.push_back(in_cipher.get_name_leafdata());
    if (out_cipher.is_set || is_set(out_cipher.yfilter)) leaf_name_data.push_back(out_cipher.get_name_leafdata());
    if (in_mac.is_set || is_set(in_mac.yfilter)) leaf_name_data.push_back(in_mac.get_name_leafdata());
    if (out_mac.is_set || is_set(out_mac.yfilter)) leaf_name_data.push_back(out_mac.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-session")
    {
        if(next_session == nullptr)
        {
            next_session = std::make_shared<Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::NextSession>();
        }
        return next_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_session != nullptr)
    {
        _children["next-session"] = next_session;
    }

    return _children;
}

void Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-exchange")
    {
        key_exchange = value;
        key_exchange.value_namespace = name_space;
        key_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "public-key")
    {
        public_key = value;
        public_key.value_namespace = name_space;
        public_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-cipher")
    {
        in_cipher = value;
        in_cipher.value_namespace = name_space;
        in_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-cipher")
    {
        out_cipher = value;
        out_cipher.value_namespace = name_space;
        out_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mac")
    {
        in_mac = value;
        in_mac.value_namespace = name_space;
        in_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac")
    {
        out_mac = value;
        out_mac.value_namespace = name_space;
        out_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "key-exchange")
    {
        key_exchange.yfilter = yfilter;
    }
    if(value_path == "public-key")
    {
        public_key.yfilter = yfilter;
    }
    if(value_path == "in-cipher")
    {
        in_cipher.yfilter = yfilter;
    }
    if(value_path == "out-cipher")
    {
        out_cipher.yfilter = yfilter;
    }
    if(value_path == "in-mac")
    {
        in_mac.yfilter = yfilter;
    }
    if(value_path == "out-mac")
    {
        out_mac.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-session" || name == "session-id" || name == "key-exchange" || name == "public-key" || name == "in-cipher" || name == "out-cipher" || name == "in-mac" || name == "out-mac" || name == "start-time" || name == "end-time")
        return true;
    return false;
}

Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::NextSession::NextSession()
{

    yang_name = "next-session"; yang_parent_name = "session-detail-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::NextSession::~NextSession()
{
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::NextSession::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::NextSession::has_operation() const
{
    return is_set(yfilter);
}

std::string Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::NextSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::NextSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::NextSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::NextSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::NextSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::NextSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::NextSession::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ssh1::Kex::Nodes::Node::OutgoingConnections::OutgoingConnections()
    :
    session_detail_info(this, {})
{

    yang_name = "outgoing-connections"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Ssh1::Kex::Nodes::Node::OutgoingConnections::~OutgoingConnections()
{
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_detail_info.len(); index++)
    {
        if(session_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::has_operation() const
{
    for (std::size_t index=0; index<session_detail_info.len(); index++)
    {
        if(session_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh1::Kex::Nodes::Node::OutgoingConnections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-connections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::Nodes::Node::OutgoingConnections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh1::Kex::Nodes::Node::OutgoingConnections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detail-info")
    {
        auto ent_ = std::make_shared<Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo>();
        ent_->parent = this;
        session_detail_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh1::Kex::Nodes::Node::OutgoingConnections::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_detail_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh1::Kex::Nodes::Node::OutgoingConnections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh1::Kex::Nodes::Node::OutgoingConnections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detail-info")
        return true;
    return false;
}

Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::SessionDetailInfo()
    :
    session_id{YType::uint32, "session-id"},
    key_exchange{YType::enumeration, "key-exchange"},
    public_key{YType::enumeration, "public-key"},
    in_cipher{YType::enumeration, "in-cipher"},
    out_cipher{YType::enumeration, "out-cipher"},
    in_mac{YType::enumeration, "in-mac"},
    out_mac{YType::enumeration, "out-mac"},
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"}
        ,
    next_session(std::make_shared<Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::NextSession>())
{
    next_session->parent = this;

    yang_name = "session-detail-info"; yang_parent_name = "outgoing-connections"; is_top_level_class = false; has_list_ancestor = true; 
}

Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::~SessionDetailInfo()
{
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| key_exchange.is_set
	|| public_key.is_set
	|| in_cipher.is_set
	|| out_cipher.is_set
	|| in_mac.is_set
	|| out_mac.is_set
	|| start_time.is_set
	|| end_time.is_set
	|| (next_session !=  nullptr && next_session->has_data());
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(key_exchange.yfilter)
	|| ydk::is_set(public_key.yfilter)
	|| ydk::is_set(in_cipher.yfilter)
	|| ydk::is_set(out_cipher.yfilter)
	|| ydk::is_set(in_mac.yfilter)
	|| ydk::is_set(out_mac.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| (next_session !=  nullptr && next_session->has_operation());
}

std::string Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (key_exchange.is_set || is_set(key_exchange.yfilter)) leaf_name_data.push_back(key_exchange.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.yfilter)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (in_cipher.is_set || is_set(in_cipher.yfilter)) leaf_name_data.push_back(in_cipher.get_name_leafdata());
    if (out_cipher.is_set || is_set(out_cipher.yfilter)) leaf_name_data.push_back(out_cipher.get_name_leafdata());
    if (in_mac.is_set || is_set(in_mac.yfilter)) leaf_name_data.push_back(in_mac.get_name_leafdata());
    if (out_mac.is_set || is_set(out_mac.yfilter)) leaf_name_data.push_back(out_mac.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-session")
    {
        if(next_session == nullptr)
        {
            next_session = std::make_shared<Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::NextSession>();
        }
        return next_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_session != nullptr)
    {
        _children["next-session"] = next_session;
    }

    return _children;
}

void Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-exchange")
    {
        key_exchange = value;
        key_exchange.value_namespace = name_space;
        key_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "public-key")
    {
        public_key = value;
        public_key.value_namespace = name_space;
        public_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-cipher")
    {
        in_cipher = value;
        in_cipher.value_namespace = name_space;
        in_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-cipher")
    {
        out_cipher = value;
        out_cipher.value_namespace = name_space;
        out_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mac")
    {
        in_mac = value;
        in_mac.value_namespace = name_space;
        in_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac")
    {
        out_mac = value;
        out_mac.value_namespace = name_space;
        out_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "key-exchange")
    {
        key_exchange.yfilter = yfilter;
    }
    if(value_path == "public-key")
    {
        public_key.yfilter = yfilter;
    }
    if(value_path == "in-cipher")
    {
        in_cipher.yfilter = yfilter;
    }
    if(value_path == "out-cipher")
    {
        out_cipher.yfilter = yfilter;
    }
    if(value_path == "in-mac")
    {
        in_mac.yfilter = yfilter;
    }
    if(value_path == "out-mac")
    {
        out_mac.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-session" || name == "session-id" || name == "key-exchange" || name == "public-key" || name == "in-cipher" || name == "out-cipher" || name == "in-mac" || name == "out-mac" || name == "start-time" || name == "end-time")
        return true;
    return false;
}

Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::NextSession::NextSession()
{

    yang_name = "next-session"; yang_parent_name = "session-detail-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::NextSession::~NextSession()
{
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::NextSession::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::NextSession::has_operation() const
{
    return is_set(yfilter);
}

std::string Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::NextSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::NextSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::NextSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::NextSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::NextSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::NextSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::NextSession::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ssh::Ssh()
    :
    session(std::make_shared<Ssh::Session>())
{
    session->parent = this;

    yang_name = "ssh"; yang_parent_name = "Cisco-IOS-XR-crypto-ssh-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Ssh::~Ssh()
{
}

bool Ssh::has_data() const
{
    if (is_presence_container) return true;
    return (session !=  nullptr && session->has_data());
}

bool Ssh::has_operation() const
{
    return is_set(yfilter)
	|| (session !=  nullptr && session->has_operation());
}

std::string Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Ssh::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    return _children;
}

void Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Ssh::clone_ptr() const
{
    return std::make_shared<Ssh>();
}

std::string Ssh::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ssh::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ssh::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ssh::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

Ssh::Session::Session()
    :
    rekey(std::make_shared<Ssh::Session::Rekey>())
    , history_detail(std::make_shared<Ssh::Session::HistoryDetail>())
    , brief(std::make_shared<Ssh::Session::Brief>())
    , history(std::make_shared<Ssh::Session::History>())
    , detail(std::make_shared<Ssh::Session::Detail>())
{
    rekey->parent = this;
    history_detail->parent = this;
    brief->parent = this;
    history->parent = this;
    detail->parent = this;

    yang_name = "session"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::~Session()
{
}

bool Ssh::Session::has_data() const
{
    if (is_presence_container) return true;
    return (rekey !=  nullptr && rekey->has_data())
	|| (history_detail !=  nullptr && history_detail->has_data())
	|| (brief !=  nullptr && brief->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Ssh::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (history_detail !=  nullptr && history_detail->has_operation())
	|| (brief !=  nullptr && brief->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Ssh::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Ssh::Session::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "history-detail")
    {
        if(history_detail == nullptr)
        {
            history_detail = std::make_shared<Ssh::Session::HistoryDetail>();
        }
        return history_detail;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Ssh::Session::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Ssh::Session::History>();
        }
        return history;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Ssh::Session::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rekey != nullptr)
    {
        _children["rekey"] = rekey;
    }

    if(history_detail != nullptr)
    {
        _children["history-detail"] = history_detail;
    }

    if(brief != nullptr)
    {
        _children["brief"] = brief;
    }

    if(history != nullptr)
    {
        _children["history"] = history;
    }

    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void Ssh::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rekey" || name == "history-detail" || name == "brief" || name == "history" || name == "detail")
        return true;
    return false;
}

Ssh::Session::Rekey::Rekey()
    :
    incoming_sessions(std::make_shared<Ssh::Session::Rekey::IncomingSessions>())
    , outgoing_connections(std::make_shared<Ssh::Session::Rekey::OutgoingConnections>())
{
    incoming_sessions->parent = this;
    outgoing_connections->parent = this;

    yang_name = "rekey"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Rekey::~Rekey()
{
}

bool Ssh::Session::Rekey::has_data() const
{
    if (is_presence_container) return true;
    return (incoming_sessions !=  nullptr && incoming_sessions->has_data())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_data());
}

bool Ssh::Session::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| (incoming_sessions !=  nullptr && incoming_sessions->has_operation())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_operation());
}

std::string Ssh::Session::Rekey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incoming-sessions")
    {
        if(incoming_sessions == nullptr)
        {
            incoming_sessions = std::make_shared<Ssh::Session::Rekey::IncomingSessions>();
        }
        return incoming_sessions;
    }

    if(child_yang_name == "outgoing-connections")
    {
        if(outgoing_connections == nullptr)
        {
            outgoing_connections = std::make_shared<Ssh::Session::Rekey::OutgoingConnections>();
        }
        return outgoing_connections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(incoming_sessions != nullptr)
    {
        _children["incoming-sessions"] = incoming_sessions;
    }

    if(outgoing_connections != nullptr)
    {
        _children["outgoing-connections"] = outgoing_connections;
    }

    return _children;
}

void Ssh::Session::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-sessions" || name == "outgoing-connections")
        return true;
    return false;
}

Ssh::Session::Rekey::IncomingSessions::IncomingSessions()
    :
    session_rekey_info(this, {})
{

    yang_name = "incoming-sessions"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Rekey::IncomingSessions::~IncomingSessions()
{
}

bool Ssh::Session::Rekey::IncomingSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_rekey_info.len(); index++)
    {
        if(session_rekey_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Rekey::IncomingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_rekey_info.len(); index++)
    {
        if(session_rekey_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Session::Rekey::IncomingSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/rekey/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Rekey::IncomingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Rekey::IncomingSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Rekey::IncomingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-rekey-info")
    {
        auto ent_ = std::make_shared<Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo>();
        ent_->parent = this;
        session_rekey_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Rekey::IncomingSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_rekey_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh::Session::Rekey::IncomingSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Rekey::IncomingSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Rekey::IncomingSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-rekey-info")
        return true;
    return false;
}

Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::SessionRekeyInfo()
    :
    session_id{YType::uint32, "session-id"},
    session_rekey_count{YType::uint32, "session-rekey-count"},
    time_to_rekey{YType::str, "time-to-rekey"},
    volume_to_rekey{YType::str, "volume-to-rekey"}
        ,
    next_session(std::make_shared<Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::NextSession>())
{
    next_session->parent = this;

    yang_name = "session-rekey-info"; yang_parent_name = "incoming-sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::~SessionRekeyInfo()
{
}

bool Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| session_rekey_count.is_set
	|| time_to_rekey.is_set
	|| volume_to_rekey.is_set
	|| (next_session !=  nullptr && next_session->has_data());
}

bool Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(session_rekey_count.yfilter)
	|| ydk::is_set(time_to_rekey.yfilter)
	|| ydk::is_set(volume_to_rekey.yfilter)
	|| (next_session !=  nullptr && next_session->has_operation());
}

std::string Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/rekey/incoming-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-rekey-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (session_rekey_count.is_set || is_set(session_rekey_count.yfilter)) leaf_name_data.push_back(session_rekey_count.get_name_leafdata());
    if (time_to_rekey.is_set || is_set(time_to_rekey.yfilter)) leaf_name_data.push_back(time_to_rekey.get_name_leafdata());
    if (volume_to_rekey.is_set || is_set(volume_to_rekey.yfilter)) leaf_name_data.push_back(volume_to_rekey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-session")
    {
        if(next_session == nullptr)
        {
            next_session = std::make_shared<Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::NextSession>();
        }
        return next_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_session != nullptr)
    {
        _children["next-session"] = next_session;
    }

    return _children;
}

void Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-rekey-count")
    {
        session_rekey_count = value;
        session_rekey_count.value_namespace = name_space;
        session_rekey_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-to-rekey")
    {
        time_to_rekey = value;
        time_to_rekey.value_namespace = name_space;
        time_to_rekey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "volume-to-rekey")
    {
        volume_to_rekey = value;
        volume_to_rekey.value_namespace = name_space;
        volume_to_rekey.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "session-rekey-count")
    {
        session_rekey_count.yfilter = yfilter;
    }
    if(value_path == "time-to-rekey")
    {
        time_to_rekey.yfilter = yfilter;
    }
    if(value_path == "volume-to-rekey")
    {
        volume_to_rekey.yfilter = yfilter;
    }
}

bool Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-session" || name == "session-id" || name == "session-rekey-count" || name == "time-to-rekey" || name == "volume-to-rekey")
        return true;
    return false;
}

Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::NextSession::NextSession()
{

    yang_name = "next-session"; yang_parent_name = "session-rekey-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::NextSession::~NextSession()
{
}

bool Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::NextSession::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::NextSession::has_operation() const
{
    return is_set(yfilter);
}

std::string Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::NextSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/rekey/incoming-sessions/session-rekey-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::NextSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::NextSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::NextSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::NextSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::NextSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::NextSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::NextSession::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ssh::Session::Rekey::OutgoingConnections::OutgoingConnections()
    :
    session_rekey_info(this, {})
{

    yang_name = "outgoing-connections"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Rekey::OutgoingConnections::~OutgoingConnections()
{
}

bool Ssh::Session::Rekey::OutgoingConnections::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_rekey_info.len(); index++)
    {
        if(session_rekey_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Rekey::OutgoingConnections::has_operation() const
{
    for (std::size_t index=0; index<session_rekey_info.len(); index++)
    {
        if(session_rekey_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Session::Rekey::OutgoingConnections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/rekey/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Rekey::OutgoingConnections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-connections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Rekey::OutgoingConnections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Rekey::OutgoingConnections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-rekey-info")
    {
        auto ent_ = std::make_shared<Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo>();
        ent_->parent = this;
        session_rekey_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Rekey::OutgoingConnections::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_rekey_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh::Session::Rekey::OutgoingConnections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Rekey::OutgoingConnections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Rekey::OutgoingConnections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-rekey-info")
        return true;
    return false;
}

Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::SessionRekeyInfo()
    :
    session_id{YType::uint32, "session-id"},
    session_rekey_count{YType::uint32, "session-rekey-count"},
    time_to_rekey{YType::str, "time-to-rekey"},
    volume_to_rekey{YType::str, "volume-to-rekey"}
        ,
    next_session(std::make_shared<Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::NextSession>())
{
    next_session->parent = this;

    yang_name = "session-rekey-info"; yang_parent_name = "outgoing-connections"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::~SessionRekeyInfo()
{
}

bool Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| session_rekey_count.is_set
	|| time_to_rekey.is_set
	|| volume_to_rekey.is_set
	|| (next_session !=  nullptr && next_session->has_data());
}

bool Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(session_rekey_count.yfilter)
	|| ydk::is_set(time_to_rekey.yfilter)
	|| ydk::is_set(volume_to_rekey.yfilter)
	|| (next_session !=  nullptr && next_session->has_operation());
}

std::string Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/rekey/outgoing-connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-rekey-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (session_rekey_count.is_set || is_set(session_rekey_count.yfilter)) leaf_name_data.push_back(session_rekey_count.get_name_leafdata());
    if (time_to_rekey.is_set || is_set(time_to_rekey.yfilter)) leaf_name_data.push_back(time_to_rekey.get_name_leafdata());
    if (volume_to_rekey.is_set || is_set(volume_to_rekey.yfilter)) leaf_name_data.push_back(volume_to_rekey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-session")
    {
        if(next_session == nullptr)
        {
            next_session = std::make_shared<Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::NextSession>();
        }
        return next_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_session != nullptr)
    {
        _children["next-session"] = next_session;
    }

    return _children;
}

void Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-rekey-count")
    {
        session_rekey_count = value;
        session_rekey_count.value_namespace = name_space;
        session_rekey_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-to-rekey")
    {
        time_to_rekey = value;
        time_to_rekey.value_namespace = name_space;
        time_to_rekey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "volume-to-rekey")
    {
        volume_to_rekey = value;
        volume_to_rekey.value_namespace = name_space;
        volume_to_rekey.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "session-rekey-count")
    {
        session_rekey_count.yfilter = yfilter;
    }
    if(value_path == "time-to-rekey")
    {
        time_to_rekey.yfilter = yfilter;
    }
    if(value_path == "volume-to-rekey")
    {
        volume_to_rekey.yfilter = yfilter;
    }
}

bool Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-session" || name == "session-id" || name == "session-rekey-count" || name == "time-to-rekey" || name == "volume-to-rekey")
        return true;
    return false;
}

Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::NextSession::NextSession()
{

    yang_name = "next-session"; yang_parent_name = "session-rekey-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::NextSession::~NextSession()
{
}

bool Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::NextSession::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::NextSession::has_operation() const
{
    return is_set(yfilter);
}

std::string Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::NextSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/rekey/outgoing-connections/session-rekey-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::NextSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::NextSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::NextSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::NextSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::NextSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::NextSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::NextSession::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ssh::Session::HistoryDetail::HistoryDetail()
    :
    incoming_sessions(std::make_shared<Ssh::Session::HistoryDetail::IncomingSessions>())
    , outgoing_connections(std::make_shared<Ssh::Session::HistoryDetail::OutgoingConnections>())
{
    incoming_sessions->parent = this;
    outgoing_connections->parent = this;

    yang_name = "history-detail"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::HistoryDetail::~HistoryDetail()
{
}

bool Ssh::Session::HistoryDetail::has_data() const
{
    if (is_presence_container) return true;
    return (incoming_sessions !=  nullptr && incoming_sessions->has_data())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_data());
}

bool Ssh::Session::HistoryDetail::has_operation() const
{
    return is_set(yfilter)
	|| (incoming_sessions !=  nullptr && incoming_sessions->has_operation())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_operation());
}

std::string Ssh::Session::HistoryDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::HistoryDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::HistoryDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::HistoryDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incoming-sessions")
    {
        if(incoming_sessions == nullptr)
        {
            incoming_sessions = std::make_shared<Ssh::Session::HistoryDetail::IncomingSessions>();
        }
        return incoming_sessions;
    }

    if(child_yang_name == "outgoing-connections")
    {
        if(outgoing_connections == nullptr)
        {
            outgoing_connections = std::make_shared<Ssh::Session::HistoryDetail::OutgoingConnections>();
        }
        return outgoing_connections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::HistoryDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(incoming_sessions != nullptr)
    {
        _children["incoming-sessions"] = incoming_sessions;
    }

    if(outgoing_connections != nullptr)
    {
        _children["outgoing-connections"] = outgoing_connections;
    }

    return _children;
}

void Ssh::Session::HistoryDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::HistoryDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::HistoryDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-sessions" || name == "outgoing-connections")
        return true;
    return false;
}

Ssh::Session::HistoryDetail::IncomingSessions::IncomingSessions()
    :
    session_detail_info(this, {})
{

    yang_name = "incoming-sessions"; yang_parent_name = "history-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::HistoryDetail::IncomingSessions::~IncomingSessions()
{
}

bool Ssh::Session::HistoryDetail::IncomingSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_detail_info.len(); index++)
    {
        if(session_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::HistoryDetail::IncomingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_detail_info.len(); index++)
    {
        if(session_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Session::HistoryDetail::IncomingSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/history-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::HistoryDetail::IncomingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::HistoryDetail::IncomingSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::HistoryDetail::IncomingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detail-info")
    {
        auto ent_ = std::make_shared<Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo>();
        ent_->parent = this;
        session_detail_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::HistoryDetail::IncomingSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_detail_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh::Session::HistoryDetail::IncomingSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::HistoryDetail::IncomingSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::HistoryDetail::IncomingSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detail-info")
        return true;
    return false;
}

Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::SessionDetailInfo()
    :
    session_id{YType::uint32, "session-id"},
    key_exchange{YType::enumeration, "key-exchange"},
    public_key{YType::enumeration, "public-key"},
    in_cipher{YType::enumeration, "in-cipher"},
    out_cipher{YType::enumeration, "out-cipher"},
    in_mac{YType::enumeration, "in-mac"},
    out_mac{YType::enumeration, "out-mac"},
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"}
        ,
    next_session(std::make_shared<Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::NextSession>())
{
    next_session->parent = this;

    yang_name = "session-detail-info"; yang_parent_name = "incoming-sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::~SessionDetailInfo()
{
}

bool Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| key_exchange.is_set
	|| public_key.is_set
	|| in_cipher.is_set
	|| out_cipher.is_set
	|| in_mac.is_set
	|| out_mac.is_set
	|| start_time.is_set
	|| end_time.is_set
	|| (next_session !=  nullptr && next_session->has_data());
}

bool Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(key_exchange.yfilter)
	|| ydk::is_set(public_key.yfilter)
	|| ydk::is_set(in_cipher.yfilter)
	|| ydk::is_set(out_cipher.yfilter)
	|| ydk::is_set(in_mac.yfilter)
	|| ydk::is_set(out_mac.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| (next_session !=  nullptr && next_session->has_operation());
}

std::string Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/history-detail/incoming-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (key_exchange.is_set || is_set(key_exchange.yfilter)) leaf_name_data.push_back(key_exchange.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.yfilter)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (in_cipher.is_set || is_set(in_cipher.yfilter)) leaf_name_data.push_back(in_cipher.get_name_leafdata());
    if (out_cipher.is_set || is_set(out_cipher.yfilter)) leaf_name_data.push_back(out_cipher.get_name_leafdata());
    if (in_mac.is_set || is_set(in_mac.yfilter)) leaf_name_data.push_back(in_mac.get_name_leafdata());
    if (out_mac.is_set || is_set(out_mac.yfilter)) leaf_name_data.push_back(out_mac.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-session")
    {
        if(next_session == nullptr)
        {
            next_session = std::make_shared<Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::NextSession>();
        }
        return next_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_session != nullptr)
    {
        _children["next-session"] = next_session;
    }

    return _children;
}

void Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-exchange")
    {
        key_exchange = value;
        key_exchange.value_namespace = name_space;
        key_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "public-key")
    {
        public_key = value;
        public_key.value_namespace = name_space;
        public_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-cipher")
    {
        in_cipher = value;
        in_cipher.value_namespace = name_space;
        in_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-cipher")
    {
        out_cipher = value;
        out_cipher.value_namespace = name_space;
        out_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mac")
    {
        in_mac = value;
        in_mac.value_namespace = name_space;
        in_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac")
    {
        out_mac = value;
        out_mac.value_namespace = name_space;
        out_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "key-exchange")
    {
        key_exchange.yfilter = yfilter;
    }
    if(value_path == "public-key")
    {
        public_key.yfilter = yfilter;
    }
    if(value_path == "in-cipher")
    {
        in_cipher.yfilter = yfilter;
    }
    if(value_path == "out-cipher")
    {
        out_cipher.yfilter = yfilter;
    }
    if(value_path == "in-mac")
    {
        in_mac.yfilter = yfilter;
    }
    if(value_path == "out-mac")
    {
        out_mac.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
}

bool Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-session" || name == "session-id" || name == "key-exchange" || name == "public-key" || name == "in-cipher" || name == "out-cipher" || name == "in-mac" || name == "out-mac" || name == "start-time" || name == "end-time")
        return true;
    return false;
}

Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::NextSession::NextSession()
{

    yang_name = "next-session"; yang_parent_name = "session-detail-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::NextSession::~NextSession()
{
}

bool Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::NextSession::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::NextSession::has_operation() const
{
    return is_set(yfilter);
}

std::string Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::NextSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/history-detail/incoming-sessions/session-detail-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::NextSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::NextSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::NextSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::NextSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::NextSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::NextSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::HistoryDetail::IncomingSessions::SessionDetailInfo::NextSession::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ssh::Session::HistoryDetail::OutgoingConnections::OutgoingConnections()
    :
    session_detail_info(this, {})
{

    yang_name = "outgoing-connections"; yang_parent_name = "history-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::HistoryDetail::OutgoingConnections::~OutgoingConnections()
{
}

bool Ssh::Session::HistoryDetail::OutgoingConnections::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_detail_info.len(); index++)
    {
        if(session_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::HistoryDetail::OutgoingConnections::has_operation() const
{
    for (std::size_t index=0; index<session_detail_info.len(); index++)
    {
        if(session_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Session::HistoryDetail::OutgoingConnections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/history-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::HistoryDetail::OutgoingConnections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-connections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::HistoryDetail::OutgoingConnections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::HistoryDetail::OutgoingConnections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detail-info")
    {
        auto ent_ = std::make_shared<Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo>();
        ent_->parent = this;
        session_detail_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::HistoryDetail::OutgoingConnections::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_detail_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh::Session::HistoryDetail::OutgoingConnections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::HistoryDetail::OutgoingConnections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::HistoryDetail::OutgoingConnections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detail-info")
        return true;
    return false;
}

Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::SessionDetailInfo()
    :
    session_id{YType::uint32, "session-id"},
    key_exchange{YType::enumeration, "key-exchange"},
    public_key{YType::enumeration, "public-key"},
    in_cipher{YType::enumeration, "in-cipher"},
    out_cipher{YType::enumeration, "out-cipher"},
    in_mac{YType::enumeration, "in-mac"},
    out_mac{YType::enumeration, "out-mac"},
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"}
        ,
    next_session(std::make_shared<Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::NextSession>())
{
    next_session->parent = this;

    yang_name = "session-detail-info"; yang_parent_name = "outgoing-connections"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::~SessionDetailInfo()
{
}

bool Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| key_exchange.is_set
	|| public_key.is_set
	|| in_cipher.is_set
	|| out_cipher.is_set
	|| in_mac.is_set
	|| out_mac.is_set
	|| start_time.is_set
	|| end_time.is_set
	|| (next_session !=  nullptr && next_session->has_data());
}

bool Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(key_exchange.yfilter)
	|| ydk::is_set(public_key.yfilter)
	|| ydk::is_set(in_cipher.yfilter)
	|| ydk::is_set(out_cipher.yfilter)
	|| ydk::is_set(in_mac.yfilter)
	|| ydk::is_set(out_mac.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| (next_session !=  nullptr && next_session->has_operation());
}

std::string Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/history-detail/outgoing-connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (key_exchange.is_set || is_set(key_exchange.yfilter)) leaf_name_data.push_back(key_exchange.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.yfilter)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (in_cipher.is_set || is_set(in_cipher.yfilter)) leaf_name_data.push_back(in_cipher.get_name_leafdata());
    if (out_cipher.is_set || is_set(out_cipher.yfilter)) leaf_name_data.push_back(out_cipher.get_name_leafdata());
    if (in_mac.is_set || is_set(in_mac.yfilter)) leaf_name_data.push_back(in_mac.get_name_leafdata());
    if (out_mac.is_set || is_set(out_mac.yfilter)) leaf_name_data.push_back(out_mac.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-session")
    {
        if(next_session == nullptr)
        {
            next_session = std::make_shared<Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::NextSession>();
        }
        return next_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_session != nullptr)
    {
        _children["next-session"] = next_session;
    }

    return _children;
}

void Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-exchange")
    {
        key_exchange = value;
        key_exchange.value_namespace = name_space;
        key_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "public-key")
    {
        public_key = value;
        public_key.value_namespace = name_space;
        public_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-cipher")
    {
        in_cipher = value;
        in_cipher.value_namespace = name_space;
        in_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-cipher")
    {
        out_cipher = value;
        out_cipher.value_namespace = name_space;
        out_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mac")
    {
        in_mac = value;
        in_mac.value_namespace = name_space;
        in_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac")
    {
        out_mac = value;
        out_mac.value_namespace = name_space;
        out_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "key-exchange")
    {
        key_exchange.yfilter = yfilter;
    }
    if(value_path == "public-key")
    {
        public_key.yfilter = yfilter;
    }
    if(value_path == "in-cipher")
    {
        in_cipher.yfilter = yfilter;
    }
    if(value_path == "out-cipher")
    {
        out_cipher.yfilter = yfilter;
    }
    if(value_path == "in-mac")
    {
        in_mac.yfilter = yfilter;
    }
    if(value_path == "out-mac")
    {
        out_mac.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
}

bool Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-session" || name == "session-id" || name == "key-exchange" || name == "public-key" || name == "in-cipher" || name == "out-cipher" || name == "in-mac" || name == "out-mac" || name == "start-time" || name == "end-time")
        return true;
    return false;
}

Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::NextSession::NextSession()
{

    yang_name = "next-session"; yang_parent_name = "session-detail-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::NextSession::~NextSession()
{
}

bool Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::NextSession::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::NextSession::has_operation() const
{
    return is_set(yfilter);
}

std::string Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::NextSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/history-detail/outgoing-connections/session-detail-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::NextSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::NextSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::NextSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::NextSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::NextSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::NextSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::HistoryDetail::OutgoingConnections::SessionDetailInfo::NextSession::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ssh::Session::Brief::Brief()
    :
    incoming_sessions(std::make_shared<Ssh::Session::Brief::IncomingSessions>())
    , outgoing_sessions(std::make_shared<Ssh::Session::Brief::OutgoingSessions>())
{
    incoming_sessions->parent = this;
    outgoing_sessions->parent = this;

    yang_name = "brief"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Brief::~Brief()
{
}

bool Ssh::Session::Brief::has_data() const
{
    if (is_presence_container) return true;
    return (incoming_sessions !=  nullptr && incoming_sessions->has_data())
	|| (outgoing_sessions !=  nullptr && outgoing_sessions->has_data());
}

bool Ssh::Session::Brief::has_operation() const
{
    return is_set(yfilter)
	|| (incoming_sessions !=  nullptr && incoming_sessions->has_operation())
	|| (outgoing_sessions !=  nullptr && outgoing_sessions->has_operation());
}

std::string Ssh::Session::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incoming-sessions")
    {
        if(incoming_sessions == nullptr)
        {
            incoming_sessions = std::make_shared<Ssh::Session::Brief::IncomingSessions>();
        }
        return incoming_sessions;
    }

    if(child_yang_name == "outgoing-sessions")
    {
        if(outgoing_sessions == nullptr)
        {
            outgoing_sessions = std::make_shared<Ssh::Session::Brief::OutgoingSessions>();
        }
        return outgoing_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(incoming_sessions != nullptr)
    {
        _children["incoming-sessions"] = incoming_sessions;
    }

    if(outgoing_sessions != nullptr)
    {
        _children["outgoing-sessions"] = outgoing_sessions;
    }

    return _children;
}

void Ssh::Session::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-sessions" || name == "outgoing-sessions")
        return true;
    return false;
}

Ssh::Session::Brief::IncomingSessions::IncomingSessions()
    :
    session_brief_info(this, {})
{

    yang_name = "incoming-sessions"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Brief::IncomingSessions::~IncomingSessions()
{
}

bool Ssh::Session::Brief::IncomingSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_brief_info.len(); index++)
    {
        if(session_brief_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Brief::IncomingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_brief_info.len(); index++)
    {
        if(session_brief_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Session::Brief::IncomingSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Brief::IncomingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Brief::IncomingSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Brief::IncomingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-brief-info")
    {
        auto ent_ = std::make_shared<Ssh::Session::Brief::IncomingSessions::SessionBriefInfo>();
        ent_->parent = this;
        session_brief_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Brief::IncomingSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_brief_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh::Session::Brief::IncomingSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Brief::IncomingSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Brief::IncomingSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-brief-info")
        return true;
    return false;
}

Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::SessionBriefInfo()
    :
    session_id{YType::uint32, "session-id"},
    node_name{YType::str, "node-name"},
    session_state{YType::enumeration, "session-state"},
    user_id{YType::str, "user-id"},
    host_address{YType::str, "host-address"},
    version{YType::enumeration, "version"},
    authentication_type{YType::enumeration, "authentication-type"}
        ,
    next_session(std::make_shared<Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::NextSession>())
    , mc_info(this, {})
{
    next_session->parent = this;

    yang_name = "session-brief-info"; yang_parent_name = "incoming-sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::~SessionBriefInfo()
{
}

bool Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mc_info.len(); index++)
    {
        if(mc_info[index]->has_data())
            return true;
    }
    return session_id.is_set
	|| node_name.is_set
	|| session_state.is_set
	|| user_id.is_set
	|| host_address.is_set
	|| version.is_set
	|| authentication_type.is_set
	|| (next_session !=  nullptr && next_session->has_data());
}

bool Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::has_operation() const
{
    for (std::size_t index=0; index<mc_info.len(); index++)
    {
        if(mc_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(user_id.yfilter)
	|| ydk::is_set(host_address.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(authentication_type.yfilter)
	|| (next_session !=  nullptr && next_session->has_operation());
}

std::string Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/incoming-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-brief-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.yfilter)) leaf_name_data.push_back(user_id.get_name_leafdata());
    if (host_address.is_set || is_set(host_address.yfilter)) leaf_name_data.push_back(host_address.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (authentication_type.is_set || is_set(authentication_type.yfilter)) leaf_name_data.push_back(authentication_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-session")
    {
        if(next_session == nullptr)
        {
            next_session = std::make_shared<Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::NextSession>();
        }
        return next_session;
    }

    if(child_yang_name == "mc-info")
    {
        auto ent_ = std::make_shared<Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::McInfo>();
        ent_->parent = this;
        mc_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_session != nullptr)
    {
        _children["next-session"] = next_session;
    }

    count_ = 0;
    for (auto ent_ : mc_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-id")
    {
        user_id = value;
        user_id.value_namespace = name_space;
        user_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-address")
    {
        host_address = value;
        host_address.value_namespace = name_space;
        host_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-type")
    {
        authentication_type = value;
        authentication_type.value_namespace = name_space;
        authentication_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "user-id")
    {
        user_id.yfilter = yfilter;
    }
    if(value_path == "host-address")
    {
        host_address.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "authentication-type")
    {
        authentication_type.yfilter = yfilter;
    }
}

bool Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-session" || name == "mc-info" || name == "session-id" || name == "node-name" || name == "session-state" || name == "user-id" || name == "host-address" || name == "version" || name == "authentication-type")
        return true;
    return false;
}

Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::NextSession::NextSession()
{

    yang_name = "next-session"; yang_parent_name = "session-brief-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::NextSession::~NextSession()
{
}

bool Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::NextSession::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::NextSession::has_operation() const
{
    return is_set(yfilter);
}

std::string Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::NextSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/incoming-sessions/session-brief-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::NextSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::NextSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::NextSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::NextSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::NextSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::NextSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::NextSession::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::McInfo::McInfo()
    :
    channel_id{YType::uint32, "channel-id"},
    connection_type{YType::enumeration, "connection-type"},
    vty_line_number{YType::uint32, "vty-line-number"},
    vty_assigned{YType::boolean, "vty-assigned"}
{

    yang_name = "mc-info"; yang_parent_name = "session-brief-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::McInfo::~McInfo()
{
}

bool Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::McInfo::has_data() const
{
    if (is_presence_container) return true;
    return channel_id.is_set
	|| connection_type.is_set
	|| vty_line_number.is_set
	|| vty_assigned.is_set;
}

bool Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::McInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(channel_id.yfilter)
	|| ydk::is_set(connection_type.yfilter)
	|| ydk::is_set(vty_line_number.yfilter)
	|| ydk::is_set(vty_assigned.yfilter);
}

std::string Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::McInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/incoming-sessions/session-brief-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::McInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mc-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::McInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_id.is_set || is_set(channel_id.yfilter)) leaf_name_data.push_back(channel_id.get_name_leafdata());
    if (connection_type.is_set || is_set(connection_type.yfilter)) leaf_name_data.push_back(connection_type.get_name_leafdata());
    if (vty_line_number.is_set || is_set(vty_line_number.yfilter)) leaf_name_data.push_back(vty_line_number.get_name_leafdata());
    if (vty_assigned.is_set || is_set(vty_assigned.yfilter)) leaf_name_data.push_back(vty_assigned.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::McInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::McInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::McInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channel-id")
    {
        channel_id = value;
        channel_id.value_namespace = name_space;
        channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-type")
    {
        connection_type = value;
        connection_type.value_namespace = name_space;
        connection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vty-line-number")
    {
        vty_line_number = value;
        vty_line_number.value_namespace = name_space;
        vty_line_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vty-assigned")
    {
        vty_assigned = value;
        vty_assigned.value_namespace = name_space;
        vty_assigned.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::McInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channel-id")
    {
        channel_id.yfilter = yfilter;
    }
    if(value_path == "connection-type")
    {
        connection_type.yfilter = yfilter;
    }
    if(value_path == "vty-line-number")
    {
        vty_line_number.yfilter = yfilter;
    }
    if(value_path == "vty-assigned")
    {
        vty_assigned.yfilter = yfilter;
    }
}

bool Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::McInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel-id" || name == "connection-type" || name == "vty-line-number" || name == "vty-assigned")
        return true;
    return false;
}

Ssh::Session::Brief::OutgoingSessions::OutgoingSessions()
    :
    session_brief_info(this, {})
{

    yang_name = "outgoing-sessions"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Brief::OutgoingSessions::~OutgoingSessions()
{
}

bool Ssh::Session::Brief::OutgoingSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_brief_info.len(); index++)
    {
        if(session_brief_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Brief::OutgoingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_brief_info.len(); index++)
    {
        if(session_brief_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Session::Brief::OutgoingSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Brief::OutgoingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Brief::OutgoingSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Brief::OutgoingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-brief-info")
    {
        auto ent_ = std::make_shared<Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo>();
        ent_->parent = this;
        session_brief_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Brief::OutgoingSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_brief_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh::Session::Brief::OutgoingSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Brief::OutgoingSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Brief::OutgoingSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-brief-info")
        return true;
    return false;
}

Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::SessionBriefInfo()
    :
    session_id{YType::uint32, "session-id"},
    node_name{YType::str, "node-name"},
    session_state{YType::enumeration, "session-state"},
    user_id{YType::str, "user-id"},
    host_address{YType::str, "host-address"},
    version{YType::enumeration, "version"},
    authentication_type{YType::enumeration, "authentication-type"}
        ,
    next_session(std::make_shared<Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::NextSession>())
    , mc_info(this, {})
{
    next_session->parent = this;

    yang_name = "session-brief-info"; yang_parent_name = "outgoing-sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::~SessionBriefInfo()
{
}

bool Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mc_info.len(); index++)
    {
        if(mc_info[index]->has_data())
            return true;
    }
    return session_id.is_set
	|| node_name.is_set
	|| session_state.is_set
	|| user_id.is_set
	|| host_address.is_set
	|| version.is_set
	|| authentication_type.is_set
	|| (next_session !=  nullptr && next_session->has_data());
}

bool Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::has_operation() const
{
    for (std::size_t index=0; index<mc_info.len(); index++)
    {
        if(mc_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(user_id.yfilter)
	|| ydk::is_set(host_address.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(authentication_type.yfilter)
	|| (next_session !=  nullptr && next_session->has_operation());
}

std::string Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/outgoing-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-brief-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.yfilter)) leaf_name_data.push_back(user_id.get_name_leafdata());
    if (host_address.is_set || is_set(host_address.yfilter)) leaf_name_data.push_back(host_address.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (authentication_type.is_set || is_set(authentication_type.yfilter)) leaf_name_data.push_back(authentication_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-session")
    {
        if(next_session == nullptr)
        {
            next_session = std::make_shared<Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::NextSession>();
        }
        return next_session;
    }

    if(child_yang_name == "mc-info")
    {
        auto ent_ = std::make_shared<Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::McInfo>();
        ent_->parent = this;
        mc_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_session != nullptr)
    {
        _children["next-session"] = next_session;
    }

    count_ = 0;
    for (auto ent_ : mc_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-id")
    {
        user_id = value;
        user_id.value_namespace = name_space;
        user_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-address")
    {
        host_address = value;
        host_address.value_namespace = name_space;
        host_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-type")
    {
        authentication_type = value;
        authentication_type.value_namespace = name_space;
        authentication_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "user-id")
    {
        user_id.yfilter = yfilter;
    }
    if(value_path == "host-address")
    {
        host_address.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "authentication-type")
    {
        authentication_type.yfilter = yfilter;
    }
}

bool Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-session" || name == "mc-info" || name == "session-id" || name == "node-name" || name == "session-state" || name == "user-id" || name == "host-address" || name == "version" || name == "authentication-type")
        return true;
    return false;
}

Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::NextSession::NextSession()
{

    yang_name = "next-session"; yang_parent_name = "session-brief-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::NextSession::~NextSession()
{
}

bool Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::NextSession::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::NextSession::has_operation() const
{
    return is_set(yfilter);
}

std::string Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::NextSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/outgoing-sessions/session-brief-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::NextSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::NextSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::NextSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::NextSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::NextSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::NextSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::NextSession::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::McInfo::McInfo()
    :
    channel_id{YType::uint32, "channel-id"},
    connection_type{YType::enumeration, "connection-type"},
    vty_line_number{YType::uint32, "vty-line-number"},
    vty_assigned{YType::boolean, "vty-assigned"}
{

    yang_name = "mc-info"; yang_parent_name = "session-brief-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::McInfo::~McInfo()
{
}

bool Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::McInfo::has_data() const
{
    if (is_presence_container) return true;
    return channel_id.is_set
	|| connection_type.is_set
	|| vty_line_number.is_set
	|| vty_assigned.is_set;
}

bool Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::McInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(channel_id.yfilter)
	|| ydk::is_set(connection_type.yfilter)
	|| ydk::is_set(vty_line_number.yfilter)
	|| ydk::is_set(vty_assigned.yfilter);
}

std::string Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::McInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/outgoing-sessions/session-brief-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::McInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mc-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::McInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_id.is_set || is_set(channel_id.yfilter)) leaf_name_data.push_back(channel_id.get_name_leafdata());
    if (connection_type.is_set || is_set(connection_type.yfilter)) leaf_name_data.push_back(connection_type.get_name_leafdata());
    if (vty_line_number.is_set || is_set(vty_line_number.yfilter)) leaf_name_data.push_back(vty_line_number.get_name_leafdata());
    if (vty_assigned.is_set || is_set(vty_assigned.yfilter)) leaf_name_data.push_back(vty_assigned.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::McInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::McInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::McInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channel-id")
    {
        channel_id = value;
        channel_id.value_namespace = name_space;
        channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-type")
    {
        connection_type = value;
        connection_type.value_namespace = name_space;
        connection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vty-line-number")
    {
        vty_line_number = value;
        vty_line_number.value_namespace = name_space;
        vty_line_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vty-assigned")
    {
        vty_assigned = value;
        vty_assigned.value_namespace = name_space;
        vty_assigned.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::McInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channel-id")
    {
        channel_id.yfilter = yfilter;
    }
    if(value_path == "connection-type")
    {
        connection_type.yfilter = yfilter;
    }
    if(value_path == "vty-line-number")
    {
        vty_line_number.yfilter = yfilter;
    }
    if(value_path == "vty-assigned")
    {
        vty_assigned.yfilter = yfilter;
    }
}

bool Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::McInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel-id" || name == "connection-type" || name == "vty-line-number" || name == "vty-assigned")
        return true;
    return false;
}

Ssh::Session::History::History()
    :
    incoming_sessions(std::make_shared<Ssh::Session::History::IncomingSessions>())
{
    incoming_sessions->parent = this;

    yang_name = "history"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::History::~History()
{
}

bool Ssh::Session::History::has_data() const
{
    if (is_presence_container) return true;
    return (incoming_sessions !=  nullptr && incoming_sessions->has_data());
}

bool Ssh::Session::History::has_operation() const
{
    return is_set(yfilter)
	|| (incoming_sessions !=  nullptr && incoming_sessions->has_operation());
}

std::string Ssh::Session::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incoming-sessions")
    {
        if(incoming_sessions == nullptr)
        {
            incoming_sessions = std::make_shared<Ssh::Session::History::IncomingSessions>();
        }
        return incoming_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(incoming_sessions != nullptr)
    {
        _children["incoming-sessions"] = incoming_sessions;
    }

    return _children;
}

void Ssh::Session::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-sessions")
        return true;
    return false;
}

Ssh::Session::History::IncomingSessions::IncomingSessions()
    :
    session_history_info(this, {})
{

    yang_name = "incoming-sessions"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::History::IncomingSessions::~IncomingSessions()
{
}

bool Ssh::Session::History::IncomingSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_history_info.len(); index++)
    {
        if(session_history_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::History::IncomingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_history_info.len(); index++)
    {
        if(session_history_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Session::History::IncomingSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/history/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::History::IncomingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::History::IncomingSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::History::IncomingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-history-info")
    {
        auto ent_ = std::make_shared<Ssh::Session::History::IncomingSessions::SessionHistoryInfo>();
        ent_->parent = this;
        session_history_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::History::IncomingSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_history_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh::Session::History::IncomingSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::History::IncomingSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::History::IncomingSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-history-info")
        return true;
    return false;
}

Ssh::Session::History::IncomingSessions::SessionHistoryInfo::SessionHistoryInfo()
    :
    session_id{YType::uint32, "session-id"},
    node_name{YType::str, "node-name"},
    user_id{YType::str, "user-id"},
    host_address{YType::str, "host-address"},
    version{YType::enumeration, "version"},
    authentication_type{YType::enumeration, "authentication-type"}
        ,
    next_session(std::make_shared<Ssh::Session::History::IncomingSessions::SessionHistoryInfo::NextSession>())
    , mc_info(this, {})
{
    next_session->parent = this;

    yang_name = "session-history-info"; yang_parent_name = "incoming-sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::History::IncomingSessions::SessionHistoryInfo::~SessionHistoryInfo()
{
}

bool Ssh::Session::History::IncomingSessions::SessionHistoryInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mc_info.len(); index++)
    {
        if(mc_info[index]->has_data())
            return true;
    }
    return session_id.is_set
	|| node_name.is_set
	|| user_id.is_set
	|| host_address.is_set
	|| version.is_set
	|| authentication_type.is_set
	|| (next_session !=  nullptr && next_session->has_data());
}

bool Ssh::Session::History::IncomingSessions::SessionHistoryInfo::has_operation() const
{
    for (std::size_t index=0; index<mc_info.len(); index++)
    {
        if(mc_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(user_id.yfilter)
	|| ydk::is_set(host_address.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(authentication_type.yfilter)
	|| (next_session !=  nullptr && next_session->has_operation());
}

std::string Ssh::Session::History::IncomingSessions::SessionHistoryInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/history/incoming-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::History::IncomingSessions::SessionHistoryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-history-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::History::IncomingSessions::SessionHistoryInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.yfilter)) leaf_name_data.push_back(user_id.get_name_leafdata());
    if (host_address.is_set || is_set(host_address.yfilter)) leaf_name_data.push_back(host_address.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (authentication_type.is_set || is_set(authentication_type.yfilter)) leaf_name_data.push_back(authentication_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::History::IncomingSessions::SessionHistoryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-session")
    {
        if(next_session == nullptr)
        {
            next_session = std::make_shared<Ssh::Session::History::IncomingSessions::SessionHistoryInfo::NextSession>();
        }
        return next_session;
    }

    if(child_yang_name == "mc-info")
    {
        auto ent_ = std::make_shared<Ssh::Session::History::IncomingSessions::SessionHistoryInfo::McInfo>();
        ent_->parent = this;
        mc_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::History::IncomingSessions::SessionHistoryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_session != nullptr)
    {
        _children["next-session"] = next_session;
    }

    count_ = 0;
    for (auto ent_ : mc_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh::Session::History::IncomingSessions::SessionHistoryInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-id")
    {
        user_id = value;
        user_id.value_namespace = name_space;
        user_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-address")
    {
        host_address = value;
        host_address.value_namespace = name_space;
        host_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-type")
    {
        authentication_type = value;
        authentication_type.value_namespace = name_space;
        authentication_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::History::IncomingSessions::SessionHistoryInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "user-id")
    {
        user_id.yfilter = yfilter;
    }
    if(value_path == "host-address")
    {
        host_address.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "authentication-type")
    {
        authentication_type.yfilter = yfilter;
    }
}

bool Ssh::Session::History::IncomingSessions::SessionHistoryInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-session" || name == "mc-info" || name == "session-id" || name == "node-name" || name == "user-id" || name == "host-address" || name == "version" || name == "authentication-type")
        return true;
    return false;
}

Ssh::Session::History::IncomingSessions::SessionHistoryInfo::NextSession::NextSession()
{

    yang_name = "next-session"; yang_parent_name = "session-history-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::History::IncomingSessions::SessionHistoryInfo::NextSession::~NextSession()
{
}

bool Ssh::Session::History::IncomingSessions::SessionHistoryInfo::NextSession::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Ssh::Session::History::IncomingSessions::SessionHistoryInfo::NextSession::has_operation() const
{
    return is_set(yfilter);
}

std::string Ssh::Session::History::IncomingSessions::SessionHistoryInfo::NextSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/history/incoming-sessions/session-history-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::History::IncomingSessions::SessionHistoryInfo::NextSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::History::IncomingSessions::SessionHistoryInfo::NextSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::History::IncomingSessions::SessionHistoryInfo::NextSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::History::IncomingSessions::SessionHistoryInfo::NextSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Session::History::IncomingSessions::SessionHistoryInfo::NextSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::History::IncomingSessions::SessionHistoryInfo::NextSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::History::IncomingSessions::SessionHistoryInfo::NextSession::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ssh::Session::History::IncomingSessions::SessionHistoryInfo::McInfo::McInfo()
    :
    channel_id{YType::uint32, "channel-id"},
    connection_type{YType::enumeration, "connection-type"},
    vty_line_number{YType::uint32, "vty-line-number"},
    vty_assigned{YType::boolean, "vty-assigned"}
{

    yang_name = "mc-info"; yang_parent_name = "session-history-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::History::IncomingSessions::SessionHistoryInfo::McInfo::~McInfo()
{
}

bool Ssh::Session::History::IncomingSessions::SessionHistoryInfo::McInfo::has_data() const
{
    if (is_presence_container) return true;
    return channel_id.is_set
	|| connection_type.is_set
	|| vty_line_number.is_set
	|| vty_assigned.is_set;
}

bool Ssh::Session::History::IncomingSessions::SessionHistoryInfo::McInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(channel_id.yfilter)
	|| ydk::is_set(connection_type.yfilter)
	|| ydk::is_set(vty_line_number.yfilter)
	|| ydk::is_set(vty_assigned.yfilter);
}

std::string Ssh::Session::History::IncomingSessions::SessionHistoryInfo::McInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/history/incoming-sessions/session-history-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::History::IncomingSessions::SessionHistoryInfo::McInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mc-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::History::IncomingSessions::SessionHistoryInfo::McInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_id.is_set || is_set(channel_id.yfilter)) leaf_name_data.push_back(channel_id.get_name_leafdata());
    if (connection_type.is_set || is_set(connection_type.yfilter)) leaf_name_data.push_back(connection_type.get_name_leafdata());
    if (vty_line_number.is_set || is_set(vty_line_number.yfilter)) leaf_name_data.push_back(vty_line_number.get_name_leafdata());
    if (vty_assigned.is_set || is_set(vty_assigned.yfilter)) leaf_name_data.push_back(vty_assigned.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::History::IncomingSessions::SessionHistoryInfo::McInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::History::IncomingSessions::SessionHistoryInfo::McInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Session::History::IncomingSessions::SessionHistoryInfo::McInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channel-id")
    {
        channel_id = value;
        channel_id.value_namespace = name_space;
        channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-type")
    {
        connection_type = value;
        connection_type.value_namespace = name_space;
        connection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vty-line-number")
    {
        vty_line_number = value;
        vty_line_number.value_namespace = name_space;
        vty_line_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vty-assigned")
    {
        vty_assigned = value;
        vty_assigned.value_namespace = name_space;
        vty_assigned.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::History::IncomingSessions::SessionHistoryInfo::McInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channel-id")
    {
        channel_id.yfilter = yfilter;
    }
    if(value_path == "connection-type")
    {
        connection_type.yfilter = yfilter;
    }
    if(value_path == "vty-line-number")
    {
        vty_line_number.yfilter = yfilter;
    }
    if(value_path == "vty-assigned")
    {
        vty_assigned.yfilter = yfilter;
    }
}

bool Ssh::Session::History::IncomingSessions::SessionHistoryInfo::McInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel-id" || name == "connection-type" || name == "vty-line-number" || name == "vty-assigned")
        return true;
    return false;
}

Ssh::Session::Detail::Detail()
    :
    incoming_sessions(std::make_shared<Ssh::Session::Detail::IncomingSessions>())
    , outgoing_connections(std::make_shared<Ssh::Session::Detail::OutgoingConnections>())
{
    incoming_sessions->parent = this;
    outgoing_connections->parent = this;

    yang_name = "detail"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Detail::~Detail()
{
}

bool Ssh::Session::Detail::has_data() const
{
    if (is_presence_container) return true;
    return (incoming_sessions !=  nullptr && incoming_sessions->has_data())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_data());
}

bool Ssh::Session::Detail::has_operation() const
{
    return is_set(yfilter)
	|| (incoming_sessions !=  nullptr && incoming_sessions->has_operation())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_operation());
}

std::string Ssh::Session::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incoming-sessions")
    {
        if(incoming_sessions == nullptr)
        {
            incoming_sessions = std::make_shared<Ssh::Session::Detail::IncomingSessions>();
        }
        return incoming_sessions;
    }

    if(child_yang_name == "outgoing-connections")
    {
        if(outgoing_connections == nullptr)
        {
            outgoing_connections = std::make_shared<Ssh::Session::Detail::OutgoingConnections>();
        }
        return outgoing_connections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(incoming_sessions != nullptr)
    {
        _children["incoming-sessions"] = incoming_sessions;
    }

    if(outgoing_connections != nullptr)
    {
        _children["outgoing-connections"] = outgoing_connections;
    }

    return _children;
}

void Ssh::Session::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-sessions" || name == "outgoing-connections")
        return true;
    return false;
}

Ssh::Session::Detail::IncomingSessions::IncomingSessions()
    :
    session_detail_info(this, {})
{

    yang_name = "incoming-sessions"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Detail::IncomingSessions::~IncomingSessions()
{
}

bool Ssh::Session::Detail::IncomingSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_detail_info.len(); index++)
    {
        if(session_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Detail::IncomingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_detail_info.len(); index++)
    {
        if(session_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Session::Detail::IncomingSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Detail::IncomingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Detail::IncomingSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Detail::IncomingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detail-info")
    {
        auto ent_ = std::make_shared<Ssh::Session::Detail::IncomingSessions::SessionDetailInfo>();
        ent_->parent = this;
        session_detail_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Detail::IncomingSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_detail_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh::Session::Detail::IncomingSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Detail::IncomingSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Detail::IncomingSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detail-info")
        return true;
    return false;
}

Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::SessionDetailInfo()
    :
    session_id{YType::uint32, "session-id"},
    key_exchange{YType::enumeration, "key-exchange"},
    public_key{YType::enumeration, "public-key"},
    in_cipher{YType::enumeration, "in-cipher"},
    out_cipher{YType::enumeration, "out-cipher"},
    in_mac{YType::enumeration, "in-mac"},
    out_mac{YType::enumeration, "out-mac"},
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"}
        ,
    next_session(std::make_shared<Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::NextSession>())
{
    next_session->parent = this;

    yang_name = "session-detail-info"; yang_parent_name = "incoming-sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::~SessionDetailInfo()
{
}

bool Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| key_exchange.is_set
	|| public_key.is_set
	|| in_cipher.is_set
	|| out_cipher.is_set
	|| in_mac.is_set
	|| out_mac.is_set
	|| start_time.is_set
	|| end_time.is_set
	|| (next_session !=  nullptr && next_session->has_data());
}

bool Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(key_exchange.yfilter)
	|| ydk::is_set(public_key.yfilter)
	|| ydk::is_set(in_cipher.yfilter)
	|| ydk::is_set(out_cipher.yfilter)
	|| ydk::is_set(in_mac.yfilter)
	|| ydk::is_set(out_mac.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| (next_session !=  nullptr && next_session->has_operation());
}

std::string Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/detail/incoming-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (key_exchange.is_set || is_set(key_exchange.yfilter)) leaf_name_data.push_back(key_exchange.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.yfilter)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (in_cipher.is_set || is_set(in_cipher.yfilter)) leaf_name_data.push_back(in_cipher.get_name_leafdata());
    if (out_cipher.is_set || is_set(out_cipher.yfilter)) leaf_name_data.push_back(out_cipher.get_name_leafdata());
    if (in_mac.is_set || is_set(in_mac.yfilter)) leaf_name_data.push_back(in_mac.get_name_leafdata());
    if (out_mac.is_set || is_set(out_mac.yfilter)) leaf_name_data.push_back(out_mac.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-session")
    {
        if(next_session == nullptr)
        {
            next_session = std::make_shared<Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::NextSession>();
        }
        return next_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_session != nullptr)
    {
        _children["next-session"] = next_session;
    }

    return _children;
}

void Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-exchange")
    {
        key_exchange = value;
        key_exchange.value_namespace = name_space;
        key_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "public-key")
    {
        public_key = value;
        public_key.value_namespace = name_space;
        public_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-cipher")
    {
        in_cipher = value;
        in_cipher.value_namespace = name_space;
        in_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-cipher")
    {
        out_cipher = value;
        out_cipher.value_namespace = name_space;
        out_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mac")
    {
        in_mac = value;
        in_mac.value_namespace = name_space;
        in_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac")
    {
        out_mac = value;
        out_mac.value_namespace = name_space;
        out_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "key-exchange")
    {
        key_exchange.yfilter = yfilter;
    }
    if(value_path == "public-key")
    {
        public_key.yfilter = yfilter;
    }
    if(value_path == "in-cipher")
    {
        in_cipher.yfilter = yfilter;
    }
    if(value_path == "out-cipher")
    {
        out_cipher.yfilter = yfilter;
    }
    if(value_path == "in-mac")
    {
        in_mac.yfilter = yfilter;
    }
    if(value_path == "out-mac")
    {
        out_mac.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
}

bool Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-session" || name == "session-id" || name == "key-exchange" || name == "public-key" || name == "in-cipher" || name == "out-cipher" || name == "in-mac" || name == "out-mac" || name == "start-time" || name == "end-time")
        return true;
    return false;
}

Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::NextSession::NextSession()
{

    yang_name = "next-session"; yang_parent_name = "session-detail-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::NextSession::~NextSession()
{
}

bool Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::NextSession::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::NextSession::has_operation() const
{
    return is_set(yfilter);
}

std::string Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::NextSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/detail/incoming-sessions/session-detail-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::NextSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::NextSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::NextSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::NextSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::NextSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::NextSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::NextSession::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Ssh::Session::Detail::OutgoingConnections::OutgoingConnections()
    :
    session_detail_info(this, {})
{

    yang_name = "outgoing-connections"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Detail::OutgoingConnections::~OutgoingConnections()
{
}

bool Ssh::Session::Detail::OutgoingConnections::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_detail_info.len(); index++)
    {
        if(session_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Detail::OutgoingConnections::has_operation() const
{
    for (std::size_t index=0; index<session_detail_info.len(); index++)
    {
        if(session_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Session::Detail::OutgoingConnections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Detail::OutgoingConnections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-connections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Detail::OutgoingConnections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Detail::OutgoingConnections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detail-info")
    {
        auto ent_ = std::make_shared<Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo>();
        ent_->parent = this;
        session_detail_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Detail::OutgoingConnections::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_detail_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh::Session::Detail::OutgoingConnections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Detail::OutgoingConnections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Detail::OutgoingConnections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detail-info")
        return true;
    return false;
}

Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::SessionDetailInfo()
    :
    session_id{YType::uint32, "session-id"},
    key_exchange{YType::enumeration, "key-exchange"},
    public_key{YType::enumeration, "public-key"},
    in_cipher{YType::enumeration, "in-cipher"},
    out_cipher{YType::enumeration, "out-cipher"},
    in_mac{YType::enumeration, "in-mac"},
    out_mac{YType::enumeration, "out-mac"},
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"}
        ,
    next_session(std::make_shared<Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::NextSession>())
{
    next_session->parent = this;

    yang_name = "session-detail-info"; yang_parent_name = "outgoing-connections"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::~SessionDetailInfo()
{
}

bool Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| key_exchange.is_set
	|| public_key.is_set
	|| in_cipher.is_set
	|| out_cipher.is_set
	|| in_mac.is_set
	|| out_mac.is_set
	|| start_time.is_set
	|| end_time.is_set
	|| (next_session !=  nullptr && next_session->has_data());
}

bool Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(key_exchange.yfilter)
	|| ydk::is_set(public_key.yfilter)
	|| ydk::is_set(in_cipher.yfilter)
	|| ydk::is_set(out_cipher.yfilter)
	|| ydk::is_set(in_mac.yfilter)
	|| ydk::is_set(out_mac.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| (next_session !=  nullptr && next_session->has_operation());
}

std::string Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/detail/outgoing-connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (key_exchange.is_set || is_set(key_exchange.yfilter)) leaf_name_data.push_back(key_exchange.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.yfilter)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (in_cipher.is_set || is_set(in_cipher.yfilter)) leaf_name_data.push_back(in_cipher.get_name_leafdata());
    if (out_cipher.is_set || is_set(out_cipher.yfilter)) leaf_name_data.push_back(out_cipher.get_name_leafdata());
    if (in_mac.is_set || is_set(in_mac.yfilter)) leaf_name_data.push_back(in_mac.get_name_leafdata());
    if (out_mac.is_set || is_set(out_mac.yfilter)) leaf_name_data.push_back(out_mac.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-session")
    {
        if(next_session == nullptr)
        {
            next_session = std::make_shared<Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::NextSession>();
        }
        return next_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_session != nullptr)
    {
        _children["next-session"] = next_session;
    }

    return _children;
}

void Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-exchange")
    {
        key_exchange = value;
        key_exchange.value_namespace = name_space;
        key_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "public-key")
    {
        public_key = value;
        public_key.value_namespace = name_space;
        public_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-cipher")
    {
        in_cipher = value;
        in_cipher.value_namespace = name_space;
        in_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-cipher")
    {
        out_cipher = value;
        out_cipher.value_namespace = name_space;
        out_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mac")
    {
        in_mac = value;
        in_mac.value_namespace = name_space;
        in_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac")
    {
        out_mac = value;
        out_mac.value_namespace = name_space;
        out_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "key-exchange")
    {
        key_exchange.yfilter = yfilter;
    }
    if(value_path == "public-key")
    {
        public_key.yfilter = yfilter;
    }
    if(value_path == "in-cipher")
    {
        in_cipher.yfilter = yfilter;
    }
    if(value_path == "out-cipher")
    {
        out_cipher.yfilter = yfilter;
    }
    if(value_path == "in-mac")
    {
        in_mac.yfilter = yfilter;
    }
    if(value_path == "out-mac")
    {
        out_mac.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
}

bool Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-session" || name == "session-id" || name == "key-exchange" || name == "public-key" || name == "in-cipher" || name == "out-cipher" || name == "in-mac" || name == "out-mac" || name == "start-time" || name == "end-time")
        return true;
    return false;
}

Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::NextSession::NextSession()
{

    yang_name = "next-session"; yang_parent_name = "session-detail-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::NextSession::~NextSession()
{
}

bool Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::NextSession::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::NextSession::has_operation() const
{
    return is_set(yfilter);
}

std::string Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::NextSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/detail/outgoing-connections/session-detail-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::NextSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::NextSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::NextSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::NextSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::NextSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::NextSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::NextSession::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

const Enum::YLeaf Connection::undefined {0, "undefined"};
const Enum::YLeaf Connection::shell {1, "shell"};
const Enum::YLeaf Connection::exec {2, "exec"};
const Enum::YLeaf Connection::scp {3, "scp"};
const Enum::YLeaf Connection::sftp_subsystem {4, "sftp-subsystem"};
const Enum::YLeaf Connection::netconf_subsystem {5, "netconf-subsystem"};
const Enum::YLeaf Connection::tl1_subsystem {6, "tl1-subsystem"};
const Enum::YLeaf Connection::netconf_xml_subsystem {7, "netconf-xml-subsystem"};

const Enum::YLeaf Authen::password {0, "password"};
const Enum::YLeaf Authen::rsa_public_key {1, "rsa-public-key"};
const Enum::YLeaf Authen::keyboard_interactive {2, "keyboard-interactive"};

const Enum::YLeaf Version::v2 {0, "v2"};
const Enum::YLeaf Version::v1 {1, "v1"};

const Enum::YLeaf States::open {1, "open"};
const Enum::YLeaf States::version_ok {2, "version-ok"};
const Enum::YLeaf States::key_exchange_initialize {3, "key-exchange-initialize"};
const Enum::YLeaf States::key_exchange_dh {4, "key-exchange-dh"};
const Enum::YLeaf States::new_keys {5, "new-keys"};
const Enum::YLeaf States::authenticate_information {6, "authenticate-information"};
const Enum::YLeaf States::authenticated {7, "authenticated"};
const Enum::YLeaf States::channel_open {8, "channel-open"};
const Enum::YLeaf States::pty_open {9, "pty-open"};
const Enum::YLeaf States::session_open {10, "session-open"};
const Enum::YLeaf States::rekey {11, "rekey"};
const Enum::YLeaf States::suspended {12, "suspended"};
const Enum::YLeaf States::session_closed {13, "session-closed"};

const Enum::YLeaf Mac::mac_not_applicable {-1, "mac-not-applicable"};
const Enum::YLeaf Mac::hmac_md5 {0, "hmac-md5"};
const Enum::YLeaf Mac::hmac_sha1 {1, "hmac-sha1"};
const Enum::YLeaf Mac::hmac_sha2_256 {2, "hmac-sha2-256"};
const Enum::YLeaf Mac::hmac_sha2_512 {3, "hmac-sha2-512"};
const Enum::YLeaf Mac::aes_gcm {4, "aes-gcm"};

const Enum::YLeaf Cipher::cipher_not_applicable {-1, "cipher-not-applicable"};
const Enum::YLeaf Cipher::aes128_cbc {0, "aes128-cbc"};
const Enum::YLeaf Cipher::aes192_cbc {1, "aes192-cbc"};
const Enum::YLeaf Cipher::aes256_cbc {2, "aes256-cbc"};
const Enum::YLeaf Cipher::triple_des_cbc {3, "triple-des-cbc"};
const Enum::YLeaf Cipher::aes128_ctr {4, "aes128-ctr"};
const Enum::YLeaf Cipher::aes192_ctr {5, "aes192-ctr"};
const Enum::YLeaf Cipher::aes256_ctr {6, "aes256-ctr"};
const Enum::YLeaf Cipher::aes128_gcm {7, "aes128-gcm"};
const Enum::YLeaf Cipher::aes256_gcm {8, "aes256-gcm"};

const Enum::YLeaf Hostkey::host_key_not_applicable {-1, "host-key-not-applicable"};
const Enum::YLeaf Hostkey::ssh_dss {0, "ssh-dss"};
const Enum::YLeaf Hostkey::ssh_rsa {1, "ssh-rsa"};
const Enum::YLeaf Hostkey::ecdsa_sha2_nistp521 {2, "ecdsa-sha2-nistp521"};
const Enum::YLeaf Hostkey::ecdsa_sha2_nistp384 {3, "ecdsa-sha2-nistp384"};
const Enum::YLeaf Hostkey::ecdsa_sha2_nistp256 {4, "ecdsa-sha2-nistp256"};

const Enum::YLeaf KexName::kex_not_applicable {-1, "kex-not-applicable"};
const Enum::YLeaf KexName::diffie_hellman_group1 {0, "diffie-hellman-group1"};
const Enum::YLeaf KexName::diffie_hellman_group14 {1, "diffie-hellman-group14"};
const Enum::YLeaf KexName::diffie_hellman_group15 {2, "diffie-hellman-group15"};
const Enum::YLeaf KexName::diffie_hellman_group16 {3, "diffie-hellman-group16"};
const Enum::YLeaf KexName::diffie_hellman_group17 {4, "diffie-hellman-group17"};
const Enum::YLeaf KexName::diffie_hellman_group18 {5, "diffie-hellman-group18"};
const Enum::YLeaf KexName::ecdh_nistp256 {6, "ecdh-nistp256"};
const Enum::YLeaf KexName::ecdh_nistp384 {7, "ecdh-nistp384"};
const Enum::YLeaf KexName::ecdh_nistp521 {8, "ecdh-nistp521"};
const Enum::YLeaf KexName::password_authenticated {9, "password-authenticated"};


}
}

