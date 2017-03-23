
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_lc_ethctrl_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_lc_ethctrl_oper {

Mlan::Mlan()
    :
    nodes(std::make_shared<Mlan::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "mlan"; yang_parent_name = "Cisco-IOS-XR-asr9k-lc-ethctrl-oper";
}

Mlan::~Mlan()
{
}

bool Mlan::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Mlan::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Mlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-ethctrl-oper:mlan";

    return path_buffer.str();

}

EntityPath Mlan::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Mlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_shared<Mlan::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mlan::get_children()
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

void Mlan::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Mlan::clone_ptr() const
{
    return std::make_shared<Mlan>();
}

std::string Mlan::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Mlan::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Mlan::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Mlan::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "mlan";
}

Mlan::Nodes::~Nodes()
{
}

bool Mlan::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Mlan::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mlan::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-lc-ethctrl-oper:mlan/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mlan::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::get_children()
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

void Mlan::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Mlan::Nodes::Node::Node()
    :
    node{YType::str, "node"}
    	,
    atu_entry_numbers(std::make_shared<Mlan::Nodes::Node::AtuEntryNumbers>())
	,port_counters_numbers(std::make_shared<Mlan::Nodes::Node::PortCountersNumbers>())
	,port_status_numbers(std::make_shared<Mlan::Nodes::Node::PortStatusNumbers>())
	,switch_status_table(std::make_shared<Mlan::Nodes::Node::SwitchStatusTable>())
{
    atu_entry_numbers->parent = this;
    children["atu-entry-numbers"] = atu_entry_numbers;

    port_counters_numbers->parent = this;
    children["port-counters-numbers"] = port_counters_numbers;

    port_status_numbers->parent = this;
    children["port-status-numbers"] = port_status_numbers;

    switch_status_table->parent = this;
    children["switch-status-table"] = switch_status_table;

    yang_name = "node"; yang_parent_name = "nodes";
}

Mlan::Nodes::Node::~Node()
{
}

bool Mlan::Nodes::Node::has_data() const
{
    return node.is_set
	|| (atu_entry_numbers !=  nullptr && atu_entry_numbers->has_data())
	|| (port_counters_numbers !=  nullptr && port_counters_numbers->has_data())
	|| (port_status_numbers !=  nullptr && port_status_numbers->has_data())
	|| (switch_status_table !=  nullptr && switch_status_table->has_data());
}

bool Mlan::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node.operation)
	|| (atu_entry_numbers !=  nullptr && atu_entry_numbers->has_operation())
	|| (port_counters_numbers !=  nullptr && port_counters_numbers->has_operation())
	|| (port_status_numbers !=  nullptr && port_status_numbers->has_operation())
	|| (switch_status_table !=  nullptr && switch_status_table->has_operation());
}

std::string Mlan::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node <<"']";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-lc-ethctrl-oper:mlan/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.operation)) leaf_name_data.push_back(node.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atu-entry-numbers")
    {
        if(atu_entry_numbers != nullptr)
        {
            children["atu-entry-numbers"] = atu_entry_numbers;
        }
        else
        {
            atu_entry_numbers = std::make_shared<Mlan::Nodes::Node::AtuEntryNumbers>();
            atu_entry_numbers->parent = this;
            children["atu-entry-numbers"] = atu_entry_numbers;
        }
        return children.at("atu-entry-numbers");
    }

    if(child_yang_name == "port-counters-numbers")
    {
        if(port_counters_numbers != nullptr)
        {
            children["port-counters-numbers"] = port_counters_numbers;
        }
        else
        {
            port_counters_numbers = std::make_shared<Mlan::Nodes::Node::PortCountersNumbers>();
            port_counters_numbers->parent = this;
            children["port-counters-numbers"] = port_counters_numbers;
        }
        return children.at("port-counters-numbers");
    }

    if(child_yang_name == "port-status-numbers")
    {
        if(port_status_numbers != nullptr)
        {
            children["port-status-numbers"] = port_status_numbers;
        }
        else
        {
            port_status_numbers = std::make_shared<Mlan::Nodes::Node::PortStatusNumbers>();
            port_status_numbers->parent = this;
            children["port-status-numbers"] = port_status_numbers;
        }
        return children.at("port-status-numbers");
    }

    if(child_yang_name == "switch-status-table")
    {
        if(switch_status_table != nullptr)
        {
            children["switch-status-table"] = switch_status_table;
        }
        else
        {
            switch_status_table = std::make_shared<Mlan::Nodes::Node::SwitchStatusTable>();
            switch_status_table->parent = this;
            children["switch-status-table"] = switch_status_table;
        }
        return children.at("switch-status-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::get_children()
{
    if(children.find("atu-entry-numbers") == children.end())
    {
        if(atu_entry_numbers != nullptr)
        {
            children["atu-entry-numbers"] = atu_entry_numbers;
        }
    }

    if(children.find("port-counters-numbers") == children.end())
    {
        if(port_counters_numbers != nullptr)
        {
            children["port-counters-numbers"] = port_counters_numbers;
        }
    }

    if(children.find("port-status-numbers") == children.end())
    {
        if(port_status_numbers != nullptr)
        {
            children["port-status-numbers"] = port_status_numbers;
        }
    }

    if(children.find("switch-status-table") == children.end())
    {
        if(switch_status_table != nullptr)
        {
            children["switch-status-table"] = switch_status_table;
        }
    }

    return children;
}

void Mlan::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node")
    {
        node = value;
    }
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumbers()
{
    yang_name = "port-status-numbers"; yang_parent_name = "node";
}

Mlan::Nodes::Node::PortStatusNumbers::~PortStatusNumbers()
{
}

bool Mlan::Nodes::Node::PortStatusNumbers::has_data() const
{
    for (std::size_t index=0; index<port_status_number.size(); index++)
    {
        if(port_status_number[index]->has_data())
            return true;
    }
    return false;
}

bool Mlan::Nodes::Node::PortStatusNumbers::has_operation() const
{
    for (std::size_t index=0; index<port_status_number.size(); index++)
    {
        if(port_status_number[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mlan::Nodes::Node::PortStatusNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-status-numbers";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::PortStatusNumbers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortStatusNumbers' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortStatusNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port-status-number")
    {
        for(auto const & c : port_status_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber>();
        c->parent = this;
        port_status_number.push_back(std::move(c));
        children[segment_path] = port_status_number.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::PortStatusNumbers::get_children()
{
    for (auto const & c : port_status_number)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Mlan::Nodes::Node::PortStatusNumbers::set_value(const std::string & value_path, std::string value)
{
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatusNumber()
    :
    number{YType::int32, "number"}
    	,
    port_status(std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus>())
{
    port_status->parent = this;
    children["port-status"] = port_status;

    yang_name = "port-status-number"; yang_parent_name = "port-status-numbers";
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::~PortStatusNumber()
{
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::has_data() const
{
    return number.is_set
	|| (port_status !=  nullptr && port_status->has_data());
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (port_status !=  nullptr && port_status->has_operation());
}

std::string Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-status-number" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortStatusNumber' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port-status")
    {
        if(port_status != nullptr)
        {
            children["port-status"] = port_status;
        }
        else
        {
            port_status = std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus>();
            port_status->parent = this;
            children["port-status"] = port_status;
        }
        return children.at("port-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::get_children()
{
    if(children.find("port-status") == children.end())
    {
        if(port_status != nullptr)
        {
            children["port-status"] = port_status;
        }
    }

    return children;
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::PortStatus()
    :
    mac_valid{YType::uint32, "mac-valid"},
    phy_valid{YType::uint32, "phy-valid"},
    port_num{YType::uint32, "port-num"},
    serdes_valid{YType::uint32, "serdes-valid"}
    	,
    config(std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config>())
	,mac(std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac>())
	,phy(std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy>())
	,serdes(std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes>())
{
    config->parent = this;
    children["config"] = config;

    mac->parent = this;
    children["mac"] = mac;

    phy->parent = this;
    children["phy"] = phy;

    serdes->parent = this;
    children["serdes"] = serdes;

    yang_name = "port-status"; yang_parent_name = "port-status-number";
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::~PortStatus()
{
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::has_data() const
{
    return mac_valid.is_set
	|| phy_valid.is_set
	|| port_num.is_set
	|| serdes_valid.is_set
	|| (config !=  nullptr && config->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (phy !=  nullptr && phy->has_data())
	|| (serdes !=  nullptr && serdes->has_data());
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_valid.operation)
	|| is_set(phy_valid.operation)
	|| is_set(port_num.operation)
	|| is_set(serdes_valid.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (phy !=  nullptr && phy->has_operation())
	|| (serdes !=  nullptr && serdes->has_operation());
}

std::string Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-status";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortStatus' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_valid.is_set || is_set(mac_valid.operation)) leaf_name_data.push_back(mac_valid.get_name_leafdata());
    if (phy_valid.is_set || is_set(phy_valid.operation)) leaf_name_data.push_back(phy_valid.get_name_leafdata());
    if (port_num.is_set || is_set(port_num.operation)) leaf_name_data.push_back(port_num.get_name_leafdata());
    if (serdes_valid.is_set || is_set(serdes_valid.operation)) leaf_name_data.push_back(serdes_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "mac")
    {
        if(mac != nullptr)
        {
            children["mac"] = mac;
        }
        else
        {
            mac = std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac>();
            mac->parent = this;
            children["mac"] = mac;
        }
        return children.at("mac");
    }

    if(child_yang_name == "phy")
    {
        if(phy != nullptr)
        {
            children["phy"] = phy;
        }
        else
        {
            phy = std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy>();
            phy->parent = this;
            children["phy"] = phy;
        }
        return children.at("phy");
    }

    if(child_yang_name == "serdes")
    {
        if(serdes != nullptr)
        {
            children["serdes"] = serdes;
        }
        else
        {
            serdes = std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes>();
            serdes->parent = this;
            children["serdes"] = serdes;
        }
        return children.at("serdes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("mac") == children.end())
    {
        if(mac != nullptr)
        {
            children["mac"] = mac;
        }
    }

    if(children.find("phy") == children.end())
    {
        if(phy != nullptr)
        {
            children["phy"] = phy;
        }
    }

    if(children.find("serdes") == children.end())
    {
        if(serdes != nullptr)
        {
            children["serdes"] = serdes;
        }
    }

    return children;
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-valid")
    {
        mac_valid = value;
    }
    if(value_path == "phy-valid")
    {
        phy_valid = value;
    }
    if(value_path == "port-num")
    {
        port_num = value;
    }
    if(value_path == "serdes-valid")
    {
        serdes_valid = value;
    }
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::Config()
    :
    duplex{YType::uint32, "duplex"},
    loopback{YType::uint32, "loopback"},
    my_pause{YType::uint16, "my-pause"},
    pause{YType::uint16, "pause"},
    speed{YType::uint32, "speed"}
{
    yang_name = "config"; yang_parent_name = "port-status";
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::~Config()
{
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::has_data() const
{
    return duplex.is_set
	|| loopback.is_set
	|| my_pause.is_set
	|| pause.is_set
	|| speed.is_set;
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(duplex.operation)
	|| is_set(loopback.operation)
	|| is_set(my_pause.operation)
	|| is_set(pause.operation)
	|| is_set(speed.operation);
}

std::string Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplex.is_set || is_set(duplex.operation)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (my_pause.is_set || is_set(my_pause.operation)) leaf_name_data.push_back(my_pause.get_name_leafdata());
    if (pause.is_set || is_set(pause.operation)) leaf_name_data.push_back(pause.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::get_children()
{
    return children;
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duplex")
    {
        duplex = value;
    }
    if(value_path == "loopback")
    {
        loopback = value;
    }
    if(value_path == "my-pause")
    {
        my_pause = value;
    }
    if(value_path == "pause")
    {
        pause = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::Phy()
    :
    reg{YType::uint16, "reg"}
{
    yang_name = "phy"; yang_parent_name = "port-status";
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::~Phy()
{
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::has_data() const
{
    for (auto const & leaf : reg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::has_operation() const
{
    for (auto const & leaf : reg.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(reg.operation);
}

std::string Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phy";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Phy' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto reg_name_datas = reg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), reg_name_datas.begin(), reg_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::get_children()
{
    return children;
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reg")
    {
        reg.append(value);
    }
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::Serdes()
    :
    reg{YType::uint16, "reg"}
{
    yang_name = "serdes"; yang_parent_name = "port-status";
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::~Serdes()
{
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::has_data() const
{
    for (auto const & leaf : reg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::has_operation() const
{
    for (auto const & leaf : reg.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(reg.operation);
}

std::string Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serdes";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Serdes' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto reg_name_datas = reg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), reg_name_datas.begin(), reg_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::get_children()
{
    return children;
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reg")
    {
        reg.append(value);
    }
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::Mac()
    :
    reg{YType::uint16, "reg"}
{
    yang_name = "mac"; yang_parent_name = "port-status";
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::~Mac()
{
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::has_data() const
{
    for (auto const & leaf : reg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::has_operation() const
{
    for (auto const & leaf : reg.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(reg.operation);
}

std::string Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto reg_name_datas = reg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), reg_name_datas.begin(), reg_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::get_children()
{
    return children;
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reg")
    {
        reg.append(value);
    }
}

Mlan::Nodes::Node::SwitchStatusTable::SwitchStatusTable()
    :
    switch_status(std::make_shared<Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus>())
{
    switch_status->parent = this;
    children["switch-status"] = switch_status;

    yang_name = "switch-status-table"; yang_parent_name = "node";
}

Mlan::Nodes::Node::SwitchStatusTable::~SwitchStatusTable()
{
}

bool Mlan::Nodes::Node::SwitchStatusTable::has_data() const
{
    return (switch_status !=  nullptr && switch_status->has_data());
}

bool Mlan::Nodes::Node::SwitchStatusTable::has_operation() const
{
    return is_set(operation)
	|| (switch_status !=  nullptr && switch_status->has_operation());
}

std::string Mlan::Nodes::Node::SwitchStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-status-table";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::SwitchStatusTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SwitchStatusTable' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::SwitchStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "switch-status")
    {
        if(switch_status != nullptr)
        {
            children["switch-status"] = switch_status;
        }
        else
        {
            switch_status = std::make_shared<Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus>();
            switch_status->parent = this;
            children["switch-status"] = switch_status;
        }
        return children.at("switch-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::SwitchStatusTable::get_children()
{
    if(children.find("switch-status") == children.end())
    {
        if(switch_status != nullptr)
        {
            children["switch-status"] = switch_status;
        }
    }

    return children;
}

void Mlan::Nodes::Node::SwitchStatusTable::set_value(const std::string & value_path, std::string value)
{
}

Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwitchStatus()
    :
    rate_limit{YType::int32, "rate-limit"}
    	,
    sw_reg_1(std::make_shared<Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1>())
	,sw_reg_2(std::make_shared<Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2>())
	,sw_status(std::make_shared<Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus>())
{
    sw_reg_1->parent = this;
    children["sw-reg-1"] = sw_reg_1;

    sw_reg_2->parent = this;
    children["sw-reg-2"] = sw_reg_2;

    sw_status->parent = this;
    children["sw-status"] = sw_status;

    yang_name = "switch-status"; yang_parent_name = "switch-status-table";
}

Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::~SwitchStatus()
{
}

bool Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::has_data() const
{
    return rate_limit.is_set
	|| (sw_reg_1 !=  nullptr && sw_reg_1->has_data())
	|| (sw_reg_2 !=  nullptr && sw_reg_2->has_data())
	|| (sw_status !=  nullptr && sw_status->has_data());
}

bool Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(rate_limit.operation)
	|| (sw_reg_1 !=  nullptr && sw_reg_1->has_operation())
	|| (sw_reg_2 !=  nullptr && sw_reg_2->has_operation())
	|| (sw_status !=  nullptr && sw_status->has_operation());
}

std::string Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-status";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SwitchStatus' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sw-reg-1")
    {
        if(sw_reg_1 != nullptr)
        {
            children["sw-reg-1"] = sw_reg_1;
        }
        else
        {
            sw_reg_1 = std::make_shared<Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1>();
            sw_reg_1->parent = this;
            children["sw-reg-1"] = sw_reg_1;
        }
        return children.at("sw-reg-1");
    }

    if(child_yang_name == "sw-reg-2")
    {
        if(sw_reg_2 != nullptr)
        {
            children["sw-reg-2"] = sw_reg_2;
        }
        else
        {
            sw_reg_2 = std::make_shared<Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2>();
            sw_reg_2->parent = this;
            children["sw-reg-2"] = sw_reg_2;
        }
        return children.at("sw-reg-2");
    }

    if(child_yang_name == "sw-status")
    {
        if(sw_status != nullptr)
        {
            children["sw-status"] = sw_status;
        }
        else
        {
            sw_status = std::make_shared<Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus>();
            sw_status->parent = this;
            children["sw-status"] = sw_status;
        }
        return children.at("sw-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::get_children()
{
    if(children.find("sw-reg-1") == children.end())
    {
        if(sw_reg_1 != nullptr)
        {
            children["sw-reg-1"] = sw_reg_1;
        }
    }

    if(children.find("sw-reg-2") == children.end())
    {
        if(sw_reg_2 != nullptr)
        {
            children["sw-reg-2"] = sw_reg_2;
        }
    }

    if(children.find("sw-status") == children.end())
    {
        if(sw_status != nullptr)
        {
            children["sw-status"] = sw_status;
        }
    }

    return children;
}

void Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
}

Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::SwReg1()
    :
    reg{YType::uint16, "reg"}
{
    yang_name = "sw-reg-1"; yang_parent_name = "switch-status";
}

Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::~SwReg1()
{
}

bool Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::has_data() const
{
    for (auto const & leaf : reg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::has_operation() const
{
    for (auto const & leaf : reg.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(reg.operation);
}

std::string Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-reg-1";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SwReg1' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto reg_name_datas = reg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), reg_name_datas.begin(), reg_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::get_children()
{
    return children;
}

void Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reg")
    {
        reg.append(value);
    }
}

Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::SwReg2()
    :
    reg{YType::uint16, "reg"}
{
    yang_name = "sw-reg-2"; yang_parent_name = "switch-status";
}

Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::~SwReg2()
{
}

bool Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::has_data() const
{
    for (auto const & leaf : reg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::has_operation() const
{
    for (auto const & leaf : reg.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(reg.operation);
}

std::string Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-reg-2";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SwReg2' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto reg_name_datas = reg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), reg_name_datas.begin(), reg_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::get_children()
{
    return children;
}

void Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reg")
    {
        reg.append(value);
    }
}

Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::SwStatus()
    :
    cpu_mac{YType::uint16, "cpu-mac"},
    cpu_port{YType::uint16, "cpu-port"},
    initialized{YType::uint16, "initialized"},
    mac{YType::str, "mac"},
    mtu{YType::uint32, "mtu"},
    ppu{YType::uint32, "ppu"},
    restarted{YType::uint16, "restarted"}
{
    yang_name = "sw-status"; yang_parent_name = "switch-status";
}

Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::~SwStatus()
{
}

bool Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::has_data() const
{
    return cpu_mac.is_set
	|| cpu_port.is_set
	|| initialized.is_set
	|| mac.is_set
	|| mtu.is_set
	|| ppu.is_set
	|| restarted.is_set;
}

bool Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_mac.operation)
	|| is_set(cpu_port.operation)
	|| is_set(initialized.operation)
	|| is_set(mac.operation)
	|| is_set(mtu.operation)
	|| is_set(ppu.operation)
	|| is_set(restarted.operation);
}

std::string Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-status";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SwStatus' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_mac.is_set || is_set(cpu_mac.operation)) leaf_name_data.push_back(cpu_mac.get_name_leafdata());
    if (cpu_port.is_set || is_set(cpu_port.operation)) leaf_name_data.push_back(cpu_port.get_name_leafdata());
    if (initialized.is_set || is_set(initialized.operation)) leaf_name_data.push_back(initialized.get_name_leafdata());
    if (mac.is_set || is_set(mac.operation)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (ppu.is_set || is_set(ppu.operation)) leaf_name_data.push_back(ppu.get_name_leafdata());
    if (restarted.is_set || is_set(restarted.operation)) leaf_name_data.push_back(restarted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::get_children()
{
    return children;
}

void Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-mac")
    {
        cpu_mac = value;
    }
    if(value_path == "cpu-port")
    {
        cpu_port = value;
    }
    if(value_path == "initialized")
    {
        initialized = value;
    }
    if(value_path == "mac")
    {
        mac = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "ppu")
    {
        ppu = value;
    }
    if(value_path == "restarted")
    {
        restarted = value;
    }
}

Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumbers()
{
    yang_name = "port-counters-numbers"; yang_parent_name = "node";
}

Mlan::Nodes::Node::PortCountersNumbers::~PortCountersNumbers()
{
}

bool Mlan::Nodes::Node::PortCountersNumbers::has_data() const
{
    for (std::size_t index=0; index<port_counters_number.size(); index++)
    {
        if(port_counters_number[index]->has_data())
            return true;
    }
    return false;
}

bool Mlan::Nodes::Node::PortCountersNumbers::has_operation() const
{
    for (std::size_t index=0; index<port_counters_number.size(); index++)
    {
        if(port_counters_number[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mlan::Nodes::Node::PortCountersNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-counters-numbers";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::PortCountersNumbers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortCountersNumbers' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortCountersNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port-counters-number")
    {
        for(auto const & c : port_counters_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber>();
        c->parent = this;
        port_counters_number.push_back(std::move(c));
        children[segment_path] = port_counters_number.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::PortCountersNumbers::get_children()
{
    for (auto const & c : port_counters_number)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Mlan::Nodes::Node::PortCountersNumbers::set_value(const std::string & value_path, std::string value)
{
}

Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCountersNumber()
    :
    number{YType::int32, "number"}
    	,
    port_counters(std::make_shared<Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters>())
{
    port_counters->parent = this;
    children["port-counters"] = port_counters;

    yang_name = "port-counters-number"; yang_parent_name = "port-counters-numbers";
}

Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::~PortCountersNumber()
{
}

bool Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::has_data() const
{
    return number.is_set
	|| (port_counters !=  nullptr && port_counters->has_data());
}

bool Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (port_counters !=  nullptr && port_counters->has_operation());
}

std::string Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-counters-number" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortCountersNumber' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port-counters")
    {
        if(port_counters != nullptr)
        {
            children["port-counters"] = port_counters;
        }
        else
        {
            port_counters = std::make_shared<Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters>();
            port_counters->parent = this;
            children["port-counters"] = port_counters;
        }
        return children.at("port-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::get_children()
{
    if(children.find("port-counters") == children.end())
    {
        if(port_counters != nullptr)
        {
            children["port-counters"] = port_counters;
        }
    }

    return children;
}

void Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::PortCounters()
    :
    port_num{YType::uint32, "port-num"}
    	,
    mlan_stats(std::make_shared<Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats>())
{
    mlan_stats->parent = this;
    children["mlan-stats"] = mlan_stats;

    yang_name = "port-counters"; yang_parent_name = "port-counters-number";
}

Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::~PortCounters()
{
}

bool Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::has_data() const
{
    return port_num.is_set
	|| (mlan_stats !=  nullptr && mlan_stats->has_data());
}

bool Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(port_num.operation)
	|| (mlan_stats !=  nullptr && mlan_stats->has_operation());
}

std::string Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-counters";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortCounters' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_num.is_set || is_set(port_num.operation)) leaf_name_data.push_back(port_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlan-stats")
    {
        if(mlan_stats != nullptr)
        {
            children["mlan-stats"] = mlan_stats;
        }
        else
        {
            mlan_stats = std::make_shared<Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats>();
            mlan_stats->parent = this;
            children["mlan-stats"] = mlan_stats;
        }
        return children.at("mlan-stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::get_children()
{
    if(children.find("mlan-stats") == children.end())
    {
        if(mlan_stats != nullptr)
        {
            children["mlan-stats"] = mlan_stats;
        }
    }

    return children;
}

void Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-num")
    {
        port_num = value;
    }
}

Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::MlanStats()
    :
    collisions{YType::uint32, "collisions"},
    deferred{YType::uint32, "deferred"},
    excessive{YType::uint32, "excessive"},
    in_bad_octets{YType::uint32, "in-bad-octets"},
    in_bcast_pkt{YType::uint32, "in-bcast-pkt"},
    in_discards{YType::uint32, "in-discards"},
    in_fcs_err{YType::uint32, "in-fcs-err"},
    in_filtered{YType::uint32, "in-filtered"},
    in_fragments{YType::uint32, "in-fragments"},
    in_good_octets{YType::uint32, "in-good-octets"},
    in_good_octets_hi{YType::uint32, "in-good-octets-hi"},
    in_jabber{YType::uint32, "in-jabber"},
    in_mcast_pkt{YType::uint32, "in-mcast-pkt"},
    in_oversize{YType::uint32, "in-oversize"},
    in_pause_pkt{YType::uint32, "in-pause-pkt"},
    in_rx_err{YType::uint32, "in-rx-err"},
    in_undersize_pkt{YType::uint32, "in-undersize-pkt"},
    in_unicast_pkt{YType::uint32, "in-unicast-pkt"},
    late{YType::uint32, "late"},
    multiple{YType::uint32, "multiple"},
    out_bcast_pkt{YType::uint32, "out-bcast-pkt"},
    out_fcs_err{YType::uint32, "out-fcs-err"},
    out_filtered{YType::uint32, "out-filtered"},
    out_mcast_pkt{YType::uint32, "out-mcast-pkt"},
    out_octets{YType::uint32, "out-octets"},
    out_octets_hi{YType::uint32, "out-octets-hi"},
    out_pause_pkt{YType::uint32, "out-pause-pkt"},
    out_unicast_pkt{YType::uint32, "out-unicast-pkt"},
    rx_tx_1024_max_octets{YType::uint32, "rx-tx-1024-max-octets"},
    rx_tx_128_255_octets{YType::uint32, "rx-tx-128-255-octets"},
    rx_tx_256_511_octets{YType::uint32, "rx-tx-256-511-octets"},
    rx_tx_512_1023_octets{YType::uint32, "rx-tx-512-1023-octets"},
    rx_tx_64_octets{YType::uint32, "rx-tx-64-octets"},
    rx_tx_65_127_octets{YType::uint32, "rx-tx-65-127-octets"},
    single{YType::uint32, "single"}
{
    yang_name = "mlan-stats"; yang_parent_name = "port-counters";
}

Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::~MlanStats()
{
}

bool Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::has_data() const
{
    return collisions.is_set
	|| deferred.is_set
	|| excessive.is_set
	|| in_bad_octets.is_set
	|| in_bcast_pkt.is_set
	|| in_discards.is_set
	|| in_fcs_err.is_set
	|| in_filtered.is_set
	|| in_fragments.is_set
	|| in_good_octets.is_set
	|| in_good_octets_hi.is_set
	|| in_jabber.is_set
	|| in_mcast_pkt.is_set
	|| in_oversize.is_set
	|| in_pause_pkt.is_set
	|| in_rx_err.is_set
	|| in_undersize_pkt.is_set
	|| in_unicast_pkt.is_set
	|| late.is_set
	|| multiple.is_set
	|| out_bcast_pkt.is_set
	|| out_fcs_err.is_set
	|| out_filtered.is_set
	|| out_mcast_pkt.is_set
	|| out_octets.is_set
	|| out_octets_hi.is_set
	|| out_pause_pkt.is_set
	|| out_unicast_pkt.is_set
	|| rx_tx_1024_max_octets.is_set
	|| rx_tx_128_255_octets.is_set
	|| rx_tx_256_511_octets.is_set
	|| rx_tx_512_1023_octets.is_set
	|| rx_tx_64_octets.is_set
	|| rx_tx_65_127_octets.is_set
	|| single.is_set;
}

bool Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::has_operation() const
{
    return is_set(operation)
	|| is_set(collisions.operation)
	|| is_set(deferred.operation)
	|| is_set(excessive.operation)
	|| is_set(in_bad_octets.operation)
	|| is_set(in_bcast_pkt.operation)
	|| is_set(in_discards.operation)
	|| is_set(in_fcs_err.operation)
	|| is_set(in_filtered.operation)
	|| is_set(in_fragments.operation)
	|| is_set(in_good_octets.operation)
	|| is_set(in_good_octets_hi.operation)
	|| is_set(in_jabber.operation)
	|| is_set(in_mcast_pkt.operation)
	|| is_set(in_oversize.operation)
	|| is_set(in_pause_pkt.operation)
	|| is_set(in_rx_err.operation)
	|| is_set(in_undersize_pkt.operation)
	|| is_set(in_unicast_pkt.operation)
	|| is_set(late.operation)
	|| is_set(multiple.operation)
	|| is_set(out_bcast_pkt.operation)
	|| is_set(out_fcs_err.operation)
	|| is_set(out_filtered.operation)
	|| is_set(out_mcast_pkt.operation)
	|| is_set(out_octets.operation)
	|| is_set(out_octets_hi.operation)
	|| is_set(out_pause_pkt.operation)
	|| is_set(out_unicast_pkt.operation)
	|| is_set(rx_tx_1024_max_octets.operation)
	|| is_set(rx_tx_128_255_octets.operation)
	|| is_set(rx_tx_256_511_octets.operation)
	|| is_set(rx_tx_512_1023_octets.operation)
	|| is_set(rx_tx_64_octets.operation)
	|| is_set(rx_tx_65_127_octets.operation)
	|| is_set(single.operation);
}

std::string Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlan-stats";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlanStats' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collisions.is_set || is_set(collisions.operation)) leaf_name_data.push_back(collisions.get_name_leafdata());
    if (deferred.is_set || is_set(deferred.operation)) leaf_name_data.push_back(deferred.get_name_leafdata());
    if (excessive.is_set || is_set(excessive.operation)) leaf_name_data.push_back(excessive.get_name_leafdata());
    if (in_bad_octets.is_set || is_set(in_bad_octets.operation)) leaf_name_data.push_back(in_bad_octets.get_name_leafdata());
    if (in_bcast_pkt.is_set || is_set(in_bcast_pkt.operation)) leaf_name_data.push_back(in_bcast_pkt.get_name_leafdata());
    if (in_discards.is_set || is_set(in_discards.operation)) leaf_name_data.push_back(in_discards.get_name_leafdata());
    if (in_fcs_err.is_set || is_set(in_fcs_err.operation)) leaf_name_data.push_back(in_fcs_err.get_name_leafdata());
    if (in_filtered.is_set || is_set(in_filtered.operation)) leaf_name_data.push_back(in_filtered.get_name_leafdata());
    if (in_fragments.is_set || is_set(in_fragments.operation)) leaf_name_data.push_back(in_fragments.get_name_leafdata());
    if (in_good_octets.is_set || is_set(in_good_octets.operation)) leaf_name_data.push_back(in_good_octets.get_name_leafdata());
    if (in_good_octets_hi.is_set || is_set(in_good_octets_hi.operation)) leaf_name_data.push_back(in_good_octets_hi.get_name_leafdata());
    if (in_jabber.is_set || is_set(in_jabber.operation)) leaf_name_data.push_back(in_jabber.get_name_leafdata());
    if (in_mcast_pkt.is_set || is_set(in_mcast_pkt.operation)) leaf_name_data.push_back(in_mcast_pkt.get_name_leafdata());
    if (in_oversize.is_set || is_set(in_oversize.operation)) leaf_name_data.push_back(in_oversize.get_name_leafdata());
    if (in_pause_pkt.is_set || is_set(in_pause_pkt.operation)) leaf_name_data.push_back(in_pause_pkt.get_name_leafdata());
    if (in_rx_err.is_set || is_set(in_rx_err.operation)) leaf_name_data.push_back(in_rx_err.get_name_leafdata());
    if (in_undersize_pkt.is_set || is_set(in_undersize_pkt.operation)) leaf_name_data.push_back(in_undersize_pkt.get_name_leafdata());
    if (in_unicast_pkt.is_set || is_set(in_unicast_pkt.operation)) leaf_name_data.push_back(in_unicast_pkt.get_name_leafdata());
    if (late.is_set || is_set(late.operation)) leaf_name_data.push_back(late.get_name_leafdata());
    if (multiple.is_set || is_set(multiple.operation)) leaf_name_data.push_back(multiple.get_name_leafdata());
    if (out_bcast_pkt.is_set || is_set(out_bcast_pkt.operation)) leaf_name_data.push_back(out_bcast_pkt.get_name_leafdata());
    if (out_fcs_err.is_set || is_set(out_fcs_err.operation)) leaf_name_data.push_back(out_fcs_err.get_name_leafdata());
    if (out_filtered.is_set || is_set(out_filtered.operation)) leaf_name_data.push_back(out_filtered.get_name_leafdata());
    if (out_mcast_pkt.is_set || is_set(out_mcast_pkt.operation)) leaf_name_data.push_back(out_mcast_pkt.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.operation)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_octets_hi.is_set || is_set(out_octets_hi.operation)) leaf_name_data.push_back(out_octets_hi.get_name_leafdata());
    if (out_pause_pkt.is_set || is_set(out_pause_pkt.operation)) leaf_name_data.push_back(out_pause_pkt.get_name_leafdata());
    if (out_unicast_pkt.is_set || is_set(out_unicast_pkt.operation)) leaf_name_data.push_back(out_unicast_pkt.get_name_leafdata());
    if (rx_tx_1024_max_octets.is_set || is_set(rx_tx_1024_max_octets.operation)) leaf_name_data.push_back(rx_tx_1024_max_octets.get_name_leafdata());
    if (rx_tx_128_255_octets.is_set || is_set(rx_tx_128_255_octets.operation)) leaf_name_data.push_back(rx_tx_128_255_octets.get_name_leafdata());
    if (rx_tx_256_511_octets.is_set || is_set(rx_tx_256_511_octets.operation)) leaf_name_data.push_back(rx_tx_256_511_octets.get_name_leafdata());
    if (rx_tx_512_1023_octets.is_set || is_set(rx_tx_512_1023_octets.operation)) leaf_name_data.push_back(rx_tx_512_1023_octets.get_name_leafdata());
    if (rx_tx_64_octets.is_set || is_set(rx_tx_64_octets.operation)) leaf_name_data.push_back(rx_tx_64_octets.get_name_leafdata());
    if (rx_tx_65_127_octets.is_set || is_set(rx_tx_65_127_octets.operation)) leaf_name_data.push_back(rx_tx_65_127_octets.get_name_leafdata());
    if (single.is_set || is_set(single.operation)) leaf_name_data.push_back(single.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::get_children()
{
    return children;
}

void Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "collisions")
    {
        collisions = value;
    }
    if(value_path == "deferred")
    {
        deferred = value;
    }
    if(value_path == "excessive")
    {
        excessive = value;
    }
    if(value_path == "in-bad-octets")
    {
        in_bad_octets = value;
    }
    if(value_path == "in-bcast-pkt")
    {
        in_bcast_pkt = value;
    }
    if(value_path == "in-discards")
    {
        in_discards = value;
    }
    if(value_path == "in-fcs-err")
    {
        in_fcs_err = value;
    }
    if(value_path == "in-filtered")
    {
        in_filtered = value;
    }
    if(value_path == "in-fragments")
    {
        in_fragments = value;
    }
    if(value_path == "in-good-octets")
    {
        in_good_octets = value;
    }
    if(value_path == "in-good-octets-hi")
    {
        in_good_octets_hi = value;
    }
    if(value_path == "in-jabber")
    {
        in_jabber = value;
    }
    if(value_path == "in-mcast-pkt")
    {
        in_mcast_pkt = value;
    }
    if(value_path == "in-oversize")
    {
        in_oversize = value;
    }
    if(value_path == "in-pause-pkt")
    {
        in_pause_pkt = value;
    }
    if(value_path == "in-rx-err")
    {
        in_rx_err = value;
    }
    if(value_path == "in-undersize-pkt")
    {
        in_undersize_pkt = value;
    }
    if(value_path == "in-unicast-pkt")
    {
        in_unicast_pkt = value;
    }
    if(value_path == "late")
    {
        late = value;
    }
    if(value_path == "multiple")
    {
        multiple = value;
    }
    if(value_path == "out-bcast-pkt")
    {
        out_bcast_pkt = value;
    }
    if(value_path == "out-fcs-err")
    {
        out_fcs_err = value;
    }
    if(value_path == "out-filtered")
    {
        out_filtered = value;
    }
    if(value_path == "out-mcast-pkt")
    {
        out_mcast_pkt = value;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
    }
    if(value_path == "out-octets-hi")
    {
        out_octets_hi = value;
    }
    if(value_path == "out-pause-pkt")
    {
        out_pause_pkt = value;
    }
    if(value_path == "out-unicast-pkt")
    {
        out_unicast_pkt = value;
    }
    if(value_path == "rx-tx-1024-max-octets")
    {
        rx_tx_1024_max_octets = value;
    }
    if(value_path == "rx-tx-128-255-octets")
    {
        rx_tx_128_255_octets = value;
    }
    if(value_path == "rx-tx-256-511-octets")
    {
        rx_tx_256_511_octets = value;
    }
    if(value_path == "rx-tx-512-1023-octets")
    {
        rx_tx_512_1023_octets = value;
    }
    if(value_path == "rx-tx-64-octets")
    {
        rx_tx_64_octets = value;
    }
    if(value_path == "rx-tx-65-127-octets")
    {
        rx_tx_65_127_octets = value;
    }
    if(value_path == "single")
    {
        single = value;
    }
}

Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumbers()
{
    yang_name = "atu-entry-numbers"; yang_parent_name = "node";
}

Mlan::Nodes::Node::AtuEntryNumbers::~AtuEntryNumbers()
{
}

bool Mlan::Nodes::Node::AtuEntryNumbers::has_data() const
{
    for (std::size_t index=0; index<atu_entry_number.size(); index++)
    {
        if(atu_entry_number[index]->has_data())
            return true;
    }
    return false;
}

bool Mlan::Nodes::Node::AtuEntryNumbers::has_operation() const
{
    for (std::size_t index=0; index<atu_entry_number.size(); index++)
    {
        if(atu_entry_number[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mlan::Nodes::Node::AtuEntryNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atu-entry-numbers";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::AtuEntryNumbers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtuEntryNumbers' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::AtuEntryNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atu-entry-number")
    {
        for(auto const & c : atu_entry_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber>();
        c->parent = this;
        atu_entry_number.push_back(std::move(c));
        children[segment_path] = atu_entry_number.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::AtuEntryNumbers::get_children()
{
    for (auto const & c : atu_entry_number)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Mlan::Nodes::Node::AtuEntryNumbers::set_value(const std::string & value_path, std::string value)
{
}

Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::AtuEntryNumber()
    :
    entry{YType::int32, "entry"}
    	,
    switch_counters(std::make_shared<Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters>())
{
    switch_counters->parent = this;
    children["switch-counters"] = switch_counters;

    yang_name = "atu-entry-number"; yang_parent_name = "atu-entry-numbers";
}

Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::~AtuEntryNumber()
{
}

bool Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::has_data() const
{
    return entry.is_set
	|| (switch_counters !=  nullptr && switch_counters->has_data());
}

bool Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation)
	|| (switch_counters !=  nullptr && switch_counters->has_operation());
}

std::string Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atu-entry-number" <<"[entry='" <<entry <<"']";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtuEntryNumber' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "switch-counters")
    {
        if(switch_counters != nullptr)
        {
            children["switch-counters"] = switch_counters;
        }
        else
        {
            switch_counters = std::make_shared<Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters>();
            switch_counters->parent = this;
            children["switch-counters"] = switch_counters;
        }
        return children.at("switch-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::get_children()
{
    if(children.find("switch-counters") == children.end())
    {
        if(switch_counters != nullptr)
        {
            children["switch-counters"] = switch_counters;
        }
    }

    return children;
}

void Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::SwitchCounters()
    :
    entry_num{YType::uint32, "entry-num"}
    	,
    atu(std::make_shared<Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu>())
{
    atu->parent = this;
    children["atu"] = atu;

    yang_name = "switch-counters"; yang_parent_name = "atu-entry-number";
}

Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::~SwitchCounters()
{
}

bool Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::has_data() const
{
    return entry_num.is_set
	|| (atu !=  nullptr && atu->has_data());
}

bool Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(entry_num.operation)
	|| (atu !=  nullptr && atu->has_operation());
}

std::string Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-counters";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SwitchCounters' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_num.is_set || is_set(entry_num.operation)) leaf_name_data.push_back(entry_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atu")
    {
        if(atu != nullptr)
        {
            children["atu"] = atu;
        }
        else
        {
            atu = std::make_shared<Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu>();
            atu->parent = this;
            children["atu"] = atu;
        }
        return children.at("atu");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::get_children()
{
    if(children.find("atu") == children.end())
    {
        if(atu != nullptr)
        {
            children["atu"] = atu;
        }
    }

    return children;
}

void Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry-num")
    {
        entry_num = value;
    }
}

Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::Atu()
    :
    db_num{YType::uint16, "db-num"},
    dpv{YType::uint8, "dpv"},
    es{YType::uint8, "es"},
    macaddr{YType::uint16, "macaddr"},
    priority{YType::uint8, "priority"},
    trunk{YType::boolean, "trunk"}
{
    yang_name = "atu"; yang_parent_name = "switch-counters";
}

Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::~Atu()
{
}

bool Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::has_data() const
{
    for (auto const & leaf : macaddr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return db_num.is_set
	|| dpv.is_set
	|| es.is_set
	|| priority.is_set
	|| trunk.is_set;
}

bool Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::has_operation() const
{
    for (auto const & leaf : macaddr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(db_num.operation)
	|| is_set(dpv.operation)
	|| is_set(es.operation)
	|| is_set(macaddr.operation)
	|| is_set(priority.operation)
	|| is_set(trunk.operation);
}

std::string Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atu";

    return path_buffer.str();

}

EntityPath Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atu' in Cisco_IOS_XR_asr9k_lc_ethctrl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (db_num.is_set || is_set(db_num.operation)) leaf_name_data.push_back(db_num.get_name_leafdata());
    if (dpv.is_set || is_set(dpv.operation)) leaf_name_data.push_back(dpv.get_name_leafdata());
    if (es.is_set || is_set(es.operation)) leaf_name_data.push_back(es.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.operation)) leaf_name_data.push_back(trunk.get_name_leafdata());

    auto macaddr_name_datas = macaddr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macaddr_name_datas.begin(), macaddr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::get_children()
{
    return children;
}

void Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "db-num")
    {
        db_num = value;
    }
    if(value_path == "dpv")
    {
        dpv = value;
    }
    if(value_path == "es")
    {
        es = value;
    }
    if(value_path == "macaddr")
    {
        macaddr.append(value);
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "trunk")
    {
        trunk = value;
    }
}


}
}

