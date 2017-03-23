
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_cmproxy_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_cmproxy_oper {

SdrInventoryVm::SdrInventoryVm()
    :
    nodes(std::make_shared<SdrInventoryVm::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "sdr-inventory-vm"; yang_parent_name = "Cisco-IOS-XR-cmproxy-oper";
}

SdrInventoryVm::~SdrInventoryVm()
{
}

bool SdrInventoryVm::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool SdrInventoryVm::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string SdrInventoryVm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cmproxy-oper:sdr-inventory-vm";

    return path_buffer.str();

}

EntityPath SdrInventoryVm::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> SdrInventoryVm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_shared<SdrInventoryVm::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SdrInventoryVm::get_children()
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

void SdrInventoryVm::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SdrInventoryVm::clone_ptr() const
{
    return std::make_shared<SdrInventoryVm>();
}

std::string SdrInventoryVm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SdrInventoryVm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SdrInventoryVm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SdrInventoryVm::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "sdr-inventory-vm";
}

SdrInventoryVm::Nodes::~Nodes()
{
}

bool SdrInventoryVm::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool SdrInventoryVm::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SdrInventoryVm::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath SdrInventoryVm::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-cmproxy-oper:sdr-inventory-vm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SdrInventoryVm::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<SdrInventoryVm::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SdrInventoryVm::Nodes::get_children()
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

void SdrInventoryVm::Nodes::set_value(const std::string & value_path, std::string value)
{
}

SdrInventoryVm::Nodes::Node::Node()
    :
    name{YType::str, "name"}
    	,
    node_entries(std::make_shared<SdrInventoryVm::Nodes::Node::NodeEntries>())
{
    node_entries->parent = this;
    children["node-entries"] = node_entries;

    yang_name = "node"; yang_parent_name = "nodes";
}

SdrInventoryVm::Nodes::Node::~Node()
{
}

bool SdrInventoryVm::Nodes::Node::has_data() const
{
    return name.is_set
	|| (node_entries !=  nullptr && node_entries->has_data());
}

bool SdrInventoryVm::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (node_entries !=  nullptr && node_entries->has_operation());
}

std::string SdrInventoryVm::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath SdrInventoryVm::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-cmproxy-oper:sdr-inventory-vm/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SdrInventoryVm::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node-entries")
    {
        if(node_entries != nullptr)
        {
            children["node-entries"] = node_entries;
        }
        else
        {
            node_entries = std::make_shared<SdrInventoryVm::Nodes::Node::NodeEntries>();
            node_entries->parent = this;
            children["node-entries"] = node_entries;
        }
        return children.at("node-entries");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SdrInventoryVm::Nodes::Node::get_children()
{
    if(children.find("node-entries") == children.end())
    {
        if(node_entries != nullptr)
        {
            children["node-entries"] = node_entries;
        }
    }

    return children;
}

void SdrInventoryVm::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntries()
{
    yang_name = "node-entries"; yang_parent_name = "node";
}

SdrInventoryVm::Nodes::Node::NodeEntries::~NodeEntries()
{
}

bool SdrInventoryVm::Nodes::Node::NodeEntries::has_data() const
{
    for (std::size_t index=0; index<node_entry.size(); index++)
    {
        if(node_entry[index]->has_data())
            return true;
    }
    return false;
}

bool SdrInventoryVm::Nodes::Node::NodeEntries::has_operation() const
{
    for (std::size_t index=0; index<node_entry.size(); index++)
    {
        if(node_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SdrInventoryVm::Nodes::Node::NodeEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-entries";

    return path_buffer.str();

}

EntityPath SdrInventoryVm::Nodes::Node::NodeEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeEntries' in Cisco_IOS_XR_cmproxy_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SdrInventoryVm::Nodes::Node::NodeEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node-entry")
    {
        for(auto const & c : node_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry>();
        c->parent = this;
        node_entry.push_back(std::move(c));
        children[segment_path] = node_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SdrInventoryVm::Nodes::Node::NodeEntries::get_children()
{
    for (auto const & c : node_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SdrInventoryVm::Nodes::Node::NodeEntries::set_value(const std::string & value_path, std::string value)
{
}

SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::NodeEntry()
    :
    name{YType::str, "name"},
    card_type{YType::uint32, "card-type"},
    card_type_string{YType::str, "card-type-string"},
    node_ip{YType::uint32, "node-ip"},
    node_ipv4_string{YType::str, "node-ipv4-string"},
    node_name{YType::str, "node-name"},
    node_sw_state{YType::uint32, "node-sw-state"},
    node_sw_state_string{YType::str, "node-sw-state-string"},
    nodeid{YType::int32, "nodeid"},
    partner_id{YType::int32, "partner-id"},
    partner_name{YType::str, "partner-name"},
    prev_sw_state{YType::uint32, "prev-sw-state"},
    prev_sw_state_string{YType::str, "prev-sw-state-string"},
    red_state{YType::uint32, "red-state"},
    red_state_string{YType::str, "red-state-string"},
    valid{YType::uint32, "valid"}
{
    yang_name = "node-entry"; yang_parent_name = "node-entries";
}

SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::~NodeEntry()
{
}

bool SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::has_data() const
{
    return name.is_set
	|| card_type.is_set
	|| card_type_string.is_set
	|| node_ip.is_set
	|| node_ipv4_string.is_set
	|| node_name.is_set
	|| node_sw_state.is_set
	|| node_sw_state_string.is_set
	|| nodeid.is_set
	|| partner_id.is_set
	|| partner_name.is_set
	|| prev_sw_state.is_set
	|| prev_sw_state_string.is_set
	|| red_state.is_set
	|| red_state_string.is_set
	|| valid.is_set;
}

bool SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(card_type.operation)
	|| is_set(card_type_string.operation)
	|| is_set(node_ip.operation)
	|| is_set(node_ipv4_string.operation)
	|| is_set(node_name.operation)
	|| is_set(node_sw_state.operation)
	|| is_set(node_sw_state_string.operation)
	|| is_set(nodeid.operation)
	|| is_set(partner_id.operation)
	|| is_set(partner_name.operation)
	|| is_set(prev_sw_state.operation)
	|| is_set(prev_sw_state_string.operation)
	|| is_set(red_state.operation)
	|| is_set(red_state_string.operation)
	|| is_set(valid.operation);
}

std::string SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-entry" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeEntry' in Cisco_IOS_XR_cmproxy_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.operation)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (card_type_string.is_set || is_set(card_type_string.operation)) leaf_name_data.push_back(card_type_string.get_name_leafdata());
    if (node_ip.is_set || is_set(node_ip.operation)) leaf_name_data.push_back(node_ip.get_name_leafdata());
    if (node_ipv4_string.is_set || is_set(node_ipv4_string.operation)) leaf_name_data.push_back(node_ipv4_string.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (node_sw_state.is_set || is_set(node_sw_state.operation)) leaf_name_data.push_back(node_sw_state.get_name_leafdata());
    if (node_sw_state_string.is_set || is_set(node_sw_state_string.operation)) leaf_name_data.push_back(node_sw_state_string.get_name_leafdata());
    if (nodeid.is_set || is_set(nodeid.operation)) leaf_name_data.push_back(nodeid.get_name_leafdata());
    if (partner_id.is_set || is_set(partner_id.operation)) leaf_name_data.push_back(partner_id.get_name_leafdata());
    if (partner_name.is_set || is_set(partner_name.operation)) leaf_name_data.push_back(partner_name.get_name_leafdata());
    if (prev_sw_state.is_set || is_set(prev_sw_state.operation)) leaf_name_data.push_back(prev_sw_state.get_name_leafdata());
    if (prev_sw_state_string.is_set || is_set(prev_sw_state_string.operation)) leaf_name_data.push_back(prev_sw_state_string.get_name_leafdata());
    if (red_state.is_set || is_set(red_state.operation)) leaf_name_data.push_back(red_state.get_name_leafdata());
    if (red_state_string.is_set || is_set(red_state_string.operation)) leaf_name_data.push_back(red_state_string.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::get_children()
{
    return children;
}

void SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "card-type")
    {
        card_type = value;
    }
    if(value_path == "card-type-string")
    {
        card_type_string = value;
    }
    if(value_path == "node-ip")
    {
        node_ip = value;
    }
    if(value_path == "node-ipv4-string")
    {
        node_ipv4_string = value;
    }
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "node-sw-state")
    {
        node_sw_state = value;
    }
    if(value_path == "node-sw-state-string")
    {
        node_sw_state_string = value;
    }
    if(value_path == "nodeid")
    {
        nodeid = value;
    }
    if(value_path == "partner-id")
    {
        partner_id = value;
    }
    if(value_path == "partner-name")
    {
        partner_name = value;
    }
    if(value_path == "prev-sw-state")
    {
        prev_sw_state = value;
    }
    if(value_path == "prev-sw-state-string")
    {
        prev_sw_state_string = value;
    }
    if(value_path == "red-state")
    {
        red_state = value;
    }
    if(value_path == "red-state-string")
    {
        red_state_string = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}


}
}

