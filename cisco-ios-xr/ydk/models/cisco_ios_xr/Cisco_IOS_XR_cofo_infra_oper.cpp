
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_cofo_infra_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_cofo_infra_oper {

Cofo::Cofo()
    :
    nodes(std::make_shared<Cofo::Nodes>())
{
    nodes->parent = this;

    yang_name = "cofo"; yang_parent_name = "Cisco-IOS-XR-cofo-infra-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Cofo::~Cofo()
{
}

bool Cofo::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool Cofo::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Cofo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cofo-infra-oper:cofo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cofo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cofo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Cofo::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cofo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void Cofo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cofo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Cofo::clone_ptr() const
{
    return std::make_shared<Cofo>();
}

std::string Cofo::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Cofo::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Cofo::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Cofo::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Cofo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Cofo::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "cofo"; is_top_level_class = false; has_list_ancestor = false; 
}

Cofo::Nodes::~Nodes()
{
}

bool Cofo::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Cofo::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Cofo::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cofo-infra-oper:cofo/" << get_segment_path();
    return path_buffer.str();
}

std::string Cofo::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cofo::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cofo::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Cofo::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cofo::Nodes::get_children() const
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

void Cofo::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cofo::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cofo::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Cofo::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    client_ids(std::make_shared<Cofo::Nodes::Node::ClientIds>())
    , topic_ids(std::make_shared<Cofo::Nodes::Node::TopicIds>())
{
    client_ids->parent = this;
    topic_ids->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Cofo::Nodes::Node::~Node()
{
}

bool Cofo::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (client_ids !=  nullptr && client_ids->has_data())
	|| (topic_ids !=  nullptr && topic_ids->has_data());
}

bool Cofo::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (client_ids !=  nullptr && client_ids->has_operation())
	|| (topic_ids !=  nullptr && topic_ids->has_operation());
}

std::string Cofo::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cofo-infra-oper:cofo/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Cofo::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cofo::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cofo::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-ids")
    {
        if(client_ids == nullptr)
        {
            client_ids = std::make_shared<Cofo::Nodes::Node::ClientIds>();
        }
        return client_ids;
    }

    if(child_yang_name == "topic-ids")
    {
        if(topic_ids == nullptr)
        {
            topic_ids = std::make_shared<Cofo::Nodes::Node::TopicIds>();
        }
        return topic_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cofo::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_ids != nullptr)
    {
        _children["client-ids"] = client_ids;
    }

    if(topic_ids != nullptr)
    {
        _children["topic-ids"] = topic_ids;
    }

    return _children;
}

void Cofo::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Cofo::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Cofo::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-ids" || name == "topic-ids" || name == "node-name")
        return true;
    return false;
}

Cofo::Nodes::Node::ClientIds::ClientIds()
    :
    client_id(this, {"id"})
{

    yang_name = "client-ids"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Cofo::Nodes::Node::ClientIds::~ClientIds()
{
}

bool Cofo::Nodes::Node::ClientIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client_id.len(); index++)
    {
        if(client_id[index]->has_data())
            return true;
    }
    return false;
}

bool Cofo::Nodes::Node::ClientIds::has_operation() const
{
    for (std::size_t index=0; index<client_id.len(); index++)
    {
        if(client_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Cofo::Nodes::Node::ClientIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cofo::Nodes::Node::ClientIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cofo::Nodes::Node::ClientIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-id")
    {
        auto ent_ = std::make_shared<Cofo::Nodes::Node::ClientIds::ClientId>();
        ent_->parent = this;
        client_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cofo::Nodes::Node::ClientIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Cofo::Nodes::Node::ClientIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cofo::Nodes::Node::ClientIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cofo::Nodes::Node::ClientIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id")
        return true;
    return false;
}

Cofo::Nodes::Node::ClientIds::ClientId::ClientId()
    :
    id{YType::uint32, "id"},
    connection_handle{YType::uint32, "connection-handle"},
    peer_handle{YType::uint32, "peer-handle"},
    client_id{YType::uint32, "client-id"},
    purge_timeout{YType::uint32, "purge-timeout"},
    host_client{YType::boolean, "host-client"},
    connection_state{YType::uint32, "connection-state"},
    topic_subscribed{YType::uint32, "topic-subscribed"},
    topic_published{YType::uint32, "topic-published"}
{

    yang_name = "client-id"; yang_parent_name = "client-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

Cofo::Nodes::Node::ClientIds::ClientId::~ClientId()
{
}

bool Cofo::Nodes::Node::ClientIds::ClientId::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : topic_subscribed.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : topic_published.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| connection_handle.is_set
	|| peer_handle.is_set
	|| client_id.is_set
	|| purge_timeout.is_set
	|| host_client.is_set
	|| connection_state.is_set;
}

bool Cofo::Nodes::Node::ClientIds::ClientId::has_operation() const
{
    for (auto const & leaf : topic_subscribed.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : topic_published.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(connection_handle.yfilter)
	|| ydk::is_set(peer_handle.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(purge_timeout.yfilter)
	|| ydk::is_set(host_client.yfilter)
	|| ydk::is_set(connection_state.yfilter)
	|| ydk::is_set(topic_subscribed.yfilter)
	|| ydk::is_set(topic_published.yfilter);
}

std::string Cofo::Nodes::Node::ClientIds::ClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-id";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cofo::Nodes::Node::ClientIds::ClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (connection_handle.is_set || is_set(connection_handle.yfilter)) leaf_name_data.push_back(connection_handle.get_name_leafdata());
    if (peer_handle.is_set || is_set(peer_handle.yfilter)) leaf_name_data.push_back(peer_handle.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (purge_timeout.is_set || is_set(purge_timeout.yfilter)) leaf_name_data.push_back(purge_timeout.get_name_leafdata());
    if (host_client.is_set || is_set(host_client.yfilter)) leaf_name_data.push_back(host_client.get_name_leafdata());
    if (connection_state.is_set || is_set(connection_state.yfilter)) leaf_name_data.push_back(connection_state.get_name_leafdata());

    auto topic_subscribed_name_datas = topic_subscribed.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topic_subscribed_name_datas.begin(), topic_subscribed_name_datas.end());
    auto topic_published_name_datas = topic_published.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topic_published_name_datas.begin(), topic_published_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cofo::Nodes::Node::ClientIds::ClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cofo::Nodes::Node::ClientIds::ClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Cofo::Nodes::Node::ClientIds::ClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-handle")
    {
        connection_handle = value;
        connection_handle.value_namespace = name_space;
        connection_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-handle")
    {
        peer_handle = value;
        peer_handle.value_namespace = name_space;
        peer_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purge-timeout")
    {
        purge_timeout = value;
        purge_timeout.value_namespace = name_space;
        purge_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-client")
    {
        host_client = value;
        host_client.value_namespace = name_space;
        host_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-state")
    {
        connection_state = value;
        connection_state.value_namespace = name_space;
        connection_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topic-subscribed")
    {
        topic_subscribed.append(value);
    }
    if(value_path == "topic-published")
    {
        topic_published.append(value);
    }
}

void Cofo::Nodes::Node::ClientIds::ClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "connection-handle")
    {
        connection_handle.yfilter = yfilter;
    }
    if(value_path == "peer-handle")
    {
        peer_handle.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "purge-timeout")
    {
        purge_timeout.yfilter = yfilter;
    }
    if(value_path == "host-client")
    {
        host_client.yfilter = yfilter;
    }
    if(value_path == "connection-state")
    {
        connection_state.yfilter = yfilter;
    }
    if(value_path == "topic-subscribed")
    {
        topic_subscribed.yfilter = yfilter;
    }
    if(value_path == "topic-published")
    {
        topic_published.yfilter = yfilter;
    }
}

bool Cofo::Nodes::Node::ClientIds::ClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "connection-handle" || name == "peer-handle" || name == "client-id" || name == "purge-timeout" || name == "host-client" || name == "connection-state" || name == "topic-subscribed" || name == "topic-published")
        return true;
    return false;
}

Cofo::Nodes::Node::TopicIds::TopicIds()
    :
    topic_id(this, {"id"})
{

    yang_name = "topic-ids"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Cofo::Nodes::Node::TopicIds::~TopicIds()
{
}

bool Cofo::Nodes::Node::TopicIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topic_id.len(); index++)
    {
        if(topic_id[index]->has_data())
            return true;
    }
    return false;
}

bool Cofo::Nodes::Node::TopicIds::has_operation() const
{
    for (std::size_t index=0; index<topic_id.len(); index++)
    {
        if(topic_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Cofo::Nodes::Node::TopicIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topic-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cofo::Nodes::Node::TopicIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cofo::Nodes::Node::TopicIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topic-id")
    {
        auto ent_ = std::make_shared<Cofo::Nodes::Node::TopicIds::TopicId>();
        ent_->parent = this;
        topic_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cofo::Nodes::Node::TopicIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : topic_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Cofo::Nodes::Node::TopicIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cofo::Nodes::Node::TopicIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cofo::Nodes::Node::TopicIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topic-id")
        return true;
    return false;
}

Cofo::Nodes::Node::TopicIds::TopicId::TopicId()
    :
    id{YType::uint32, "id"},
    topic_id{YType::uint32, "topic-id"}
        ,
    database_info_struct(this, {})
{

    yang_name = "topic-id"; yang_parent_name = "topic-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

Cofo::Nodes::Node::TopicIds::TopicId::~TopicId()
{
}

bool Cofo::Nodes::Node::TopicIds::TopicId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<database_info_struct.len(); index++)
    {
        if(database_info_struct[index]->has_data())
            return true;
    }
    return id.is_set
	|| topic_id.is_set;
}

bool Cofo::Nodes::Node::TopicIds::TopicId::has_operation() const
{
    for (std::size_t index=0; index<database_info_struct.len(); index++)
    {
        if(database_info_struct[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(topic_id.yfilter);
}

std::string Cofo::Nodes::Node::TopicIds::TopicId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topic-id";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cofo::Nodes::Node::TopicIds::TopicId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (topic_id.is_set || is_set(topic_id.yfilter)) leaf_name_data.push_back(topic_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cofo::Nodes::Node::TopicIds::TopicId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-info-struct")
    {
        auto ent_ = std::make_shared<Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct>();
        ent_->parent = this;
        database_info_struct.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cofo::Nodes::Node::TopicIds::TopicId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : database_info_struct.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Cofo::Nodes::Node::TopicIds::TopicId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topic-id")
    {
        topic_id = value;
        topic_id.value_namespace = name_space;
        topic_id.value_namespace_prefix = name_space_prefix;
    }
}

void Cofo::Nodes::Node::TopicIds::TopicId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "topic-id")
    {
        topic_id.yfilter = yfilter;
    }
}

bool Cofo::Nodes::Node::TopicIds::TopicId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-info-struct" || name == "id" || name == "topic-id")
        return true;
    return false;
}

Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::DatabaseInfoStruct()
    :
    sdr_id{YType::uint32, "sdr-id"}
        ,
    client_db_info_struct(this, {})
{

    yang_name = "database-info-struct"; yang_parent_name = "topic-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::~DatabaseInfoStruct()
{
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client_db_info_struct.len(); index++)
    {
        if(client_db_info_struct[index]->has_data())
            return true;
    }
    return sdr_id.is_set;
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::has_operation() const
{
    for (std::size_t index=0; index<client_db_info_struct.len(); index++)
    {
        if(client_db_info_struct[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr_id.yfilter);
}

std::string Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-info-struct";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_id.is_set || is_set(sdr_id.yfilter)) leaf_name_data.push_back(sdr_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-db-info-struct")
    {
        auto ent_ = std::make_shared<Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct>();
        ent_->parent = this;
        client_db_info_struct.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client_db_info_struct.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr-id")
    {
        sdr_id = value;
        sdr_id.value_namespace = name_space;
        sdr_id.value_namespace_prefix = name_space_prefix;
    }
}

void Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr-id")
    {
        sdr_id.yfilter = yfilter;
    }
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-db-info-struct" || name == "sdr-id")
        return true;
    return false;
}

Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::ClientDbInfoStruct()
    :
    total_objects{YType::uint32, "total-objects"},
    total_valid_items_in_db{YType::uint32, "total-valid-items-in-db"}
        ,
    cofo_object_published_array(this, {})
{

    yang_name = "client-db-info-struct"; yang_parent_name = "database-info-struct"; is_top_level_class = false; has_list_ancestor = true; 
}

Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::~ClientDbInfoStruct()
{
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cofo_object_published_array.len(); index++)
    {
        if(cofo_object_published_array[index]->has_data())
            return true;
    }
    return total_objects.is_set
	|| total_valid_items_in_db.is_set;
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::has_operation() const
{
    for (std::size_t index=0; index<cofo_object_published_array.len(); index++)
    {
        if(cofo_object_published_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(total_objects.yfilter)
	|| ydk::is_set(total_valid_items_in_db.yfilter);
}

std::string Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-db-info-struct";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_objects.is_set || is_set(total_objects.yfilter)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (total_valid_items_in_db.is_set || is_set(total_valid_items_in_db.yfilter)) leaf_name_data.push_back(total_valid_items_in_db.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cofo-object-published-array")
    {
        auto ent_ = std::make_shared<Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray>();
        ent_->parent = this;
        cofo_object_published_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cofo_object_published_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-objects")
    {
        total_objects = value;
        total_objects.value_namespace = name_space;
        total_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-valid-items-in-db")
    {
        total_valid_items_in_db = value;
        total_valid_items_in_db.value_namespace = name_space;
        total_valid_items_in_db.value_namespace_prefix = name_space_prefix;
    }
}

void Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-objects")
    {
        total_objects.yfilter = yfilter;
    }
    if(value_path == "total-valid-items-in-db")
    {
        total_valid_items_in_db.yfilter = yfilter;
    }
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cofo-object-published-array" || name == "total-objects" || name == "total-valid-items-in-db")
        return true;
    return false;
}

Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::CofoObjectPublishedArray()
    :
    client_id{YType::uint32, "client-id"},
    object_id{YType::uint32, "object-id"},
    insert_count{YType::uint32, "insert-count"},
    item_state{YType::uint32, "item-state"},
    cofo_infra_object_key{YType::str, "cofo-infra-object-key"},
    cofo_infra_object_value{YType::str, "cofo-infra-object-value"}
        ,
    object_add_time(std::make_shared<Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime>())
    , object_delete_time(std::make_shared<Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime>())
    , object_txl_add_time(std::make_shared<Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime>())
    , object_txl_encode_time(std::make_shared<Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime>())
{
    object_add_time->parent = this;
    object_delete_time->parent = this;
    object_txl_add_time->parent = this;
    object_txl_encode_time->parent = this;

    yang_name = "cofo-object-published-array"; yang_parent_name = "client-db-info-struct"; is_top_level_class = false; has_list_ancestor = true; 
}

Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::~CofoObjectPublishedArray()
{
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::has_data() const
{
    if (is_presence_container) return true;
    return client_id.is_set
	|| object_id.is_set
	|| insert_count.is_set
	|| item_state.is_set
	|| cofo_infra_object_key.is_set
	|| cofo_infra_object_value.is_set
	|| (object_add_time !=  nullptr && object_add_time->has_data())
	|| (object_delete_time !=  nullptr && object_delete_time->has_data())
	|| (object_txl_add_time !=  nullptr && object_txl_add_time->has_data())
	|| (object_txl_encode_time !=  nullptr && object_txl_encode_time->has_data());
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(insert_count.yfilter)
	|| ydk::is_set(item_state.yfilter)
	|| ydk::is_set(cofo_infra_object_key.yfilter)
	|| ydk::is_set(cofo_infra_object_value.yfilter)
	|| (object_add_time !=  nullptr && object_add_time->has_operation())
	|| (object_delete_time !=  nullptr && object_delete_time->has_operation())
	|| (object_txl_add_time !=  nullptr && object_txl_add_time->has_operation())
	|| (object_txl_encode_time !=  nullptr && object_txl_encode_time->has_operation());
}

std::string Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cofo-object-published-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (insert_count.is_set || is_set(insert_count.yfilter)) leaf_name_data.push_back(insert_count.get_name_leafdata());
    if (item_state.is_set || is_set(item_state.yfilter)) leaf_name_data.push_back(item_state.get_name_leafdata());
    if (cofo_infra_object_key.is_set || is_set(cofo_infra_object_key.yfilter)) leaf_name_data.push_back(cofo_infra_object_key.get_name_leafdata());
    if (cofo_infra_object_value.is_set || is_set(cofo_infra_object_value.yfilter)) leaf_name_data.push_back(cofo_infra_object_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object-add-time")
    {
        if(object_add_time == nullptr)
        {
            object_add_time = std::make_shared<Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime>();
        }
        return object_add_time;
    }

    if(child_yang_name == "object-delete-time")
    {
        if(object_delete_time == nullptr)
        {
            object_delete_time = std::make_shared<Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime>();
        }
        return object_delete_time;
    }

    if(child_yang_name == "object-txl-add-time")
    {
        if(object_txl_add_time == nullptr)
        {
            object_txl_add_time = std::make_shared<Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime>();
        }
        return object_txl_add_time;
    }

    if(child_yang_name == "object-txl-encode-time")
    {
        if(object_txl_encode_time == nullptr)
        {
            object_txl_encode_time = std::make_shared<Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime>();
        }
        return object_txl_encode_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(object_add_time != nullptr)
    {
        _children["object-add-time"] = object_add_time;
    }

    if(object_delete_time != nullptr)
    {
        _children["object-delete-time"] = object_delete_time;
    }

    if(object_txl_add_time != nullptr)
    {
        _children["object-txl-add-time"] = object_txl_add_time;
    }

    if(object_txl_encode_time != nullptr)
    {
        _children["object-txl-encode-time"] = object_txl_encode_time;
    }

    return _children;
}

void Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insert-count")
    {
        insert_count = value;
        insert_count.value_namespace = name_space;
        insert_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "item-state")
    {
        item_state = value;
        item_state.value_namespace = name_space;
        item_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cofo-infra-object-key")
    {
        cofo_infra_object_key = value;
        cofo_infra_object_key.value_namespace = name_space;
        cofo_infra_object_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cofo-infra-object-value")
    {
        cofo_infra_object_value = value;
        cofo_infra_object_value.value_namespace = name_space;
        cofo_infra_object_value.value_namespace_prefix = name_space_prefix;
    }
}

void Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "object-id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "insert-count")
    {
        insert_count.yfilter = yfilter;
    }
    if(value_path == "item-state")
    {
        item_state.yfilter = yfilter;
    }
    if(value_path == "cofo-infra-object-key")
    {
        cofo_infra_object_key.yfilter = yfilter;
    }
    if(value_path == "cofo-infra-object-value")
    {
        cofo_infra_object_value.yfilter = yfilter;
    }
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-add-time" || name == "object-delete-time" || name == "object-txl-add-time" || name == "object-txl-encode-time" || name == "client-id" || name == "object-id" || name == "insert-count" || name == "item-state" || name == "cofo-infra-object-key" || name == "cofo-infra-object-value")
        return true;
    return false;
}

Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime::ObjectAddTime()
    :
    tv_sec{YType::uint32, "tv-sec"},
    tv_nsec{YType::uint32, "tv-nsec"}
{

    yang_name = "object-add-time"; yang_parent_name = "cofo-object-published-array"; is_top_level_class = false; has_list_ancestor = true; 
}

Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime::~ObjectAddTime()
{
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime::has_data() const
{
    if (is_presence_container) return true;
    return tv_sec.is_set
	|| tv_nsec.is_set;
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tv_sec.yfilter)
	|| ydk::is_set(tv_nsec.yfilter);
}

std::string Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-add-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tv_sec.is_set || is_set(tv_sec.yfilter)) leaf_name_data.push_back(tv_sec.get_name_leafdata());
    if (tv_nsec.is_set || is_set(tv_nsec.yfilter)) leaf_name_data.push_back(tv_nsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tv-sec")
    {
        tv_sec = value;
        tv_sec.value_namespace = name_space;
        tv_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tv-nsec")
    {
        tv_nsec = value;
        tv_nsec.value_namespace = name_space;
        tv_nsec.value_namespace_prefix = name_space_prefix;
    }
}

void Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tv-sec")
    {
        tv_sec.yfilter = yfilter;
    }
    if(value_path == "tv-nsec")
    {
        tv_nsec.yfilter = yfilter;
    }
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectAddTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tv-sec" || name == "tv-nsec")
        return true;
    return false;
}

Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime::ObjectDeleteTime()
    :
    tv_sec{YType::uint32, "tv-sec"},
    tv_nsec{YType::uint32, "tv-nsec"}
{

    yang_name = "object-delete-time"; yang_parent_name = "cofo-object-published-array"; is_top_level_class = false; has_list_ancestor = true; 
}

Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime::~ObjectDeleteTime()
{
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime::has_data() const
{
    if (is_presence_container) return true;
    return tv_sec.is_set
	|| tv_nsec.is_set;
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tv_sec.yfilter)
	|| ydk::is_set(tv_nsec.yfilter);
}

std::string Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-delete-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tv_sec.is_set || is_set(tv_sec.yfilter)) leaf_name_data.push_back(tv_sec.get_name_leafdata());
    if (tv_nsec.is_set || is_set(tv_nsec.yfilter)) leaf_name_data.push_back(tv_nsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tv-sec")
    {
        tv_sec = value;
        tv_sec.value_namespace = name_space;
        tv_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tv-nsec")
    {
        tv_nsec = value;
        tv_nsec.value_namespace = name_space;
        tv_nsec.value_namespace_prefix = name_space_prefix;
    }
}

void Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tv-sec")
    {
        tv_sec.yfilter = yfilter;
    }
    if(value_path == "tv-nsec")
    {
        tv_nsec.yfilter = yfilter;
    }
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectDeleteTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tv-sec" || name == "tv-nsec")
        return true;
    return false;
}

Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime::ObjectTxlAddTime()
    :
    tv_sec{YType::uint32, "tv-sec"},
    tv_nsec{YType::uint32, "tv-nsec"}
{

    yang_name = "object-txl-add-time"; yang_parent_name = "cofo-object-published-array"; is_top_level_class = false; has_list_ancestor = true; 
}

Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime::~ObjectTxlAddTime()
{
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime::has_data() const
{
    if (is_presence_container) return true;
    return tv_sec.is_set
	|| tv_nsec.is_set;
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tv_sec.yfilter)
	|| ydk::is_set(tv_nsec.yfilter);
}

std::string Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-txl-add-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tv_sec.is_set || is_set(tv_sec.yfilter)) leaf_name_data.push_back(tv_sec.get_name_leafdata());
    if (tv_nsec.is_set || is_set(tv_nsec.yfilter)) leaf_name_data.push_back(tv_nsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tv-sec")
    {
        tv_sec = value;
        tv_sec.value_namespace = name_space;
        tv_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tv-nsec")
    {
        tv_nsec = value;
        tv_nsec.value_namespace = name_space;
        tv_nsec.value_namespace_prefix = name_space_prefix;
    }
}

void Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tv-sec")
    {
        tv_sec.yfilter = yfilter;
    }
    if(value_path == "tv-nsec")
    {
        tv_nsec.yfilter = yfilter;
    }
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlAddTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tv-sec" || name == "tv-nsec")
        return true;
    return false;
}

Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime::ObjectTxlEncodeTime()
    :
    tv_sec{YType::uint32, "tv-sec"},
    tv_nsec{YType::uint32, "tv-nsec"}
{

    yang_name = "object-txl-encode-time"; yang_parent_name = "cofo-object-published-array"; is_top_level_class = false; has_list_ancestor = true; 
}

Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime::~ObjectTxlEncodeTime()
{
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime::has_data() const
{
    if (is_presence_container) return true;
    return tv_sec.is_set
	|| tv_nsec.is_set;
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tv_sec.yfilter)
	|| ydk::is_set(tv_nsec.yfilter);
}

std::string Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-txl-encode-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tv_sec.is_set || is_set(tv_sec.yfilter)) leaf_name_data.push_back(tv_sec.get_name_leafdata());
    if (tv_nsec.is_set || is_set(tv_nsec.yfilter)) leaf_name_data.push_back(tv_nsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tv-sec")
    {
        tv_sec = value;
        tv_sec.value_namespace = name_space;
        tv_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tv-nsec")
    {
        tv_nsec = value;
        tv_nsec.value_namespace = name_space;
        tv_nsec.value_namespace_prefix = name_space_prefix;
    }
}

void Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tv-sec")
    {
        tv_sec.yfilter = yfilter;
    }
    if(value_path == "tv-nsec")
    {
        tv_nsec.yfilter = yfilter;
    }
}

bool Cofo::Nodes::Node::TopicIds::TopicId::DatabaseInfoStruct::ClientDbInfoStruct::CofoObjectPublishedArray::ObjectTxlEncodeTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tv-sec" || name == "tv-nsec")
        return true;
    return false;
}


}
}

