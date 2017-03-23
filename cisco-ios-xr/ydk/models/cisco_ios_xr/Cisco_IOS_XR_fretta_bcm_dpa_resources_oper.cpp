
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fretta_bcm_dpa_resources_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_fretta_bcm_dpa_resources_oper {

Dpa::Dpa()
    :
    resources(std::make_shared<Dpa::Resources>())
	,stats(std::make_shared<Dpa::Stats>())
{
    resources->parent = this;
    children["resources"] = resources;

    stats->parent = this;
    children["stats"] = stats;

    yang_name = "dpa"; yang_parent_name = "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper";
}

Dpa::~Dpa()
{
}

bool Dpa::has_data() const
{
    return (resources !=  nullptr && resources->has_data())
	|| (stats !=  nullptr && stats->has_data());
}

bool Dpa::has_operation() const
{
    return is_set(operation)
	|| (resources !=  nullptr && resources->has_operation())
	|| (stats !=  nullptr && stats->has_operation());
}

std::string Dpa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa";

    return path_buffer.str();

}

EntityPath Dpa::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Dpa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "resources")
    {
        if(resources != nullptr)
        {
            children["resources"] = resources;
        }
        else
        {
            resources = std::make_shared<Dpa::Resources>();
            resources->parent = this;
            children["resources"] = resources;
        }
        return children.at("resources");
    }

    if(child_yang_name == "stats")
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
        else
        {
            stats = std::make_shared<Dpa::Stats>();
            stats->parent = this;
            children["stats"] = stats;
        }
        return children.at("stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::get_children()
{
    if(children.find("resources") == children.end())
    {
        if(resources != nullptr)
        {
            children["resources"] = resources;
        }
    }

    if(children.find("stats") == children.end())
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
    }

    return children;
}

void Dpa::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Dpa::clone_ptr() const
{
    return std::make_shared<Dpa>();
}

std::string Dpa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Dpa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Dpa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Dpa::Resources::Resources()
    :
    nodes(std::make_shared<Dpa::Resources::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "resources"; yang_parent_name = "dpa";
}

Dpa::Resources::~Resources()
{
}

bool Dpa::Resources::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Dpa::Resources::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Dpa::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";

    return path_buffer.str();

}

EntityPath Dpa::Resources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_shared<Dpa::Resources::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Resources::get_children()
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

void Dpa::Resources::set_value(const std::string & value_path, std::string value)
{
}

Dpa::Resources::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "resources";
}

Dpa::Resources::Nodes::~Nodes()
{
}

bool Dpa::Resources::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Resources::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dpa::Resources::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Dpa::Resources::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa/resources/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Resources::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Dpa::Resources::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Resources::Nodes::get_children()
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

void Dpa::Resources::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Dpa::Resources::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    table_datas(std::make_shared<Dpa::Resources::Nodes::Node::TableDatas>())
{
    table_datas->parent = this;
    children["table-datas"] = table_datas;

    yang_name = "node"; yang_parent_name = "nodes";
}

Dpa::Resources::Nodes::Node::~Node()
{
}

bool Dpa::Resources::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (table_datas !=  nullptr && table_datas->has_data());
}

bool Dpa::Resources::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (table_datas !=  nullptr && table_datas->has_operation());
}

std::string Dpa::Resources::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath Dpa::Resources::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa/resources/nodes/" << get_segment_path();
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

std::shared_ptr<Entity> Dpa::Resources::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "table-datas")
    {
        if(table_datas != nullptr)
        {
            children["table-datas"] = table_datas;
        }
        else
        {
            table_datas = std::make_shared<Dpa::Resources::Nodes::Node::TableDatas>();
            table_datas->parent = this;
            children["table-datas"] = table_datas;
        }
        return children.at("table-datas");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Resources::Nodes::Node::get_children()
{
    if(children.find("table-datas") == children.end())
    {
        if(table_datas != nullptr)
        {
            children["table-datas"] = table_datas;
        }
    }

    return children;
}

void Dpa::Resources::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Dpa::Resources::Nodes::Node::TableDatas::TableDatas()
{
    yang_name = "table-datas"; yang_parent_name = "node";
}

Dpa::Resources::Nodes::Node::TableDatas::~TableDatas()
{
}

bool Dpa::Resources::Nodes::Node::TableDatas::has_data() const
{
    for (std::size_t index=0; index<table_data.size(); index++)
    {
        if(table_data[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Resources::Nodes::Node::TableDatas::has_operation() const
{
    for (std::size_t index=0; index<table_data.size(); index++)
    {
        if(table_data[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dpa::Resources::Nodes::Node::TableDatas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-datas";

    return path_buffer.str();

}

EntityPath Dpa::Resources::Nodes::Node::TableDatas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TableDatas' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Resources::Nodes::Node::TableDatas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "table-data")
    {
        for(auto const & c : table_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Resources::Nodes::Node::TableDatas::TableData>();
        c->parent = this;
        table_data.push_back(std::move(c));
        children[segment_path] = table_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Resources::Nodes::Node::TableDatas::get_children()
{
    for (auto const & c : table_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Resources::Nodes::Node::TableDatas::set_value(const std::string & value_path, std::string value)
{
}

Dpa::Resources::Nodes::Node::TableDatas::TableData::TableData()
    :
    resource{YType::uint32, "resource"},
    is_global{YType::boolean, "is-global"},
    name{YType::str, "name"},
    num_npus{YType::uint32, "num-npus"},
    table_id{YType::uint32, "table-id"},
    table_specific_list{YType::str, "table-specific-list"}
{
    yang_name = "table-data"; yang_parent_name = "table-datas";
}

Dpa::Resources::Nodes::Node::TableDatas::TableData::~TableData()
{
}

bool Dpa::Resources::Nodes::Node::TableDatas::TableData::has_data() const
{
    for (std::size_t index=0; index<npu_tblr.size(); index++)
    {
        if(npu_tblr[index]->has_data())
            return true;
    }
    return resource.is_set
	|| is_global.is_set
	|| name.is_set
	|| num_npus.is_set
	|| table_id.is_set
	|| table_specific_list.is_set;
}

bool Dpa::Resources::Nodes::Node::TableDatas::TableData::has_operation() const
{
    for (std::size_t index=0; index<npu_tblr.size(); index++)
    {
        if(npu_tblr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(resource.operation)
	|| is_set(is_global.operation)
	|| is_set(name.operation)
	|| is_set(num_npus.operation)
	|| is_set(table_id.operation)
	|| is_set(table_specific_list.operation);
}

std::string Dpa::Resources::Nodes::Node::TableDatas::TableData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-data" <<"[resource='" <<resource <<"']";

    return path_buffer.str();

}

EntityPath Dpa::Resources::Nodes::Node::TableDatas::TableData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TableData' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resource.is_set || is_set(resource.operation)) leaf_name_data.push_back(resource.get_name_leafdata());
    if (is_global.is_set || is_set(is_global.operation)) leaf_name_data.push_back(is_global.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (num_npus.is_set || is_set(num_npus.operation)) leaf_name_data.push_back(num_npus.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_specific_list.is_set || is_set(table_specific_list.operation)) leaf_name_data.push_back(table_specific_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Resources::Nodes::Node::TableDatas::TableData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "npu-tblr")
    {
        for(auto const & c : npu_tblr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr>();
        c->parent = this;
        npu_tblr.push_back(std::move(c));
        children[segment_path] = npu_tblr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Resources::Nodes::Node::TableDatas::TableData::get_children()
{
    for (auto const & c : npu_tblr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Resources::Nodes::Node::TableDatas::TableData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "resource")
    {
        resource = value;
    }
    if(value_path == "is-global")
    {
        is_global = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "num-npus")
    {
        num_npus = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "table-specific-list")
    {
        table_specific_list = value;
    }
}

Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::NpuTblr()
    :
    create_ok{YType::uint32, "create-ok"},
    create_req{YType::uint32, "create-req"},
    delete_ok{YType::uint32, "delete-ok"},
    delete_req{YType::uint32, "delete-req"},
    eod_ok{YType::uint32, "eod-ok"},
    eod_req{YType::uint32, "eod-req"},
    err_db_exists{YType::uint32, "err-db-exists"},
    err_db_nomem{YType::uint32, "err-db-nomem"},
    err_db_notfound{YType::uint32, "err-db-notfound"},
    err_hw_fail{YType::uint32, "err-hw-fail"},
    err_ref_resolve{YType::uint32, "err-ref-resolve"},
    npu_id{YType::uint32, "npu-id"},
    num_objs{YType::uint32, "num-objs"},
    update_ok{YType::uint32, "update-ok"},
    update_req{YType::uint32, "update-req"}
{
    yang_name = "npu-tblr"; yang_parent_name = "table-data";
}

Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::~NpuTblr()
{
}

bool Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::has_data() const
{
    return create_ok.is_set
	|| create_req.is_set
	|| delete_ok.is_set
	|| delete_req.is_set
	|| eod_ok.is_set
	|| eod_req.is_set
	|| err_db_exists.is_set
	|| err_db_nomem.is_set
	|| err_db_notfound.is_set
	|| err_hw_fail.is_set
	|| err_ref_resolve.is_set
	|| npu_id.is_set
	|| num_objs.is_set
	|| update_ok.is_set
	|| update_req.is_set;
}

bool Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::has_operation() const
{
    return is_set(operation)
	|| is_set(create_ok.operation)
	|| is_set(create_req.operation)
	|| is_set(delete_ok.operation)
	|| is_set(delete_req.operation)
	|| is_set(eod_ok.operation)
	|| is_set(eod_req.operation)
	|| is_set(err_db_exists.operation)
	|| is_set(err_db_nomem.operation)
	|| is_set(err_db_notfound.operation)
	|| is_set(err_hw_fail.operation)
	|| is_set(err_ref_resolve.operation)
	|| is_set(npu_id.operation)
	|| is_set(num_objs.operation)
	|| is_set(update_ok.operation)
	|| is_set(update_req.operation);
}

std::string Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-tblr";

    return path_buffer.str();

}

EntityPath Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NpuTblr' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create_ok.is_set || is_set(create_ok.operation)) leaf_name_data.push_back(create_ok.get_name_leafdata());
    if (create_req.is_set || is_set(create_req.operation)) leaf_name_data.push_back(create_req.get_name_leafdata());
    if (delete_ok.is_set || is_set(delete_ok.operation)) leaf_name_data.push_back(delete_ok.get_name_leafdata());
    if (delete_req.is_set || is_set(delete_req.operation)) leaf_name_data.push_back(delete_req.get_name_leafdata());
    if (eod_ok.is_set || is_set(eod_ok.operation)) leaf_name_data.push_back(eod_ok.get_name_leafdata());
    if (eod_req.is_set || is_set(eod_req.operation)) leaf_name_data.push_back(eod_req.get_name_leafdata());
    if (err_db_exists.is_set || is_set(err_db_exists.operation)) leaf_name_data.push_back(err_db_exists.get_name_leafdata());
    if (err_db_nomem.is_set || is_set(err_db_nomem.operation)) leaf_name_data.push_back(err_db_nomem.get_name_leafdata());
    if (err_db_notfound.is_set || is_set(err_db_notfound.operation)) leaf_name_data.push_back(err_db_notfound.get_name_leafdata());
    if (err_hw_fail.is_set || is_set(err_hw_fail.operation)) leaf_name_data.push_back(err_hw_fail.get_name_leafdata());
    if (err_ref_resolve.is_set || is_set(err_ref_resolve.operation)) leaf_name_data.push_back(err_ref_resolve.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.operation)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (num_objs.is_set || is_set(num_objs.operation)) leaf_name_data.push_back(num_objs.get_name_leafdata());
    if (update_ok.is_set || is_set(update_ok.operation)) leaf_name_data.push_back(update_ok.get_name_leafdata());
    if (update_req.is_set || is_set(update_req.operation)) leaf_name_data.push_back(update_req.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::get_children()
{
    return children;
}

void Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "create-ok")
    {
        create_ok = value;
    }
    if(value_path == "create-req")
    {
        create_req = value;
    }
    if(value_path == "delete-ok")
    {
        delete_ok = value;
    }
    if(value_path == "delete-req")
    {
        delete_req = value;
    }
    if(value_path == "eod-ok")
    {
        eod_ok = value;
    }
    if(value_path == "eod-req")
    {
        eod_req = value;
    }
    if(value_path == "err-db-exists")
    {
        err_db_exists = value;
    }
    if(value_path == "err-db-nomem")
    {
        err_db_nomem = value;
    }
    if(value_path == "err-db-notfound")
    {
        err_db_notfound = value;
    }
    if(value_path == "err-hw-fail")
    {
        err_hw_fail = value;
    }
    if(value_path == "err-ref-resolve")
    {
        err_ref_resolve = value;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
    }
    if(value_path == "num-objs")
    {
        num_objs = value;
    }
    if(value_path == "update-ok")
    {
        update_ok = value;
    }
    if(value_path == "update-req")
    {
        update_req = value;
    }
}

Dpa::Stats::Stats()
    :
    nodes(std::make_shared<Dpa::Stats::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "stats"; yang_parent_name = "dpa";
}

Dpa::Stats::~Stats()
{
}

bool Dpa::Stats::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Dpa::Stats::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Dpa::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

EntityPath Dpa::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_shared<Dpa::Stats::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::get_children()
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

void Dpa::Stats::set_value(const std::string & value_path, std::string value)
{
}

Dpa::Stats::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "stats";
}

Dpa::Stats::Nodes::~Nodes()
{
}

bool Dpa::Stats::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dpa::Stats::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa/stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Dpa::Stats::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::get_children()
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

void Dpa::Stats::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Dpa::Stats::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    clear_voq_data_for_npu_numbers(std::make_shared<Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers>())
	,npu_number_for_trap_data_clears(std::make_shared<Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears>())
	,npu_number_for_trap_datas(std::make_shared<Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas>())
	,npu_number_for_voq_datas(std::make_shared<Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas>())
	,voq_base_number_stats_clears(std::make_shared<Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears>())
	,voq_base_numbers(std::make_shared<Dpa::Stats::Nodes::Node::VoqBaseNumbers>())
{
    clear_voq_data_for_npu_numbers->parent = this;
    children["clear-voq-data-for-npu-numbers"] = clear_voq_data_for_npu_numbers;

    npu_number_for_trap_data_clears->parent = this;
    children["npu-number-for-trap-data-clears"] = npu_number_for_trap_data_clears;

    npu_number_for_trap_datas->parent = this;
    children["npu-number-for-trap-datas"] = npu_number_for_trap_datas;

    npu_number_for_voq_datas->parent = this;
    children["npu-number-for-voq-datas"] = npu_number_for_voq_datas;

    voq_base_number_stats_clears->parent = this;
    children["voq-base-number-stats-clears"] = voq_base_number_stats_clears;

    voq_base_numbers->parent = this;
    children["voq-base-numbers"] = voq_base_numbers;

    yang_name = "node"; yang_parent_name = "nodes";
}

Dpa::Stats::Nodes::Node::~Node()
{
}

bool Dpa::Stats::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (clear_voq_data_for_npu_numbers !=  nullptr && clear_voq_data_for_npu_numbers->has_data())
	|| (npu_number_for_trap_data_clears !=  nullptr && npu_number_for_trap_data_clears->has_data())
	|| (npu_number_for_trap_datas !=  nullptr && npu_number_for_trap_datas->has_data())
	|| (npu_number_for_voq_datas !=  nullptr && npu_number_for_voq_datas->has_data())
	|| (voq_base_number_stats_clears !=  nullptr && voq_base_number_stats_clears->has_data())
	|| (voq_base_numbers !=  nullptr && voq_base_numbers->has_data());
}

bool Dpa::Stats::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (clear_voq_data_for_npu_numbers !=  nullptr && clear_voq_data_for_npu_numbers->has_operation())
	|| (npu_number_for_trap_data_clears !=  nullptr && npu_number_for_trap_data_clears->has_operation())
	|| (npu_number_for_trap_datas !=  nullptr && npu_number_for_trap_datas->has_operation())
	|| (npu_number_for_voq_datas !=  nullptr && npu_number_for_voq_datas->has_operation())
	|| (voq_base_number_stats_clears !=  nullptr && voq_base_number_stats_clears->has_operation())
	|| (voq_base_numbers !=  nullptr && voq_base_numbers->has_operation());
}

std::string Dpa::Stats::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa/stats/nodes/" << get_segment_path();
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

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "clear-voq-data-for-npu-numbers")
    {
        if(clear_voq_data_for_npu_numbers != nullptr)
        {
            children["clear-voq-data-for-npu-numbers"] = clear_voq_data_for_npu_numbers;
        }
        else
        {
            clear_voq_data_for_npu_numbers = std::make_shared<Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers>();
            clear_voq_data_for_npu_numbers->parent = this;
            children["clear-voq-data-for-npu-numbers"] = clear_voq_data_for_npu_numbers;
        }
        return children.at("clear-voq-data-for-npu-numbers");
    }

    if(child_yang_name == "npu-number-for-trap-data-clears")
    {
        if(npu_number_for_trap_data_clears != nullptr)
        {
            children["npu-number-for-trap-data-clears"] = npu_number_for_trap_data_clears;
        }
        else
        {
            npu_number_for_trap_data_clears = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears>();
            npu_number_for_trap_data_clears->parent = this;
            children["npu-number-for-trap-data-clears"] = npu_number_for_trap_data_clears;
        }
        return children.at("npu-number-for-trap-data-clears");
    }

    if(child_yang_name == "npu-number-for-trap-datas")
    {
        if(npu_number_for_trap_datas != nullptr)
        {
            children["npu-number-for-trap-datas"] = npu_number_for_trap_datas;
        }
        else
        {
            npu_number_for_trap_datas = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas>();
            npu_number_for_trap_datas->parent = this;
            children["npu-number-for-trap-datas"] = npu_number_for_trap_datas;
        }
        return children.at("npu-number-for-trap-datas");
    }

    if(child_yang_name == "npu-number-for-voq-datas")
    {
        if(npu_number_for_voq_datas != nullptr)
        {
            children["npu-number-for-voq-datas"] = npu_number_for_voq_datas;
        }
        else
        {
            npu_number_for_voq_datas = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas>();
            npu_number_for_voq_datas->parent = this;
            children["npu-number-for-voq-datas"] = npu_number_for_voq_datas;
        }
        return children.at("npu-number-for-voq-datas");
    }

    if(child_yang_name == "voq-base-number-stats-clears")
    {
        if(voq_base_number_stats_clears != nullptr)
        {
            children["voq-base-number-stats-clears"] = voq_base_number_stats_clears;
        }
        else
        {
            voq_base_number_stats_clears = std::make_shared<Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears>();
            voq_base_number_stats_clears->parent = this;
            children["voq-base-number-stats-clears"] = voq_base_number_stats_clears;
        }
        return children.at("voq-base-number-stats-clears");
    }

    if(child_yang_name == "voq-base-numbers")
    {
        if(voq_base_numbers != nullptr)
        {
            children["voq-base-numbers"] = voq_base_numbers;
        }
        else
        {
            voq_base_numbers = std::make_shared<Dpa::Stats::Nodes::Node::VoqBaseNumbers>();
            voq_base_numbers->parent = this;
            children["voq-base-numbers"] = voq_base_numbers;
        }
        return children.at("voq-base-numbers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::get_children()
{
    if(children.find("clear-voq-data-for-npu-numbers") == children.end())
    {
        if(clear_voq_data_for_npu_numbers != nullptr)
        {
            children["clear-voq-data-for-npu-numbers"] = clear_voq_data_for_npu_numbers;
        }
    }

    if(children.find("npu-number-for-trap-data-clears") == children.end())
    {
        if(npu_number_for_trap_data_clears != nullptr)
        {
            children["npu-number-for-trap-data-clears"] = npu_number_for_trap_data_clears;
        }
    }

    if(children.find("npu-number-for-trap-datas") == children.end())
    {
        if(npu_number_for_trap_datas != nullptr)
        {
            children["npu-number-for-trap-datas"] = npu_number_for_trap_datas;
        }
    }

    if(children.find("npu-number-for-voq-datas") == children.end())
    {
        if(npu_number_for_voq_datas != nullptr)
        {
            children["npu-number-for-voq-datas"] = npu_number_for_voq_datas;
        }
    }

    if(children.find("voq-base-number-stats-clears") == children.end())
    {
        if(voq_base_number_stats_clears != nullptr)
        {
            children["voq-base-number-stats-clears"] = voq_base_number_stats_clears;
        }
    }

    if(children.find("voq-base-numbers") == children.end())
    {
        if(voq_base_numbers != nullptr)
        {
            children["voq-base-numbers"] = voq_base_numbers;
        }
    }

    return children;
}

void Dpa::Stats::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClears()
{
    yang_name = "voq-base-number-stats-clears"; yang_parent_name = "node";
}

Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::~VoqBaseNumberStatsClears()
{
}

bool Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::has_data() const
{
    for (std::size_t index=0; index<voq_base_number_stats_clear.size(); index++)
    {
        if(voq_base_number_stats_clear[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::has_operation() const
{
    for (std::size_t index=0; index<voq_base_number_stats_clear.size(); index++)
    {
        if(voq_base_number_stats_clear[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voq-base-number-stats-clears";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VoqBaseNumberStatsClears' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "voq-base-number-stats-clear")
    {
        for(auto const & c : voq_base_number_stats_clear)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear>();
        c->parent = this;
        voq_base_number_stats_clear.push_back(std::move(c));
        children[segment_path] = voq_base_number_stats_clear.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::get_children()
{
    for (auto const & c : voq_base_number_stats_clear)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::set_value(const std::string & value_path, std::string value)
{
}

Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseNumberStatsClear()
    :
    npu_number{YType::int32, "npu-number"}
{
    yang_name = "voq-base-number-stats-clear"; yang_parent_name = "voq-base-number-stats-clears";
}

Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::~VoqBaseNumberStatsClear()
{
}

bool Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::has_data() const
{
    for (std::size_t index=0; index<voq_base_stats_clear_data.size(); index++)
    {
        if(voq_base_stats_clear_data[index]->has_data())
            return true;
    }
    return npu_number.is_set;
}

bool Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::has_operation() const
{
    for (std::size_t index=0; index<voq_base_stats_clear_data.size(); index++)
    {
        if(voq_base_stats_clear_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(npu_number.operation);
}

std::string Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voq-base-number-stats-clear" <<"[npu-number='" <<npu_number <<"']";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VoqBaseNumberStatsClear' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_number.is_set || is_set(npu_number.operation)) leaf_name_data.push_back(npu_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "voq-base-stats-clear-data")
    {
        for(auto const & c : voq_base_stats_clear_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData>();
        c->parent = this;
        voq_base_stats_clear_data.push_back(std::move(c));
        children[segment_path] = voq_base_stats_clear_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::get_children()
{
    for (auto const & c : voq_base_stats_clear_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "npu-number")
    {
        npu_number = value;
    }
}

Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData::VoqBaseStatsClearData()
    :
    base_number{YType::uint32, "base-number"},
    clear_status{YType::uint8, "clear-status"}
{
    yang_name = "voq-base-stats-clear-data"; yang_parent_name = "voq-base-number-stats-clear";
}

Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData::~VoqBaseStatsClearData()
{
}

bool Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData::has_data() const
{
    return base_number.is_set
	|| clear_status.is_set;
}

bool Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData::has_operation() const
{
    return is_set(operation)
	|| is_set(base_number.operation)
	|| is_set(clear_status.operation);
}

std::string Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voq-base-stats-clear-data" <<"[base-number='" <<base_number <<"']";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VoqBaseStatsClearData' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (base_number.is_set || is_set(base_number.operation)) leaf_name_data.push_back(base_number.get_name_leafdata());
    if (clear_status.is_set || is_set(clear_status.operation)) leaf_name_data.push_back(clear_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData::get_children()
{
    return children;
}

void Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "base-number")
    {
        base_number = value;
    }
    if(value_path == "clear-status")
    {
        clear_status = value;
    }
}

Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapDatas()
{
    yang_name = "npu-number-for-trap-datas"; yang_parent_name = "node";
}

Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::~NpuNumberForTrapDatas()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::has_data() const
{
    for (std::size_t index=0; index<npu_number_for_trap_data.size(); index++)
    {
        if(npu_number_for_trap_data[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::has_operation() const
{
    for (std::size_t index=0; index<npu_number_for_trap_data.size(); index++)
    {
        if(npu_number_for_trap_data[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-number-for-trap-datas";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NpuNumberForTrapDatas' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "npu-number-for-trap-data")
    {
        for(auto const & c : npu_number_for_trap_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData>();
        c->parent = this;
        npu_number_for_trap_data.push_back(std::move(c));
        children[segment_path] = npu_number_for_trap_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::get_children()
{
    for (auto const & c : npu_number_for_trap_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::set_value(const std::string & value_path, std::string value)
{
}

Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::NpuNumberForTrapData()
    :
    npu_id{YType::int32, "npu-id"}
{
    yang_name = "npu-number-for-trap-data"; yang_parent_name = "npu-number-for-trap-datas";
}

Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::~NpuNumberForTrapData()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::has_data() const
{
    for (std::size_t index=0; index<trap_specific_stats_data.size(); index++)
    {
        if(trap_specific_stats_data[index]->has_data())
            return true;
    }
    return npu_id.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::has_operation() const
{
    for (std::size_t index=0; index<trap_specific_stats_data.size(); index++)
    {
        if(trap_specific_stats_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(npu_id.operation);
}

std::string Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-number-for-trap-data" <<"[npu-id='" <<npu_id <<"']";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NpuNumberForTrapData' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.operation)) leaf_name_data.push_back(npu_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "trap-specific-stats-data")
    {
        for(auto const & c : trap_specific_stats_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData>();
        c->parent = this;
        trap_specific_stats_data.push_back(std::move(c));
        children[segment_path] = trap_specific_stats_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::get_children()
{
    for (auto const & c : trap_specific_stats_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
    }
}

Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData::TrapSpecificStatsData()
    :
    trap_data{YType::uint32, "trap-data"},
    encap_id{YType::uint32, "encap-id"},
    fec_id{YType::uint32, "fec-id"},
    gport{YType::uint32, "gport"},
    id{YType::uint32, "id"},
    mc_group{YType::uint32, "mc-group"},
    npu_id{YType::uint64, "npu-id"},
    offset{YType::uint64, "offset"},
    packet_accepted{YType::uint64, "packet-accepted"},
    packet_dropped{YType::uint64, "packet-dropped"},
    policer_id{YType::uint32, "policer-id"},
    priority{YType::uint32, "priority"},
    stats_id{YType::uint32, "stats-id"},
    trap_id{YType::uint32, "trap-id"},
    trap_strength{YType::uint32, "trap-strength"},
    trap_string{YType::str, "trap-string"}
{
    yang_name = "trap-specific-stats-data"; yang_parent_name = "npu-number-for-trap-data";
}

Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData::~TrapSpecificStatsData()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData::has_data() const
{
    return trap_data.is_set
	|| encap_id.is_set
	|| fec_id.is_set
	|| gport.is_set
	|| id.is_set
	|| mc_group.is_set
	|| npu_id.is_set
	|| offset.is_set
	|| packet_accepted.is_set
	|| packet_dropped.is_set
	|| policer_id.is_set
	|| priority.is_set
	|| stats_id.is_set
	|| trap_id.is_set
	|| trap_strength.is_set
	|| trap_string.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData::has_operation() const
{
    return is_set(operation)
	|| is_set(trap_data.operation)
	|| is_set(encap_id.operation)
	|| is_set(fec_id.operation)
	|| is_set(gport.operation)
	|| is_set(id.operation)
	|| is_set(mc_group.operation)
	|| is_set(npu_id.operation)
	|| is_set(offset.operation)
	|| is_set(packet_accepted.operation)
	|| is_set(packet_dropped.operation)
	|| is_set(policer_id.operation)
	|| is_set(priority.operation)
	|| is_set(stats_id.operation)
	|| is_set(trap_id.operation)
	|| is_set(trap_strength.operation)
	|| is_set(trap_string.operation);
}

std::string Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-specific-stats-data" <<"[trap-data='" <<trap_data <<"']";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrapSpecificStatsData' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_data.is_set || is_set(trap_data.operation)) leaf_name_data.push_back(trap_data.get_name_leafdata());
    if (encap_id.is_set || is_set(encap_id.operation)) leaf_name_data.push_back(encap_id.get_name_leafdata());
    if (fec_id.is_set || is_set(fec_id.operation)) leaf_name_data.push_back(fec_id.get_name_leafdata());
    if (gport.is_set || is_set(gport.operation)) leaf_name_data.push_back(gport.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mc_group.is_set || is_set(mc_group.operation)) leaf_name_data.push_back(mc_group.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.operation)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (offset.is_set || is_set(offset.operation)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (packet_accepted.is_set || is_set(packet_accepted.operation)) leaf_name_data.push_back(packet_accepted.get_name_leafdata());
    if (packet_dropped.is_set || is_set(packet_dropped.operation)) leaf_name_data.push_back(packet_dropped.get_name_leafdata());
    if (policer_id.is_set || is_set(policer_id.operation)) leaf_name_data.push_back(policer_id.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (stats_id.is_set || is_set(stats_id.operation)) leaf_name_data.push_back(stats_id.get_name_leafdata());
    if (trap_id.is_set || is_set(trap_id.operation)) leaf_name_data.push_back(trap_id.get_name_leafdata());
    if (trap_strength.is_set || is_set(trap_strength.operation)) leaf_name_data.push_back(trap_strength.get_name_leafdata());
    if (trap_string.is_set || is_set(trap_string.operation)) leaf_name_data.push_back(trap_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData::get_children()
{
    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trap-data")
    {
        trap_data = value;
    }
    if(value_path == "encap-id")
    {
        encap_id = value;
    }
    if(value_path == "fec-id")
    {
        fec_id = value;
    }
    if(value_path == "gport")
    {
        gport = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "mc-group")
    {
        mc_group = value;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
    }
    if(value_path == "offset")
    {
        offset = value;
    }
    if(value_path == "packet-accepted")
    {
        packet_accepted = value;
    }
    if(value_path == "packet-dropped")
    {
        packet_dropped = value;
    }
    if(value_path == "policer-id")
    {
        policer_id = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "stats-id")
    {
        stats_id = value;
    }
    if(value_path == "trap-id")
    {
        trap_id = value;
    }
    if(value_path == "trap-strength")
    {
        trap_strength = value;
    }
    if(value_path == "trap-string")
    {
        trap_string = value;
    }
}

Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumbers()
{
    yang_name = "voq-base-numbers"; yang_parent_name = "node";
}

Dpa::Stats::Nodes::Node::VoqBaseNumbers::~VoqBaseNumbers()
{
}

bool Dpa::Stats::Nodes::Node::VoqBaseNumbers::has_data() const
{
    for (std::size_t index=0; index<voq_base_number.size(); index++)
    {
        if(voq_base_number[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::VoqBaseNumbers::has_operation() const
{
    for (std::size_t index=0; index<voq_base_number.size(); index++)
    {
        if(voq_base_number[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dpa::Stats::Nodes::Node::VoqBaseNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voq-base-numbers";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::VoqBaseNumbers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VoqBaseNumbers' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::VoqBaseNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "voq-base-number")
    {
        for(auto const & c : voq_base_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber>();
        c->parent = this;
        voq_base_number.push_back(std::move(c));
        children[segment_path] = voq_base_number.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::VoqBaseNumbers::get_children()
{
    for (auto const & c : voq_base_number)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Stats::Nodes::Node::VoqBaseNumbers::set_value(const std::string & value_path, std::string value)
{
}

Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseNumber()
    :
    npu_number{YType::int32, "npu-number"}
{
    yang_name = "voq-base-number"; yang_parent_name = "voq-base-numbers";
}

Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::~VoqBaseNumber()
{
}

bool Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::has_data() const
{
    for (std::size_t index=0; index<voq_base_stats_data.size(); index++)
    {
        if(voq_base_stats_data[index]->has_data())
            return true;
    }
    return npu_number.is_set;
}

bool Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::has_operation() const
{
    for (std::size_t index=0; index<voq_base_stats_data.size(); index++)
    {
        if(voq_base_stats_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(npu_number.operation);
}

std::string Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voq-base-number" <<"[npu-number='" <<npu_number <<"']";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VoqBaseNumber' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_number.is_set || is_set(npu_number.operation)) leaf_name_data.push_back(npu_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "voq-base-stats-data")
    {
        for(auto const & c : voq_base_stats_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData>();
        c->parent = this;
        voq_base_stats_data.push_back(std::move(c));
        children[segment_path] = voq_base_stats_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::get_children()
{
    for (auto const & c : voq_base_stats_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "npu-number")
    {
        npu_number = value;
    }
}

Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqBaseStatsData()
    :
    base_number{YType::uint32, "base-number"},
    connector_id{YType::uint32, "connector-id"},
    ifhandle{YType::uint32, "ifhandle"},
    is_inuse{YType::boolean, "is-inuse"},
    is_local_port{YType::boolean, "is-local-port"},
    npu_core{YType::uint8, "npu-core"},
    npu_num{YType::uint8, "npu-num"},
    port_num{YType::uint8, "port-num"},
    port_speed{YType::uint32, "port-speed"},
    pp_port{YType::uint32, "pp-port"},
    rack_num{YType::uint8, "rack-num"},
    slot_num{YType::uint8, "slot-num"},
    sysport{YType::uint32, "sysport"},
    voq_base{YType::uint32, "voq-base"}
{
    yang_name = "voq-base-stats-data"; yang_parent_name = "voq-base-number";
}

Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::~VoqBaseStatsData()
{
}

bool Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::has_data() const
{
    for (std::size_t index=0; index<voq_stat.size(); index++)
    {
        if(voq_stat[index]->has_data())
            return true;
    }
    return base_number.is_set
	|| connector_id.is_set
	|| ifhandle.is_set
	|| is_inuse.is_set
	|| is_local_port.is_set
	|| npu_core.is_set
	|| npu_num.is_set
	|| port_num.is_set
	|| port_speed.is_set
	|| pp_port.is_set
	|| rack_num.is_set
	|| slot_num.is_set
	|| sysport.is_set
	|| voq_base.is_set;
}

bool Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::has_operation() const
{
    for (std::size_t index=0; index<voq_stat.size(); index++)
    {
        if(voq_stat[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(base_number.operation)
	|| is_set(connector_id.operation)
	|| is_set(ifhandle.operation)
	|| is_set(is_inuse.operation)
	|| is_set(is_local_port.operation)
	|| is_set(npu_core.operation)
	|| is_set(npu_num.operation)
	|| is_set(port_num.operation)
	|| is_set(port_speed.operation)
	|| is_set(pp_port.operation)
	|| is_set(rack_num.operation)
	|| is_set(slot_num.operation)
	|| is_set(sysport.operation)
	|| is_set(voq_base.operation);
}

std::string Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voq-base-stats-data" <<"[base-number='" <<base_number <<"']";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VoqBaseStatsData' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (base_number.is_set || is_set(base_number.operation)) leaf_name_data.push_back(base_number.get_name_leafdata());
    if (connector_id.is_set || is_set(connector_id.operation)) leaf_name_data.push_back(connector_id.get_name_leafdata());
    if (ifhandle.is_set || is_set(ifhandle.operation)) leaf_name_data.push_back(ifhandle.get_name_leafdata());
    if (is_inuse.is_set || is_set(is_inuse.operation)) leaf_name_data.push_back(is_inuse.get_name_leafdata());
    if (is_local_port.is_set || is_set(is_local_port.operation)) leaf_name_data.push_back(is_local_port.get_name_leafdata());
    if (npu_core.is_set || is_set(npu_core.operation)) leaf_name_data.push_back(npu_core.get_name_leafdata());
    if (npu_num.is_set || is_set(npu_num.operation)) leaf_name_data.push_back(npu_num.get_name_leafdata());
    if (port_num.is_set || is_set(port_num.operation)) leaf_name_data.push_back(port_num.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.operation)) leaf_name_data.push_back(port_speed.get_name_leafdata());
    if (pp_port.is_set || is_set(pp_port.operation)) leaf_name_data.push_back(pp_port.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.operation)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.operation)) leaf_name_data.push_back(slot_num.get_name_leafdata());
    if (sysport.is_set || is_set(sysport.operation)) leaf_name_data.push_back(sysport.get_name_leafdata());
    if (voq_base.is_set || is_set(voq_base.operation)) leaf_name_data.push_back(voq_base.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "voq-stat")
    {
        for(auto const & c : voq_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat>();
        c->parent = this;
        voq_stat.push_back(std::move(c));
        children[segment_path] = voq_stat.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::get_children()
{
    for (auto const & c : voq_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "base-number")
    {
        base_number = value;
    }
    if(value_path == "connector-id")
    {
        connector_id = value;
    }
    if(value_path == "ifhandle")
    {
        ifhandle = value;
    }
    if(value_path == "is-inuse")
    {
        is_inuse = value;
    }
    if(value_path == "is-local-port")
    {
        is_local_port = value;
    }
    if(value_path == "npu-core")
    {
        npu_core = value;
    }
    if(value_path == "npu-num")
    {
        npu_num = value;
    }
    if(value_path == "port-num")
    {
        port_num = value;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
    }
    if(value_path == "pp-port")
    {
        pp_port = value;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
    }
    if(value_path == "sysport")
    {
        sysport = value;
    }
    if(value_path == "voq-base")
    {
        voq_base = value;
    }
}

Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat::VoqStat()
    :
    gport_dropped_bytes{YType::uint64, "gport-dropped-bytes"},
    gport_dropped_pkts{YType::uint64, "gport-dropped-pkts"},
    gport_received_bytes{YType::uint64, "gport-received-bytes"},
    gport_received_pkts{YType::uint64, "gport-received-pkts"}
{
    yang_name = "voq-stat"; yang_parent_name = "voq-base-stats-data";
}

Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat::~VoqStat()
{
}

bool Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat::has_data() const
{
    return gport_dropped_bytes.is_set
	|| gport_dropped_pkts.is_set
	|| gport_received_bytes.is_set
	|| gport_received_pkts.is_set;
}

bool Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat::has_operation() const
{
    return is_set(operation)
	|| is_set(gport_dropped_bytes.operation)
	|| is_set(gport_dropped_pkts.operation)
	|| is_set(gport_received_bytes.operation)
	|| is_set(gport_received_pkts.operation);
}

std::string Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voq-stat";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VoqStat' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gport_dropped_bytes.is_set || is_set(gport_dropped_bytes.operation)) leaf_name_data.push_back(gport_dropped_bytes.get_name_leafdata());
    if (gport_dropped_pkts.is_set || is_set(gport_dropped_pkts.operation)) leaf_name_data.push_back(gport_dropped_pkts.get_name_leafdata());
    if (gport_received_bytes.is_set || is_set(gport_received_bytes.operation)) leaf_name_data.push_back(gport_received_bytes.get_name_leafdata());
    if (gport_received_pkts.is_set || is_set(gport_received_pkts.operation)) leaf_name_data.push_back(gport_received_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat::get_children()
{
    return children;
}

void Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gport-dropped-bytes")
    {
        gport_dropped_bytes = value;
    }
    if(value_path == "gport-dropped-pkts")
    {
        gport_dropped_pkts = value;
    }
    if(value_path == "gport-received-bytes")
    {
        gport_received_bytes = value;
    }
    if(value_path == "gport-received-pkts")
    {
        gport_received_pkts = value;
    }
}

Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqDatas()
{
    yang_name = "npu-number-for-voq-datas"; yang_parent_name = "node";
}

Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::~NpuNumberForVoqDatas()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::has_data() const
{
    for (std::size_t index=0; index<npu_number_for_voq_data.size(); index++)
    {
        if(npu_number_for_voq_data[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::has_operation() const
{
    for (std::size_t index=0; index<npu_number_for_voq_data.size(); index++)
    {
        if(npu_number_for_voq_data[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-number-for-voq-datas";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NpuNumberForVoqDatas' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "npu-number-for-voq-data")
    {
        for(auto const & c : npu_number_for_voq_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData>();
        c->parent = this;
        npu_number_for_voq_data.push_back(std::move(c));
        children[segment_path] = npu_number_for_voq_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::get_children()
{
    for (auto const & c : npu_number_for_voq_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::set_value(const std::string & value_path, std::string value)
{
}

Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::NpuNumberForVoqData()
    :
    npu_id{YType::int32, "npu-id"}
{
    yang_name = "npu-number-for-voq-data"; yang_parent_name = "npu-number-for-voq-datas";
}

Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::~NpuNumberForVoqData()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::has_data() const
{
    for (std::size_t index=0; index<voq_specific_stats_data.size(); index++)
    {
        if(voq_specific_stats_data[index]->has_data())
            return true;
    }
    return npu_id.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::has_operation() const
{
    for (std::size_t index=0; index<voq_specific_stats_data.size(); index++)
    {
        if(voq_specific_stats_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(npu_id.operation);
}

std::string Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-number-for-voq-data" <<"[npu-id='" <<npu_id <<"']";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NpuNumberForVoqData' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.operation)) leaf_name_data.push_back(npu_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "voq-specific-stats-data")
    {
        for(auto const & c : voq_specific_stats_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData>();
        c->parent = this;
        voq_specific_stats_data.push_back(std::move(c));
        children[segment_path] = voq_specific_stats_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::get_children()
{
    for (auto const & c : voq_specific_stats_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
    }
}

Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqSpecificStatsData()
    :
    voq_data{YType::int32, "voq-data"},
    connector_id{YType::uint32, "connector-id"},
    ifhandle{YType::uint32, "ifhandle"},
    is_inuse{YType::boolean, "is-inuse"},
    is_local_port{YType::boolean, "is-local-port"},
    npu_core{YType::uint8, "npu-core"},
    npu_num{YType::uint8, "npu-num"},
    port_num{YType::uint8, "port-num"},
    port_speed{YType::uint32, "port-speed"},
    pp_port{YType::uint32, "pp-port"},
    rack_num{YType::uint8, "rack-num"},
    slot_num{YType::uint8, "slot-num"},
    sysport{YType::uint32, "sysport"},
    voq_base{YType::uint32, "voq-base"}
{
    yang_name = "voq-specific-stats-data"; yang_parent_name = "npu-number-for-voq-data";
}

Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::~VoqSpecificStatsData()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::has_data() const
{
    for (std::size_t index=0; index<voq_stat.size(); index++)
    {
        if(voq_stat[index]->has_data())
            return true;
    }
    return voq_data.is_set
	|| connector_id.is_set
	|| ifhandle.is_set
	|| is_inuse.is_set
	|| is_local_port.is_set
	|| npu_core.is_set
	|| npu_num.is_set
	|| port_num.is_set
	|| port_speed.is_set
	|| pp_port.is_set
	|| rack_num.is_set
	|| slot_num.is_set
	|| sysport.is_set
	|| voq_base.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::has_operation() const
{
    for (std::size_t index=0; index<voq_stat.size(); index++)
    {
        if(voq_stat[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(voq_data.operation)
	|| is_set(connector_id.operation)
	|| is_set(ifhandle.operation)
	|| is_set(is_inuse.operation)
	|| is_set(is_local_port.operation)
	|| is_set(npu_core.operation)
	|| is_set(npu_num.operation)
	|| is_set(port_num.operation)
	|| is_set(port_speed.operation)
	|| is_set(pp_port.operation)
	|| is_set(rack_num.operation)
	|| is_set(slot_num.operation)
	|| is_set(sysport.operation)
	|| is_set(voq_base.operation);
}

std::string Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voq-specific-stats-data" <<"[voq-data='" <<voq_data <<"']";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VoqSpecificStatsData' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (voq_data.is_set || is_set(voq_data.operation)) leaf_name_data.push_back(voq_data.get_name_leafdata());
    if (connector_id.is_set || is_set(connector_id.operation)) leaf_name_data.push_back(connector_id.get_name_leafdata());
    if (ifhandle.is_set || is_set(ifhandle.operation)) leaf_name_data.push_back(ifhandle.get_name_leafdata());
    if (is_inuse.is_set || is_set(is_inuse.operation)) leaf_name_data.push_back(is_inuse.get_name_leafdata());
    if (is_local_port.is_set || is_set(is_local_port.operation)) leaf_name_data.push_back(is_local_port.get_name_leafdata());
    if (npu_core.is_set || is_set(npu_core.operation)) leaf_name_data.push_back(npu_core.get_name_leafdata());
    if (npu_num.is_set || is_set(npu_num.operation)) leaf_name_data.push_back(npu_num.get_name_leafdata());
    if (port_num.is_set || is_set(port_num.operation)) leaf_name_data.push_back(port_num.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.operation)) leaf_name_data.push_back(port_speed.get_name_leafdata());
    if (pp_port.is_set || is_set(pp_port.operation)) leaf_name_data.push_back(pp_port.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.operation)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.operation)) leaf_name_data.push_back(slot_num.get_name_leafdata());
    if (sysport.is_set || is_set(sysport.operation)) leaf_name_data.push_back(sysport.get_name_leafdata());
    if (voq_base.is_set || is_set(voq_base.operation)) leaf_name_data.push_back(voq_base.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "voq-stat")
    {
        for(auto const & c : voq_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat>();
        c->parent = this;
        voq_stat.push_back(std::move(c));
        children[segment_path] = voq_stat.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::get_children()
{
    for (auto const & c : voq_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "voq-data")
    {
        voq_data = value;
    }
    if(value_path == "connector-id")
    {
        connector_id = value;
    }
    if(value_path == "ifhandle")
    {
        ifhandle = value;
    }
    if(value_path == "is-inuse")
    {
        is_inuse = value;
    }
    if(value_path == "is-local-port")
    {
        is_local_port = value;
    }
    if(value_path == "npu-core")
    {
        npu_core = value;
    }
    if(value_path == "npu-num")
    {
        npu_num = value;
    }
    if(value_path == "port-num")
    {
        port_num = value;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
    }
    if(value_path == "pp-port")
    {
        pp_port = value;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
    }
    if(value_path == "sysport")
    {
        sysport = value;
    }
    if(value_path == "voq-base")
    {
        voq_base = value;
    }
}

Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat::VoqStat()
    :
    gport_dropped_bytes{YType::uint64, "gport-dropped-bytes"},
    gport_dropped_pkts{YType::uint64, "gport-dropped-pkts"},
    gport_received_bytes{YType::uint64, "gport-received-bytes"},
    gport_received_pkts{YType::uint64, "gport-received-pkts"}
{
    yang_name = "voq-stat"; yang_parent_name = "voq-specific-stats-data";
}

Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat::~VoqStat()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat::has_data() const
{
    return gport_dropped_bytes.is_set
	|| gport_dropped_pkts.is_set
	|| gport_received_bytes.is_set
	|| gport_received_pkts.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat::has_operation() const
{
    return is_set(operation)
	|| is_set(gport_dropped_bytes.operation)
	|| is_set(gport_dropped_pkts.operation)
	|| is_set(gport_received_bytes.operation)
	|| is_set(gport_received_pkts.operation);
}

std::string Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voq-stat";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VoqStat' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gport_dropped_bytes.is_set || is_set(gport_dropped_bytes.operation)) leaf_name_data.push_back(gport_dropped_bytes.get_name_leafdata());
    if (gport_dropped_pkts.is_set || is_set(gport_dropped_pkts.operation)) leaf_name_data.push_back(gport_dropped_pkts.get_name_leafdata());
    if (gport_received_bytes.is_set || is_set(gport_received_bytes.operation)) leaf_name_data.push_back(gport_received_bytes.get_name_leafdata());
    if (gport_received_pkts.is_set || is_set(gport_received_pkts.operation)) leaf_name_data.push_back(gport_received_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat::get_children()
{
    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gport-dropped-bytes")
    {
        gport_dropped_bytes = value;
    }
    if(value_path == "gport-dropped-pkts")
    {
        gport_dropped_pkts = value;
    }
    if(value_path == "gport-received-bytes")
    {
        gport_received_bytes = value;
    }
    if(value_path == "gport-received-pkts")
    {
        gport_received_pkts = value;
    }
}

Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumbers()
{
    yang_name = "clear-voq-data-for-npu-numbers"; yang_parent_name = "node";
}

Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::~ClearVoqDataForNpuNumbers()
{
}

bool Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::has_data() const
{
    for (std::size_t index=0; index<clear_voq_data_for_npu_number.size(); index++)
    {
        if(clear_voq_data_for_npu_number[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::has_operation() const
{
    for (std::size_t index=0; index<clear_voq_data_for_npu_number.size(); index++)
    {
        if(clear_voq_data_for_npu_number[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clear-voq-data-for-npu-numbers";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClearVoqDataForNpuNumbers' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "clear-voq-data-for-npu-number")
    {
        for(auto const & c : clear_voq_data_for_npu_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber>();
        c->parent = this;
        clear_voq_data_for_npu_number.push_back(std::move(c));
        children[segment_path] = clear_voq_data_for_npu_number.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::get_children()
{
    for (auto const & c : clear_voq_data_for_npu_number)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::set_value(const std::string & value_path, std::string value)
{
}

Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::ClearVoqDataForNpuNumber()
    :
    npu_id{YType::int32, "npu-id"}
{
    yang_name = "clear-voq-data-for-npu-number"; yang_parent_name = "clear-voq-data-for-npu-numbers";
}

Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::~ClearVoqDataForNpuNumber()
{
}

bool Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::has_data() const
{
    for (std::size_t index=0; index<voq_specific_stats_data_clear.size(); index++)
    {
        if(voq_specific_stats_data_clear[index]->has_data())
            return true;
    }
    return npu_id.is_set;
}

bool Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::has_operation() const
{
    for (std::size_t index=0; index<voq_specific_stats_data_clear.size(); index++)
    {
        if(voq_specific_stats_data_clear[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(npu_id.operation);
}

std::string Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clear-voq-data-for-npu-number" <<"[npu-id='" <<npu_id <<"']";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClearVoqDataForNpuNumber' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.operation)) leaf_name_data.push_back(npu_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "voq-specific-stats-data-clear")
    {
        for(auto const & c : voq_specific_stats_data_clear)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear>();
        c->parent = this;
        voq_specific_stats_data_clear.push_back(std::move(c));
        children[segment_path] = voq_specific_stats_data_clear.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::get_children()
{
    for (auto const & c : voq_specific_stats_data_clear)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
    }
}

Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear::VoqSpecificStatsDataClear()
    :
    voq_data{YType::int32, "voq-data"},
    clear_status{YType::uint8, "clear-status"}
{
    yang_name = "voq-specific-stats-data-clear"; yang_parent_name = "clear-voq-data-for-npu-number";
}

Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear::~VoqSpecificStatsDataClear()
{
}

bool Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear::has_data() const
{
    return voq_data.is_set
	|| clear_status.is_set;
}

bool Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear::has_operation() const
{
    return is_set(operation)
	|| is_set(voq_data.operation)
	|| is_set(clear_status.operation);
}

std::string Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voq-specific-stats-data-clear" <<"[voq-data='" <<voq_data <<"']";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VoqSpecificStatsDataClear' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (voq_data.is_set || is_set(voq_data.operation)) leaf_name_data.push_back(voq_data.get_name_leafdata());
    if (clear_status.is_set || is_set(clear_status.operation)) leaf_name_data.push_back(clear_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear::get_children()
{
    return children;
}

void Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "voq-data")
    {
        voq_data = value;
    }
    if(value_path == "clear-status")
    {
        clear_status = value;
    }
}

Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClears()
{
    yang_name = "npu-number-for-trap-data-clears"; yang_parent_name = "node";
}

Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::~NpuNumberForTrapDataClears()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::has_data() const
{
    for (std::size_t index=0; index<npu_number_for_trap_data_clear.size(); index++)
    {
        if(npu_number_for_trap_data_clear[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::has_operation() const
{
    for (std::size_t index=0; index<npu_number_for_trap_data_clear.size(); index++)
    {
        if(npu_number_for_trap_data_clear[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-number-for-trap-data-clears";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NpuNumberForTrapDataClears' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "npu-number-for-trap-data-clear")
    {
        for(auto const & c : npu_number_for_trap_data_clear)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear>();
        c->parent = this;
        npu_number_for_trap_data_clear.push_back(std::move(c));
        children[segment_path] = npu_number_for_trap_data_clear.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::get_children()
{
    for (auto const & c : npu_number_for_trap_data_clear)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::set_value(const std::string & value_path, std::string value)
{
}

Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::NpuNumberForTrapDataClear()
    :
    npu_id{YType::int32, "npu-id"}
{
    yang_name = "npu-number-for-trap-data-clear"; yang_parent_name = "npu-number-for-trap-data-clears";
}

Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::~NpuNumberForTrapDataClear()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::has_data() const
{
    for (std::size_t index=0; index<trap_specific_stats_data.size(); index++)
    {
        if(trap_specific_stats_data[index]->has_data())
            return true;
    }
    return npu_id.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::has_operation() const
{
    for (std::size_t index=0; index<trap_specific_stats_data.size(); index++)
    {
        if(trap_specific_stats_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(npu_id.operation);
}

std::string Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-number-for-trap-data-clear" <<"[npu-id='" <<npu_id <<"']";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NpuNumberForTrapDataClear' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.operation)) leaf_name_data.push_back(npu_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "trap-specific-stats-data")
    {
        for(auto const & c : trap_specific_stats_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData>();
        c->parent = this;
        trap_specific_stats_data.push_back(std::move(c));
        children[segment_path] = trap_specific_stats_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::get_children()
{
    for (auto const & c : trap_specific_stats_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
    }
}

Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData::TrapSpecificStatsData()
    :
    trap_data{YType::uint32, "trap-data"},
    clear_status{YType::uint8, "clear-status"}
{
    yang_name = "trap-specific-stats-data"; yang_parent_name = "npu-number-for-trap-data-clear";
}

Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData::~TrapSpecificStatsData()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData::has_data() const
{
    return trap_data.is_set
	|| clear_status.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData::has_operation() const
{
    return is_set(operation)
	|| is_set(trap_data.operation)
	|| is_set(clear_status.operation);
}

std::string Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-specific-stats-data" <<"[trap-data='" <<trap_data <<"']";

    return path_buffer.str();

}

EntityPath Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrapSpecificStatsData' in Cisco_IOS_XR_fretta_bcm_dpa_resources_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_data.is_set || is_set(trap_data.operation)) leaf_name_data.push_back(trap_data.get_name_leafdata());
    if (clear_status.is_set || is_set(clear_status.operation)) leaf_name_data.push_back(clear_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData::get_children()
{
    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trap-data")
    {
        trap_data = value;
    }
    if(value_path == "clear-status")
    {
        clear_status = value;
    }
}


}
}

