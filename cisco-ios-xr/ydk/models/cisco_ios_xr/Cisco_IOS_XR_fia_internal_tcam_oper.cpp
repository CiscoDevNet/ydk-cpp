
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fia_internal_tcam_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_fia_internal_tcam_oper {

Controller::Controller()
    :
    dpa(std::make_shared<Controller::Dpa>())
{
    dpa->parent = this;
    children["dpa"] = dpa;

    yang_name = "controller"; yang_parent_name = "Cisco-IOS-XR-fia-internal-tcam-oper";
}

Controller::~Controller()
{
}

bool Controller::has_data() const
{
    return (dpa !=  nullptr && dpa->has_data());
}

bool Controller::has_operation() const
{
    return is_set(operation)
	|| (dpa !=  nullptr && dpa->has_operation());
}

std::string Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-internal-tcam-oper:controller";

    return path_buffer.str();

}

EntityPath Controller::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dpa")
    {
        if(dpa != nullptr)
        {
            children["dpa"] = dpa;
        }
        else
        {
            dpa = std::make_shared<Controller::Dpa>();
            dpa->parent = this;
            children["dpa"] = dpa;
        }
        return children.at("dpa");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Controller::get_children()
{
    if(children.find("dpa") == children.end())
    {
        if(dpa != nullptr)
        {
            children["dpa"] = dpa;
        }
    }

    return children;
}

void Controller::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Controller::clone_ptr() const
{
    return std::make_shared<Controller>();
}

std::string Controller::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Controller::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Controller::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Controller::Dpa::Dpa()
    :
    nodes(std::make_shared<Controller::Dpa::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "dpa"; yang_parent_name = "controller";
}

Controller::Dpa::~Dpa()
{
}

bool Controller::Dpa::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Controller::Dpa::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Controller::Dpa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpa";

    return path_buffer.str();

}

EntityPath Controller::Dpa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-internal-tcam-oper:controller/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Controller::Dpa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_shared<Controller::Dpa::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Controller::Dpa::get_children()
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

void Controller::Dpa::set_value(const std::string & value_path, std::string value)
{
}

Controller::Dpa::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "dpa";
}

Controller::Dpa::Nodes::~Nodes()
{
}

bool Controller::Dpa::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Dpa::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Controller::Dpa::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Controller::Dpa::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-internal-tcam-oper:controller/dpa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Controller::Dpa::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Controller::Dpa::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Controller::Dpa::Nodes::get_children()
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

void Controller::Dpa::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Controller::Dpa::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    internal_tcam_resources(std::make_shared<Controller::Dpa::Nodes::Node::InternalTcamResources>())
{
    internal_tcam_resources->parent = this;
    children["internal-tcam-resources"] = internal_tcam_resources;

    yang_name = "node"; yang_parent_name = "nodes";
}

Controller::Dpa::Nodes::Node::~Node()
{
}

bool Controller::Dpa::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (internal_tcam_resources !=  nullptr && internal_tcam_resources->has_data());
}

bool Controller::Dpa::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (internal_tcam_resources !=  nullptr && internal_tcam_resources->has_operation());
}

std::string Controller::Dpa::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath Controller::Dpa::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-internal-tcam-oper:controller/dpa/nodes/" << get_segment_path();
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

std::shared_ptr<Entity> Controller::Dpa::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "internal-tcam-resources")
    {
        if(internal_tcam_resources != nullptr)
        {
            children["internal-tcam-resources"] = internal_tcam_resources;
        }
        else
        {
            internal_tcam_resources = std::make_shared<Controller::Dpa::Nodes::Node::InternalTcamResources>();
            internal_tcam_resources->parent = this;
            children["internal-tcam-resources"] = internal_tcam_resources;
        }
        return children.at("internal-tcam-resources");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Controller::Dpa::Nodes::Node::get_children()
{
    if(children.find("internal-tcam-resources") == children.end())
    {
        if(internal_tcam_resources != nullptr)
        {
            children["internal-tcam-resources"] = internal_tcam_resources;
        }
    }

    return children;
}

void Controller::Dpa::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Controller::Dpa::Nodes::Node::InternalTcamResources::InternalTcamResources()
{
    yang_name = "internal-tcam-resources"; yang_parent_name = "node";
}

Controller::Dpa::Nodes::Node::InternalTcamResources::~InternalTcamResources()
{
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::has_data() const
{
    for (std::size_t index=0; index<npu_tcam.size(); index++)
    {
        if(npu_tcam[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::has_operation() const
{
    for (std::size_t index=0; index<npu_tcam.size(); index++)
    {
        if(npu_tcam[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Controller::Dpa::Nodes::Node::InternalTcamResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-tcam-resources";

    return path_buffer.str();

}

EntityPath Controller::Dpa::Nodes::Node::InternalTcamResources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InternalTcamResources' in Cisco_IOS_XR_fia_internal_tcam_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Controller::Dpa::Nodes::Node::InternalTcamResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "npu-tcam")
    {
        for(auto const & c : npu_tcam)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam>();
        c->parent = this;
        npu_tcam.push_back(std::move(c));
        children[segment_path] = npu_tcam.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Controller::Dpa::Nodes::Node::InternalTcamResources::get_children()
{
    for (auto const & c : npu_tcam)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Controller::Dpa::Nodes::Node::InternalTcamResources::set_value(const std::string & value_path, std::string value)
{
}

Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::NpuTcam()
    :
    npu_id{YType::uint32, "npu-id"}
{
    yang_name = "npu-tcam"; yang_parent_name = "internal-tcam-resources";
}

Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::~NpuTcam()
{
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::has_data() const
{
    for (std::size_t index=0; index<tcam_bank.size(); index++)
    {
        if(tcam_bank[index]->has_data())
            return true;
    }
    return npu_id.is_set;
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::has_operation() const
{
    for (std::size_t index=0; index<tcam_bank.size(); index++)
    {
        if(tcam_bank[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(npu_id.operation);
}

std::string Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-tcam";

    return path_buffer.str();

}

EntityPath Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NpuTcam' in Cisco_IOS_XR_fia_internal_tcam_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tcam-bank")
    {
        for(auto const & c : tcam_bank)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank>();
        c->parent = this;
        tcam_bank.push_back(std::move(c));
        children[segment_path] = tcam_bank.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::get_children()
{
    for (auto const & c : tcam_bank)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
    }
}

Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::TcamBank()
    :
    bank_free_entries{YType::uint32, "bank-free-entries"},
    bank_id{YType::str, "bank-id"},
    bank_inuse_entries{YType::uint32, "bank-inuse-entries"},
    bank_key_size{YType::str, "bank-key-size"},
    nof_dbs{YType::uint32, "nof-dbs"},
    owner{YType::str, "owner"}
{
    yang_name = "tcam-bank"; yang_parent_name = "npu-tcam";
}

Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::~TcamBank()
{
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::has_data() const
{
    for (std::size_t index=0; index<bank_db.size(); index++)
    {
        if(bank_db[index]->has_data())
            return true;
    }
    return bank_free_entries.is_set
	|| bank_id.is_set
	|| bank_inuse_entries.is_set
	|| bank_key_size.is_set
	|| nof_dbs.is_set
	|| owner.is_set;
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::has_operation() const
{
    for (std::size_t index=0; index<bank_db.size(); index++)
    {
        if(bank_db[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bank_free_entries.operation)
	|| is_set(bank_id.operation)
	|| is_set(bank_inuse_entries.operation)
	|| is_set(bank_key_size.operation)
	|| is_set(nof_dbs.operation)
	|| is_set(owner.operation);
}

std::string Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-bank";

    return path_buffer.str();

}

EntityPath Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcamBank' in Cisco_IOS_XR_fia_internal_tcam_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bank_free_entries.is_set || is_set(bank_free_entries.operation)) leaf_name_data.push_back(bank_free_entries.get_name_leafdata());
    if (bank_id.is_set || is_set(bank_id.operation)) leaf_name_data.push_back(bank_id.get_name_leafdata());
    if (bank_inuse_entries.is_set || is_set(bank_inuse_entries.operation)) leaf_name_data.push_back(bank_inuse_entries.get_name_leafdata());
    if (bank_key_size.is_set || is_set(bank_key_size.operation)) leaf_name_data.push_back(bank_key_size.get_name_leafdata());
    if (nof_dbs.is_set || is_set(nof_dbs.operation)) leaf_name_data.push_back(nof_dbs.get_name_leafdata());
    if (owner.is_set || is_set(owner.operation)) leaf_name_data.push_back(owner.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bank-db")
    {
        for(auto const & c : bank_db)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb>();
        c->parent = this;
        bank_db.push_back(std::move(c));
        children[segment_path] = bank_db.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::get_children()
{
    for (auto const & c : bank_db)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bank-free-entries")
    {
        bank_free_entries = value;
    }
    if(value_path == "bank-id")
    {
        bank_id = value;
    }
    if(value_path == "bank-inuse-entries")
    {
        bank_inuse_entries = value;
    }
    if(value_path == "bank-key-size")
    {
        bank_key_size = value;
    }
    if(value_path == "nof-dbs")
    {
        nof_dbs = value;
    }
    if(value_path == "owner")
    {
        owner = value;
    }
}

Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::BankDb()
    :
    db_id{YType::uint32, "db-id"},
    db_inuse_entries{YType::uint32, "db-inuse-entries"},
    db_prefix{YType::str, "db-prefix"}
{
    yang_name = "bank-db"; yang_parent_name = "tcam-bank";
}

Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::~BankDb()
{
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::has_data() const
{
    return db_id.is_set
	|| db_inuse_entries.is_set
	|| db_prefix.is_set;
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::has_operation() const
{
    return is_set(operation)
	|| is_set(db_id.operation)
	|| is_set(db_inuse_entries.operation)
	|| is_set(db_prefix.operation);
}

std::string Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bank-db";

    return path_buffer.str();

}

EntityPath Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BankDb' in Cisco_IOS_XR_fia_internal_tcam_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (db_id.is_set || is_set(db_id.operation)) leaf_name_data.push_back(db_id.get_name_leafdata());
    if (db_inuse_entries.is_set || is_set(db_inuse_entries.operation)) leaf_name_data.push_back(db_inuse_entries.get_name_leafdata());
    if (db_prefix.is_set || is_set(db_prefix.operation)) leaf_name_data.push_back(db_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::get_children()
{
    return children;
}

void Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "db-id")
    {
        db_id = value;
    }
    if(value_path == "db-inuse-entries")
    {
        db_inuse_entries = value;
    }
    if(value_path == "db-prefix")
    {
        db_prefix = value;
    }
}


}
}

