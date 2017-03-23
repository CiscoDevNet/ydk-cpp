
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fretta_grid_svr_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_fretta_grid_svr_oper {

Grid::Grid()
    :
    nodes(std::make_shared<Grid::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "grid"; yang_parent_name = "Cisco-IOS-XR-fretta-grid-svr-oper";
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
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Grid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-grid-svr-oper:grid";

    return path_buffer.str();

}

EntityPath Grid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Grid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<Grid::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Grid::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void Grid::set_value(const std::string & value_path, std::string value)
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

Grid::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "grid";
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
    return is_set(operation);
}

std::string Grid::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Grid::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fretta-grid-svr-oper:grid/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Grid::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Grid::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Grid::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Grid::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Grid::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    client_xr(std::make_shared<Grid::Nodes::Node::ClientXr>())
	,clients(std::make_shared<Grid::Nodes::Node::Clients>())
{
    client_xr->parent = this;
    children["client-xr"] = client_xr;

    clients->parent = this;
    children["clients"] = clients;

    yang_name = "node"; yang_parent_name = "nodes";
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
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (client_xr !=  nullptr && client_xr->has_operation())
	|| (clients !=  nullptr && clients->has_operation());
}

std::string Grid::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath Grid::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fretta-grid-svr-oper:grid/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Grid::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "client-xr")
    {
        if(client_xr != nullptr)
        {
            children["client-xr"] = client_xr;
        }
        else
        {
            client_xr = std::make_shared<Grid::Nodes::Node::ClientXr>();
            client_xr->parent = this;
            children["client-xr"] = client_xr;
        }
        return children.at("client-xr");
    }

    if(child_yang_name == "clients")
    {
        if(clients != nullptr)
        {
            children["clients"] = clients;
        }
        else
        {
            clients = std::make_shared<Grid::Nodes::Node::Clients>();
            clients->parent = this;
            children["clients"] = clients;
        }
        return children.at("clients");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Grid::Nodes::Node::get_children()
{
    if(children.find("client-xr") == children.end())
    {
        if(client_xr != nullptr)
        {
            children["client-xr"] = client_xr;
        }
    }

    if(children.find("clients") == children.end())
    {
        if(clients != nullptr)
        {
            children["clients"] = clients;
        }
    }

    return children;
}

void Grid::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Grid::Nodes::Node::ClientXr::ClientXr()
{
    yang_name = "client-xr"; yang_parent_name = "node";
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
    return is_set(operation);
}

std::string Grid::Nodes::Node::ClientXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-xr";

    return path_buffer.str();

}

EntityPath Grid::Nodes::Node::ClientXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientXr' in Cisco_IOS_XR_fretta_grid_svr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Grid::Nodes::Node::ClientXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Grid::Nodes::Node::ClientXr::Client>();
        c->parent = this;
        client.push_back(std::move(c));
        children[segment_path] = client.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Grid::Nodes::Node::ClientXr::get_children()
{
    for (auto const & c : client)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Grid::Nodes::Node::ClientXr::set_value(const std::string & value_path, std::string value)
{
}

Grid::Nodes::Node::ClientXr::Client::Client()
    :
    client_name{YType::str, "client-name"}
{
    yang_name = "client"; yang_parent_name = "client-xr";
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
    return is_set(operation)
	|| is_set(client_name.operation);
}

std::string Grid::Nodes::Node::ClientXr::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[client-name='" <<client_name <<"']";

    return path_buffer.str();

}

EntityPath Grid::Nodes::Node::ClientXr::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XR_fretta_grid_svr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.operation)) leaf_name_data.push_back(client_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Grid::Nodes::Node::ClientXr::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "client-data")
    {
        for(auto const & c : client_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Grid::Nodes::Node::ClientXr::Client::ClientData>();
        c->parent = this;
        client_data.push_back(std::move(c));
        children[segment_path] = client_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Grid::Nodes::Node::ClientXr::Client::get_children()
{
    for (auto const & c : client_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Grid::Nodes::Node::ClientXr::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-name")
    {
        client_name = value;
    }
}

Grid::Nodes::Node::ClientXr::Client::ClientData::ClientData()
    :
    res_id{YType::uint32, "res-id"}
{
    yang_name = "client-data"; yang_parent_name = "client";
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
    return is_set(operation)
	|| is_set(res_id.operation);
}

std::string Grid::Nodes::Node::ClientXr::Client::ClientData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-data";

    return path_buffer.str();

}

EntityPath Grid::Nodes::Node::ClientXr::Client::ClientData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientData' in Cisco_IOS_XR_fretta_grid_svr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (res_id.is_set || is_set(res_id.operation)) leaf_name_data.push_back(res_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Grid::Nodes::Node::ClientXr::Client::ClientData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Grid::Nodes::Node::ClientXr::Client::ClientData::get_children()
{
    return children;
}

void Grid::Nodes::Node::ClientXr::Client::ClientData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "res-id")
    {
        res_id = value;
    }
}

Grid::Nodes::Node::Clients::Clients()
{
    yang_name = "clients"; yang_parent_name = "node";
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
    return is_set(operation);
}

std::string Grid::Nodes::Node::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";

    return path_buffer.str();

}

EntityPath Grid::Nodes::Node::Clients::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clients' in Cisco_IOS_XR_fretta_grid_svr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Grid::Nodes::Node::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Grid::Nodes::Node::Clients::Client>();
        c->parent = this;
        client.push_back(std::move(c));
        children[segment_path] = client.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Grid::Nodes::Node::Clients::get_children()
{
    for (auto const & c : client)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Grid::Nodes::Node::Clients::set_value(const std::string & value_path, std::string value)
{
}

Grid::Nodes::Node::Clients::Client::Client()
    :
    client_name{YType::str, "client-name"}
{
    yang_name = "client"; yang_parent_name = "clients";
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
    return is_set(operation)
	|| is_set(client_name.operation);
}

std::string Grid::Nodes::Node::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[client-name='" <<client_name <<"']";

    return path_buffer.str();

}

EntityPath Grid::Nodes::Node::Clients::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XR_fretta_grid_svr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.operation)) leaf_name_data.push_back(client_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Grid::Nodes::Node::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "client-data")
    {
        for(auto const & c : client_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Grid::Nodes::Node::Clients::Client::ClientData>();
        c->parent = this;
        client_data.push_back(std::move(c));
        children[segment_path] = client_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Grid::Nodes::Node::Clients::Client::get_children()
{
    for (auto const & c : client_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Grid::Nodes::Node::Clients::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-name")
    {
        client_name = value;
    }
}

Grid::Nodes::Node::Clients::Client::ClientData::ClientData()
    :
    res_id{YType::uint32, "res-id"}
{
    yang_name = "client-data"; yang_parent_name = "client";
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
    return is_set(operation)
	|| is_set(res_id.operation);
}

std::string Grid::Nodes::Node::Clients::Client::ClientData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-data";

    return path_buffer.str();

}

EntityPath Grid::Nodes::Node::Clients::Client::ClientData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientData' in Cisco_IOS_XR_fretta_grid_svr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (res_id.is_set || is_set(res_id.operation)) leaf_name_data.push_back(res_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Grid::Nodes::Node::Clients::Client::ClientData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Grid::Nodes::Node::Clients::Client::ClientData::get_children()
{
    return children;
}

void Grid::Nodes::Node::Clients::Client::ClientData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "res-id")
    {
        res_id = value;
    }
}


}
}

