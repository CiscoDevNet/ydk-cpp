
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

std::shared_ptr<Entity> Grid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Grid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Grid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Grid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Grid::clone_ptr() const
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
{

    yang_name = "nodes"; yang_parent_name = "grid"; is_top_level_class = false; has_list_ancestor = false;
}

Grid::Nodes::~Nodes()
{
}

bool Grid::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Grid::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
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

std::shared_ptr<Entity> Grid::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Grid::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Grid::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
	,clients(std::make_shared<Grid::Nodes::Node::Clients>())
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
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grid::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Grid::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Grid::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_xr != nullptr)
    {
        children["client-xr"] = client_xr;
    }

    if(clients != nullptr)
    {
        children["clients"] = clients;
    }

    return children;
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
{

    yang_name = "client-xr"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Grid::Nodes::Node::ClientXr::~ClientXr()
{
}

bool Grid::Nodes::Node::ClientXr::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Grid::Nodes::Node::ClientXr::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
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

std::shared_ptr<Entity> Grid::Nodes::Node::ClientXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Grid::Nodes::Node::ClientXr::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Grid::Nodes::Node::ClientXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
{

    yang_name = "client"; yang_parent_name = "client-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Grid::Nodes::Node::ClientXr::Client::~Client()
{
}

bool Grid::Nodes::Node::ClientXr::Client::has_data() const
{
    for (std::size_t index=0; index<client_data.size(); index++)
    {
        if(client_data[index]->has_data())
            return true;
    }
    return client_name.is_set;
}

bool Grid::Nodes::Node::ClientXr::Client::has_operation() const
{
    for (std::size_t index=0; index<client_data.size(); index++)
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
    path_buffer << "client" <<"[client-name='" <<client_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grid::Nodes::Node::ClientXr::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Grid::Nodes::Node::ClientXr::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-data")
    {
        for(auto const & c : client_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Grid::Nodes::Node::ClientXr::Client::ClientData>();
        c->parent = this;
        client_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Grid::Nodes::Node::ClientXr::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grid::Nodes::Node::ClientXr::Client::ClientData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (res_id.is_set || is_set(res_id.yfilter)) leaf_name_data.push_back(res_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Grid::Nodes::Node::ClientXr::Client::ClientData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Grid::Nodes::Node::ClientXr::Client::ClientData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
{

    yang_name = "clients"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Grid::Nodes::Node::Clients::~Clients()
{
}

bool Grid::Nodes::Node::Clients::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Grid::Nodes::Node::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
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

std::shared_ptr<Entity> Grid::Nodes::Node::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Grid::Nodes::Node::Clients::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Grid::Nodes::Node::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
{

    yang_name = "client"; yang_parent_name = "clients"; is_top_level_class = false; has_list_ancestor = true;
}

Grid::Nodes::Node::Clients::Client::~Client()
{
}

bool Grid::Nodes::Node::Clients::Client::has_data() const
{
    for (std::size_t index=0; index<client_data.size(); index++)
    {
        if(client_data[index]->has_data())
            return true;
    }
    return client_name.is_set;
}

bool Grid::Nodes::Node::Clients::Client::has_operation() const
{
    for (std::size_t index=0; index<client_data.size(); index++)
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
    path_buffer << "client" <<"[client-name='" <<client_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grid::Nodes::Node::Clients::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Grid::Nodes::Node::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-data")
    {
        for(auto const & c : client_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Grid::Nodes::Node::Clients::Client::ClientData>();
        c->parent = this;
        client_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Grid::Nodes::Node::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grid::Nodes::Node::Clients::Client::ClientData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (res_id.is_set || is_set(res_id.yfilter)) leaf_name_data.push_back(res_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Grid::Nodes::Node::Clients::Client::ClientData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Grid::Nodes::Node::Clients::Client::ClientData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

