
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ikev2_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ikev2_oper {

IkEv2::IkEv2()
    :
    nodes(std::make_shared<IkEv2::Nodes>())
{
    nodes->parent = this;

    yang_name = "ik-ev2"; yang_parent_name = "Cisco-IOS-XR-ikev2-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

IkEv2::~IkEv2()
{
}

bool IkEv2::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool IkEv2::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string IkEv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ikev2-oper:ik-ev2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<IkEv2::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void IkEv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IkEv2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> IkEv2::clone_ptr() const
{
    return std::make_shared<IkEv2>();
}

std::string IkEv2::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string IkEv2::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function IkEv2::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IkEv2::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool IkEv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

IkEv2::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "ik-ev2"; is_top_level_class = false; has_list_ancestor = false; 
}

IkEv2::Nodes::~Nodes()
{
}

bool IkEv2::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool IkEv2::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IkEv2::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ikev2-oper:ik-ev2/" << get_segment_path();
    return path_buffer.str();
}

std::string IkEv2::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<IkEv2::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::get_children() const
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

void IkEv2::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IkEv2::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IkEv2::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

IkEv2::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    session(std::make_shared<IkEv2::Nodes::Node::Session>())
    , sa(std::make_shared<IkEv2::Nodes::Node::Sa>())
    , policies(std::make_shared<IkEv2::Nodes::Node::Policies>())
    , proposals(std::make_shared<IkEv2::Nodes::Node::Proposals>())
    , profiles(std::make_shared<IkEv2::Nodes::Node::Profiles>())
    , keyrings(std::make_shared<IkEv2::Nodes::Node::Keyrings>())
{
    session->parent = this;
    sa->parent = this;
    policies->parent = this;
    proposals->parent = this;
    profiles->parent = this;
    keyrings->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

IkEv2::Nodes::Node::~Node()
{
}

bool IkEv2::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (session !=  nullptr && session->has_data())
	|| (sa !=  nullptr && sa->has_data())
	|| (policies !=  nullptr && policies->has_data())
	|| (proposals !=  nullptr && proposals->has_data())
	|| (profiles !=  nullptr && profiles->has_data())
	|| (keyrings !=  nullptr && keyrings->has_data());
}

bool IkEv2::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (sa !=  nullptr && sa->has_operation())
	|| (policies !=  nullptr && policies->has_operation())
	|| (proposals !=  nullptr && proposals->has_operation())
	|| (profiles !=  nullptr && profiles->has_operation())
	|| (keyrings !=  nullptr && keyrings->has_operation());
}

std::string IkEv2::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ikev2-oper:ik-ev2/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string IkEv2::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<IkEv2::Nodes::Node::Session>();
        }
        return session;
    }

    if(child_yang_name == "sa")
    {
        if(sa == nullptr)
        {
            sa = std::make_shared<IkEv2::Nodes::Node::Sa>();
        }
        return sa;
    }

    if(child_yang_name == "policies")
    {
        if(policies == nullptr)
        {
            policies = std::make_shared<IkEv2::Nodes::Node::Policies>();
        }
        return policies;
    }

    if(child_yang_name == "proposals")
    {
        if(proposals == nullptr)
        {
            proposals = std::make_shared<IkEv2::Nodes::Node::Proposals>();
        }
        return proposals;
    }

    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<IkEv2::Nodes::Node::Profiles>();
        }
        return profiles;
    }

    if(child_yang_name == "keyrings")
    {
        if(keyrings == nullptr)
        {
            keyrings = std::make_shared<IkEv2::Nodes::Node::Keyrings>();
        }
        return keyrings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(sa != nullptr)
    {
        _children["sa"] = sa;
    }

    if(policies != nullptr)
    {
        _children["policies"] = policies;
    }

    if(proposals != nullptr)
    {
        _children["proposals"] = proposals;
    }

    if(profiles != nullptr)
    {
        _children["profiles"] = profiles;
    }

    if(keyrings != nullptr)
    {
        _children["keyrings"] = keyrings;
    }

    return _children;
}

void IkEv2::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void IkEv2::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool IkEv2::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "sa" || name == "policies" || name == "proposals" || name == "profiles" || name == "keyrings" || name == "node-name")
        return true;
    return false;
}

IkEv2::Nodes::Node::Session::Session()
    :
    session(this, {})
{

    yang_name = "session"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Session::~Session()
{
}

bool IkEv2::Nodes::Node::Session::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool IkEv2::Nodes::Node::Session::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IkEv2::Nodes::Node::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto ent_ = std::make_shared<IkEv2::Nodes::Node::Session::Session_>();
        ent_->parent = this;
        session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IkEv2::Nodes::Node::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IkEv2::Nodes::Node::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IkEv2::Nodes::Node::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

IkEv2::Nodes::Node::Session::Session_::Session_()
    :
    session_id{YType::uint32, "session-id"},
    session_status{YType::str, "session-status"},
    ike_cnt{YType::uint32, "ike-cnt"},
    child_cnt{YType::uint32, "child-cnt"}
        ,
    sa(this, {})
    , child_sa(this, {})
{

    yang_name = "session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Session::Session_::~Session_()
{
}

bool IkEv2::Nodes::Node::Session::Session_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sa.len(); index++)
    {
        if(sa[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<child_sa.len(); index++)
    {
        if(child_sa[index]->has_data())
            return true;
    }
    return session_id.is_set
	|| session_status.is_set
	|| ike_cnt.is_set
	|| child_cnt.is_set;
}

bool IkEv2::Nodes::Node::Session::Session_::has_operation() const
{
    for (std::size_t index=0; index<sa.len(); index++)
    {
        if(sa[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<child_sa.len(); index++)
    {
        if(child_sa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(session_status.yfilter)
	|| ydk::is_set(ike_cnt.yfilter)
	|| ydk::is_set(child_cnt.yfilter);
}

std::string IkEv2::Nodes::Node::Session::Session_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Session::Session_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (session_status.is_set || is_set(session_status.yfilter)) leaf_name_data.push_back(session_status.get_name_leafdata());
    if (ike_cnt.is_set || is_set(ike_cnt.yfilter)) leaf_name_data.push_back(ike_cnt.get_name_leafdata());
    if (child_cnt.is_set || is_set(child_cnt.yfilter)) leaf_name_data.push_back(child_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Session::Session_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sa")
    {
        auto ent_ = std::make_shared<IkEv2::Nodes::Node::Session::Session_::Sa>();
        ent_->parent = this;
        sa.append(ent_);
        return ent_;
    }

    if(child_yang_name == "child-sa")
    {
        auto ent_ = std::make_shared<IkEv2::Nodes::Node::Session::Session_::ChildSa>();
        ent_->parent = this;
        child_sa.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Session::Session_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : child_sa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IkEv2::Nodes::Node::Session::Session_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-status")
    {
        session_status = value;
        session_status.value_namespace = name_space;
        session_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ike-cnt")
    {
        ike_cnt = value;
        ike_cnt.value_namespace = name_space;
        ike_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "child-cnt")
    {
        child_cnt = value;
        child_cnt.value_namespace = name_space;
        child_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void IkEv2::Nodes::Node::Session::Session_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "session-status")
    {
        session_status.yfilter = yfilter;
    }
    if(value_path == "ike-cnt")
    {
        ike_cnt.yfilter = yfilter;
    }
    if(value_path == "child-cnt")
    {
        child_cnt.yfilter = yfilter;
    }
}

bool IkEv2::Nodes::Node::Session::Session_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa" || name == "child-sa" || name == "session-id" || name == "session-status" || name == "ike-cnt" || name == "child-cnt")
        return true;
    return false;
}

IkEv2::Nodes::Node::Session::Session_::Sa::Sa()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    local_addr_port{YType::str, "local-addr-port"},
    remote_addr_port{YType::str, "remote-addr-port"},
    state{YType::str, "state"},
    encr{YType::str, "encr"},
    keysize{YType::uint32, "keysize"},
    prf{YType::str, "prf"},
    hash{YType::str, "hash"},
    dh_group{YType::uint32, "dh-group"},
    auth_sign{YType::str, "auth-sign"},
    auth_verify{YType::str, "auth-verify"},
    life_active{YType::str, "life-active"},
    session_id{YType::uint32, "session-id"},
    status_desc{YType::str, "status-desc"},
    local_spi{YType::str, "local-spi"},
    remote_spi{YType::str, "remote-spi"},
    local_id{YType::str, "local-id"},
    remote_id{YType::str, "remote-id"},
    sa_initiator{YType::boolean, "sa-initiator"}
{

    yang_name = "sa"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Session::Session_::Sa::~Sa()
{
}

bool IkEv2::Nodes::Node::Session::Session_::Sa::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| local_addr_port.is_set
	|| remote_addr_port.is_set
	|| state.is_set
	|| encr.is_set
	|| keysize.is_set
	|| prf.is_set
	|| hash.is_set
	|| dh_group.is_set
	|| auth_sign.is_set
	|| auth_verify.is_set
	|| life_active.is_set
	|| session_id.is_set
	|| status_desc.is_set
	|| local_spi.is_set
	|| remote_spi.is_set
	|| local_id.is_set
	|| remote_id.is_set
	|| sa_initiator.is_set;
}

bool IkEv2::Nodes::Node::Session::Session_::Sa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(local_addr_port.yfilter)
	|| ydk::is_set(remote_addr_port.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(encr.yfilter)
	|| ydk::is_set(keysize.yfilter)
	|| ydk::is_set(prf.yfilter)
	|| ydk::is_set(hash.yfilter)
	|| ydk::is_set(dh_group.yfilter)
	|| ydk::is_set(auth_sign.yfilter)
	|| ydk::is_set(auth_verify.yfilter)
	|| ydk::is_set(life_active.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(status_desc.yfilter)
	|| ydk::is_set(local_spi.yfilter)
	|| ydk::is_set(remote_spi.yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(sa_initiator.yfilter);
}

std::string IkEv2::Nodes::Node::Session::Session_::Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Session::Session_::Sa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (local_addr_port.is_set || is_set(local_addr_port.yfilter)) leaf_name_data.push_back(local_addr_port.get_name_leafdata());
    if (remote_addr_port.is_set || is_set(remote_addr_port.yfilter)) leaf_name_data.push_back(remote_addr_port.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (encr.is_set || is_set(encr.yfilter)) leaf_name_data.push_back(encr.get_name_leafdata());
    if (keysize.is_set || is_set(keysize.yfilter)) leaf_name_data.push_back(keysize.get_name_leafdata());
    if (prf.is_set || is_set(prf.yfilter)) leaf_name_data.push_back(prf.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());
    if (dh_group.is_set || is_set(dh_group.yfilter)) leaf_name_data.push_back(dh_group.get_name_leafdata());
    if (auth_sign.is_set || is_set(auth_sign.yfilter)) leaf_name_data.push_back(auth_sign.get_name_leafdata());
    if (auth_verify.is_set || is_set(auth_verify.yfilter)) leaf_name_data.push_back(auth_verify.get_name_leafdata());
    if (life_active.is_set || is_set(life_active.yfilter)) leaf_name_data.push_back(life_active.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (status_desc.is_set || is_set(status_desc.yfilter)) leaf_name_data.push_back(status_desc.get_name_leafdata());
    if (local_spi.is_set || is_set(local_spi.yfilter)) leaf_name_data.push_back(local_spi.get_name_leafdata());
    if (remote_spi.is_set || is_set(remote_spi.yfilter)) leaf_name_data.push_back(remote_spi.get_name_leafdata());
    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (sa_initiator.is_set || is_set(sa_initiator.yfilter)) leaf_name_data.push_back(sa_initiator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Session::Session_::Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Session::Session_::Sa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IkEv2::Nodes::Node::Session::Session_::Sa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr-port")
    {
        local_addr_port = value;
        local_addr_port.value_namespace = name_space;
        local_addr_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr-port")
    {
        remote_addr_port = value;
        remote_addr_port.value_namespace = name_space;
        remote_addr_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encr")
    {
        encr = value;
        encr.value_namespace = name_space;
        encr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keysize")
    {
        keysize = value;
        keysize.value_namespace = name_space;
        keysize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prf")
    {
        prf = value;
        prf.value_namespace = name_space;
        prf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dh-group")
    {
        dh_group = value;
        dh_group.value_namespace = name_space;
        dh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-sign")
    {
        auth_sign = value;
        auth_sign.value_namespace = name_space;
        auth_sign.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-verify")
    {
        auth_verify = value;
        auth_verify.value_namespace = name_space;
        auth_verify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life-active")
    {
        life_active = value;
        life_active.value_namespace = name_space;
        life_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-desc")
    {
        status_desc = value;
        status_desc.value_namespace = name_space;
        status_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-spi")
    {
        local_spi = value;
        local_spi.value_namespace = name_space;
        local_spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-spi")
    {
        remote_spi = value;
        remote_spi.value_namespace = name_space;
        remote_spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-initiator")
    {
        sa_initiator = value;
        sa_initiator.value_namespace = name_space;
        sa_initiator.value_namespace_prefix = name_space_prefix;
    }
}

void IkEv2::Nodes::Node::Session::Session_::Sa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-addr-port")
    {
        local_addr_port.yfilter = yfilter;
    }
    if(value_path == "remote-addr-port")
    {
        remote_addr_port.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "encr")
    {
        encr.yfilter = yfilter;
    }
    if(value_path == "keysize")
    {
        keysize.yfilter = yfilter;
    }
    if(value_path == "prf")
    {
        prf.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
    if(value_path == "dh-group")
    {
        dh_group.yfilter = yfilter;
    }
    if(value_path == "auth-sign")
    {
        auth_sign.yfilter = yfilter;
    }
    if(value_path == "auth-verify")
    {
        auth_verify.yfilter = yfilter;
    }
    if(value_path == "life-active")
    {
        life_active.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "status-desc")
    {
        status_desc.yfilter = yfilter;
    }
    if(value_path == "local-spi")
    {
        local_spi.yfilter = yfilter;
    }
    if(value_path == "remote-spi")
    {
        remote_spi.yfilter = yfilter;
    }
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "sa-initiator")
    {
        sa_initiator.yfilter = yfilter;
    }
}

bool IkEv2::Nodes::Node::Session::Session_::Sa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id" || name == "local-addr-port" || name == "remote-addr-port" || name == "state" || name == "encr" || name == "keysize" || name == "prf" || name == "hash" || name == "dh-group" || name == "auth-sign" || name == "auth-verify" || name == "life-active" || name == "session-id" || name == "status-desc" || name == "local-spi" || name == "remote-spi" || name == "local-id" || name == "remote-id" || name == "sa-initiator")
        return true;
    return false;
}

IkEv2::Nodes::Node::Session::Session_::ChildSa::ChildSa()
    :
    local_selector{YType::str, "local-selector"},
    remote_selector{YType::str, "remote-selector"},
    esp_spi_in_out{YType::str, "esp-spi-in-out"},
    encr{YType::str, "encr"},
    keysize{YType::uint32, "keysize"},
    hmac{YType::str, "hmac"}
{

    yang_name = "child-sa"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Session::Session_::ChildSa::~ChildSa()
{
}

bool IkEv2::Nodes::Node::Session::Session_::ChildSa::has_data() const
{
    if (is_presence_container) return true;
    return local_selector.is_set
	|| remote_selector.is_set
	|| esp_spi_in_out.is_set
	|| encr.is_set
	|| keysize.is_set
	|| hmac.is_set;
}

bool IkEv2::Nodes::Node::Session::Session_::ChildSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_selector.yfilter)
	|| ydk::is_set(remote_selector.yfilter)
	|| ydk::is_set(esp_spi_in_out.yfilter)
	|| ydk::is_set(encr.yfilter)
	|| ydk::is_set(keysize.yfilter)
	|| ydk::is_set(hmac.yfilter);
}

std::string IkEv2::Nodes::Node::Session::Session_::ChildSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-sa";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Session::Session_::ChildSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_selector.is_set || is_set(local_selector.yfilter)) leaf_name_data.push_back(local_selector.get_name_leafdata());
    if (remote_selector.is_set || is_set(remote_selector.yfilter)) leaf_name_data.push_back(remote_selector.get_name_leafdata());
    if (esp_spi_in_out.is_set || is_set(esp_spi_in_out.yfilter)) leaf_name_data.push_back(esp_spi_in_out.get_name_leafdata());
    if (encr.is_set || is_set(encr.yfilter)) leaf_name_data.push_back(encr.get_name_leafdata());
    if (keysize.is_set || is_set(keysize.yfilter)) leaf_name_data.push_back(keysize.get_name_leafdata());
    if (hmac.is_set || is_set(hmac.yfilter)) leaf_name_data.push_back(hmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Session::Session_::ChildSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Session::Session_::ChildSa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IkEv2::Nodes::Node::Session::Session_::ChildSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-selector")
    {
        local_selector = value;
        local_selector.value_namespace = name_space;
        local_selector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-selector")
    {
        remote_selector = value;
        remote_selector.value_namespace = name_space;
        remote_selector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esp-spi-in-out")
    {
        esp_spi_in_out = value;
        esp_spi_in_out.value_namespace = name_space;
        esp_spi_in_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encr")
    {
        encr = value;
        encr.value_namespace = name_space;
        encr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keysize")
    {
        keysize = value;
        keysize.value_namespace = name_space;
        keysize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac")
    {
        hmac = value;
        hmac.value_namespace = name_space;
        hmac.value_namespace_prefix = name_space_prefix;
    }
}

void IkEv2::Nodes::Node::Session::Session_::ChildSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-selector")
    {
        local_selector.yfilter = yfilter;
    }
    if(value_path == "remote-selector")
    {
        remote_selector.yfilter = yfilter;
    }
    if(value_path == "esp-spi-in-out")
    {
        esp_spi_in_out.yfilter = yfilter;
    }
    if(value_path == "encr")
    {
        encr.yfilter = yfilter;
    }
    if(value_path == "keysize")
    {
        keysize.yfilter = yfilter;
    }
    if(value_path == "hmac")
    {
        hmac.yfilter = yfilter;
    }
}

bool IkEv2::Nodes::Node::Session::Session_::ChildSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-selector" || name == "remote-selector" || name == "esp-spi-in-out" || name == "encr" || name == "keysize" || name == "hmac")
        return true;
    return false;
}

IkEv2::Nodes::Node::Sa::Sa()
    :
    local_v4(std::make_shared<IkEv2::Nodes::Node::Sa::LocalV4>())
    , remote_v4(std::make_shared<IkEv2::Nodes::Node::Sa::RemoteV4>())
    , all(std::make_shared<IkEv2::Nodes::Node::Sa::All>())
{
    local_v4->parent = this;
    remote_v4->parent = this;
    all->parent = this;

    yang_name = "sa"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Sa::~Sa()
{
}

bool IkEv2::Nodes::Node::Sa::has_data() const
{
    if (is_presence_container) return true;
    return (local_v4 !=  nullptr && local_v4->has_data())
	|| (remote_v4 !=  nullptr && remote_v4->has_data())
	|| (all !=  nullptr && all->has_data());
}

bool IkEv2::Nodes::Node::Sa::has_operation() const
{
    return is_set(yfilter)
	|| (local_v4 !=  nullptr && local_v4->has_operation())
	|| (remote_v4 !=  nullptr && remote_v4->has_operation())
	|| (all !=  nullptr && all->has_operation());
}

std::string IkEv2::Nodes::Node::Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Sa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-v4")
    {
        if(local_v4 == nullptr)
        {
            local_v4 = std::make_shared<IkEv2::Nodes::Node::Sa::LocalV4>();
        }
        return local_v4;
    }

    if(child_yang_name == "remote-v4")
    {
        if(remote_v4 == nullptr)
        {
            remote_v4 = std::make_shared<IkEv2::Nodes::Node::Sa::RemoteV4>();
        }
        return remote_v4;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<IkEv2::Nodes::Node::Sa::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Sa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_v4 != nullptr)
    {
        _children["local-v4"] = local_v4;
    }

    if(remote_v4 != nullptr)
    {
        _children["remote-v4"] = remote_v4;
    }

    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void IkEv2::Nodes::Node::Sa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IkEv2::Nodes::Node::Sa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IkEv2::Nodes::Node::Sa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-v4" || name == "remote-v4" || name == "all")
        return true;
    return false;
}

IkEv2::Nodes::Node::Sa::LocalV4::LocalV4()
    :
    ip(this, {"address"})
{

    yang_name = "local-v4"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Sa::LocalV4::~LocalV4()
{
}

bool IkEv2::Nodes::Node::Sa::LocalV4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    return false;
}

bool IkEv2::Nodes::Node::Sa::LocalV4::has_operation() const
{
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IkEv2::Nodes::Node::Sa::LocalV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Sa::LocalV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Sa::LocalV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        auto ent_ = std::make_shared<IkEv2::Nodes::Node::Sa::LocalV4::Ip>();
        ent_->parent = this;
        ip.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Sa::LocalV4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IkEv2::Nodes::Node::Sa::LocalV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IkEv2::Nodes::Node::Sa::LocalV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IkEv2::Nodes::Node::Sa::LocalV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

IkEv2::Nodes::Node::Sa::LocalV4::Ip::Ip()
    :
    address{YType::str, "address"}
        ,
    sa(this, {})
{

    yang_name = "ip"; yang_parent_name = "local-v4"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Sa::LocalV4::Ip::~Ip()
{
}

bool IkEv2::Nodes::Node::Sa::LocalV4::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sa.len(); index++)
    {
        if(sa[index]->has_data())
            return true;
    }
    return address.is_set;
}

bool IkEv2::Nodes::Node::Sa::LocalV4::Ip::has_operation() const
{
    for (std::size_t index=0; index<sa.len(); index++)
    {
        if(sa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string IkEv2::Nodes::Node::Sa::LocalV4::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Sa::LocalV4::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Sa::LocalV4::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sa")
    {
        auto ent_ = std::make_shared<IkEv2::Nodes::Node::Sa::LocalV4::Ip::Sa_>();
        ent_->parent = this;
        sa.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Sa::LocalV4::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IkEv2::Nodes::Node::Sa::LocalV4::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void IkEv2::Nodes::Node::Sa::LocalV4::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool IkEv2::Nodes::Node::Sa::LocalV4::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa" || name == "address")
        return true;
    return false;
}

IkEv2::Nodes::Node::Sa::LocalV4::Ip::Sa_::Sa_()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    local_addr_port{YType::str, "local-addr-port"},
    remote_addr_port{YType::str, "remote-addr-port"},
    state{YType::str, "state"},
    encr{YType::str, "encr"},
    keysize{YType::uint32, "keysize"},
    prf{YType::str, "prf"},
    hash{YType::str, "hash"},
    dh_group{YType::uint32, "dh-group"},
    auth_sign{YType::str, "auth-sign"},
    auth_verify{YType::str, "auth-verify"},
    life_active{YType::str, "life-active"},
    session_id{YType::uint32, "session-id"},
    status_desc{YType::str, "status-desc"},
    local_spi{YType::str, "local-spi"},
    remote_spi{YType::str, "remote-spi"},
    local_id{YType::str, "local-id"},
    remote_id{YType::str, "remote-id"},
    sa_initiator{YType::boolean, "sa-initiator"}
{

    yang_name = "sa"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Sa::LocalV4::Ip::Sa_::~Sa_()
{
}

bool IkEv2::Nodes::Node::Sa::LocalV4::Ip::Sa_::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| local_addr_port.is_set
	|| remote_addr_port.is_set
	|| state.is_set
	|| encr.is_set
	|| keysize.is_set
	|| prf.is_set
	|| hash.is_set
	|| dh_group.is_set
	|| auth_sign.is_set
	|| auth_verify.is_set
	|| life_active.is_set
	|| session_id.is_set
	|| status_desc.is_set
	|| local_spi.is_set
	|| remote_spi.is_set
	|| local_id.is_set
	|| remote_id.is_set
	|| sa_initiator.is_set;
}

bool IkEv2::Nodes::Node::Sa::LocalV4::Ip::Sa_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(local_addr_port.yfilter)
	|| ydk::is_set(remote_addr_port.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(encr.yfilter)
	|| ydk::is_set(keysize.yfilter)
	|| ydk::is_set(prf.yfilter)
	|| ydk::is_set(hash.yfilter)
	|| ydk::is_set(dh_group.yfilter)
	|| ydk::is_set(auth_sign.yfilter)
	|| ydk::is_set(auth_verify.yfilter)
	|| ydk::is_set(life_active.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(status_desc.yfilter)
	|| ydk::is_set(local_spi.yfilter)
	|| ydk::is_set(remote_spi.yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(sa_initiator.yfilter);
}

std::string IkEv2::Nodes::Node::Sa::LocalV4::Ip::Sa_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Sa::LocalV4::Ip::Sa_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (local_addr_port.is_set || is_set(local_addr_port.yfilter)) leaf_name_data.push_back(local_addr_port.get_name_leafdata());
    if (remote_addr_port.is_set || is_set(remote_addr_port.yfilter)) leaf_name_data.push_back(remote_addr_port.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (encr.is_set || is_set(encr.yfilter)) leaf_name_data.push_back(encr.get_name_leafdata());
    if (keysize.is_set || is_set(keysize.yfilter)) leaf_name_data.push_back(keysize.get_name_leafdata());
    if (prf.is_set || is_set(prf.yfilter)) leaf_name_data.push_back(prf.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());
    if (dh_group.is_set || is_set(dh_group.yfilter)) leaf_name_data.push_back(dh_group.get_name_leafdata());
    if (auth_sign.is_set || is_set(auth_sign.yfilter)) leaf_name_data.push_back(auth_sign.get_name_leafdata());
    if (auth_verify.is_set || is_set(auth_verify.yfilter)) leaf_name_data.push_back(auth_verify.get_name_leafdata());
    if (life_active.is_set || is_set(life_active.yfilter)) leaf_name_data.push_back(life_active.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (status_desc.is_set || is_set(status_desc.yfilter)) leaf_name_data.push_back(status_desc.get_name_leafdata());
    if (local_spi.is_set || is_set(local_spi.yfilter)) leaf_name_data.push_back(local_spi.get_name_leafdata());
    if (remote_spi.is_set || is_set(remote_spi.yfilter)) leaf_name_data.push_back(remote_spi.get_name_leafdata());
    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (sa_initiator.is_set || is_set(sa_initiator.yfilter)) leaf_name_data.push_back(sa_initiator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Sa::LocalV4::Ip::Sa_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Sa::LocalV4::Ip::Sa_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IkEv2::Nodes::Node::Sa::LocalV4::Ip::Sa_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr-port")
    {
        local_addr_port = value;
        local_addr_port.value_namespace = name_space;
        local_addr_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr-port")
    {
        remote_addr_port = value;
        remote_addr_port.value_namespace = name_space;
        remote_addr_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encr")
    {
        encr = value;
        encr.value_namespace = name_space;
        encr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keysize")
    {
        keysize = value;
        keysize.value_namespace = name_space;
        keysize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prf")
    {
        prf = value;
        prf.value_namespace = name_space;
        prf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dh-group")
    {
        dh_group = value;
        dh_group.value_namespace = name_space;
        dh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-sign")
    {
        auth_sign = value;
        auth_sign.value_namespace = name_space;
        auth_sign.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-verify")
    {
        auth_verify = value;
        auth_verify.value_namespace = name_space;
        auth_verify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life-active")
    {
        life_active = value;
        life_active.value_namespace = name_space;
        life_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-desc")
    {
        status_desc = value;
        status_desc.value_namespace = name_space;
        status_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-spi")
    {
        local_spi = value;
        local_spi.value_namespace = name_space;
        local_spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-spi")
    {
        remote_spi = value;
        remote_spi.value_namespace = name_space;
        remote_spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-initiator")
    {
        sa_initiator = value;
        sa_initiator.value_namespace = name_space;
        sa_initiator.value_namespace_prefix = name_space_prefix;
    }
}

void IkEv2::Nodes::Node::Sa::LocalV4::Ip::Sa_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-addr-port")
    {
        local_addr_port.yfilter = yfilter;
    }
    if(value_path == "remote-addr-port")
    {
        remote_addr_port.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "encr")
    {
        encr.yfilter = yfilter;
    }
    if(value_path == "keysize")
    {
        keysize.yfilter = yfilter;
    }
    if(value_path == "prf")
    {
        prf.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
    if(value_path == "dh-group")
    {
        dh_group.yfilter = yfilter;
    }
    if(value_path == "auth-sign")
    {
        auth_sign.yfilter = yfilter;
    }
    if(value_path == "auth-verify")
    {
        auth_verify.yfilter = yfilter;
    }
    if(value_path == "life-active")
    {
        life_active.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "status-desc")
    {
        status_desc.yfilter = yfilter;
    }
    if(value_path == "local-spi")
    {
        local_spi.yfilter = yfilter;
    }
    if(value_path == "remote-spi")
    {
        remote_spi.yfilter = yfilter;
    }
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "sa-initiator")
    {
        sa_initiator.yfilter = yfilter;
    }
}

bool IkEv2::Nodes::Node::Sa::LocalV4::Ip::Sa_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id" || name == "local-addr-port" || name == "remote-addr-port" || name == "state" || name == "encr" || name == "keysize" || name == "prf" || name == "hash" || name == "dh-group" || name == "auth-sign" || name == "auth-verify" || name == "life-active" || name == "session-id" || name == "status-desc" || name == "local-spi" || name == "remote-spi" || name == "local-id" || name == "remote-id" || name == "sa-initiator")
        return true;
    return false;
}

IkEv2::Nodes::Node::Sa::RemoteV4::RemoteV4()
    :
    ip(this, {"address"})
{

    yang_name = "remote-v4"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Sa::RemoteV4::~RemoteV4()
{
}

bool IkEv2::Nodes::Node::Sa::RemoteV4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    return false;
}

bool IkEv2::Nodes::Node::Sa::RemoteV4::has_operation() const
{
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IkEv2::Nodes::Node::Sa::RemoteV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Sa::RemoteV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Sa::RemoteV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        auto ent_ = std::make_shared<IkEv2::Nodes::Node::Sa::RemoteV4::Ip>();
        ent_->parent = this;
        ip.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Sa::RemoteV4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IkEv2::Nodes::Node::Sa::RemoteV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IkEv2::Nodes::Node::Sa::RemoteV4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IkEv2::Nodes::Node::Sa::RemoteV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Ip()
    :
    address{YType::str, "address"}
        ,
    sa(this, {})
{

    yang_name = "ip"; yang_parent_name = "remote-v4"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Sa::RemoteV4::Ip::~Ip()
{
}

bool IkEv2::Nodes::Node::Sa::RemoteV4::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sa.len(); index++)
    {
        if(sa[index]->has_data())
            return true;
    }
    return address.is_set;
}

bool IkEv2::Nodes::Node::Sa::RemoteV4::Ip::has_operation() const
{
    for (std::size_t index=0; index<sa.len(); index++)
    {
        if(sa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string IkEv2::Nodes::Node::Sa::RemoteV4::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Sa::RemoteV4::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Sa::RemoteV4::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sa")
    {
        auto ent_ = std::make_shared<IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Sa_>();
        ent_->parent = this;
        sa.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Sa::RemoteV4::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IkEv2::Nodes::Node::Sa::RemoteV4::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void IkEv2::Nodes::Node::Sa::RemoteV4::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool IkEv2::Nodes::Node::Sa::RemoteV4::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa" || name == "address")
        return true;
    return false;
}

IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Sa_::Sa_()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    local_addr_port{YType::str, "local-addr-port"},
    remote_addr_port{YType::str, "remote-addr-port"},
    state{YType::str, "state"},
    encr{YType::str, "encr"},
    keysize{YType::uint32, "keysize"},
    prf{YType::str, "prf"},
    hash{YType::str, "hash"},
    dh_group{YType::uint32, "dh-group"},
    auth_sign{YType::str, "auth-sign"},
    auth_verify{YType::str, "auth-verify"},
    life_active{YType::str, "life-active"},
    session_id{YType::uint32, "session-id"},
    status_desc{YType::str, "status-desc"},
    local_spi{YType::str, "local-spi"},
    remote_spi{YType::str, "remote-spi"},
    local_id{YType::str, "local-id"},
    remote_id{YType::str, "remote-id"},
    sa_initiator{YType::boolean, "sa-initiator"}
{

    yang_name = "sa"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Sa_::~Sa_()
{
}

bool IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Sa_::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| local_addr_port.is_set
	|| remote_addr_port.is_set
	|| state.is_set
	|| encr.is_set
	|| keysize.is_set
	|| prf.is_set
	|| hash.is_set
	|| dh_group.is_set
	|| auth_sign.is_set
	|| auth_verify.is_set
	|| life_active.is_set
	|| session_id.is_set
	|| status_desc.is_set
	|| local_spi.is_set
	|| remote_spi.is_set
	|| local_id.is_set
	|| remote_id.is_set
	|| sa_initiator.is_set;
}

bool IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Sa_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(local_addr_port.yfilter)
	|| ydk::is_set(remote_addr_port.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(encr.yfilter)
	|| ydk::is_set(keysize.yfilter)
	|| ydk::is_set(prf.yfilter)
	|| ydk::is_set(hash.yfilter)
	|| ydk::is_set(dh_group.yfilter)
	|| ydk::is_set(auth_sign.yfilter)
	|| ydk::is_set(auth_verify.yfilter)
	|| ydk::is_set(life_active.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(status_desc.yfilter)
	|| ydk::is_set(local_spi.yfilter)
	|| ydk::is_set(remote_spi.yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(sa_initiator.yfilter);
}

std::string IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Sa_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Sa_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (local_addr_port.is_set || is_set(local_addr_port.yfilter)) leaf_name_data.push_back(local_addr_port.get_name_leafdata());
    if (remote_addr_port.is_set || is_set(remote_addr_port.yfilter)) leaf_name_data.push_back(remote_addr_port.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (encr.is_set || is_set(encr.yfilter)) leaf_name_data.push_back(encr.get_name_leafdata());
    if (keysize.is_set || is_set(keysize.yfilter)) leaf_name_data.push_back(keysize.get_name_leafdata());
    if (prf.is_set || is_set(prf.yfilter)) leaf_name_data.push_back(prf.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());
    if (dh_group.is_set || is_set(dh_group.yfilter)) leaf_name_data.push_back(dh_group.get_name_leafdata());
    if (auth_sign.is_set || is_set(auth_sign.yfilter)) leaf_name_data.push_back(auth_sign.get_name_leafdata());
    if (auth_verify.is_set || is_set(auth_verify.yfilter)) leaf_name_data.push_back(auth_verify.get_name_leafdata());
    if (life_active.is_set || is_set(life_active.yfilter)) leaf_name_data.push_back(life_active.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (status_desc.is_set || is_set(status_desc.yfilter)) leaf_name_data.push_back(status_desc.get_name_leafdata());
    if (local_spi.is_set || is_set(local_spi.yfilter)) leaf_name_data.push_back(local_spi.get_name_leafdata());
    if (remote_spi.is_set || is_set(remote_spi.yfilter)) leaf_name_data.push_back(remote_spi.get_name_leafdata());
    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (sa_initiator.is_set || is_set(sa_initiator.yfilter)) leaf_name_data.push_back(sa_initiator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Sa_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Sa_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Sa_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr-port")
    {
        local_addr_port = value;
        local_addr_port.value_namespace = name_space;
        local_addr_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr-port")
    {
        remote_addr_port = value;
        remote_addr_port.value_namespace = name_space;
        remote_addr_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encr")
    {
        encr = value;
        encr.value_namespace = name_space;
        encr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keysize")
    {
        keysize = value;
        keysize.value_namespace = name_space;
        keysize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prf")
    {
        prf = value;
        prf.value_namespace = name_space;
        prf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dh-group")
    {
        dh_group = value;
        dh_group.value_namespace = name_space;
        dh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-sign")
    {
        auth_sign = value;
        auth_sign.value_namespace = name_space;
        auth_sign.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-verify")
    {
        auth_verify = value;
        auth_verify.value_namespace = name_space;
        auth_verify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life-active")
    {
        life_active = value;
        life_active.value_namespace = name_space;
        life_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-desc")
    {
        status_desc = value;
        status_desc.value_namespace = name_space;
        status_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-spi")
    {
        local_spi = value;
        local_spi.value_namespace = name_space;
        local_spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-spi")
    {
        remote_spi = value;
        remote_spi.value_namespace = name_space;
        remote_spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-initiator")
    {
        sa_initiator = value;
        sa_initiator.value_namespace = name_space;
        sa_initiator.value_namespace_prefix = name_space_prefix;
    }
}

void IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Sa_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-addr-port")
    {
        local_addr_port.yfilter = yfilter;
    }
    if(value_path == "remote-addr-port")
    {
        remote_addr_port.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "encr")
    {
        encr.yfilter = yfilter;
    }
    if(value_path == "keysize")
    {
        keysize.yfilter = yfilter;
    }
    if(value_path == "prf")
    {
        prf.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
    if(value_path == "dh-group")
    {
        dh_group.yfilter = yfilter;
    }
    if(value_path == "auth-sign")
    {
        auth_sign.yfilter = yfilter;
    }
    if(value_path == "auth-verify")
    {
        auth_verify.yfilter = yfilter;
    }
    if(value_path == "life-active")
    {
        life_active.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "status-desc")
    {
        status_desc.yfilter = yfilter;
    }
    if(value_path == "local-spi")
    {
        local_spi.yfilter = yfilter;
    }
    if(value_path == "remote-spi")
    {
        remote_spi.yfilter = yfilter;
    }
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "sa-initiator")
    {
        sa_initiator.yfilter = yfilter;
    }
}

bool IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Sa_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id" || name == "local-addr-port" || name == "remote-addr-port" || name == "state" || name == "encr" || name == "keysize" || name == "prf" || name == "hash" || name == "dh-group" || name == "auth-sign" || name == "auth-verify" || name == "life-active" || name == "session-id" || name == "status-desc" || name == "local-spi" || name == "remote-spi" || name == "local-id" || name == "remote-id" || name == "sa-initiator")
        return true;
    return false;
}

IkEv2::Nodes::Node::Sa::All::All()
    :
    sa(this, {})
{

    yang_name = "all"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Sa::All::~All()
{
}

bool IkEv2::Nodes::Node::Sa::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sa.len(); index++)
    {
        if(sa[index]->has_data())
            return true;
    }
    return false;
}

bool IkEv2::Nodes::Node::Sa::All::has_operation() const
{
    for (std::size_t index=0; index<sa.len(); index++)
    {
        if(sa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IkEv2::Nodes::Node::Sa::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Sa::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Sa::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sa")
    {
        auto ent_ = std::make_shared<IkEv2::Nodes::Node::Sa::All::Sa_>();
        ent_->parent = this;
        sa.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Sa::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IkEv2::Nodes::Node::Sa::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IkEv2::Nodes::Node::Sa::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IkEv2::Nodes::Node::Sa::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa")
        return true;
    return false;
}

IkEv2::Nodes::Node::Sa::All::Sa_::Sa_()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    local_addr_port{YType::str, "local-addr-port"},
    remote_addr_port{YType::str, "remote-addr-port"},
    state{YType::str, "state"},
    encr{YType::str, "encr"},
    keysize{YType::uint32, "keysize"},
    prf{YType::str, "prf"},
    hash{YType::str, "hash"},
    dh_group{YType::uint32, "dh-group"},
    auth_sign{YType::str, "auth-sign"},
    auth_verify{YType::str, "auth-verify"},
    life_active{YType::str, "life-active"},
    session_id{YType::uint32, "session-id"},
    status_desc{YType::str, "status-desc"},
    local_spi{YType::str, "local-spi"},
    remote_spi{YType::str, "remote-spi"},
    local_id{YType::str, "local-id"},
    remote_id{YType::str, "remote-id"},
    sa_initiator{YType::boolean, "sa-initiator"}
{

    yang_name = "sa"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Sa::All::Sa_::~Sa_()
{
}

bool IkEv2::Nodes::Node::Sa::All::Sa_::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| local_addr_port.is_set
	|| remote_addr_port.is_set
	|| state.is_set
	|| encr.is_set
	|| keysize.is_set
	|| prf.is_set
	|| hash.is_set
	|| dh_group.is_set
	|| auth_sign.is_set
	|| auth_verify.is_set
	|| life_active.is_set
	|| session_id.is_set
	|| status_desc.is_set
	|| local_spi.is_set
	|| remote_spi.is_set
	|| local_id.is_set
	|| remote_id.is_set
	|| sa_initiator.is_set;
}

bool IkEv2::Nodes::Node::Sa::All::Sa_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(local_addr_port.yfilter)
	|| ydk::is_set(remote_addr_port.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(encr.yfilter)
	|| ydk::is_set(keysize.yfilter)
	|| ydk::is_set(prf.yfilter)
	|| ydk::is_set(hash.yfilter)
	|| ydk::is_set(dh_group.yfilter)
	|| ydk::is_set(auth_sign.yfilter)
	|| ydk::is_set(auth_verify.yfilter)
	|| ydk::is_set(life_active.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(status_desc.yfilter)
	|| ydk::is_set(local_spi.yfilter)
	|| ydk::is_set(remote_spi.yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(sa_initiator.yfilter);
}

std::string IkEv2::Nodes::Node::Sa::All::Sa_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Sa::All::Sa_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (local_addr_port.is_set || is_set(local_addr_port.yfilter)) leaf_name_data.push_back(local_addr_port.get_name_leafdata());
    if (remote_addr_port.is_set || is_set(remote_addr_port.yfilter)) leaf_name_data.push_back(remote_addr_port.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (encr.is_set || is_set(encr.yfilter)) leaf_name_data.push_back(encr.get_name_leafdata());
    if (keysize.is_set || is_set(keysize.yfilter)) leaf_name_data.push_back(keysize.get_name_leafdata());
    if (prf.is_set || is_set(prf.yfilter)) leaf_name_data.push_back(prf.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());
    if (dh_group.is_set || is_set(dh_group.yfilter)) leaf_name_data.push_back(dh_group.get_name_leafdata());
    if (auth_sign.is_set || is_set(auth_sign.yfilter)) leaf_name_data.push_back(auth_sign.get_name_leafdata());
    if (auth_verify.is_set || is_set(auth_verify.yfilter)) leaf_name_data.push_back(auth_verify.get_name_leafdata());
    if (life_active.is_set || is_set(life_active.yfilter)) leaf_name_data.push_back(life_active.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (status_desc.is_set || is_set(status_desc.yfilter)) leaf_name_data.push_back(status_desc.get_name_leafdata());
    if (local_spi.is_set || is_set(local_spi.yfilter)) leaf_name_data.push_back(local_spi.get_name_leafdata());
    if (remote_spi.is_set || is_set(remote_spi.yfilter)) leaf_name_data.push_back(remote_spi.get_name_leafdata());
    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (sa_initiator.is_set || is_set(sa_initiator.yfilter)) leaf_name_data.push_back(sa_initiator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Sa::All::Sa_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Sa::All::Sa_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IkEv2::Nodes::Node::Sa::All::Sa_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr-port")
    {
        local_addr_port = value;
        local_addr_port.value_namespace = name_space;
        local_addr_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr-port")
    {
        remote_addr_port = value;
        remote_addr_port.value_namespace = name_space;
        remote_addr_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encr")
    {
        encr = value;
        encr.value_namespace = name_space;
        encr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keysize")
    {
        keysize = value;
        keysize.value_namespace = name_space;
        keysize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prf")
    {
        prf = value;
        prf.value_namespace = name_space;
        prf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dh-group")
    {
        dh_group = value;
        dh_group.value_namespace = name_space;
        dh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-sign")
    {
        auth_sign = value;
        auth_sign.value_namespace = name_space;
        auth_sign.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-verify")
    {
        auth_verify = value;
        auth_verify.value_namespace = name_space;
        auth_verify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life-active")
    {
        life_active = value;
        life_active.value_namespace = name_space;
        life_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-desc")
    {
        status_desc = value;
        status_desc.value_namespace = name_space;
        status_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-spi")
    {
        local_spi = value;
        local_spi.value_namespace = name_space;
        local_spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-spi")
    {
        remote_spi = value;
        remote_spi.value_namespace = name_space;
        remote_spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-initiator")
    {
        sa_initiator = value;
        sa_initiator.value_namespace = name_space;
        sa_initiator.value_namespace_prefix = name_space_prefix;
    }
}

void IkEv2::Nodes::Node::Sa::All::Sa_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-addr-port")
    {
        local_addr_port.yfilter = yfilter;
    }
    if(value_path == "remote-addr-port")
    {
        remote_addr_port.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "encr")
    {
        encr.yfilter = yfilter;
    }
    if(value_path == "keysize")
    {
        keysize.yfilter = yfilter;
    }
    if(value_path == "prf")
    {
        prf.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
    if(value_path == "dh-group")
    {
        dh_group.yfilter = yfilter;
    }
    if(value_path == "auth-sign")
    {
        auth_sign.yfilter = yfilter;
    }
    if(value_path == "auth-verify")
    {
        auth_verify.yfilter = yfilter;
    }
    if(value_path == "life-active")
    {
        life_active.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "status-desc")
    {
        status_desc.yfilter = yfilter;
    }
    if(value_path == "local-spi")
    {
        local_spi.yfilter = yfilter;
    }
    if(value_path == "remote-spi")
    {
        remote_spi.yfilter = yfilter;
    }
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "sa-initiator")
    {
        sa_initiator.yfilter = yfilter;
    }
}

bool IkEv2::Nodes::Node::Sa::All::Sa_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id" || name == "local-addr-port" || name == "remote-addr-port" || name == "state" || name == "encr" || name == "keysize" || name == "prf" || name == "hash" || name == "dh-group" || name == "auth-sign" || name == "auth-verify" || name == "life-active" || name == "session-id" || name == "status-desc" || name == "local-spi" || name == "remote-spi" || name == "local-id" || name == "remote-id" || name == "sa-initiator")
        return true;
    return false;
}

IkEv2::Nodes::Node::Policies::Policies()
    :
    policy(this, {"name"})
{

    yang_name = "policies"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Policies::~Policies()
{
}

bool IkEv2::Nodes::Node::Policies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool IkEv2::Nodes::Node::Policies::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IkEv2::Nodes::Node::Policies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Policies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Policies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<IkEv2::Nodes::Node::Policies::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Policies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IkEv2::Nodes::Node::Policies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IkEv2::Nodes::Node::Policies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IkEv2::Nodes::Node::Policies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

IkEv2::Nodes::Node::Policies::Policy::Policy()
    :
    name{YType::str, "name"},
    policy_name{YType::str, "policy-name"},
    addr{YType::str, "addr"},
    proposal{YType::str, "proposal"}
{

    yang_name = "policy"; yang_parent_name = "policies"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Policies::Policy::~Policy()
{
}

bool IkEv2::Nodes::Node::Policies::Policy::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : proposal.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| policy_name.is_set;
}

bool IkEv2::Nodes::Node::Policies::Policy::has_operation() const
{
    for (auto const & leaf : addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : proposal.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(proposal.yfilter);
}

std::string IkEv2::Nodes::Node::Policies::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Policies::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    auto addr_name_datas = addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), addr_name_datas.begin(), addr_name_datas.end());
    auto proposal_name_datas = proposal.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), proposal_name_datas.begin(), proposal_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Policies::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Policies::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IkEv2::Nodes::Node::Policies::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr.append(value);
    }
    if(value_path == "proposal")
    {
        proposal.append(value);
    }
}

void IkEv2::Nodes::Node::Policies::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "proposal")
    {
        proposal.yfilter = yfilter;
    }
}

bool IkEv2::Nodes::Node::Policies::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "policy-name" || name == "addr" || name == "proposal")
        return true;
    return false;
}

IkEv2::Nodes::Node::Proposals::Proposals()
    :
    proposal(this, {"name"})
{

    yang_name = "proposals"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Proposals::~Proposals()
{
}

bool IkEv2::Nodes::Node::Proposals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<proposal.len(); index++)
    {
        if(proposal[index]->has_data())
            return true;
    }
    return false;
}

bool IkEv2::Nodes::Node::Proposals::has_operation() const
{
    for (std::size_t index=0; index<proposal.len(); index++)
    {
        if(proposal[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IkEv2::Nodes::Node::Proposals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proposals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Proposals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Proposals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proposal")
    {
        auto ent_ = std::make_shared<IkEv2::Nodes::Node::Proposals::Proposal>();
        ent_->parent = this;
        proposal.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Proposals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : proposal.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IkEv2::Nodes::Node::Proposals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IkEv2::Nodes::Node::Proposals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IkEv2::Nodes::Node::Proposals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proposal")
        return true;
    return false;
}

IkEv2::Nodes::Node::Proposals::Proposal::Proposal()
    :
    name{YType::str, "name"},
    proposal_name{YType::str, "proposal-name"},
    encryption_alg{YType::str, "encryption-alg"},
    hash_alg{YType::str, "hash-alg"},
    prf_alg{YType::str, "prf-alg"},
    group_alg{YType::str, "group-alg"}
{

    yang_name = "proposal"; yang_parent_name = "proposals"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Proposals::Proposal::~Proposal()
{
}

bool IkEv2::Nodes::Node::Proposals::Proposal::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : encryption_alg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : hash_alg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : prf_alg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : group_alg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| proposal_name.is_set;
}

bool IkEv2::Nodes::Node::Proposals::Proposal::has_operation() const
{
    for (auto const & leaf : encryption_alg.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : hash_alg.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : prf_alg.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : group_alg.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(proposal_name.yfilter)
	|| ydk::is_set(encryption_alg.yfilter)
	|| ydk::is_set(hash_alg.yfilter)
	|| ydk::is_set(prf_alg.yfilter)
	|| ydk::is_set(group_alg.yfilter);
}

std::string IkEv2::Nodes::Node::Proposals::Proposal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proposal";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Proposals::Proposal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (proposal_name.is_set || is_set(proposal_name.yfilter)) leaf_name_data.push_back(proposal_name.get_name_leafdata());

    auto encryption_alg_name_datas = encryption_alg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), encryption_alg_name_datas.begin(), encryption_alg_name_datas.end());
    auto hash_alg_name_datas = hash_alg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), hash_alg_name_datas.begin(), hash_alg_name_datas.end());
    auto prf_alg_name_datas = prf_alg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prf_alg_name_datas.begin(), prf_alg_name_datas.end());
    auto group_alg_name_datas = group_alg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), group_alg_name_datas.begin(), group_alg_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Proposals::Proposal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Proposals::Proposal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IkEv2::Nodes::Node::Proposals::Proposal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proposal-name")
    {
        proposal_name = value;
        proposal_name.value_namespace = name_space;
        proposal_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-alg")
    {
        encryption_alg.append(value);
    }
    if(value_path == "hash-alg")
    {
        hash_alg.append(value);
    }
    if(value_path == "prf-alg")
    {
        prf_alg.append(value);
    }
    if(value_path == "group-alg")
    {
        group_alg.append(value);
    }
}

void IkEv2::Nodes::Node::Proposals::Proposal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "proposal-name")
    {
        proposal_name.yfilter = yfilter;
    }
    if(value_path == "encryption-alg")
    {
        encryption_alg.yfilter = yfilter;
    }
    if(value_path == "hash-alg")
    {
        hash_alg.yfilter = yfilter;
    }
    if(value_path == "prf-alg")
    {
        prf_alg.yfilter = yfilter;
    }
    if(value_path == "group-alg")
    {
        group_alg.yfilter = yfilter;
    }
}

bool IkEv2::Nodes::Node::Proposals::Proposal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "proposal-name" || name == "encryption-alg" || name == "hash-alg" || name == "prf-alg" || name == "group-alg")
        return true;
    return false;
}

IkEv2::Nodes::Node::Profiles::Profiles()
    :
    profile(this, {"name"})
{

    yang_name = "profiles"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Profiles::~Profiles()
{
}

bool IkEv2::Nodes::Node::Profiles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool IkEv2::Nodes::Node::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IkEv2::Nodes::Node::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Profiles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<IkEv2::Nodes::Node::Profiles::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IkEv2::Nodes::Node::Profiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IkEv2::Nodes::Node::Profiles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IkEv2::Nodes::Node::Profiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

IkEv2::Nodes::Node::Profiles::Profile::Profile()
    :
    name{YType::str, "name"},
    profile_name{YType::str, "profile-name"},
    keyring_name{YType::str, "keyring-name"},
    match_any{YType::boolean, "match-any"},
    lifetime{YType::uint32, "lifetime"},
    dpd_interval{YType::uint32, "dpd-interval"},
    dpd_retry{YType::uint32, "dpd-retry"},
    addr{YType::str, "addr"},
    mask{YType::str, "mask"}
{

    yang_name = "profile"; yang_parent_name = "profiles"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Profiles::Profile::~Profile()
{
}

bool IkEv2::Nodes::Node::Profiles::Profile::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| profile_name.is_set
	|| keyring_name.is_set
	|| match_any.is_set
	|| lifetime.is_set
	|| dpd_interval.is_set
	|| dpd_retry.is_set;
}

bool IkEv2::Nodes::Node::Profiles::Profile::has_operation() const
{
    for (auto const & leaf : addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(keyring_name.yfilter)
	|| ydk::is_set(match_any.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(dpd_interval.yfilter)
	|| ydk::is_set(dpd_retry.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string IkEv2::Nodes::Node::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Profiles::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (keyring_name.is_set || is_set(keyring_name.yfilter)) leaf_name_data.push_back(keyring_name.get_name_leafdata());
    if (match_any.is_set || is_set(match_any.yfilter)) leaf_name_data.push_back(match_any.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (dpd_interval.is_set || is_set(dpd_interval.yfilter)) leaf_name_data.push_back(dpd_interval.get_name_leafdata());
    if (dpd_retry.is_set || is_set(dpd_retry.yfilter)) leaf_name_data.push_back(dpd_retry.get_name_leafdata());

    auto addr_name_datas = addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), addr_name_datas.begin(), addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IkEv2::Nodes::Node::Profiles::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyring-name")
    {
        keyring_name = value;
        keyring_name.value_namespace = name_space;
        keyring_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-any")
    {
        match_any = value;
        match_any.value_namespace = name_space;
        match_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpd-interval")
    {
        dpd_interval = value;
        dpd_interval.value_namespace = name_space;
        dpd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpd-retry")
    {
        dpd_retry = value;
        dpd_retry.value_namespace = name_space;
        dpd_retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

void IkEv2::Nodes::Node::Profiles::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "keyring-name")
    {
        keyring_name.yfilter = yfilter;
    }
    if(value_path == "match-any")
    {
        match_any.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "dpd-interval")
    {
        dpd_interval.yfilter = yfilter;
    }
    if(value_path == "dpd-retry")
    {
        dpd_retry.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool IkEv2::Nodes::Node::Profiles::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "profile-name" || name == "keyring-name" || name == "match-any" || name == "lifetime" || name == "dpd-interval" || name == "dpd-retry" || name == "addr" || name == "mask")
        return true;
    return false;
}

IkEv2::Nodes::Node::Keyrings::Keyrings()
    :
    keyring(this, {"name"})
{

    yang_name = "keyrings"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Keyrings::~Keyrings()
{
}

bool IkEv2::Nodes::Node::Keyrings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<keyring.len(); index++)
    {
        if(keyring[index]->has_data())
            return true;
    }
    return false;
}

bool IkEv2::Nodes::Node::Keyrings::has_operation() const
{
    for (std::size_t index=0; index<keyring.len(); index++)
    {
        if(keyring[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IkEv2::Nodes::Node::Keyrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keyrings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Keyrings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Keyrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keyring")
    {
        auto ent_ = std::make_shared<IkEv2::Nodes::Node::Keyrings::Keyring>();
        ent_->parent = this;
        keyring.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Keyrings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : keyring.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IkEv2::Nodes::Node::Keyrings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IkEv2::Nodes::Node::Keyrings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IkEv2::Nodes::Node::Keyrings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keyring")
        return true;
    return false;
}

IkEv2::Nodes::Node::Keyrings::Keyring::Keyring()
    :
    name{YType::str, "name"},
    keyring_name{YType::str, "keyring-name"}
        ,
    peer(this, {})
{

    yang_name = "keyring"; yang_parent_name = "keyrings"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Keyrings::Keyring::~Keyring()
{
}

bool IkEv2::Nodes::Node::Keyrings::Keyring::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return name.is_set
	|| keyring_name.is_set;
}

bool IkEv2::Nodes::Node::Keyrings::Keyring::has_operation() const
{
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(keyring_name.yfilter);
}

std::string IkEv2::Nodes::Node::Keyrings::Keyring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keyring";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Keyrings::Keyring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (keyring_name.is_set || is_set(keyring_name.yfilter)) leaf_name_data.push_back(keyring_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Keyrings::Keyring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto ent_ = std::make_shared<IkEv2::Nodes::Node::Keyrings::Keyring::Peer>();
        ent_->parent = this;
        peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Keyrings::Keyring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IkEv2::Nodes::Node::Keyrings::Keyring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyring-name")
    {
        keyring_name = value;
        keyring_name.value_namespace = name_space;
        keyring_name.value_namespace_prefix = name_space_prefix;
    }
}

void IkEv2::Nodes::Node::Keyrings::Keyring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "keyring-name")
    {
        keyring_name.yfilter = yfilter;
    }
}

bool IkEv2::Nodes::Node::Keyrings::Keyring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "name" || name == "keyring-name")
        return true;
    return false;
}

IkEv2::Nodes::Node::Keyrings::Keyring::Peer::Peer()
    :
    peer_name{YType::str, "peer-name"},
    ip_address{YType::str, "ip-address"},
    subnet{YType::str, "subnet"},
    local_psk{YType::str, "local-psk"},
    remote_psk{YType::str, "remote-psk"}
{

    yang_name = "peer"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true; 
}

IkEv2::Nodes::Node::Keyrings::Keyring::Peer::~Peer()
{
}

bool IkEv2::Nodes::Node::Keyrings::Keyring::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer_name.is_set
	|| ip_address.is_set
	|| subnet.is_set
	|| local_psk.is_set
	|| remote_psk.is_set;
}

bool IkEv2::Nodes::Node::Keyrings::Keyring::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_name.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(local_psk.yfilter)
	|| ydk::is_set(remote_psk.yfilter);
}

std::string IkEv2::Nodes::Node::Keyrings::Keyring::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IkEv2::Nodes::Node::Keyrings::Keyring::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_name.is_set || is_set(peer_name.yfilter)) leaf_name_data.push_back(peer_name.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (local_psk.is_set || is_set(local_psk.yfilter)) leaf_name_data.push_back(local_psk.get_name_leafdata());
    if (remote_psk.is_set || is_set(remote_psk.yfilter)) leaf_name_data.push_back(remote_psk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IkEv2::Nodes::Node::Keyrings::Keyring::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IkEv2::Nodes::Node::Keyrings::Keyring::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IkEv2::Nodes::Node::Keyrings::Keyring::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-name")
    {
        peer_name = value;
        peer_name.value_namespace = name_space;
        peer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-psk")
    {
        local_psk = value;
        local_psk.value_namespace = name_space;
        local_psk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-psk")
    {
        remote_psk = value;
        remote_psk.value_namespace = name_space;
        remote_psk.value_namespace_prefix = name_space_prefix;
    }
}

void IkEv2::Nodes::Node::Keyrings::Keyring::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-name")
    {
        peer_name.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "local-psk")
    {
        local_psk.yfilter = yfilter;
    }
    if(value_path == "remote-psk")
    {
        remote_psk.yfilter = yfilter;
    }
}

bool IkEv2::Nodes::Node::Keyrings::Keyring::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-name" || name == "ip-address" || name == "subnet" || name == "local-psk" || name == "remote-psk")
        return true;
    return false;
}


}
}

