
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fretta_grid_svr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fretta_grid_svr_oper {

Grid::Grid()
    :
    nodes(std::make_shared<Grid::Nodes>())
{
    nodes->parent = this;

    yang_name = "grid"; yang_parent_name = "Cisco-IOS-XR-fretta-grid-svr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Grid::~Grid()
{
}

bool Grid::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool Grid::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Grid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-grid-svr-oper:grid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Grid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Grid::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Grid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void Grid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Grid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Grid::clone_ptr() const
{
    return std::make_shared<Grid>();
}

std::string Grid::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Grid::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Grid::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Grid::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Grid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Grid::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "grid"; is_top_level_class = false; has_list_ancestor = false; 
}

Grid::Nodes::~Nodes()
{
}

bool Grid::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Grid::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Grid::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-grid-svr-oper:grid/" << get_segment_path();
    return path_buffer.str();
}

std::string Grid::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grid::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Grid::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Grid::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Grid::Nodes::get_children() const
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

void Grid::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Grid::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Grid::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Grid::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    client_xr(std::make_shared<Grid::Nodes::Node::ClientXr>())
    , clients(std::make_shared<Grid::Nodes::Node::Clients>())
{
    client_xr->parent = this;
    clients->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Grid::Nodes::Node::~Node()
{
}

bool Grid::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (client_xr !=  nullptr && client_xr->has_data())
	|| (clients !=  nullptr && clients->has_data());
}

bool Grid::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (client_xr !=  nullptr && client_xr->has_operation())
	|| (clients !=  nullptr && clients->has_operation());
}

std::string Grid::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-grid-svr-oper:grid/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Grid::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grid::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Grid::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-xr")
    {
        if(client_xr == nullptr)
        {
            client_xr = std::make_shared<Grid::Nodes::Node::ClientXr>();
        }
        return client_xr;
    }

    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<Grid::Nodes::Node::Clients>();
        }
        return clients;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Grid::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_xr != nullptr)
    {
        _children["client-xr"] = client_xr;
    }

    if(clients != nullptr)
    {
        _children["clients"] = clients;
    }

    return _children;
}

void Grid::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Grid::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Grid::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-xr" || name == "clients" || name == "node-name")
        return true;
    return false;
}

Grid::Nodes::Node::ClientXr::ClientXr()
    :
    client(this, {"client_name"})
{

    yang_name = "client-xr"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Grid::Nodes::Node::ClientXr::~ClientXr()
{
}

bool Grid::Nodes::Node::ClientXr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Grid::Nodes::Node::ClientXr::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Grid::Nodes::Node::ClientXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grid::Nodes::Node::ClientXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Grid::Nodes::Node::ClientXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<Grid::Nodes::Node::ClientXr::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Grid::Nodes::Node::ClientXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Grid::Nodes::Node::ClientXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Grid::Nodes::Node::ClientXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Grid::Nodes::Node::ClientXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Grid::Nodes::Node::ClientXr::Client::Client()
    :
    client_name{YType::str, "client-name"}
        ,
    client_data(this, {})
{

    yang_name = "client"; yang_parent_name = "client-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Grid::Nodes::Node::ClientXr::Client::~Client()
{
}

bool Grid::Nodes::Node::ClientXr::Client::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client_data.len(); index++)
    {
        if(client_data[index]->has_data())
            return true;
    }
    return client_name.is_set;
}

bool Grid::Nodes::Node::ClientXr::Client::has_operation() const
{
    for (std::size_t index=0; index<client_data.len(); index++)
    {
        if(client_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(client_name.yfilter);
}

std::string Grid::Nodes::Node::ClientXr::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(client_name, "client-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grid::Nodes::Node::ClientXr::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Grid::Nodes::Node::ClientXr::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-data")
    {
        auto ent_ = std::make_shared<Grid::Nodes::Node::ClientXr::Client::ClientData>();
        ent_->parent = this;
        client_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Grid::Nodes::Node::ClientXr::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Grid::Nodes::Node::ClientXr::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
}

void Grid::Nodes::Node::ClientXr::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
}

bool Grid::Nodes::Node::ClientXr::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-data" || name == "client-name")
        return true;
    return false;
}

Grid::Nodes::Node::ClientXr::Client::ClientData::ClientData()
    :
    res_id{YType::uint32, "res-id"}
{

    yang_name = "client-data"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Grid::Nodes::Node::ClientXr::Client::ClientData::~ClientData()
{
}

bool Grid::Nodes::Node::ClientXr::Client::ClientData::has_data() const
{
    if (is_presence_container) return true;
    return res_id.is_set;
}

bool Grid::Nodes::Node::ClientXr::Client::ClientData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(res_id.yfilter);
}

std::string Grid::Nodes::Node::ClientXr::Client::ClientData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grid::Nodes::Node::ClientXr::Client::ClientData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (res_id.is_set || is_set(res_id.yfilter)) leaf_name_data.push_back(res_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Grid::Nodes::Node::ClientXr::Client::ClientData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Grid::Nodes::Node::ClientXr::Client::ClientData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Grid::Nodes::Node::ClientXr::Client::ClientData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "res-id")
    {
        res_id = value;
        res_id.value_namespace = name_space;
        res_id.value_namespace_prefix = name_space_prefix;
    }
}

void Grid::Nodes::Node::ClientXr::Client::ClientData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "res-id")
    {
        res_id.yfilter = yfilter;
    }
}

bool Grid::Nodes::Node::ClientXr::Client::ClientData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "res-id")
        return true;
    return false;
}

Grid::Nodes::Node::Clients::Clients()
    :
    client(this, {"client_name"})
{

    yang_name = "clients"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Grid::Nodes::Node::Clients::~Clients()
{
}

bool Grid::Nodes::Node::Clients::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Grid::Nodes::Node::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Grid::Nodes::Node::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grid::Nodes::Node::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Grid::Nodes::Node::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<Grid::Nodes::Node::Clients::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Grid::Nodes::Node::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Grid::Nodes::Node::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Grid::Nodes::Node::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Grid::Nodes::Node::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Grid::Nodes::Node::Clients::Client::Client()
    :
    client_name{YType::str, "client-name"}
        ,
    client_data(this, {})
{

    yang_name = "client"; yang_parent_name = "clients"; is_top_level_class = false; has_list_ancestor = true; 
}

Grid::Nodes::Node::Clients::Client::~Client()
{
}

bool Grid::Nodes::Node::Clients::Client::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client_data.len(); index++)
    {
        if(client_data[index]->has_data())
            return true;
    }
    return client_name.is_set;
}

bool Grid::Nodes::Node::Clients::Client::has_operation() const
{
    for (std::size_t index=0; index<client_data.len(); index++)
    {
        if(client_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(client_name.yfilter);
}

std::string Grid::Nodes::Node::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(client_name, "client-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grid::Nodes::Node::Clients::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Grid::Nodes::Node::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-data")
    {
        auto ent_ = std::make_shared<Grid::Nodes::Node::Clients::Client::ClientData>();
        ent_->parent = this;
        client_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Grid::Nodes::Node::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Grid::Nodes::Node::Clients::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
}

void Grid::Nodes::Node::Clients::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
}

bool Grid::Nodes::Node::Clients::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-data" || name == "client-name")
        return true;
    return false;
}

Grid::Nodes::Node::Clients::Client::ClientData::ClientData()
    :
    res_id{YType::uint32, "res-id"}
{

    yang_name = "client-data"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Grid::Nodes::Node::Clients::Client::ClientData::~ClientData()
{
}

bool Grid::Nodes::Node::Clients::Client::ClientData::has_data() const
{
    if (is_presence_container) return true;
    return res_id.is_set;
}

bool Grid::Nodes::Node::Clients::Client::ClientData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(res_id.yfilter);
}

std::string Grid::Nodes::Node::Clients::Client::ClientData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grid::Nodes::Node::Clients::Client::ClientData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (res_id.is_set || is_set(res_id.yfilter)) leaf_name_data.push_back(res_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Grid::Nodes::Node::Clients::Client::ClientData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Grid::Nodes::Node::Clients::Client::ClientData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Grid::Nodes::Node::Clients::Client::ClientData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "res-id")
    {
        res_id = value;
        res_id.value_namespace = name_space;
        res_id.value_namespace_prefix = name_space_prefix;
    }
}

void Grid::Nodes::Node::Clients::Client::ClientData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "res-id")
    {
        res_id.yfilter = yfilter;
    }
}

bool Grid::Nodes::Node::Clients::Client::ClientData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "res-id")
        return true;
    return false;
}


}
}

