
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_lc_ethctrl_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_lc_ethctrl_oper {

Mlan::Mlan()
    :
    nodes(std::make_shared<Mlan::Nodes>())
{
    nodes->parent = this;

    yang_name = "mlan"; yang_parent_name = "Cisco-IOS-XR-asr9k-lc-ethctrl-oper"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Mlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-ethctrl-oper:mlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Mlan::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Mlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mlan::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> Mlan::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Mlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Mlan::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "mlan"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Mlan::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-ethctrl-oper:mlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Mlan::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mlan::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mlan::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mlan::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mlan::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Mlan::Nodes::Node::Node()
    :
    node{YType::str, "node"}
    	,
    port_status_numbers(std::make_shared<Mlan::Nodes::Node::PortStatusNumbers>())
	,switch_status_table(std::make_shared<Mlan::Nodes::Node::SwitchStatusTable>())
	,port_counters_numbers(std::make_shared<Mlan::Nodes::Node::PortCountersNumbers>())
	,atu_entry_numbers(std::make_shared<Mlan::Nodes::Node::AtuEntryNumbers>())
{
    port_status_numbers->parent = this;
    switch_status_table->parent = this;
    port_counters_numbers->parent = this;
    atu_entry_numbers->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Mlan::Nodes::Node::~Node()
{
}

bool Mlan::Nodes::Node::has_data() const
{
    return node.is_set
	|| (port_status_numbers !=  nullptr && port_status_numbers->has_data())
	|| (switch_status_table !=  nullptr && switch_status_table->has_data())
	|| (port_counters_numbers !=  nullptr && port_counters_numbers->has_data())
	|| (atu_entry_numbers !=  nullptr && atu_entry_numbers->has_data());
}

bool Mlan::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| (port_status_numbers !=  nullptr && port_status_numbers->has_operation())
	|| (switch_status_table !=  nullptr && switch_status_table->has_operation())
	|| (port_counters_numbers !=  nullptr && port_counters_numbers->has_operation())
	|| (atu_entry_numbers !=  nullptr && atu_entry_numbers->has_operation());
}

std::string Mlan::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-ethctrl-oper:mlan/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mlan::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-status-numbers")
    {
        if(port_status_numbers == nullptr)
        {
            port_status_numbers = std::make_shared<Mlan::Nodes::Node::PortStatusNumbers>();
        }
        return port_status_numbers;
    }

    if(child_yang_name == "switch-status-table")
    {
        if(switch_status_table == nullptr)
        {
            switch_status_table = std::make_shared<Mlan::Nodes::Node::SwitchStatusTable>();
        }
        return switch_status_table;
    }

    if(child_yang_name == "port-counters-numbers")
    {
        if(port_counters_numbers == nullptr)
        {
            port_counters_numbers = std::make_shared<Mlan::Nodes::Node::PortCountersNumbers>();
        }
        return port_counters_numbers;
    }

    if(child_yang_name == "atu-entry-numbers")
    {
        if(atu_entry_numbers == nullptr)
        {
            atu_entry_numbers = std::make_shared<Mlan::Nodes::Node::AtuEntryNumbers>();
        }
        return atu_entry_numbers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_status_numbers != nullptr)
    {
        children["port-status-numbers"] = port_status_numbers;
    }

    if(switch_status_table != nullptr)
    {
        children["switch-status-table"] = switch_status_table;
    }

    if(port_counters_numbers != nullptr)
    {
        children["port-counters-numbers"] = port_counters_numbers;
    }

    if(atu_entry_numbers != nullptr)
    {
        children["atu-entry-numbers"] = atu_entry_numbers;
    }

    return children;
}

void Mlan::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void Mlan::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-status-numbers" || name == "switch-status-table" || name == "port-counters-numbers" || name == "atu-entry-numbers" || name == "node")
        return true;
    return false;
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumbers()
{

    yang_name = "port-status-numbers"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Mlan::Nodes::Node::PortStatusNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-status-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::PortStatusNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortStatusNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-status-number")
    {
        for(auto const & c : port_status_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber>();
        c->parent = this;
        port_status_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::PortStatusNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : port_status_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mlan::Nodes::Node::PortStatusNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mlan::Nodes::Node::PortStatusNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mlan::Nodes::Node::PortStatusNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-status-number")
        return true;
    return false;
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatusNumber()
    :
    number{YType::int32, "number"}
    	,
    port_status(std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus>())
{
    port_status->parent = this;

    yang_name = "port-status-number"; yang_parent_name = "port-status-numbers"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (port_status !=  nullptr && port_status->has_operation());
}

std::string Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-status-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-status")
    {
        if(port_status == nullptr)
        {
            port_status = std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus>();
        }
        return port_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_status != nullptr)
    {
        children["port-status"] = port_status;
    }

    return children;
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-status" || name == "number")
        return true;
    return false;
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::PortStatus()
    :
    port_num{YType::uint32, "port-num"},
    phy_valid{YType::uint32, "phy-valid"},
    serdes_valid{YType::uint32, "serdes-valid"},
    mac_valid{YType::uint32, "mac-valid"}
    	,
    config(std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config>())
	,phy(std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy>())
	,serdes(std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes>())
	,mac(std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac>())
{
    config->parent = this;
    phy->parent = this;
    serdes->parent = this;
    mac->parent = this;

    yang_name = "port-status"; yang_parent_name = "port-status-number"; is_top_level_class = false; has_list_ancestor = true;
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::~PortStatus()
{
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::has_data() const
{
    return port_num.is_set
	|| phy_valid.is_set
	|| serdes_valid.is_set
	|| mac_valid.is_set
	|| (config !=  nullptr && config->has_data())
	|| (phy !=  nullptr && phy->has_data())
	|| (serdes !=  nullptr && serdes->has_data())
	|| (mac !=  nullptr && mac->has_data());
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_num.yfilter)
	|| ydk::is_set(phy_valid.yfilter)
	|| ydk::is_set(serdes_valid.yfilter)
	|| ydk::is_set(mac_valid.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (phy !=  nullptr && phy->has_operation())
	|| (serdes !=  nullptr && serdes->has_operation())
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_num.is_set || is_set(port_num.yfilter)) leaf_name_data.push_back(port_num.get_name_leafdata());
    if (phy_valid.is_set || is_set(phy_valid.yfilter)) leaf_name_data.push_back(phy_valid.get_name_leafdata());
    if (serdes_valid.is_set || is_set(serdes_valid.yfilter)) leaf_name_data.push_back(serdes_valid.get_name_leafdata());
    if (mac_valid.is_set || is_set(mac_valid.yfilter)) leaf_name_data.push_back(mac_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config>();
        }
        return config;
    }

    if(child_yang_name == "phy")
    {
        if(phy == nullptr)
        {
            phy = std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy>();
        }
        return phy;
    }

    if(child_yang_name == "serdes")
    {
        if(serdes == nullptr)
        {
            serdes = std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes>();
        }
        return serdes;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(phy != nullptr)
    {
        children["phy"] = phy;
    }

    if(serdes != nullptr)
    {
        children["serdes"] = serdes;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-num")
    {
        port_num = value;
        port_num.value_namespace = name_space;
        port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phy-valid")
    {
        phy_valid = value;
        phy_valid.value_namespace = name_space;
        phy_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serdes-valid")
    {
        serdes_valid = value;
        serdes_valid.value_namespace = name_space;
        serdes_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-valid")
    {
        mac_valid = value;
        mac_valid.value_namespace = name_space;
        mac_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-num")
    {
        port_num.yfilter = yfilter;
    }
    if(value_path == "phy-valid")
    {
        phy_valid.yfilter = yfilter;
    }
    if(value_path == "serdes-valid")
    {
        serdes_valid.yfilter = yfilter;
    }
    if(value_path == "mac-valid")
    {
        mac_valid.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "phy" || name == "serdes" || name == "mac" || name == "port-num" || name == "phy-valid" || name == "serdes-valid" || name == "mac-valid")
        return true;
    return false;
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::Config()
    :
    speed{YType::uint32, "speed"},
    duplex{YType::uint32, "duplex"},
    pause{YType::uint16, "pause"},
    my_pause{YType::uint16, "my-pause"},
    loopback{YType::uint32, "loopback"}
{

    yang_name = "config"; yang_parent_name = "port-status"; is_top_level_class = false; has_list_ancestor = true;
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::~Config()
{
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::has_data() const
{
    return speed.is_set
	|| duplex.is_set
	|| pause.is_set
	|| my_pause.is_set
	|| loopback.is_set;
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(pause.yfilter)
	|| ydk::is_set(my_pause.yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (pause.is_set || is_set(pause.yfilter)) leaf_name_data.push_back(pause.get_name_leafdata());
    if (my_pause.is_set || is_set(my_pause.yfilter)) leaf_name_data.push_back(my_pause.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pause")
    {
        pause = value;
        pause.value_namespace = name_space;
        pause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-pause")
    {
        my_pause = value;
        my_pause.value_namespace = name_space;
        my_pause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "pause")
    {
        pause.yfilter = yfilter;
    }
    if(value_path == "my-pause")
    {
        my_pause.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "speed" || name == "duplex" || name == "pause" || name == "my-pause" || name == "loopback")
        return true;
    return false;
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::Phy()
    :
    reg{YType::uint16, "reg"}
{

    yang_name = "phy"; yang_parent_name = "port-status"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reg.yfilter);
}

std::string Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto reg_name_datas = reg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), reg_name_datas.begin(), reg_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reg")
    {
        reg.append(value);
    }
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reg")
    {
        reg.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Phy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reg")
        return true;
    return false;
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::Serdes()
    :
    reg{YType::uint16, "reg"}
{

    yang_name = "serdes"; yang_parent_name = "port-status"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reg.yfilter);
}

std::string Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serdes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto reg_name_datas = reg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), reg_name_datas.begin(), reg_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reg")
    {
        reg.append(value);
    }
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reg")
    {
        reg.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Serdes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reg")
        return true;
    return false;
}

Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::Mac()
    :
    reg{YType::uint16, "reg"}
{

    yang_name = "mac"; yang_parent_name = "port-status"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reg.yfilter);
}

std::string Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto reg_name_datas = reg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), reg_name_datas.begin(), reg_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reg")
    {
        reg.append(value);
    }
}

void Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reg")
    {
        reg.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::PortStatusNumbers::PortStatusNumber::PortStatus::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reg")
        return true;
    return false;
}

Mlan::Nodes::Node::SwitchStatusTable::SwitchStatusTable()
    :
    switch_status(std::make_shared<Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus>())
{
    switch_status->parent = this;

    yang_name = "switch-status-table"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (switch_status !=  nullptr && switch_status->has_operation());
}

std::string Mlan::Nodes::Node::SwitchStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-status-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::SwitchStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::SwitchStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-status")
    {
        if(switch_status == nullptr)
        {
            switch_status = std::make_shared<Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus>();
        }
        return switch_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::SwitchStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switch_status != nullptr)
    {
        children["switch-status"] = switch_status;
    }

    return children;
}

void Mlan::Nodes::Node::SwitchStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mlan::Nodes::Node::SwitchStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mlan::Nodes::Node::SwitchStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-status")
        return true;
    return false;
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
    sw_reg_2->parent = this;
    sw_status->parent = this;

    yang_name = "switch-status"; yang_parent_name = "switch-status-table"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(rate_limit.yfilter)
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

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sw-reg-1")
    {
        if(sw_reg_1 == nullptr)
        {
            sw_reg_1 = std::make_shared<Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1>();
        }
        return sw_reg_1;
    }

    if(child_yang_name == "sw-reg-2")
    {
        if(sw_reg_2 == nullptr)
        {
            sw_reg_2 = std::make_shared<Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2>();
        }
        return sw_reg_2;
    }

    if(child_yang_name == "sw-status")
    {
        if(sw_status == nullptr)
        {
            sw_status = std::make_shared<Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus>();
        }
        return sw_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sw_reg_1 != nullptr)
    {
        children["sw-reg-1"] = sw_reg_1;
    }

    if(sw_reg_2 != nullptr)
    {
        children["sw-reg-2"] = sw_reg_2;
    }

    if(sw_status != nullptr)
    {
        children["sw-status"] = sw_status;
    }

    return children;
}

void Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sw-reg-1" || name == "sw-reg-2" || name == "sw-status" || name == "rate-limit")
        return true;
    return false;
}

Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::SwReg1()
    :
    reg{YType::uint16, "reg"}
{

    yang_name = "sw-reg-1"; yang_parent_name = "switch-status"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reg.yfilter);
}

std::string Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-reg-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto reg_name_datas = reg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), reg_name_datas.begin(), reg_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reg")
    {
        reg.append(value);
    }
}

void Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reg")
    {
        reg.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reg")
        return true;
    return false;
}

Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::SwReg2()
    :
    reg{YType::uint16, "reg"}
{

    yang_name = "sw-reg-2"; yang_parent_name = "switch-status"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reg.yfilter);
}

std::string Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-reg-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto reg_name_datas = reg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), reg_name_datas.begin(), reg_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reg")
    {
        reg.append(value);
    }
}

void Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reg")
    {
        reg.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwReg2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reg")
        return true;
    return false;
}

Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::SwStatus()
    :
    ppu{YType::uint32, "ppu"},
    mtu{YType::uint32, "mtu"},
    mac{YType::str, "mac"},
    cpu_port{YType::uint16, "cpu-port"},
    cpu_mac{YType::uint16, "cpu-mac"},
    initialized{YType::uint16, "initialized"},
    restarted{YType::uint16, "restarted"}
{

    yang_name = "sw-status"; yang_parent_name = "switch-status"; is_top_level_class = false; has_list_ancestor = true;
}

Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::~SwStatus()
{
}

bool Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::has_data() const
{
    return ppu.is_set
	|| mtu.is_set
	|| mac.is_set
	|| cpu_port.is_set
	|| cpu_mac.is_set
	|| initialized.is_set
	|| restarted.is_set;
}

bool Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ppu.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(cpu_port.yfilter)
	|| ydk::is_set(cpu_mac.yfilter)
	|| ydk::is_set(initialized.yfilter)
	|| ydk::is_set(restarted.yfilter);
}

std::string Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sw-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ppu.is_set || is_set(ppu.yfilter)) leaf_name_data.push_back(ppu.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (cpu_port.is_set || is_set(cpu_port.yfilter)) leaf_name_data.push_back(cpu_port.get_name_leafdata());
    if (cpu_mac.is_set || is_set(cpu_mac.yfilter)) leaf_name_data.push_back(cpu_mac.get_name_leafdata());
    if (initialized.is_set || is_set(initialized.yfilter)) leaf_name_data.push_back(initialized.get_name_leafdata());
    if (restarted.is_set || is_set(restarted.yfilter)) leaf_name_data.push_back(restarted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ppu")
    {
        ppu = value;
        ppu.value_namespace = name_space;
        ppu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-port")
    {
        cpu_port = value;
        cpu_port.value_namespace = name_space;
        cpu_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-mac")
    {
        cpu_mac = value;
        cpu_mac.value_namespace = name_space;
        cpu_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized")
    {
        initialized = value;
        initialized.value_namespace = name_space;
        initialized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restarted")
    {
        restarted = value;
        restarted.value_namespace = name_space;
        restarted.value_namespace_prefix = name_space_prefix;
    }
}

void Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ppu")
    {
        ppu.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "cpu-port")
    {
        cpu_port.yfilter = yfilter;
    }
    if(value_path == "cpu-mac")
    {
        cpu_mac.yfilter = yfilter;
    }
    if(value_path == "initialized")
    {
        initialized.yfilter = yfilter;
    }
    if(value_path == "restarted")
    {
        restarted.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::SwitchStatusTable::SwitchStatus::SwStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ppu" || name == "mtu" || name == "mac" || name == "cpu-port" || name == "cpu-mac" || name == "initialized" || name == "restarted")
        return true;
    return false;
}

Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumbers()
{

    yang_name = "port-counters-numbers"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Mlan::Nodes::Node::PortCountersNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-counters-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::PortCountersNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortCountersNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-counters-number")
    {
        for(auto const & c : port_counters_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber>();
        c->parent = this;
        port_counters_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::PortCountersNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : port_counters_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mlan::Nodes::Node::PortCountersNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mlan::Nodes::Node::PortCountersNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mlan::Nodes::Node::PortCountersNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-counters-number")
        return true;
    return false;
}

Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCountersNumber()
    :
    number{YType::int32, "number"}
    	,
    port_counters(std::make_shared<Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters>())
{
    port_counters->parent = this;

    yang_name = "port-counters-number"; yang_parent_name = "port-counters-numbers"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (port_counters !=  nullptr && port_counters->has_operation());
}

std::string Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-counters-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-counters")
    {
        if(port_counters == nullptr)
        {
            port_counters = std::make_shared<Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters>();
        }
        return port_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_counters != nullptr)
    {
        children["port-counters"] = port_counters;
    }

    return children;
}

void Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-counters" || name == "number")
        return true;
    return false;
}

Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::PortCounters()
    :
    port_num{YType::uint32, "port-num"}
    	,
    mlan_stats(std::make_shared<Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats>())
{
    mlan_stats->parent = this;

    yang_name = "port-counters"; yang_parent_name = "port-counters-number"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(port_num.yfilter)
	|| (mlan_stats !=  nullptr && mlan_stats->has_operation());
}

std::string Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_num.is_set || is_set(port_num.yfilter)) leaf_name_data.push_back(port_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlan-stats")
    {
        if(mlan_stats == nullptr)
        {
            mlan_stats = std::make_shared<Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats>();
        }
        return mlan_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlan_stats != nullptr)
    {
        children["mlan-stats"] = mlan_stats;
    }

    return children;
}

void Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-num")
    {
        port_num = value;
        port_num.value_namespace = name_space;
        port_num.value_namespace_prefix = name_space_prefix;
    }
}

void Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-num")
    {
        port_num.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlan-stats" || name == "port-num")
        return true;
    return false;
}

Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::MlanStats()
    :
    in_good_octets_hi{YType::uint32, "in-good-octets-hi"},
    in_good_octets{YType::uint32, "in-good-octets"},
    in_bad_octets{YType::uint32, "in-bad-octets"},
    in_unicast_pkt{YType::uint32, "in-unicast-pkt"},
    in_bcast_pkt{YType::uint32, "in-bcast-pkt"},
    in_mcast_pkt{YType::uint32, "in-mcast-pkt"},
    in_pause_pkt{YType::uint32, "in-pause-pkt"},
    in_undersize_pkt{YType::uint32, "in-undersize-pkt"},
    in_fragments{YType::uint32, "in-fragments"},
    in_oversize{YType::uint32, "in-oversize"},
    in_jabber{YType::uint32, "in-jabber"},
    in_rx_err{YType::uint32, "in-rx-err"},
    in_fcs_err{YType::uint32, "in-fcs-err"},
    out_octets_hi{YType::uint32, "out-octets-hi"},
    out_octets{YType::uint32, "out-octets"},
    out_unicast_pkt{YType::uint32, "out-unicast-pkt"},
    out_bcast_pkt{YType::uint32, "out-bcast-pkt"},
    out_mcast_pkt{YType::uint32, "out-mcast-pkt"},
    out_pause_pkt{YType::uint32, "out-pause-pkt"},
    excessive{YType::uint32, "excessive"},
    collisions{YType::uint32, "collisions"},
    deferred{YType::uint32, "deferred"},
    single{YType::uint32, "single"},
    multiple{YType::uint32, "multiple"},
    out_fcs_err{YType::uint32, "out-fcs-err"},
    late{YType::uint32, "late"},
    rx_tx_64_octets{YType::uint32, "rx-tx-64-octets"},
    rx_tx_65_127_octets{YType::uint32, "rx-tx-65-127-octets"},
    rx_tx_128_255_octets{YType::uint32, "rx-tx-128-255-octets"},
    rx_tx_256_511_octets{YType::uint32, "rx-tx-256-511-octets"},
    rx_tx_512_1023_octets{YType::uint32, "rx-tx-512-1023-octets"},
    rx_tx_1024_max_octets{YType::uint32, "rx-tx-1024-max-octets"},
    in_discards{YType::uint32, "in-discards"},
    in_filtered{YType::uint32, "in-filtered"},
    out_filtered{YType::uint32, "out-filtered"}
{

    yang_name = "mlan-stats"; yang_parent_name = "port-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::~MlanStats()
{
}

bool Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::has_data() const
{
    return in_good_octets_hi.is_set
	|| in_good_octets.is_set
	|| in_bad_octets.is_set
	|| in_unicast_pkt.is_set
	|| in_bcast_pkt.is_set
	|| in_mcast_pkt.is_set
	|| in_pause_pkt.is_set
	|| in_undersize_pkt.is_set
	|| in_fragments.is_set
	|| in_oversize.is_set
	|| in_jabber.is_set
	|| in_rx_err.is_set
	|| in_fcs_err.is_set
	|| out_octets_hi.is_set
	|| out_octets.is_set
	|| out_unicast_pkt.is_set
	|| out_bcast_pkt.is_set
	|| out_mcast_pkt.is_set
	|| out_pause_pkt.is_set
	|| excessive.is_set
	|| collisions.is_set
	|| deferred.is_set
	|| single.is_set
	|| multiple.is_set
	|| out_fcs_err.is_set
	|| late.is_set
	|| rx_tx_64_octets.is_set
	|| rx_tx_65_127_octets.is_set
	|| rx_tx_128_255_octets.is_set
	|| rx_tx_256_511_octets.is_set
	|| rx_tx_512_1023_octets.is_set
	|| rx_tx_1024_max_octets.is_set
	|| in_discards.is_set
	|| in_filtered.is_set
	|| out_filtered.is_set;
}

bool Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_good_octets_hi.yfilter)
	|| ydk::is_set(in_good_octets.yfilter)
	|| ydk::is_set(in_bad_octets.yfilter)
	|| ydk::is_set(in_unicast_pkt.yfilter)
	|| ydk::is_set(in_bcast_pkt.yfilter)
	|| ydk::is_set(in_mcast_pkt.yfilter)
	|| ydk::is_set(in_pause_pkt.yfilter)
	|| ydk::is_set(in_undersize_pkt.yfilter)
	|| ydk::is_set(in_fragments.yfilter)
	|| ydk::is_set(in_oversize.yfilter)
	|| ydk::is_set(in_jabber.yfilter)
	|| ydk::is_set(in_rx_err.yfilter)
	|| ydk::is_set(in_fcs_err.yfilter)
	|| ydk::is_set(out_octets_hi.yfilter)
	|| ydk::is_set(out_octets.yfilter)
	|| ydk::is_set(out_unicast_pkt.yfilter)
	|| ydk::is_set(out_bcast_pkt.yfilter)
	|| ydk::is_set(out_mcast_pkt.yfilter)
	|| ydk::is_set(out_pause_pkt.yfilter)
	|| ydk::is_set(excessive.yfilter)
	|| ydk::is_set(collisions.yfilter)
	|| ydk::is_set(deferred.yfilter)
	|| ydk::is_set(single.yfilter)
	|| ydk::is_set(multiple.yfilter)
	|| ydk::is_set(out_fcs_err.yfilter)
	|| ydk::is_set(late.yfilter)
	|| ydk::is_set(rx_tx_64_octets.yfilter)
	|| ydk::is_set(rx_tx_65_127_octets.yfilter)
	|| ydk::is_set(rx_tx_128_255_octets.yfilter)
	|| ydk::is_set(rx_tx_256_511_octets.yfilter)
	|| ydk::is_set(rx_tx_512_1023_octets.yfilter)
	|| ydk::is_set(rx_tx_1024_max_octets.yfilter)
	|| ydk::is_set(in_discards.yfilter)
	|| ydk::is_set(in_filtered.yfilter)
	|| ydk::is_set(out_filtered.yfilter);
}

std::string Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlan-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_good_octets_hi.is_set || is_set(in_good_octets_hi.yfilter)) leaf_name_data.push_back(in_good_octets_hi.get_name_leafdata());
    if (in_good_octets.is_set || is_set(in_good_octets.yfilter)) leaf_name_data.push_back(in_good_octets.get_name_leafdata());
    if (in_bad_octets.is_set || is_set(in_bad_octets.yfilter)) leaf_name_data.push_back(in_bad_octets.get_name_leafdata());
    if (in_unicast_pkt.is_set || is_set(in_unicast_pkt.yfilter)) leaf_name_data.push_back(in_unicast_pkt.get_name_leafdata());
    if (in_bcast_pkt.is_set || is_set(in_bcast_pkt.yfilter)) leaf_name_data.push_back(in_bcast_pkt.get_name_leafdata());
    if (in_mcast_pkt.is_set || is_set(in_mcast_pkt.yfilter)) leaf_name_data.push_back(in_mcast_pkt.get_name_leafdata());
    if (in_pause_pkt.is_set || is_set(in_pause_pkt.yfilter)) leaf_name_data.push_back(in_pause_pkt.get_name_leafdata());
    if (in_undersize_pkt.is_set || is_set(in_undersize_pkt.yfilter)) leaf_name_data.push_back(in_undersize_pkt.get_name_leafdata());
    if (in_fragments.is_set || is_set(in_fragments.yfilter)) leaf_name_data.push_back(in_fragments.get_name_leafdata());
    if (in_oversize.is_set || is_set(in_oversize.yfilter)) leaf_name_data.push_back(in_oversize.get_name_leafdata());
    if (in_jabber.is_set || is_set(in_jabber.yfilter)) leaf_name_data.push_back(in_jabber.get_name_leafdata());
    if (in_rx_err.is_set || is_set(in_rx_err.yfilter)) leaf_name_data.push_back(in_rx_err.get_name_leafdata());
    if (in_fcs_err.is_set || is_set(in_fcs_err.yfilter)) leaf_name_data.push_back(in_fcs_err.get_name_leafdata());
    if (out_octets_hi.is_set || is_set(out_octets_hi.yfilter)) leaf_name_data.push_back(out_octets_hi.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_unicast_pkt.is_set || is_set(out_unicast_pkt.yfilter)) leaf_name_data.push_back(out_unicast_pkt.get_name_leafdata());
    if (out_bcast_pkt.is_set || is_set(out_bcast_pkt.yfilter)) leaf_name_data.push_back(out_bcast_pkt.get_name_leafdata());
    if (out_mcast_pkt.is_set || is_set(out_mcast_pkt.yfilter)) leaf_name_data.push_back(out_mcast_pkt.get_name_leafdata());
    if (out_pause_pkt.is_set || is_set(out_pause_pkt.yfilter)) leaf_name_data.push_back(out_pause_pkt.get_name_leafdata());
    if (excessive.is_set || is_set(excessive.yfilter)) leaf_name_data.push_back(excessive.get_name_leafdata());
    if (collisions.is_set || is_set(collisions.yfilter)) leaf_name_data.push_back(collisions.get_name_leafdata());
    if (deferred.is_set || is_set(deferred.yfilter)) leaf_name_data.push_back(deferred.get_name_leafdata());
    if (single.is_set || is_set(single.yfilter)) leaf_name_data.push_back(single.get_name_leafdata());
    if (multiple.is_set || is_set(multiple.yfilter)) leaf_name_data.push_back(multiple.get_name_leafdata());
    if (out_fcs_err.is_set || is_set(out_fcs_err.yfilter)) leaf_name_data.push_back(out_fcs_err.get_name_leafdata());
    if (late.is_set || is_set(late.yfilter)) leaf_name_data.push_back(late.get_name_leafdata());
    if (rx_tx_64_octets.is_set || is_set(rx_tx_64_octets.yfilter)) leaf_name_data.push_back(rx_tx_64_octets.get_name_leafdata());
    if (rx_tx_65_127_octets.is_set || is_set(rx_tx_65_127_octets.yfilter)) leaf_name_data.push_back(rx_tx_65_127_octets.get_name_leafdata());
    if (rx_tx_128_255_octets.is_set || is_set(rx_tx_128_255_octets.yfilter)) leaf_name_data.push_back(rx_tx_128_255_octets.get_name_leafdata());
    if (rx_tx_256_511_octets.is_set || is_set(rx_tx_256_511_octets.yfilter)) leaf_name_data.push_back(rx_tx_256_511_octets.get_name_leafdata());
    if (rx_tx_512_1023_octets.is_set || is_set(rx_tx_512_1023_octets.yfilter)) leaf_name_data.push_back(rx_tx_512_1023_octets.get_name_leafdata());
    if (rx_tx_1024_max_octets.is_set || is_set(rx_tx_1024_max_octets.yfilter)) leaf_name_data.push_back(rx_tx_1024_max_octets.get_name_leafdata());
    if (in_discards.is_set || is_set(in_discards.yfilter)) leaf_name_data.push_back(in_discards.get_name_leafdata());
    if (in_filtered.is_set || is_set(in_filtered.yfilter)) leaf_name_data.push_back(in_filtered.get_name_leafdata());
    if (out_filtered.is_set || is_set(out_filtered.yfilter)) leaf_name_data.push_back(out_filtered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-good-octets-hi")
    {
        in_good_octets_hi = value;
        in_good_octets_hi.value_namespace = name_space;
        in_good_octets_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-good-octets")
    {
        in_good_octets = value;
        in_good_octets.value_namespace = name_space;
        in_good_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bad-octets")
    {
        in_bad_octets = value;
        in_bad_octets.value_namespace = name_space;
        in_bad_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-unicast-pkt")
    {
        in_unicast_pkt = value;
        in_unicast_pkt.value_namespace = name_space;
        in_unicast_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bcast-pkt")
    {
        in_bcast_pkt = value;
        in_bcast_pkt.value_namespace = name_space;
        in_bcast_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mcast-pkt")
    {
        in_mcast_pkt = value;
        in_mcast_pkt.value_namespace = name_space;
        in_mcast_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pause-pkt")
    {
        in_pause_pkt = value;
        in_pause_pkt.value_namespace = name_space;
        in_pause_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-undersize-pkt")
    {
        in_undersize_pkt = value;
        in_undersize_pkt.value_namespace = name_space;
        in_undersize_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-fragments")
    {
        in_fragments = value;
        in_fragments.value_namespace = name_space;
        in_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-oversize")
    {
        in_oversize = value;
        in_oversize.value_namespace = name_space;
        in_oversize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-jabber")
    {
        in_jabber = value;
        in_jabber.value_namespace = name_space;
        in_jabber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rx-err")
    {
        in_rx_err = value;
        in_rx_err.value_namespace = name_space;
        in_rx_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-fcs-err")
    {
        in_fcs_err = value;
        in_fcs_err.value_namespace = name_space;
        in_fcs_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-hi")
    {
        out_octets_hi = value;
        out_octets_hi.value_namespace = name_space;
        out_octets_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-unicast-pkt")
    {
        out_unicast_pkt = value;
        out_unicast_pkt.value_namespace = name_space;
        out_unicast_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bcast-pkt")
    {
        out_bcast_pkt = value;
        out_bcast_pkt.value_namespace = name_space;
        out_bcast_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mcast-pkt")
    {
        out_mcast_pkt = value;
        out_mcast_pkt.value_namespace = name_space;
        out_mcast_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pause-pkt")
    {
        out_pause_pkt = value;
        out_pause_pkt.value_namespace = name_space;
        out_pause_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excessive")
    {
        excessive = value;
        excessive.value_namespace = name_space;
        excessive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collisions")
    {
        collisions = value;
        collisions.value_namespace = name_space;
        collisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deferred")
    {
        deferred = value;
        deferred.value_namespace = name_space;
        deferred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single")
    {
        single = value;
        single.value_namespace = name_space;
        single.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiple")
    {
        multiple = value;
        multiple.value_namespace = name_space;
        multiple.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-fcs-err")
    {
        out_fcs_err = value;
        out_fcs_err.value_namespace = name_space;
        out_fcs_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "late")
    {
        late = value;
        late.value_namespace = name_space;
        late.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-tx-64-octets")
    {
        rx_tx_64_octets = value;
        rx_tx_64_octets.value_namespace = name_space;
        rx_tx_64_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-tx-65-127-octets")
    {
        rx_tx_65_127_octets = value;
        rx_tx_65_127_octets.value_namespace = name_space;
        rx_tx_65_127_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-tx-128-255-octets")
    {
        rx_tx_128_255_octets = value;
        rx_tx_128_255_octets.value_namespace = name_space;
        rx_tx_128_255_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-tx-256-511-octets")
    {
        rx_tx_256_511_octets = value;
        rx_tx_256_511_octets.value_namespace = name_space;
        rx_tx_256_511_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-tx-512-1023-octets")
    {
        rx_tx_512_1023_octets = value;
        rx_tx_512_1023_octets.value_namespace = name_space;
        rx_tx_512_1023_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-tx-1024-max-octets")
    {
        rx_tx_1024_max_octets = value;
        rx_tx_1024_max_octets.value_namespace = name_space;
        rx_tx_1024_max_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-discards")
    {
        in_discards = value;
        in_discards.value_namespace = name_space;
        in_discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-filtered")
    {
        in_filtered = value;
        in_filtered.value_namespace = name_space;
        in_filtered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-filtered")
    {
        out_filtered = value;
        out_filtered.value_namespace = name_space;
        out_filtered.value_namespace_prefix = name_space_prefix;
    }
}

void Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-good-octets-hi")
    {
        in_good_octets_hi.yfilter = yfilter;
    }
    if(value_path == "in-good-octets")
    {
        in_good_octets.yfilter = yfilter;
    }
    if(value_path == "in-bad-octets")
    {
        in_bad_octets.yfilter = yfilter;
    }
    if(value_path == "in-unicast-pkt")
    {
        in_unicast_pkt.yfilter = yfilter;
    }
    if(value_path == "in-bcast-pkt")
    {
        in_bcast_pkt.yfilter = yfilter;
    }
    if(value_path == "in-mcast-pkt")
    {
        in_mcast_pkt.yfilter = yfilter;
    }
    if(value_path == "in-pause-pkt")
    {
        in_pause_pkt.yfilter = yfilter;
    }
    if(value_path == "in-undersize-pkt")
    {
        in_undersize_pkt.yfilter = yfilter;
    }
    if(value_path == "in-fragments")
    {
        in_fragments.yfilter = yfilter;
    }
    if(value_path == "in-oversize")
    {
        in_oversize.yfilter = yfilter;
    }
    if(value_path == "in-jabber")
    {
        in_jabber.yfilter = yfilter;
    }
    if(value_path == "in-rx-err")
    {
        in_rx_err.yfilter = yfilter;
    }
    if(value_path == "in-fcs-err")
    {
        in_fcs_err.yfilter = yfilter;
    }
    if(value_path == "out-octets-hi")
    {
        out_octets_hi.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
    if(value_path == "out-unicast-pkt")
    {
        out_unicast_pkt.yfilter = yfilter;
    }
    if(value_path == "out-bcast-pkt")
    {
        out_bcast_pkt.yfilter = yfilter;
    }
    if(value_path == "out-mcast-pkt")
    {
        out_mcast_pkt.yfilter = yfilter;
    }
    if(value_path == "out-pause-pkt")
    {
        out_pause_pkt.yfilter = yfilter;
    }
    if(value_path == "excessive")
    {
        excessive.yfilter = yfilter;
    }
    if(value_path == "collisions")
    {
        collisions.yfilter = yfilter;
    }
    if(value_path == "deferred")
    {
        deferred.yfilter = yfilter;
    }
    if(value_path == "single")
    {
        single.yfilter = yfilter;
    }
    if(value_path == "multiple")
    {
        multiple.yfilter = yfilter;
    }
    if(value_path == "out-fcs-err")
    {
        out_fcs_err.yfilter = yfilter;
    }
    if(value_path == "late")
    {
        late.yfilter = yfilter;
    }
    if(value_path == "rx-tx-64-octets")
    {
        rx_tx_64_octets.yfilter = yfilter;
    }
    if(value_path == "rx-tx-65-127-octets")
    {
        rx_tx_65_127_octets.yfilter = yfilter;
    }
    if(value_path == "rx-tx-128-255-octets")
    {
        rx_tx_128_255_octets.yfilter = yfilter;
    }
    if(value_path == "rx-tx-256-511-octets")
    {
        rx_tx_256_511_octets.yfilter = yfilter;
    }
    if(value_path == "rx-tx-512-1023-octets")
    {
        rx_tx_512_1023_octets.yfilter = yfilter;
    }
    if(value_path == "rx-tx-1024-max-octets")
    {
        rx_tx_1024_max_octets.yfilter = yfilter;
    }
    if(value_path == "in-discards")
    {
        in_discards.yfilter = yfilter;
    }
    if(value_path == "in-filtered")
    {
        in_filtered.yfilter = yfilter;
    }
    if(value_path == "out-filtered")
    {
        out_filtered.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::PortCountersNumbers::PortCountersNumber::PortCounters::MlanStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-good-octets-hi" || name == "in-good-octets" || name == "in-bad-octets" || name == "in-unicast-pkt" || name == "in-bcast-pkt" || name == "in-mcast-pkt" || name == "in-pause-pkt" || name == "in-undersize-pkt" || name == "in-fragments" || name == "in-oversize" || name == "in-jabber" || name == "in-rx-err" || name == "in-fcs-err" || name == "out-octets-hi" || name == "out-octets" || name == "out-unicast-pkt" || name == "out-bcast-pkt" || name == "out-mcast-pkt" || name == "out-pause-pkt" || name == "excessive" || name == "collisions" || name == "deferred" || name == "single" || name == "multiple" || name == "out-fcs-err" || name == "late" || name == "rx-tx-64-octets" || name == "rx-tx-65-127-octets" || name == "rx-tx-128-255-octets" || name == "rx-tx-256-511-octets" || name == "rx-tx-512-1023-octets" || name == "rx-tx-1024-max-octets" || name == "in-discards" || name == "in-filtered" || name == "out-filtered")
        return true;
    return false;
}

Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumbers()
{

    yang_name = "atu-entry-numbers"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Mlan::Nodes::Node::AtuEntryNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atu-entry-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::AtuEntryNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::AtuEntryNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atu-entry-number")
    {
        for(auto const & c : atu_entry_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber>();
        c->parent = this;
        atu_entry_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::AtuEntryNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atu_entry_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mlan::Nodes::Node::AtuEntryNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mlan::Nodes::Node::AtuEntryNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mlan::Nodes::Node::AtuEntryNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atu-entry-number")
        return true;
    return false;
}

Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::AtuEntryNumber()
    :
    entry{YType::int32, "entry"}
    	,
    switch_counters(std::make_shared<Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters>())
{
    switch_counters->parent = this;

    yang_name = "atu-entry-number"; yang_parent_name = "atu-entry-numbers"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter)
	|| (switch_counters !=  nullptr && switch_counters->has_operation());
}

std::string Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atu-entry-number" <<"[entry='" <<entry <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-counters")
    {
        if(switch_counters == nullptr)
        {
            switch_counters = std::make_shared<Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters>();
        }
        return switch_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switch_counters != nullptr)
    {
        children["switch-counters"] = switch_counters;
    }

    return children;
}

void Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-counters" || name == "entry")
        return true;
    return false;
}

Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::SwitchCounters()
    :
    entry_num{YType::uint32, "entry-num"}
    	,
    atu(std::make_shared<Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu>())
{
    atu->parent = this;

    yang_name = "switch-counters"; yang_parent_name = "atu-entry-number"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(entry_num.yfilter)
	|| (atu !=  nullptr && atu->has_operation());
}

std::string Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_num.is_set || is_set(entry_num.yfilter)) leaf_name_data.push_back(entry_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atu")
    {
        if(atu == nullptr)
        {
            atu = std::make_shared<Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu>();
        }
        return atu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atu != nullptr)
    {
        children["atu"] = atu;
    }

    return children;
}

void Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-num")
    {
        entry_num = value;
        entry_num.value_namespace = name_space;
        entry_num.value_namespace_prefix = name_space_prefix;
    }
}

void Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-num")
    {
        entry_num.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atu" || name == "entry-num")
        return true;
    return false;
}

Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::Atu()
    :
    db_num{YType::uint16, "db-num"},
    priority{YType::uint8, "priority"},
    trunk{YType::boolean, "trunk"},
    dpv{YType::uint8, "dpv"},
    es{YType::uint8, "es"},
    macaddr{YType::uint16, "macaddr"}
{

    yang_name = "atu"; yang_parent_name = "switch-counters"; is_top_level_class = false; has_list_ancestor = true;
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
	|| priority.is_set
	|| trunk.is_set
	|| dpv.is_set
	|| es.is_set;
}

bool Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::has_operation() const
{
    for (auto const & leaf : macaddr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(db_num.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(dpv.yfilter)
	|| ydk::is_set(es.yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (db_num.is_set || is_set(db_num.yfilter)) leaf_name_data.push_back(db_num.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (dpv.is_set || is_set(dpv.yfilter)) leaf_name_data.push_back(dpv.get_name_leafdata());
    if (es.is_set || is_set(es.yfilter)) leaf_name_data.push_back(es.get_name_leafdata());

    auto macaddr_name_datas = macaddr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), macaddr_name_datas.begin(), macaddr_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "db-num")
    {
        db_num = value;
        db_num.value_namespace = name_space;
        db_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpv")
    {
        dpv = value;
        dpv.value_namespace = name_space;
        dpv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es")
    {
        es = value;
        es.value_namespace = name_space;
        es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macaddr")
    {
        macaddr.append(value);
    }
}

void Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "db-num")
    {
        db_num.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "dpv")
    {
        dpv.yfilter = yfilter;
    }
    if(value_path == "es")
    {
        es.yfilter = yfilter;
    }
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool Mlan::Nodes::Node::AtuEntryNumbers::AtuEntryNumber::SwitchCounters::Atu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-num" || name == "priority" || name == "trunk" || name == "dpv" || name == "es" || name == "macaddr")
        return true;
    return false;
}


}
}

