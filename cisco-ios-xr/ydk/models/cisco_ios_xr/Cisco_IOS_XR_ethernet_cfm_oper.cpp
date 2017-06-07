
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ethernet_cfm_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ethernet_cfm_oper {

Cfm::Cfm()
    :
    global(std::make_shared<Cfm::Global>())
	,nodes(std::make_shared<Cfm::Nodes>())
{
    global->parent = this;

    nodes->parent = this;

    yang_name = "cfm"; yang_parent_name = "Cisco-IOS-XR-ethernet-cfm-oper";
}

Cfm::~Cfm()
{
}

bool Cfm::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool Cfm::has_operation() const
{
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm";

    return path_buffer.str();

}

const EntityPath Cfm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Cfm::Global>();
        }
        return global;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Cfm::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Cfm::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Cfm::clone_ptr() const
{
    return std::make_shared<Cfm>();
}

std::string Cfm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Cfm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Cfm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Cfm::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "cfm";
}

Cfm::Nodes::~Nodes()
{
}

bool Cfm::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Cfm::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cfm::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath Cfm::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Cfm::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cfm::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Cfm::Nodes::Node::Node()
    :
    node{YType::str, "node"}
    	,
    ccm_learning_databases(std::make_shared<Cfm::Nodes::Node::CcmLearningDatabases>())
	,interface_aises(std::make_shared<Cfm::Nodes::Node::InterfaceAises>())
	,interface_statistics(std::make_shared<Cfm::Nodes::Node::InterfaceStatistics>())
	,summary(std::make_shared<Cfm::Nodes::Node::Summary>())
{
    ccm_learning_databases->parent = this;

    interface_aises->parent = this;

    interface_statistics->parent = this;

    summary->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

Cfm::Nodes::Node::~Node()
{
}

bool Cfm::Nodes::Node::has_data() const
{
    return node.is_set
	|| (ccm_learning_databases !=  nullptr && ccm_learning_databases->has_data())
	|| (interface_aises !=  nullptr && interface_aises->has_data())
	|| (interface_statistics !=  nullptr && interface_statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Cfm::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node.operation)
	|| (ccm_learning_databases !=  nullptr && ccm_learning_databases->has_operation())
	|| (interface_aises !=  nullptr && interface_aises->has_operation())
	|| (interface_statistics !=  nullptr && interface_statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Cfm::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node <<"']";

    return path_buffer.str();

}

const EntityPath Cfm::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/nodes/" << get_segment_path();
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

std::shared_ptr<Entity> Cfm::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccm-learning-databases")
    {
        if(ccm_learning_databases == nullptr)
        {
            ccm_learning_databases = std::make_shared<Cfm::Nodes::Node::CcmLearningDatabases>();
        }
        return ccm_learning_databases;
    }

    if(child_yang_name == "interface-aises")
    {
        if(interface_aises == nullptr)
        {
            interface_aises = std::make_shared<Cfm::Nodes::Node::InterfaceAises>();
        }
        return interface_aises;
    }

    if(child_yang_name == "interface-statistics")
    {
        if(interface_statistics == nullptr)
        {
            interface_statistics = std::make_shared<Cfm::Nodes::Node::InterfaceStatistics>();
        }
        return interface_statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Cfm::Nodes::Node::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ccm_learning_databases != nullptr)
    {
        children["ccm-learning-databases"] = ccm_learning_databases;
    }

    if(interface_aises != nullptr)
    {
        children["interface-aises"] = interface_aises;
    }

    if(interface_statistics != nullptr)
    {
        children["interface-statistics"] = interface_statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Cfm::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node")
    {
        node = value;
    }
}

Cfm::Nodes::Node::InterfaceAises::InterfaceAises()
{
    yang_name = "interface-aises"; yang_parent_name = "node";
}

Cfm::Nodes::Node::InterfaceAises::~InterfaceAises()
{
}

bool Cfm::Nodes::Node::InterfaceAises::has_data() const
{
    for (std::size_t index=0; index<interface_ais.size(); index++)
    {
        if(interface_ais[index]->has_data())
            return true;
    }
    return false;
}

bool Cfm::Nodes::Node::InterfaceAises::has_operation() const
{
    for (std::size_t index=0; index<interface_ais.size(); index++)
    {
        if(interface_ais[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cfm::Nodes::Node::InterfaceAises::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-aises";

    return path_buffer.str();

}

const EntityPath Cfm::Nodes::Node::InterfaceAises::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAises' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Nodes::Node::InterfaceAises::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-ais")
    {
        for(auto const & c : interface_ais)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Nodes::Node::InterfaceAises::InterfaceAis>();
        c->parent = this;
        interface_ais.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Nodes::Node::InterfaceAises::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_ais)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cfm::Nodes::Node::InterfaceAises::set_value(const std::string & value_path, std::string value)
{
}

Cfm::Nodes::Node::InterfaceAises::InterfaceAis::InterfaceAis()
    :
    interface_name{YType::str, "interface-name"},
    direction{YType::enumeration, "direction"},
    interface{YType::str, "interface"},
    interface_state{YType::str, "interface-state"},
    interworking_state{YType::enumeration, "interworking-state"},
    stp_state{YType::enumeration, "stp-state"}
    	,
    statistics(std::make_shared<Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics>())
{
    statistics->parent = this;

    yang_name = "interface-ais"; yang_parent_name = "interface-aises";
}

Cfm::Nodes::Node::InterfaceAises::InterfaceAis::~InterfaceAis()
{
}

bool Cfm::Nodes::Node::InterfaceAises::InterfaceAis::has_data() const
{
    return interface_name.is_set
	|| direction.is_set
	|| interface.is_set
	|| interface_state.is_set
	|| interworking_state.is_set
	|| stp_state.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Cfm::Nodes::Node::InterfaceAises::InterfaceAis::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(direction.operation)
	|| is_set(interface.operation)
	|| is_set(interface_state.operation)
	|| is_set(interworking_state.operation)
	|| is_set(stp_state.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Cfm::Nodes::Node::InterfaceAises::InterfaceAis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ais" <<"[interface-name='" <<interface_name <<"']" <<"[direction='" <<direction <<"']";

    return path_buffer.str();

}

const EntityPath Cfm::Nodes::Node::InterfaceAises::InterfaceAis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAis' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.operation)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (interworking_state.is_set || is_set(interworking_state.operation)) leaf_name_data.push_back(interworking_state.get_name_leafdata());
    if (stp_state.is_set || is_set(stp_state.operation)) leaf_name_data.push_back(stp_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Nodes::Node::InterfaceAises::InterfaceAis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Nodes::Node::InterfaceAises::InterfaceAis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Cfm::Nodes::Node::InterfaceAises::InterfaceAis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
    }
    if(value_path == "interworking-state")
    {
        interworking_state = value;
    }
    if(value_path == "stp-state")
    {
        stp_state = value;
    }
}

Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Statistics()
    :
    direction{YType::enumeration, "direction"},
    lowest_level{YType::enumeration, "lowest-level"},
    sent_packets{YType::uint32, "sent-packets"},
    transmission_interval{YType::enumeration, "transmission-interval"},
    transmission_level{YType::enumeration, "transmission-level"},
    via_level{YType::enumeration, "via-level"}
    	,
    defects(std::make_shared<Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects>())
	,last_started(std::make_shared<Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted>())
{
    defects->parent = this;

    last_started->parent = this;

    yang_name = "statistics"; yang_parent_name = "interface-ais";
}

Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::~Statistics()
{
}

bool Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::has_data() const
{
    for (auto const & leaf : via_level.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return direction.is_set
	|| lowest_level.is_set
	|| sent_packets.is_set
	|| transmission_interval.is_set
	|| transmission_level.is_set
	|| (defects !=  nullptr && defects->has_data())
	|| (last_started !=  nullptr && last_started->has_data());
}

bool Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::has_operation() const
{
    for (auto const & leaf : via_level.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(lowest_level.operation)
	|| is_set(sent_packets.operation)
	|| is_set(transmission_interval.operation)
	|| is_set(transmission_level.operation)
	|| is_set(via_level.operation)
	|| (defects !=  nullptr && defects->has_operation())
	|| (last_started !=  nullptr && last_started->has_operation());
}

std::string Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (lowest_level.is_set || is_set(lowest_level.operation)) leaf_name_data.push_back(lowest_level.get_name_leafdata());
    if (sent_packets.is_set || is_set(sent_packets.operation)) leaf_name_data.push_back(sent_packets.get_name_leafdata());
    if (transmission_interval.is_set || is_set(transmission_interval.operation)) leaf_name_data.push_back(transmission_interval.get_name_leafdata());
    if (transmission_level.is_set || is_set(transmission_level.operation)) leaf_name_data.push_back(transmission_level.get_name_leafdata());

    auto via_level_name_datas = via_level.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), via_level_name_datas.begin(), via_level_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "defects")
    {
        if(defects == nullptr)
        {
            defects = std::make_shared<Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects>();
        }
        return defects;
    }

    if(child_yang_name == "last-started")
    {
        if(last_started == nullptr)
        {
            last_started = std::make_shared<Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted>();
        }
        return last_started;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(defects != nullptr)
    {
        children["defects"] = defects;
    }

    if(last_started != nullptr)
    {
        children["last-started"] = last_started;
    }

    return children;
}

void Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "lowest-level")
    {
        lowest_level = value;
    }
    if(value_path == "sent-packets")
    {
        sent_packets = value;
    }
    if(value_path == "transmission-interval")
    {
        transmission_interval = value;
    }
    if(value_path == "transmission-level")
    {
        transmission_level = value;
    }
    if(value_path == "via-level")
    {
        via_level.append(value);
    }
}

Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::Defects()
    :
    ais_received{YType::boolean, "ais-received"},
    auto_missing{YType::uint32, "auto-missing"},
    local_port_status{YType::boolean, "local-port-status"},
    missing{YType::uint32, "missing"},
    peer_meps_that_timed_out{YType::uint32, "peer-meps-that-timed-out"},
    peer_port_status{YType::boolean, "peer-port-status"},
    unexpected{YType::uint32, "unexpected"}
    	,
    remote_meps_defects(std::make_shared<Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects>())
{
    remote_meps_defects->parent = this;

    yang_name = "defects"; yang_parent_name = "statistics";
}

Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::~Defects()
{
}

bool Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::has_data() const
{
    return ais_received.is_set
	|| auto_missing.is_set
	|| local_port_status.is_set
	|| missing.is_set
	|| peer_meps_that_timed_out.is_set
	|| peer_port_status.is_set
	|| unexpected.is_set
	|| (remote_meps_defects !=  nullptr && remote_meps_defects->has_data());
}

bool Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::has_operation() const
{
    return is_set(operation)
	|| is_set(ais_received.operation)
	|| is_set(auto_missing.operation)
	|| is_set(local_port_status.operation)
	|| is_set(missing.operation)
	|| is_set(peer_meps_that_timed_out.operation)
	|| is_set(peer_port_status.operation)
	|| is_set(unexpected.operation)
	|| (remote_meps_defects !=  nullptr && remote_meps_defects->has_operation());
}

std::string Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defects";

    return path_buffer.str();

}

const EntityPath Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Defects' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais_received.is_set || is_set(ais_received.operation)) leaf_name_data.push_back(ais_received.get_name_leafdata());
    if (auto_missing.is_set || is_set(auto_missing.operation)) leaf_name_data.push_back(auto_missing.get_name_leafdata());
    if (local_port_status.is_set || is_set(local_port_status.operation)) leaf_name_data.push_back(local_port_status.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (peer_meps_that_timed_out.is_set || is_set(peer_meps_that_timed_out.operation)) leaf_name_data.push_back(peer_meps_that_timed_out.get_name_leafdata());
    if (peer_port_status.is_set || is_set(peer_port_status.operation)) leaf_name_data.push_back(peer_port_status.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-meps-defects")
    {
        if(remote_meps_defects == nullptr)
        {
            remote_meps_defects = std::make_shared<Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects>();
        }
        return remote_meps_defects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_meps_defects != nullptr)
    {
        children["remote-meps-defects"] = remote_meps_defects;
    }

    return children;
}

void Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ais-received")
    {
        ais_received = value;
    }
    if(value_path == "auto-missing")
    {
        auto_missing = value;
    }
    if(value_path == "local-port-status")
    {
        local_port_status = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "peer-meps-that-timed-out")
    {
        peer_meps_that_timed_out = value;
    }
    if(value_path == "peer-port-status")
    {
        peer_port_status = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
}

Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects::RemoteMepsDefects()
    :
    invalid_ccm_interval{YType::boolean, "invalid-ccm-interval"},
    invalid_level{YType::boolean, "invalid-level"},
    invalid_maid{YType::boolean, "invalid-maid"},
    loss_threshold_exceeded{YType::boolean, "loss-threshold-exceeded"},
    received_our_mac{YType::boolean, "received-our-mac"},
    received_our_mep_id{YType::boolean, "received-our-mep-id"},
    received_rdi{YType::boolean, "received-rdi"}
{
    yang_name = "remote-meps-defects"; yang_parent_name = "defects";
}

Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects::~RemoteMepsDefects()
{
}

bool Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects::has_data() const
{
    return invalid_ccm_interval.is_set
	|| invalid_level.is_set
	|| invalid_maid.is_set
	|| loss_threshold_exceeded.is_set
	|| received_our_mac.is_set
	|| received_our_mep_id.is_set
	|| received_rdi.is_set;
}

bool Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects::has_operation() const
{
    return is_set(operation)
	|| is_set(invalid_ccm_interval.operation)
	|| is_set(invalid_level.operation)
	|| is_set(invalid_maid.operation)
	|| is_set(loss_threshold_exceeded.operation)
	|| is_set(received_our_mac.operation)
	|| is_set(received_our_mep_id.operation)
	|| is_set(received_rdi.operation);
}

std::string Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-meps-defects";

    return path_buffer.str();

}

const EntityPath Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteMepsDefects' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invalid_ccm_interval.is_set || is_set(invalid_ccm_interval.operation)) leaf_name_data.push_back(invalid_ccm_interval.get_name_leafdata());
    if (invalid_level.is_set || is_set(invalid_level.operation)) leaf_name_data.push_back(invalid_level.get_name_leafdata());
    if (invalid_maid.is_set || is_set(invalid_maid.operation)) leaf_name_data.push_back(invalid_maid.get_name_leafdata());
    if (loss_threshold_exceeded.is_set || is_set(loss_threshold_exceeded.operation)) leaf_name_data.push_back(loss_threshold_exceeded.get_name_leafdata());
    if (received_our_mac.is_set || is_set(received_our_mac.operation)) leaf_name_data.push_back(received_our_mac.get_name_leafdata());
    if (received_our_mep_id.is_set || is_set(received_our_mep_id.operation)) leaf_name_data.push_back(received_our_mep_id.get_name_leafdata());
    if (received_rdi.is_set || is_set(received_rdi.operation)) leaf_name_data.push_back(received_rdi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "invalid-ccm-interval")
    {
        invalid_ccm_interval = value;
    }
    if(value_path == "invalid-level")
    {
        invalid_level = value;
    }
    if(value_path == "invalid-maid")
    {
        invalid_maid = value;
    }
    if(value_path == "loss-threshold-exceeded")
    {
        loss_threshold_exceeded = value;
    }
    if(value_path == "received-our-mac")
    {
        received_our_mac = value;
    }
    if(value_path == "received-our-mep-id")
    {
        received_our_mep_id = value;
    }
    if(value_path == "received-rdi")
    {
        received_rdi = value;
    }
}

Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted::LastStarted()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-started"; yang_parent_name = "statistics";
}

Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted::~LastStarted()
{
}

bool Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-started";

    return path_buffer.str();

}

const EntityPath Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastStarted' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistics()
{
    yang_name = "interface-statistics"; yang_parent_name = "node";
}

Cfm::Nodes::Node::InterfaceStatistics::~InterfaceStatistics()
{
}

bool Cfm::Nodes::Node::InterfaceStatistics::has_data() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Cfm::Nodes::Node::InterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cfm::Nodes::Node::InterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistics";

    return path_buffer.str();

}

const EntityPath Cfm::Nodes::Node::InterfaceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatistics' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Nodes::Node::InterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-statistic")
    {
        for(auto const & c : interface_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic>();
        c->parent = this;
        interface_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Nodes::Node::InterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cfm::Nodes::Node::InterfaceStatistics::set_value(const std::string & value_path, std::string value)
{
}

Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::InterfaceStatistic()
    :
    interface{YType::str, "interface"},
    interface_xr{YType::str, "interface-xr"}
    	,
    statistics(std::make_shared<Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "interface-statistic"; yang_parent_name = "interface-statistics";
}

Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::~InterfaceStatistic()
{
}

bool Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::has_data() const
{
    return interface.is_set
	|| interface_xr.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(interface_xr.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistic" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatistic' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_xr.is_set || is_set(interface_xr.operation)) leaf_name_data.push_back(interface_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-xr")
    {
        interface_xr = value;
    }
}

Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics::Statistics()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    last_malformed_opcode{YType::enumeration, "last-malformed-opcode"},
    last_malformed_reason{YType::enumeration, "last-malformed-reason"},
    malformed_packets{YType::uint64, "malformed-packets"}
{
    yang_name = "statistics"; yang_parent_name = "interface-statistic";
}

Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics::~Statistics()
{
}

bool Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics::has_data() const
{
    return dropped_packets.is_set
	|| last_malformed_opcode.is_set
	|| last_malformed_reason.is_set
	|| malformed_packets.is_set;
}

bool Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(last_malformed_opcode.operation)
	|| is_set(last_malformed_reason.operation)
	|| is_set(malformed_packets.operation);
}

std::string Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (last_malformed_opcode.is_set || is_set(last_malformed_opcode.operation)) leaf_name_data.push_back(last_malformed_opcode.get_name_leafdata());
    if (last_malformed_reason.is_set || is_set(last_malformed_reason.operation)) leaf_name_data.push_back(last_malformed_reason.get_name_leafdata());
    if (malformed_packets.is_set || is_set(malformed_packets.operation)) leaf_name_data.push_back(malformed_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "last-malformed-opcode")
    {
        last_malformed_opcode = value;
    }
    if(value_path == "last-malformed-reason")
    {
        last_malformed_reason = value;
    }
    if(value_path == "malformed-packets")
    {
        malformed_packets = value;
    }
}

Cfm::Nodes::Node::Summary::Summary()
    :
    bnm_enabled_links{YType::uint32, "bnm-enabled-links"},
    bridge_domains_and_xconnects{YType::uint32, "bridge-domains-and-xconnects"},
    ccm_learning_db_entries{YType::uint32, "ccm-learning-db-entries"},
    ccm_rate{YType::uint32, "ccm-rate"},
    disabled_misconfigured{YType::uint32, "disabled-misconfigured"},
    disabled_operational_error{YType::uint32, "disabled-operational-error"},
    disabled_out_of_resources{YType::uint32, "disabled-out-of-resources"},
    domains{YType::uint32, "domains"},
    down_meps{YType::uint32, "down-meps"},
    interfaces{YType::uint32, "interfaces"},
    issu_role{YType::enumeration, "issu-role"},
    local_meps{YType::uint32, "local-meps"},
    mips{YType::uint32, "mips"},
    offloaded{YType::uint32, "offloaded"},
    offloaded_at10ms{YType::uint32, "offloaded-at10ms"},
    offloaded_at3_3ms{YType::uint32, "offloaded-at3-3ms"},
    operational_local_meps{YType::uint32, "operational-local-meps"},
    operational_peer_meps{YType::uint32, "operational-peer-meps"},
    peer_meps{YType::uint32, "peer-meps"},
    peer_meps_timed_out{YType::uint32, "peer-meps-timed-out"},
    peer_meps_with_defects{YType::uint32, "peer-meps-with-defects"},
    peer_meps_without_defects{YType::uint32, "peer-meps-without-defects"},
    services{YType::uint32, "services"},
    traceroute_cache_entries{YType::uint32, "traceroute-cache-entries"},
    traceroute_cache_replies{YType::uint32, "traceroute-cache-replies"},
    up_meps{YType::uint32, "up-meps"}
{
    yang_name = "summary"; yang_parent_name = "node";
}

Cfm::Nodes::Node::Summary::~Summary()
{
}

bool Cfm::Nodes::Node::Summary::has_data() const
{
    return bnm_enabled_links.is_set
	|| bridge_domains_and_xconnects.is_set
	|| ccm_learning_db_entries.is_set
	|| ccm_rate.is_set
	|| disabled_misconfigured.is_set
	|| disabled_operational_error.is_set
	|| disabled_out_of_resources.is_set
	|| domains.is_set
	|| down_meps.is_set
	|| interfaces.is_set
	|| issu_role.is_set
	|| local_meps.is_set
	|| mips.is_set
	|| offloaded.is_set
	|| offloaded_at10ms.is_set
	|| offloaded_at3_3ms.is_set
	|| operational_local_meps.is_set
	|| operational_peer_meps.is_set
	|| peer_meps.is_set
	|| peer_meps_timed_out.is_set
	|| peer_meps_with_defects.is_set
	|| peer_meps_without_defects.is_set
	|| services.is_set
	|| traceroute_cache_entries.is_set
	|| traceroute_cache_replies.is_set
	|| up_meps.is_set;
}

bool Cfm::Nodes::Node::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(bnm_enabled_links.operation)
	|| is_set(bridge_domains_and_xconnects.operation)
	|| is_set(ccm_learning_db_entries.operation)
	|| is_set(ccm_rate.operation)
	|| is_set(disabled_misconfigured.operation)
	|| is_set(disabled_operational_error.operation)
	|| is_set(disabled_out_of_resources.operation)
	|| is_set(domains.operation)
	|| is_set(down_meps.operation)
	|| is_set(interfaces.operation)
	|| is_set(issu_role.operation)
	|| is_set(local_meps.operation)
	|| is_set(mips.operation)
	|| is_set(offloaded.operation)
	|| is_set(offloaded_at10ms.operation)
	|| is_set(offloaded_at3_3ms.operation)
	|| is_set(operational_local_meps.operation)
	|| is_set(operational_peer_meps.operation)
	|| is_set(peer_meps.operation)
	|| is_set(peer_meps_timed_out.operation)
	|| is_set(peer_meps_with_defects.operation)
	|| is_set(peer_meps_without_defects.operation)
	|| is_set(services.operation)
	|| is_set(traceroute_cache_entries.operation)
	|| is_set(traceroute_cache_replies.operation)
	|| is_set(up_meps.operation);
}

std::string Cfm::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath Cfm::Nodes::Node::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bnm_enabled_links.is_set || is_set(bnm_enabled_links.operation)) leaf_name_data.push_back(bnm_enabled_links.get_name_leafdata());
    if (bridge_domains_and_xconnects.is_set || is_set(bridge_domains_and_xconnects.operation)) leaf_name_data.push_back(bridge_domains_and_xconnects.get_name_leafdata());
    if (ccm_learning_db_entries.is_set || is_set(ccm_learning_db_entries.operation)) leaf_name_data.push_back(ccm_learning_db_entries.get_name_leafdata());
    if (ccm_rate.is_set || is_set(ccm_rate.operation)) leaf_name_data.push_back(ccm_rate.get_name_leafdata());
    if (disabled_misconfigured.is_set || is_set(disabled_misconfigured.operation)) leaf_name_data.push_back(disabled_misconfigured.get_name_leafdata());
    if (disabled_operational_error.is_set || is_set(disabled_operational_error.operation)) leaf_name_data.push_back(disabled_operational_error.get_name_leafdata());
    if (disabled_out_of_resources.is_set || is_set(disabled_out_of_resources.operation)) leaf_name_data.push_back(disabled_out_of_resources.get_name_leafdata());
    if (domains.is_set || is_set(domains.operation)) leaf_name_data.push_back(domains.get_name_leafdata());
    if (down_meps.is_set || is_set(down_meps.operation)) leaf_name_data.push_back(down_meps.get_name_leafdata());
    if (interfaces.is_set || is_set(interfaces.operation)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.operation)) leaf_name_data.push_back(issu_role.get_name_leafdata());
    if (local_meps.is_set || is_set(local_meps.operation)) leaf_name_data.push_back(local_meps.get_name_leafdata());
    if (mips.is_set || is_set(mips.operation)) leaf_name_data.push_back(mips.get_name_leafdata());
    if (offloaded.is_set || is_set(offloaded.operation)) leaf_name_data.push_back(offloaded.get_name_leafdata());
    if (offloaded_at10ms.is_set || is_set(offloaded_at10ms.operation)) leaf_name_data.push_back(offloaded_at10ms.get_name_leafdata());
    if (offloaded_at3_3ms.is_set || is_set(offloaded_at3_3ms.operation)) leaf_name_data.push_back(offloaded_at3_3ms.get_name_leafdata());
    if (operational_local_meps.is_set || is_set(operational_local_meps.operation)) leaf_name_data.push_back(operational_local_meps.get_name_leafdata());
    if (operational_peer_meps.is_set || is_set(operational_peer_meps.operation)) leaf_name_data.push_back(operational_peer_meps.get_name_leafdata());
    if (peer_meps.is_set || is_set(peer_meps.operation)) leaf_name_data.push_back(peer_meps.get_name_leafdata());
    if (peer_meps_timed_out.is_set || is_set(peer_meps_timed_out.operation)) leaf_name_data.push_back(peer_meps_timed_out.get_name_leafdata());
    if (peer_meps_with_defects.is_set || is_set(peer_meps_with_defects.operation)) leaf_name_data.push_back(peer_meps_with_defects.get_name_leafdata());
    if (peer_meps_without_defects.is_set || is_set(peer_meps_without_defects.operation)) leaf_name_data.push_back(peer_meps_without_defects.get_name_leafdata());
    if (services.is_set || is_set(services.operation)) leaf_name_data.push_back(services.get_name_leafdata());
    if (traceroute_cache_entries.is_set || is_set(traceroute_cache_entries.operation)) leaf_name_data.push_back(traceroute_cache_entries.get_name_leafdata());
    if (traceroute_cache_replies.is_set || is_set(traceroute_cache_replies.operation)) leaf_name_data.push_back(traceroute_cache_replies.get_name_leafdata());
    if (up_meps.is_set || is_set(up_meps.operation)) leaf_name_data.push_back(up_meps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Nodes::Node::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Nodes::Node::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bnm-enabled-links")
    {
        bnm_enabled_links = value;
    }
    if(value_path == "bridge-domains-and-xconnects")
    {
        bridge_domains_and_xconnects = value;
    }
    if(value_path == "ccm-learning-db-entries")
    {
        ccm_learning_db_entries = value;
    }
    if(value_path == "ccm-rate")
    {
        ccm_rate = value;
    }
    if(value_path == "disabled-misconfigured")
    {
        disabled_misconfigured = value;
    }
    if(value_path == "disabled-operational-error")
    {
        disabled_operational_error = value;
    }
    if(value_path == "disabled-out-of-resources")
    {
        disabled_out_of_resources = value;
    }
    if(value_path == "domains")
    {
        domains = value;
    }
    if(value_path == "down-meps")
    {
        down_meps = value;
    }
    if(value_path == "interfaces")
    {
        interfaces = value;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
    }
    if(value_path == "local-meps")
    {
        local_meps = value;
    }
    if(value_path == "mips")
    {
        mips = value;
    }
    if(value_path == "offloaded")
    {
        offloaded = value;
    }
    if(value_path == "offloaded-at10ms")
    {
        offloaded_at10ms = value;
    }
    if(value_path == "offloaded-at3-3ms")
    {
        offloaded_at3_3ms = value;
    }
    if(value_path == "operational-local-meps")
    {
        operational_local_meps = value;
    }
    if(value_path == "operational-peer-meps")
    {
        operational_peer_meps = value;
    }
    if(value_path == "peer-meps")
    {
        peer_meps = value;
    }
    if(value_path == "peer-meps-timed-out")
    {
        peer_meps_timed_out = value;
    }
    if(value_path == "peer-meps-with-defects")
    {
        peer_meps_with_defects = value;
    }
    if(value_path == "peer-meps-without-defects")
    {
        peer_meps_without_defects = value;
    }
    if(value_path == "services")
    {
        services = value;
    }
    if(value_path == "traceroute-cache-entries")
    {
        traceroute_cache_entries = value;
    }
    if(value_path == "traceroute-cache-replies")
    {
        traceroute_cache_replies = value;
    }
    if(value_path == "up-meps")
    {
        up_meps = value;
    }
}

Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabases()
{
    yang_name = "ccm-learning-databases"; yang_parent_name = "node";
}

Cfm::Nodes::Node::CcmLearningDatabases::~CcmLearningDatabases()
{
}

bool Cfm::Nodes::Node::CcmLearningDatabases::has_data() const
{
    for (std::size_t index=0; index<ccm_learning_database.size(); index++)
    {
        if(ccm_learning_database[index]->has_data())
            return true;
    }
    return false;
}

bool Cfm::Nodes::Node::CcmLearningDatabases::has_operation() const
{
    for (std::size_t index=0; index<ccm_learning_database.size(); index++)
    {
        if(ccm_learning_database[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cfm::Nodes::Node::CcmLearningDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccm-learning-databases";

    return path_buffer.str();

}

const EntityPath Cfm::Nodes::Node::CcmLearningDatabases::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CcmLearningDatabases' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Nodes::Node::CcmLearningDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccm-learning-database")
    {
        for(auto const & c : ccm_learning_database)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase>();
        c->parent = this;
        ccm_learning_database.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Nodes::Node::CcmLearningDatabases::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccm_learning_database)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cfm::Nodes::Node::CcmLearningDatabases::set_value(const std::string & value_path, std::string value)
{
}

Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase::CcmLearningDatabase()
    :
    domain{YType::str, "domain"},
    service{YType::str, "service"},
    mac_address{YType::str, "mac-address"},
    domain_xr{YType::str, "domain-xr"},
    ingress_interface{YType::uint32, "ingress-interface"},
    ingress_interface_string{YType::str, "ingress-interface-string"},
    level{YType::enumeration, "level"},
    service_xr{YType::str, "service-xr"},
    source_mac_address{YType::str, "source-mac-address"},
    stale{YType::boolean, "stale"}
{
    yang_name = "ccm-learning-database"; yang_parent_name = "ccm-learning-databases";
}

Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase::~CcmLearningDatabase()
{
}

bool Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase::has_data() const
{
    return domain.is_set
	|| service.is_set
	|| mac_address.is_set
	|| domain_xr.is_set
	|| ingress_interface.is_set
	|| ingress_interface_string.is_set
	|| level.is_set
	|| service_xr.is_set
	|| source_mac_address.is_set
	|| stale.is_set;
}

bool Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation)
	|| is_set(service.operation)
	|| is_set(mac_address.operation)
	|| is_set(domain_xr.operation)
	|| is_set(ingress_interface.operation)
	|| is_set(ingress_interface_string.operation)
	|| is_set(level.operation)
	|| is_set(service_xr.operation)
	|| is_set(source_mac_address.operation)
	|| is_set(stale.operation);
}

std::string Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccm-learning-database" <<"[domain='" <<domain <<"']" <<"[service='" <<service <<"']" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CcmLearningDatabase' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (domain_xr.is_set || is_set(domain_xr.operation)) leaf_name_data.push_back(domain_xr.get_name_leafdata());
    if (ingress_interface.is_set || is_set(ingress_interface.operation)) leaf_name_data.push_back(ingress_interface.get_name_leafdata());
    if (ingress_interface_string.is_set || is_set(ingress_interface_string.operation)) leaf_name_data.push_back(ingress_interface_string.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (service_xr.is_set || is_set(service_xr.operation)) leaf_name_data.push_back(service_xr.get_name_leafdata());
    if (source_mac_address.is_set || is_set(source_mac_address.operation)) leaf_name_data.push_back(source_mac_address.get_name_leafdata());
    if (stale.is_set || is_set(stale.operation)) leaf_name_data.push_back(stale.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "domain-xr")
    {
        domain_xr = value;
    }
    if(value_path == "ingress-interface")
    {
        ingress_interface = value;
    }
    if(value_path == "ingress-interface-string")
    {
        ingress_interface_string = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "service-xr")
    {
        service_xr = value;
    }
    if(value_path == "source-mac-address")
    {
        source_mac_address = value;
    }
    if(value_path == "stale")
    {
        stale = value;
    }
}

Cfm::Global::Global()
    :
    global_configuration_errors(std::make_shared<Cfm::Global::GlobalConfigurationErrors>())
	,incomplete_traceroutes(std::make_shared<Cfm::Global::IncompleteTraceroutes>())
	,local_meps(std::make_shared<Cfm::Global::LocalMeps>())
	,maintenance_points(std::make_shared<Cfm::Global::MaintenancePoints>())
	,mep_configuration_errors(std::make_shared<Cfm::Global::MepConfigurationErrors>())
	,peer_me_pv2s(std::make_shared<Cfm::Global::PeerMePv2S>())
	,traceroute_caches(std::make_shared<Cfm::Global::TracerouteCaches>())
{
    global_configuration_errors->parent = this;

    incomplete_traceroutes->parent = this;

    local_meps->parent = this;

    maintenance_points->parent = this;

    mep_configuration_errors->parent = this;

    peer_me_pv2s->parent = this;

    traceroute_caches->parent = this;

    yang_name = "global"; yang_parent_name = "cfm";
}

Cfm::Global::~Global()
{
}

bool Cfm::Global::has_data() const
{
    return (global_configuration_errors !=  nullptr && global_configuration_errors->has_data())
	|| (incomplete_traceroutes !=  nullptr && incomplete_traceroutes->has_data())
	|| (local_meps !=  nullptr && local_meps->has_data())
	|| (maintenance_points !=  nullptr && maintenance_points->has_data())
	|| (mep_configuration_errors !=  nullptr && mep_configuration_errors->has_data())
	|| (peer_me_pv2s !=  nullptr && peer_me_pv2s->has_data())
	|| (traceroute_caches !=  nullptr && traceroute_caches->has_data());
}

bool Cfm::Global::has_operation() const
{
    return is_set(operation)
	|| (global_configuration_errors !=  nullptr && global_configuration_errors->has_operation())
	|| (incomplete_traceroutes !=  nullptr && incomplete_traceroutes->has_operation())
	|| (local_meps !=  nullptr && local_meps->has_operation())
	|| (maintenance_points !=  nullptr && maintenance_points->has_operation())
	|| (mep_configuration_errors !=  nullptr && mep_configuration_errors->has_operation())
	|| (peer_me_pv2s !=  nullptr && peer_me_pv2s->has_operation())
	|| (traceroute_caches !=  nullptr && traceroute_caches->has_operation());
}

std::string Cfm::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Cfm::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-configuration-errors")
    {
        if(global_configuration_errors == nullptr)
        {
            global_configuration_errors = std::make_shared<Cfm::Global::GlobalConfigurationErrors>();
        }
        return global_configuration_errors;
    }

    if(child_yang_name == "incomplete-traceroutes")
    {
        if(incomplete_traceroutes == nullptr)
        {
            incomplete_traceroutes = std::make_shared<Cfm::Global::IncompleteTraceroutes>();
        }
        return incomplete_traceroutes;
    }

    if(child_yang_name == "local-meps")
    {
        if(local_meps == nullptr)
        {
            local_meps = std::make_shared<Cfm::Global::LocalMeps>();
        }
        return local_meps;
    }

    if(child_yang_name == "maintenance-points")
    {
        if(maintenance_points == nullptr)
        {
            maintenance_points = std::make_shared<Cfm::Global::MaintenancePoints>();
        }
        return maintenance_points;
    }

    if(child_yang_name == "mep-configuration-errors")
    {
        if(mep_configuration_errors == nullptr)
        {
            mep_configuration_errors = std::make_shared<Cfm::Global::MepConfigurationErrors>();
        }
        return mep_configuration_errors;
    }

    if(child_yang_name == "peer-me-pv2s")
    {
        if(peer_me_pv2s == nullptr)
        {
            peer_me_pv2s = std::make_shared<Cfm::Global::PeerMePv2S>();
        }
        return peer_me_pv2s;
    }

    if(child_yang_name == "traceroute-caches")
    {
        if(traceroute_caches == nullptr)
        {
            traceroute_caches = std::make_shared<Cfm::Global::TracerouteCaches>();
        }
        return traceroute_caches;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global_configuration_errors != nullptr)
    {
        children["global-configuration-errors"] = global_configuration_errors;
    }

    if(incomplete_traceroutes != nullptr)
    {
        children["incomplete-traceroutes"] = incomplete_traceroutes;
    }

    if(local_meps != nullptr)
    {
        children["local-meps"] = local_meps;
    }

    if(maintenance_points != nullptr)
    {
        children["maintenance-points"] = maintenance_points;
    }

    if(mep_configuration_errors != nullptr)
    {
        children["mep-configuration-errors"] = mep_configuration_errors;
    }

    if(peer_me_pv2s != nullptr)
    {
        children["peer-me-pv2s"] = peer_me_pv2s;
    }

    if(traceroute_caches != nullptr)
    {
        children["traceroute-caches"] = traceroute_caches;
    }

    return children;
}

void Cfm::Global::set_value(const std::string & value_path, std::string value)
{
}

Cfm::Global::IncompleteTraceroutes::IncompleteTraceroutes()
{
    yang_name = "incomplete-traceroutes"; yang_parent_name = "global";
}

Cfm::Global::IncompleteTraceroutes::~IncompleteTraceroutes()
{
}

bool Cfm::Global::IncompleteTraceroutes::has_data() const
{
    for (std::size_t index=0; index<incomplete_traceroute.size(); index++)
    {
        if(incomplete_traceroute[index]->has_data())
            return true;
    }
    return false;
}

bool Cfm::Global::IncompleteTraceroutes::has_operation() const
{
    for (std::size_t index=0; index<incomplete_traceroute.size(); index++)
    {
        if(incomplete_traceroute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cfm::Global::IncompleteTraceroutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incomplete-traceroutes";

    return path_buffer.str();

}

const EntityPath Cfm::Global::IncompleteTraceroutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::IncompleteTraceroutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incomplete-traceroute")
    {
        for(auto const & c : incomplete_traceroute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute>();
        c->parent = this;
        incomplete_traceroute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::IncompleteTraceroutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : incomplete_traceroute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cfm::Global::IncompleteTraceroutes::set_value(const std::string & value_path, std::string value)
{
}

Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::IncompleteTraceroute()
    :
    domain{YType::str, "domain"},
    service{YType::str, "service"},
    mep_id{YType::uint32, "mep-id"},
    interface{YType::str, "interface"},
    transaction_id{YType::int32, "transaction-id"},
    time_left{YType::uint64, "time-left"}
    	,
    traceroute_information(std::make_shared<Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation>())
{
    traceroute_information->parent = this;

    yang_name = "incomplete-traceroute"; yang_parent_name = "incomplete-traceroutes";
}

Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::~IncompleteTraceroute()
{
}

bool Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::has_data() const
{
    return domain.is_set
	|| service.is_set
	|| mep_id.is_set
	|| interface.is_set
	|| transaction_id.is_set
	|| time_left.is_set
	|| (traceroute_information !=  nullptr && traceroute_information->has_data());
}

bool Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation)
	|| is_set(service.operation)
	|| is_set(mep_id.operation)
	|| is_set(interface.operation)
	|| is_set(transaction_id.operation)
	|| is_set(time_left.operation)
	|| (traceroute_information !=  nullptr && traceroute_information->has_operation());
}

std::string Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incomplete-traceroute" <<"[domain='" <<domain <<"']" <<"[service='" <<service <<"']" <<"[mep-id='" <<mep_id <<"']" <<"[interface='" <<interface <<"']" <<"[transaction-id='" <<transaction_id <<"']";

    return path_buffer.str();

}

const EntityPath Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/global/incomplete-traceroutes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.operation)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.operation)) leaf_name_data.push_back(transaction_id.get_name_leafdata());
    if (time_left.is_set || is_set(time_left.operation)) leaf_name_data.push_back(time_left.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traceroute-information")
    {
        if(traceroute_information == nullptr)
        {
            traceroute_information = std::make_shared<Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation>();
        }
        return traceroute_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(traceroute_information != nullptr)
    {
        children["traceroute-information"] = traceroute_information;
    }

    return children;
}

void Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
    }
    if(value_path == "time-left")
    {
        time_left = value;
    }
}

Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::TracerouteInformation()
    :
    directed_mac_address{YType::str, "directed-mac-address"},
    domain{YType::str, "domain"},
    level{YType::enumeration, "level"},
    service{YType::str, "service"},
    source_interface{YType::str, "source-interface"},
    source_mac_address{YType::str, "source-mac-address"},
    source_mep_id{YType::uint16, "source-mep-id"},
    target_mac_address{YType::str, "target-mac-address"},
    target_mep_id{YType::uint16, "target-mep-id"},
    timestamp{YType::uint64, "timestamp"},
    transaction_id{YType::uint32, "transaction-id"},
    ttl{YType::uint8, "ttl"}
    	,
    options(std::make_shared<Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options>())
{
    options->parent = this;

    yang_name = "traceroute-information"; yang_parent_name = "incomplete-traceroute";
}

Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::~TracerouteInformation()
{
}

bool Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::has_data() const
{
    return directed_mac_address.is_set
	|| domain.is_set
	|| level.is_set
	|| service.is_set
	|| source_interface.is_set
	|| source_mac_address.is_set
	|| source_mep_id.is_set
	|| target_mac_address.is_set
	|| target_mep_id.is_set
	|| timestamp.is_set
	|| transaction_id.is_set
	|| ttl.is_set
	|| (options !=  nullptr && options->has_data());
}

bool Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(directed_mac_address.operation)
	|| is_set(domain.operation)
	|| is_set(level.operation)
	|| is_set(service.operation)
	|| is_set(source_interface.operation)
	|| is_set(source_mac_address.operation)
	|| is_set(source_mep_id.operation)
	|| is_set(target_mac_address.operation)
	|| is_set(target_mep_id.operation)
	|| is_set(timestamp.operation)
	|| is_set(transaction_id.operation)
	|| is_set(ttl.operation)
	|| (options !=  nullptr && options->has_operation());
}

std::string Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute-information";

    return path_buffer.str();

}

const EntityPath Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TracerouteInformation' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (directed_mac_address.is_set || is_set(directed_mac_address.operation)) leaf_name_data.push_back(directed_mac_address.get_name_leafdata());
    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (source_mac_address.is_set || is_set(source_mac_address.operation)) leaf_name_data.push_back(source_mac_address.get_name_leafdata());
    if (source_mep_id.is_set || is_set(source_mep_id.operation)) leaf_name_data.push_back(source_mep_id.get_name_leafdata());
    if (target_mac_address.is_set || is_set(target_mac_address.operation)) leaf_name_data.push_back(target_mac_address.get_name_leafdata());
    if (target_mep_id.is_set || is_set(target_mep_id.operation)) leaf_name_data.push_back(target_mep_id.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.operation)) leaf_name_data.push_back(transaction_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "options")
    {
        if(options == nullptr)
        {
            options = std::make_shared<Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options>();
        }
        return options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(options != nullptr)
    {
        children["options"] = options;
    }

    return children;
}

void Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "directed-mac-address")
    {
        directed_mac_address = value;
    }
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
    if(value_path == "source-mac-address")
    {
        source_mac_address = value;
    }
    if(value_path == "source-mep-id")
    {
        source_mep_id = value;
    }
    if(value_path == "target-mac-address")
    {
        target_mac_address = value;
    }
    if(value_path == "target-mep-id")
    {
        target_mep_id = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::Options()
    :
    mode{YType::enumeration, "mode"}
    	,
    basic_options(std::make_shared<Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions>())
	,exploratory_options(std::make_shared<Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions>())
{
    basic_options->parent = this;

    exploratory_options->parent = this;

    yang_name = "options"; yang_parent_name = "traceroute-information";
}

Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::~Options()
{
}

bool Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::has_data() const
{
    return mode.is_set
	|| (basic_options !=  nullptr && basic_options->has_data())
	|| (exploratory_options !=  nullptr && exploratory_options->has_data());
}

bool Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| (basic_options !=  nullptr && basic_options->has_operation())
	|| (exploratory_options !=  nullptr && exploratory_options->has_operation());
}

std::string Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "options";

    return path_buffer.str();

}

const EntityPath Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Options' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-options")
    {
        if(basic_options == nullptr)
        {
            basic_options = std::make_shared<Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions>();
        }
        return basic_options;
    }

    if(child_yang_name == "exploratory-options")
    {
        if(exploratory_options == nullptr)
        {
            exploratory_options = std::make_shared<Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions>();
        }
        return exploratory_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_options != nullptr)
    {
        children["basic-options"] = basic_options;
    }

    if(exploratory_options != nullptr)
    {
        children["exploratory-options"] = exploratory_options;
    }

    return children;
}

void Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
}

Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions::BasicOptions()
    :
    fdb_only{YType::boolean, "fdb-only"},
    is_auto{YType::boolean, "is-auto"}
{
    yang_name = "basic-options"; yang_parent_name = "options";
}

Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions::~BasicOptions()
{
}

bool Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions::has_data() const
{
    return fdb_only.is_set
	|| is_auto.is_set;
}

bool Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(fdb_only.operation)
	|| is_set(is_auto.operation);
}

std::string Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-options";

    return path_buffer.str();

}

const EntityPath Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicOptions' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_only.is_set || is_set(fdb_only.operation)) leaf_name_data.push_back(fdb_only.get_name_leafdata());
    if (is_auto.is_set || is_set(is_auto.operation)) leaf_name_data.push_back(is_auto.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fdb-only")
    {
        fdb_only = value;
    }
    if(value_path == "is-auto")
    {
        is_auto = value;
    }
}

Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions::ExploratoryOptions()
    :
    delay_constant_factor{YType::uint32, "delay-constant-factor"},
    delay_model{YType::enumeration, "delay-model"},
    reply_filter{YType::enumeration, "reply-filter"}
{
    yang_name = "exploratory-options"; yang_parent_name = "options";
}

Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions::~ExploratoryOptions()
{
}

bool Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions::has_data() const
{
    return delay_constant_factor.is_set
	|| delay_model.is_set
	|| reply_filter.is_set;
}

bool Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(delay_constant_factor.operation)
	|| is_set(delay_model.operation)
	|| is_set(reply_filter.operation);
}

std::string Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exploratory-options";

    return path_buffer.str();

}

const EntityPath Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExploratoryOptions' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay_constant_factor.is_set || is_set(delay_constant_factor.operation)) leaf_name_data.push_back(delay_constant_factor.get_name_leafdata());
    if (delay_model.is_set || is_set(delay_model.operation)) leaf_name_data.push_back(delay_model.get_name_leafdata());
    if (reply_filter.is_set || is_set(reply_filter.operation)) leaf_name_data.push_back(reply_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay-constant-factor")
    {
        delay_constant_factor = value;
    }
    if(value_path == "delay-model")
    {
        delay_model = value;
    }
    if(value_path == "reply-filter")
    {
        reply_filter = value;
    }
}

Cfm::Global::MaintenancePoints::MaintenancePoints()
{
    yang_name = "maintenance-points"; yang_parent_name = "global";
}

Cfm::Global::MaintenancePoints::~MaintenancePoints()
{
}

bool Cfm::Global::MaintenancePoints::has_data() const
{
    for (std::size_t index=0; index<maintenance_point.size(); index++)
    {
        if(maintenance_point[index]->has_data())
            return true;
    }
    return false;
}

bool Cfm::Global::MaintenancePoints::has_operation() const
{
    for (std::size_t index=0; index<maintenance_point.size(); index++)
    {
        if(maintenance_point[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cfm::Global::MaintenancePoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maintenance-points";

    return path_buffer.str();

}

const EntityPath Cfm::Global::MaintenancePoints::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::MaintenancePoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maintenance-point")
    {
        for(auto const & c : maintenance_point)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Global::MaintenancePoints::MaintenancePoint>();
        c->parent = this;
        maintenance_point.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::MaintenancePoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : maintenance_point)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cfm::Global::MaintenancePoints::set_value(const std::string & value_path, std::string value)
{
}

Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint()
    :
    domain{YType::str, "domain"},
    service{YType::str, "service"},
    interface{YType::str, "interface"},
    mac_address{YType::str, "mac-address"},
    mep_has_error{YType::boolean, "mep-has-error"}
    	,
    maintenance_point(std::make_shared<Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_>())
{
    maintenance_point->parent = this;

    yang_name = "maintenance-point"; yang_parent_name = "maintenance-points";
}

Cfm::Global::MaintenancePoints::MaintenancePoint::~MaintenancePoint()
{
}

bool Cfm::Global::MaintenancePoints::MaintenancePoint::has_data() const
{
    return domain.is_set
	|| service.is_set
	|| interface.is_set
	|| mac_address.is_set
	|| mep_has_error.is_set
	|| (maintenance_point !=  nullptr && maintenance_point->has_data());
}

bool Cfm::Global::MaintenancePoints::MaintenancePoint::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation)
	|| is_set(service.operation)
	|| is_set(interface.operation)
	|| is_set(mac_address.operation)
	|| is_set(mep_has_error.operation)
	|| (maintenance_point !=  nullptr && maintenance_point->has_operation());
}

std::string Cfm::Global::MaintenancePoints::MaintenancePoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maintenance-point" <<"[domain='" <<domain <<"']" <<"[service='" <<service <<"']" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Cfm::Global::MaintenancePoints::MaintenancePoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/global/maintenance-points/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mep_has_error.is_set || is_set(mep_has_error.operation)) leaf_name_data.push_back(mep_has_error.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::MaintenancePoints::MaintenancePoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maintenance-point")
    {
        if(maintenance_point == nullptr)
        {
            maintenance_point = std::make_shared<Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_>();
        }
        return maintenance_point;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::MaintenancePoints::MaintenancePoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maintenance_point != nullptr)
    {
        children["maintenance-point"] = maintenance_point;
    }

    return children;
}

void Cfm::Global::MaintenancePoints::MaintenancePoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "mep-has-error")
    {
        mep_has_error = value;
    }
}

Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_::MaintenancePoint_()
    :
    domain_name{YType::str, "domain-name"},
    interface{YType::str, "interface"},
    level{YType::enumeration, "level"},
    maintenance_point_type{YType::enumeration, "maintenance-point-type"},
    mep_id{YType::uint16, "mep-id"},
    service_name{YType::str, "service-name"}
{
    yang_name = "maintenance-point"; yang_parent_name = "maintenance-point";
}

Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_::~MaintenancePoint_()
{
}

bool Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_::has_data() const
{
    return domain_name.is_set
	|| interface.is_set
	|| level.is_set
	|| maintenance_point_type.is_set
	|| mep_id.is_set
	|| service_name.is_set;
}

bool Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(interface.operation)
	|| is_set(level.operation)
	|| is_set(maintenance_point_type.operation)
	|| is_set(mep_id.operation)
	|| is_set(service_name.operation);
}

std::string Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maintenance-point";

    return path_buffer.str();

}

const EntityPath Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaintenancePoint_' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (maintenance_point_type.is_set || is_set(maintenance_point_type.operation)) leaf_name_data.push_back(maintenance_point_type.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.operation)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (service_name.is_set || is_set(service_name.operation)) leaf_name_data.push_back(service_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "maintenance-point-type")
    {
        maintenance_point_type = value;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
    }
    if(value_path == "service-name")
    {
        service_name = value;
    }
}

Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationErrors()
{
    yang_name = "global-configuration-errors"; yang_parent_name = "global";
}

Cfm::Global::GlobalConfigurationErrors::~GlobalConfigurationErrors()
{
}

bool Cfm::Global::GlobalConfigurationErrors::has_data() const
{
    for (std::size_t index=0; index<global_configuration_error.size(); index++)
    {
        if(global_configuration_error[index]->has_data())
            return true;
    }
    return false;
}

bool Cfm::Global::GlobalConfigurationErrors::has_operation() const
{
    for (std::size_t index=0; index<global_configuration_error.size(); index++)
    {
        if(global_configuration_error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cfm::Global::GlobalConfigurationErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-configuration-errors";

    return path_buffer.str();

}

const EntityPath Cfm::Global::GlobalConfigurationErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::GlobalConfigurationErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-configuration-error")
    {
        for(auto const & c : global_configuration_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError>();
        c->parent = this;
        global_configuration_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::GlobalConfigurationErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : global_configuration_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cfm::Global::GlobalConfigurationErrors::set_value(const std::string & value_path, std::string value)
{
}

Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::GlobalConfigurationError()
    :
    domain{YType::str, "domain"},
    service{YType::str, "service"},
    bridge_domain_is_configured{YType::boolean, "bridge-domain-is-configured"},
    domain_name{YType::str, "domain-name"},
    l2_fib_download_error{YType::boolean, "l2-fib-download-error"},
    level{YType::enumeration, "level"},
    service_name{YType::str, "service-name"}
    	,
    bridge_domain_id(std::make_shared<Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId>())
{
    bridge_domain_id->parent = this;

    yang_name = "global-configuration-error"; yang_parent_name = "global-configuration-errors";
}

Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::~GlobalConfigurationError()
{
}

bool Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::has_data() const
{
    return domain.is_set
	|| service.is_set
	|| bridge_domain_is_configured.is_set
	|| domain_name.is_set
	|| l2_fib_download_error.is_set
	|| level.is_set
	|| service_name.is_set
	|| (bridge_domain_id !=  nullptr && bridge_domain_id->has_data());
}

bool Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation)
	|| is_set(service.operation)
	|| is_set(bridge_domain_is_configured.operation)
	|| is_set(domain_name.operation)
	|| is_set(l2_fib_download_error.operation)
	|| is_set(level.operation)
	|| is_set(service_name.operation)
	|| (bridge_domain_id !=  nullptr && bridge_domain_id->has_operation());
}

std::string Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-configuration-error" <<"[domain='" <<domain <<"']" <<"[service='" <<service <<"']";

    return path_buffer.str();

}

const EntityPath Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/global/global-configuration-errors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (bridge_domain_is_configured.is_set || is_set(bridge_domain_is_configured.operation)) leaf_name_data.push_back(bridge_domain_is_configured.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (l2_fib_download_error.is_set || is_set(l2_fib_download_error.operation)) leaf_name_data.push_back(l2_fib_download_error.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (service_name.is_set || is_set(service_name.operation)) leaf_name_data.push_back(service_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain-id")
    {
        if(bridge_domain_id == nullptr)
        {
            bridge_domain_id = std::make_shared<Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId>();
        }
        return bridge_domain_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge_domain_id != nullptr)
    {
        children["bridge-domain-id"] = bridge_domain_id;
    }

    return children;
}

void Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "bridge-domain-is-configured")
    {
        bridge_domain_is_configured = value;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "l2-fib-download-error")
    {
        l2_fib_download_error = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "service-name")
    {
        service_name = value;
    }
}

Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId::BridgeDomainId()
    :
    bridge_domain_id_format{YType::enumeration, "bridge-domain-id-format"},
    ce_id{YType::uint16, "ce-id"},
    group{YType::str, "group"},
    name{YType::str, "name"},
    remote_ce_id{YType::uint16, "remote-ce-id"}
{
    yang_name = "bridge-domain-id"; yang_parent_name = "global-configuration-error";
}

Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId::~BridgeDomainId()
{
}

bool Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId::has_data() const
{
    return bridge_domain_id_format.is_set
	|| ce_id.is_set
	|| group.is_set
	|| name.is_set
	|| remote_ce_id.is_set;
}

bool Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId::has_operation() const
{
    return is_set(operation)
	|| is_set(bridge_domain_id_format.operation)
	|| is_set(ce_id.operation)
	|| is_set(group.operation)
	|| is_set(name.operation)
	|| is_set(remote_ce_id.operation);
}

std::string Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeDomainId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_id_format.is_set || is_set(bridge_domain_id_format.operation)) leaf_name_data.push_back(bridge_domain_id_format.get_name_leafdata());
    if (ce_id.is_set || is_set(ce_id.operation)) leaf_name_data.push_back(ce_id.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (remote_ce_id.is_set || is_set(remote_ce_id.operation)) leaf_name_data.push_back(remote_ce_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-domain-id-format")
    {
        bridge_domain_id_format = value;
    }
    if(value_path == "ce-id")
    {
        ce_id = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "remote-ce-id")
    {
        remote_ce_id = value;
    }
}

Cfm::Global::MepConfigurationErrors::MepConfigurationErrors()
{
    yang_name = "mep-configuration-errors"; yang_parent_name = "global";
}

Cfm::Global::MepConfigurationErrors::~MepConfigurationErrors()
{
}

bool Cfm::Global::MepConfigurationErrors::has_data() const
{
    for (std::size_t index=0; index<mep_configuration_error.size(); index++)
    {
        if(mep_configuration_error[index]->has_data())
            return true;
    }
    return false;
}

bool Cfm::Global::MepConfigurationErrors::has_operation() const
{
    for (std::size_t index=0; index<mep_configuration_error.size(); index++)
    {
        if(mep_configuration_error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cfm::Global::MepConfigurationErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep-configuration-errors";

    return path_buffer.str();

}

const EntityPath Cfm::Global::MepConfigurationErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::MepConfigurationErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mep-configuration-error")
    {
        for(auto const & c : mep_configuration_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Global::MepConfigurationErrors::MepConfigurationError>();
        c->parent = this;
        mep_configuration_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::MepConfigurationErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mep_configuration_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cfm::Global::MepConfigurationErrors::set_value(const std::string & value_path, std::string value)
{
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::MepConfigurationError()
    :
    domain{YType::str, "domain"},
    service{YType::str, "service"},
    interface{YType::str, "interface"},
    ais_configured{YType::boolean, "ais-configured"},
    bridge_domain_mismatch{YType::boolean, "bridge-domain-mismatch"},
    bridge_domain_not_in_bd_infra{YType::boolean, "bridge-domain-not-in-bd-infra"},
    bundle_level0{YType::boolean, "bundle-level0"},
    ccm_interval{YType::enumeration, "ccm-interval"},
    ccm_interval_not_supported{YType::boolean, "ccm-interval-not-supported"},
    fatal_offload_error{YType::boolean, "fatal-offload-error"},
    level_conflict{YType::boolean, "level-conflict"},
    maid_format_not_supported{YType::boolean, "maid-format-not-supported"},
    no_domain{YType::boolean, "no-domain"},
    no_interface_type{YType::boolean, "no-interface-type"},
    no_mlacp{YType::boolean, "no-mlacp"},
    no_service{YType::boolean, "no-service"},
    no_valid_mac_address{YType::boolean, "no-valid-mac-address"},
    not_in_im{YType::boolean, "not-in-im"},
    offload_mep_direction_not_supported{YType::boolean, "offload-mep-direction-not-supported"},
    offload_multiple_local_mep{YType::boolean, "offload-multiple-local-mep"},
    offload_multiple_peer_meps{YType::boolean, "offload-multiple-peer-meps"},
    offload_no_cross_check{YType::boolean, "offload-no-cross-check"},
    offload_out_of_resources{YType::boolean, "offload-out-of-resources"},
    satellite_error_string{YType::str, "satellite-error-string"},
    satellite_id{YType::uint16, "satellite-id"},
    satellite_limitation{YType::boolean, "satellite-limitation"},
    sla_delay_measurement_operations_disabled{YType::boolean, "sla-delay-measurement-operations-disabled"},
    sla_loopback_operations_disabled{YType::boolean, "sla-loopback-operations-disabled"},
    sla_synthetic_loss_operations_disabled{YType::boolean, "sla-synthetic-loss-operations-disabled"}
    	,
    interface_bridge_domain(std::make_shared<Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain>())
	,mep(std::make_shared<Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep>())
	,satellite_capabilities(std::make_shared<Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities>())
	,service_bridge_domain(std::make_shared<Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain>())
{
    interface_bridge_domain->parent = this;

    mep->parent = this;

    satellite_capabilities->parent = this;

    service_bridge_domain->parent = this;

    yang_name = "mep-configuration-error"; yang_parent_name = "mep-configuration-errors";
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::~MepConfigurationError()
{
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::has_data() const
{
    return domain.is_set
	|| service.is_set
	|| interface.is_set
	|| ais_configured.is_set
	|| bridge_domain_mismatch.is_set
	|| bridge_domain_not_in_bd_infra.is_set
	|| bundle_level0.is_set
	|| ccm_interval.is_set
	|| ccm_interval_not_supported.is_set
	|| fatal_offload_error.is_set
	|| level_conflict.is_set
	|| maid_format_not_supported.is_set
	|| no_domain.is_set
	|| no_interface_type.is_set
	|| no_mlacp.is_set
	|| no_service.is_set
	|| no_valid_mac_address.is_set
	|| not_in_im.is_set
	|| offload_mep_direction_not_supported.is_set
	|| offload_multiple_local_mep.is_set
	|| offload_multiple_peer_meps.is_set
	|| offload_no_cross_check.is_set
	|| offload_out_of_resources.is_set
	|| satellite_error_string.is_set
	|| satellite_id.is_set
	|| satellite_limitation.is_set
	|| sla_delay_measurement_operations_disabled.is_set
	|| sla_loopback_operations_disabled.is_set
	|| sla_synthetic_loss_operations_disabled.is_set
	|| (interface_bridge_domain !=  nullptr && interface_bridge_domain->has_data())
	|| (mep !=  nullptr && mep->has_data())
	|| (satellite_capabilities !=  nullptr && satellite_capabilities->has_data())
	|| (service_bridge_domain !=  nullptr && service_bridge_domain->has_data());
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation)
	|| is_set(service.operation)
	|| is_set(interface.operation)
	|| is_set(ais_configured.operation)
	|| is_set(bridge_domain_mismatch.operation)
	|| is_set(bridge_domain_not_in_bd_infra.operation)
	|| is_set(bundle_level0.operation)
	|| is_set(ccm_interval.operation)
	|| is_set(ccm_interval_not_supported.operation)
	|| is_set(fatal_offload_error.operation)
	|| is_set(level_conflict.operation)
	|| is_set(maid_format_not_supported.operation)
	|| is_set(no_domain.operation)
	|| is_set(no_interface_type.operation)
	|| is_set(no_mlacp.operation)
	|| is_set(no_service.operation)
	|| is_set(no_valid_mac_address.operation)
	|| is_set(not_in_im.operation)
	|| is_set(offload_mep_direction_not_supported.operation)
	|| is_set(offload_multiple_local_mep.operation)
	|| is_set(offload_multiple_peer_meps.operation)
	|| is_set(offload_no_cross_check.operation)
	|| is_set(offload_out_of_resources.operation)
	|| is_set(satellite_error_string.operation)
	|| is_set(satellite_id.operation)
	|| is_set(satellite_limitation.operation)
	|| is_set(sla_delay_measurement_operations_disabled.operation)
	|| is_set(sla_loopback_operations_disabled.operation)
	|| is_set(sla_synthetic_loss_operations_disabled.operation)
	|| (interface_bridge_domain !=  nullptr && interface_bridge_domain->has_operation())
	|| (mep !=  nullptr && mep->has_operation())
	|| (satellite_capabilities !=  nullptr && satellite_capabilities->has_operation())
	|| (service_bridge_domain !=  nullptr && service_bridge_domain->has_operation());
}

std::string Cfm::Global::MepConfigurationErrors::MepConfigurationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep-configuration-error" <<"[domain='" <<domain <<"']" <<"[service='" <<service <<"']" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Cfm::Global::MepConfigurationErrors::MepConfigurationError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/global/mep-configuration-errors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (ais_configured.is_set || is_set(ais_configured.operation)) leaf_name_data.push_back(ais_configured.get_name_leafdata());
    if (bridge_domain_mismatch.is_set || is_set(bridge_domain_mismatch.operation)) leaf_name_data.push_back(bridge_domain_mismatch.get_name_leafdata());
    if (bridge_domain_not_in_bd_infra.is_set || is_set(bridge_domain_not_in_bd_infra.operation)) leaf_name_data.push_back(bridge_domain_not_in_bd_infra.get_name_leafdata());
    if (bundle_level0.is_set || is_set(bundle_level0.operation)) leaf_name_data.push_back(bundle_level0.get_name_leafdata());
    if (ccm_interval.is_set || is_set(ccm_interval.operation)) leaf_name_data.push_back(ccm_interval.get_name_leafdata());
    if (ccm_interval_not_supported.is_set || is_set(ccm_interval_not_supported.operation)) leaf_name_data.push_back(ccm_interval_not_supported.get_name_leafdata());
    if (fatal_offload_error.is_set || is_set(fatal_offload_error.operation)) leaf_name_data.push_back(fatal_offload_error.get_name_leafdata());
    if (level_conflict.is_set || is_set(level_conflict.operation)) leaf_name_data.push_back(level_conflict.get_name_leafdata());
    if (maid_format_not_supported.is_set || is_set(maid_format_not_supported.operation)) leaf_name_data.push_back(maid_format_not_supported.get_name_leafdata());
    if (no_domain.is_set || is_set(no_domain.operation)) leaf_name_data.push_back(no_domain.get_name_leafdata());
    if (no_interface_type.is_set || is_set(no_interface_type.operation)) leaf_name_data.push_back(no_interface_type.get_name_leafdata());
    if (no_mlacp.is_set || is_set(no_mlacp.operation)) leaf_name_data.push_back(no_mlacp.get_name_leafdata());
    if (no_service.is_set || is_set(no_service.operation)) leaf_name_data.push_back(no_service.get_name_leafdata());
    if (no_valid_mac_address.is_set || is_set(no_valid_mac_address.operation)) leaf_name_data.push_back(no_valid_mac_address.get_name_leafdata());
    if (not_in_im.is_set || is_set(not_in_im.operation)) leaf_name_data.push_back(not_in_im.get_name_leafdata());
    if (offload_mep_direction_not_supported.is_set || is_set(offload_mep_direction_not_supported.operation)) leaf_name_data.push_back(offload_mep_direction_not_supported.get_name_leafdata());
    if (offload_multiple_local_mep.is_set || is_set(offload_multiple_local_mep.operation)) leaf_name_data.push_back(offload_multiple_local_mep.get_name_leafdata());
    if (offload_multiple_peer_meps.is_set || is_set(offload_multiple_peer_meps.operation)) leaf_name_data.push_back(offload_multiple_peer_meps.get_name_leafdata());
    if (offload_no_cross_check.is_set || is_set(offload_no_cross_check.operation)) leaf_name_data.push_back(offload_no_cross_check.get_name_leafdata());
    if (offload_out_of_resources.is_set || is_set(offload_out_of_resources.operation)) leaf_name_data.push_back(offload_out_of_resources.get_name_leafdata());
    if (satellite_error_string.is_set || is_set(satellite_error_string.operation)) leaf_name_data.push_back(satellite_error_string.get_name_leafdata());
    if (satellite_id.is_set || is_set(satellite_id.operation)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (satellite_limitation.is_set || is_set(satellite_limitation.operation)) leaf_name_data.push_back(satellite_limitation.get_name_leafdata());
    if (sla_delay_measurement_operations_disabled.is_set || is_set(sla_delay_measurement_operations_disabled.operation)) leaf_name_data.push_back(sla_delay_measurement_operations_disabled.get_name_leafdata());
    if (sla_loopback_operations_disabled.is_set || is_set(sla_loopback_operations_disabled.operation)) leaf_name_data.push_back(sla_loopback_operations_disabled.get_name_leafdata());
    if (sla_synthetic_loss_operations_disabled.is_set || is_set(sla_synthetic_loss_operations_disabled.operation)) leaf_name_data.push_back(sla_synthetic_loss_operations_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::MepConfigurationErrors::MepConfigurationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-bridge-domain")
    {
        if(interface_bridge_domain == nullptr)
        {
            interface_bridge_domain = std::make_shared<Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain>();
        }
        return interface_bridge_domain;
    }

    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep>();
        }
        return mep;
    }

    if(child_yang_name == "satellite-capabilities")
    {
        if(satellite_capabilities == nullptr)
        {
            satellite_capabilities = std::make_shared<Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities>();
        }
        return satellite_capabilities;
    }

    if(child_yang_name == "service-bridge-domain")
    {
        if(service_bridge_domain == nullptr)
        {
            service_bridge_domain = std::make_shared<Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain>();
        }
        return service_bridge_domain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::MepConfigurationErrors::MepConfigurationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_bridge_domain != nullptr)
    {
        children["interface-bridge-domain"] = interface_bridge_domain;
    }

    if(mep != nullptr)
    {
        children["mep"] = mep;
    }

    if(satellite_capabilities != nullptr)
    {
        children["satellite-capabilities"] = satellite_capabilities;
    }

    if(service_bridge_domain != nullptr)
    {
        children["service-bridge-domain"] = service_bridge_domain;
    }

    return children;
}

void Cfm::Global::MepConfigurationErrors::MepConfigurationError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "ais-configured")
    {
        ais_configured = value;
    }
    if(value_path == "bridge-domain-mismatch")
    {
        bridge_domain_mismatch = value;
    }
    if(value_path == "bridge-domain-not-in-bd-infra")
    {
        bridge_domain_not_in_bd_infra = value;
    }
    if(value_path == "bundle-level0")
    {
        bundle_level0 = value;
    }
    if(value_path == "ccm-interval")
    {
        ccm_interval = value;
    }
    if(value_path == "ccm-interval-not-supported")
    {
        ccm_interval_not_supported = value;
    }
    if(value_path == "fatal-offload-error")
    {
        fatal_offload_error = value;
    }
    if(value_path == "level-conflict")
    {
        level_conflict = value;
    }
    if(value_path == "maid-format-not-supported")
    {
        maid_format_not_supported = value;
    }
    if(value_path == "no-domain")
    {
        no_domain = value;
    }
    if(value_path == "no-interface-type")
    {
        no_interface_type = value;
    }
    if(value_path == "no-mlacp")
    {
        no_mlacp = value;
    }
    if(value_path == "no-service")
    {
        no_service = value;
    }
    if(value_path == "no-valid-mac-address")
    {
        no_valid_mac_address = value;
    }
    if(value_path == "not-in-im")
    {
        not_in_im = value;
    }
    if(value_path == "offload-mep-direction-not-supported")
    {
        offload_mep_direction_not_supported = value;
    }
    if(value_path == "offload-multiple-local-mep")
    {
        offload_multiple_local_mep = value;
    }
    if(value_path == "offload-multiple-peer-meps")
    {
        offload_multiple_peer_meps = value;
    }
    if(value_path == "offload-no-cross-check")
    {
        offload_no_cross_check = value;
    }
    if(value_path == "offload-out-of-resources")
    {
        offload_out_of_resources = value;
    }
    if(value_path == "satellite-error-string")
    {
        satellite_error_string = value;
    }
    if(value_path == "satellite-id")
    {
        satellite_id = value;
    }
    if(value_path == "satellite-limitation")
    {
        satellite_limitation = value;
    }
    if(value_path == "sla-delay-measurement-operations-disabled")
    {
        sla_delay_measurement_operations_disabled = value;
    }
    if(value_path == "sla-loopback-operations-disabled")
    {
        sla_loopback_operations_disabled = value;
    }
    if(value_path == "sla-synthetic-loss-operations-disabled")
    {
        sla_synthetic_loss_operations_disabled = value;
    }
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep::Mep()
    :
    domain_name{YType::str, "domain-name"},
    interface{YType::str, "interface"},
    level{YType::enumeration, "level"},
    maintenance_point_type{YType::enumeration, "maintenance-point-type"},
    mep_id{YType::uint16, "mep-id"},
    service_name{YType::str, "service-name"}
{
    yang_name = "mep"; yang_parent_name = "mep-configuration-error";
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep::~Mep()
{
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep::has_data() const
{
    return domain_name.is_set
	|| interface.is_set
	|| level.is_set
	|| maintenance_point_type.is_set
	|| mep_id.is_set
	|| service_name.is_set;
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(interface.operation)
	|| is_set(level.operation)
	|| is_set(maintenance_point_type.operation)
	|| is_set(mep_id.operation)
	|| is_set(service_name.operation);
}

std::string Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";

    return path_buffer.str();

}

const EntityPath Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mep' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (maintenance_point_type.is_set || is_set(maintenance_point_type.operation)) leaf_name_data.push_back(maintenance_point_type.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.operation)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (service_name.is_set || is_set(service_name.operation)) leaf_name_data.push_back(service_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "maintenance-point-type")
    {
        maintenance_point_type = value;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
    }
    if(value_path == "service-name")
    {
        service_name = value;
    }
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain::ServiceBridgeDomain()
    :
    bridge_domain_id_format{YType::enumeration, "bridge-domain-id-format"},
    ce_id{YType::uint16, "ce-id"},
    group{YType::str, "group"},
    name{YType::str, "name"},
    remote_ce_id{YType::uint16, "remote-ce-id"}
{
    yang_name = "service-bridge-domain"; yang_parent_name = "mep-configuration-error";
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain::~ServiceBridgeDomain()
{
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain::has_data() const
{
    return bridge_domain_id_format.is_set
	|| ce_id.is_set
	|| group.is_set
	|| name.is_set
	|| remote_ce_id.is_set;
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain::has_operation() const
{
    return is_set(operation)
	|| is_set(bridge_domain_id_format.operation)
	|| is_set(ce_id.operation)
	|| is_set(group.operation)
	|| is_set(name.operation)
	|| is_set(remote_ce_id.operation);
}

std::string Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-bridge-domain";

    return path_buffer.str();

}

const EntityPath Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceBridgeDomain' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_id_format.is_set || is_set(bridge_domain_id_format.operation)) leaf_name_data.push_back(bridge_domain_id_format.get_name_leafdata());
    if (ce_id.is_set || is_set(ce_id.operation)) leaf_name_data.push_back(ce_id.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (remote_ce_id.is_set || is_set(remote_ce_id.operation)) leaf_name_data.push_back(remote_ce_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-domain-id-format")
    {
        bridge_domain_id_format = value;
    }
    if(value_path == "ce-id")
    {
        ce_id = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "remote-ce-id")
    {
        remote_ce_id = value;
    }
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain::InterfaceBridgeDomain()
    :
    bridge_domain_id_format{YType::enumeration, "bridge-domain-id-format"},
    ce_id{YType::uint16, "ce-id"},
    group{YType::str, "group"},
    name{YType::str, "name"},
    remote_ce_id{YType::uint16, "remote-ce-id"}
{
    yang_name = "interface-bridge-domain"; yang_parent_name = "mep-configuration-error";
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain::~InterfaceBridgeDomain()
{
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain::has_data() const
{
    return bridge_domain_id_format.is_set
	|| ce_id.is_set
	|| group.is_set
	|| name.is_set
	|| remote_ce_id.is_set;
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain::has_operation() const
{
    return is_set(operation)
	|| is_set(bridge_domain_id_format.operation)
	|| is_set(ce_id.operation)
	|| is_set(group.operation)
	|| is_set(name.operation)
	|| is_set(remote_ce_id.operation);
}

std::string Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-bridge-domain";

    return path_buffer.str();

}

const EntityPath Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceBridgeDomain' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_id_format.is_set || is_set(bridge_domain_id_format.operation)) leaf_name_data.push_back(bridge_domain_id_format.get_name_leafdata());
    if (ce_id.is_set || is_set(ce_id.operation)) leaf_name_data.push_back(ce_id.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (remote_ce_id.is_set || is_set(remote_ce_id.operation)) leaf_name_data.push_back(remote_ce_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-domain-id-format")
    {
        bridge_domain_id_format = value;
    }
    if(value_path == "ce-id")
    {
        ce_id = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "remote-ce-id")
    {
        remote_ce_id = value;
    }
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SatelliteCapabilities()
    :
    delay_measurement(std::make_shared<Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement>())
	,loopback(std::make_shared<Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback>())
	,synthetic_loss_measurement(std::make_shared<Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement>())
{
    delay_measurement->parent = this;

    loopback->parent = this;

    synthetic_loss_measurement->parent = this;

    yang_name = "satellite-capabilities"; yang_parent_name = "mep-configuration-error";
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::~SatelliteCapabilities()
{
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::has_data() const
{
    return (delay_measurement !=  nullptr && delay_measurement->has_data())
	|| (loopback !=  nullptr && loopback->has_data())
	|| (synthetic_loss_measurement !=  nullptr && synthetic_loss_measurement->has_data());
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::has_operation() const
{
    return is_set(operation)
	|| (delay_measurement !=  nullptr && delay_measurement->has_operation())
	|| (loopback !=  nullptr && loopback->has_operation())
	|| (synthetic_loss_measurement !=  nullptr && synthetic_loss_measurement->has_operation());
}

std::string Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite-capabilities";

    return path_buffer.str();

}

const EntityPath Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SatelliteCapabilities' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay-measurement")
    {
        if(delay_measurement == nullptr)
        {
            delay_measurement = std::make_shared<Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement>();
        }
        return delay_measurement;
    }

    if(child_yang_name == "loopback")
    {
        if(loopback == nullptr)
        {
            loopback = std::make_shared<Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback>();
        }
        return loopback;
    }

    if(child_yang_name == "synthetic-loss-measurement")
    {
        if(synthetic_loss_measurement == nullptr)
        {
            synthetic_loss_measurement = std::make_shared<Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement>();
        }
        return synthetic_loss_measurement;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay_measurement != nullptr)
    {
        children["delay-measurement"] = delay_measurement;
    }

    if(loopback != nullptr)
    {
        children["loopback"] = loopback;
    }

    if(synthetic_loss_measurement != nullptr)
    {
        children["synthetic-loss-measurement"] = synthetic_loss_measurement;
    }

    return children;
}

void Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::set_value(const std::string & value_path, std::string value)
{
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback::Loopback()
    :
    controller{YType::boolean, "controller"},
    responder{YType::boolean, "responder"}
{
    yang_name = "loopback"; yang_parent_name = "satellite-capabilities";
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback::~Loopback()
{
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback::has_data() const
{
    return controller.is_set
	|| responder.is_set;
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback::has_operation() const
{
    return is_set(operation)
	|| is_set(controller.operation)
	|| is_set(responder.operation);
}

std::string Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopback";

    return path_buffer.str();

}

const EntityPath Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Loopback' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller.is_set || is_set(controller.operation)) leaf_name_data.push_back(controller.get_name_leafdata());
    if (responder.is_set || is_set(responder.operation)) leaf_name_data.push_back(responder.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controller")
    {
        controller = value;
    }
    if(value_path == "responder")
    {
        responder = value;
    }
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement::DelayMeasurement()
    :
    controller{YType::boolean, "controller"},
    responder{YType::boolean, "responder"}
{
    yang_name = "delay-measurement"; yang_parent_name = "satellite-capabilities";
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement::~DelayMeasurement()
{
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement::has_data() const
{
    return controller.is_set
	|| responder.is_set;
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement::has_operation() const
{
    return is_set(operation)
	|| is_set(controller.operation)
	|| is_set(responder.operation);
}

std::string Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-measurement";

    return path_buffer.str();

}

const EntityPath Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DelayMeasurement' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller.is_set || is_set(controller.operation)) leaf_name_data.push_back(controller.get_name_leafdata());
    if (responder.is_set || is_set(responder.operation)) leaf_name_data.push_back(responder.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controller")
    {
        controller = value;
    }
    if(value_path == "responder")
    {
        responder = value;
    }
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement::SyntheticLossMeasurement()
    :
    controller{YType::boolean, "controller"},
    responder{YType::boolean, "responder"}
{
    yang_name = "synthetic-loss-measurement"; yang_parent_name = "satellite-capabilities";
}

Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement::~SyntheticLossMeasurement()
{
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement::has_data() const
{
    return controller.is_set
	|| responder.is_set;
}

bool Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement::has_operation() const
{
    return is_set(operation)
	|| is_set(controller.operation)
	|| is_set(responder.operation);
}

std::string Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synthetic-loss-measurement";

    return path_buffer.str();

}

const EntityPath Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SyntheticLossMeasurement' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller.is_set || is_set(controller.operation)) leaf_name_data.push_back(controller.get_name_leafdata());
    if (responder.is_set || is_set(responder.operation)) leaf_name_data.push_back(responder.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controller")
    {
        controller = value;
    }
    if(value_path == "responder")
    {
        responder = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCaches()
{
    yang_name = "traceroute-caches"; yang_parent_name = "global";
}

Cfm::Global::TracerouteCaches::~TracerouteCaches()
{
}

bool Cfm::Global::TracerouteCaches::has_data() const
{
    for (std::size_t index=0; index<traceroute_cache.size(); index++)
    {
        if(traceroute_cache[index]->has_data())
            return true;
    }
    return false;
}

bool Cfm::Global::TracerouteCaches::has_operation() const
{
    for (std::size_t index=0; index<traceroute_cache.size(); index++)
    {
        if(traceroute_cache[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cfm::Global::TracerouteCaches::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute-caches";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traceroute-cache")
    {
        for(auto const & c : traceroute_cache)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache>();
        c->parent = this;
        traceroute_cache.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : traceroute_cache)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::set_value(const std::string & value_path, std::string value)
{
}

Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteCache()
    :
    domain{YType::str, "domain"},
    service{YType::str, "service"},
    mep_id{YType::uint32, "mep-id"},
    interface{YType::str, "interface"},
    transaction_id{YType::int32, "transaction-id"},
    replies_dropped{YType::uint32, "replies-dropped"}
    	,
    traceroute_information(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation>())
{
    traceroute_information->parent = this;

    yang_name = "traceroute-cache"; yang_parent_name = "traceroute-caches";
}

Cfm::Global::TracerouteCaches::TracerouteCache::~TracerouteCache()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::has_data() const
{
    for (std::size_t index=0; index<exploratory_linktrace_reply.size(); index++)
    {
        if(exploratory_linktrace_reply[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<linktrace_reply.size(); index++)
    {
        if(linktrace_reply[index]->has_data())
            return true;
    }
    return domain.is_set
	|| service.is_set
	|| mep_id.is_set
	|| interface.is_set
	|| transaction_id.is_set
	|| replies_dropped.is_set
	|| (traceroute_information !=  nullptr && traceroute_information->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::has_operation() const
{
    for (std::size_t index=0; index<exploratory_linktrace_reply.size(); index++)
    {
        if(exploratory_linktrace_reply[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<linktrace_reply.size(); index++)
    {
        if(linktrace_reply[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(domain.operation)
	|| is_set(service.operation)
	|| is_set(mep_id.operation)
	|| is_set(interface.operation)
	|| is_set(transaction_id.operation)
	|| is_set(replies_dropped.operation)
	|| (traceroute_information !=  nullptr && traceroute_information->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute-cache" <<"[domain='" <<domain <<"']" <<"[service='" <<service <<"']" <<"[mep-id='" <<mep_id <<"']" <<"[interface='" <<interface <<"']" <<"[transaction-id='" <<transaction_id <<"']";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/global/traceroute-caches/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.operation)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.operation)) leaf_name_data.push_back(transaction_id.get_name_leafdata());
    if (replies_dropped.is_set || is_set(replies_dropped.operation)) leaf_name_data.push_back(replies_dropped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exploratory-linktrace-reply")
    {
        for(auto const & c : exploratory_linktrace_reply)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply>();
        c->parent = this;
        exploratory_linktrace_reply.push_back(c);
        return c;
    }

    if(child_yang_name == "linktrace-reply")
    {
        for(auto const & c : linktrace_reply)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply>();
        c->parent = this;
        linktrace_reply.push_back(c);
        return c;
    }

    if(child_yang_name == "traceroute-information")
    {
        if(traceroute_information == nullptr)
        {
            traceroute_information = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation>();
        }
        return traceroute_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exploratory_linktrace_reply)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : linktrace_reply)
    {
        children[c->get_segment_path()] = c;
    }

    if(traceroute_information != nullptr)
    {
        children["traceroute-information"] = traceroute_information;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
    }
    if(value_path == "replies-dropped")
    {
        replies_dropped = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::TracerouteInformation()
    :
    directed_mac_address{YType::str, "directed-mac-address"},
    domain{YType::str, "domain"},
    level{YType::enumeration, "level"},
    service{YType::str, "service"},
    source_interface{YType::str, "source-interface"},
    source_mac_address{YType::str, "source-mac-address"},
    source_mep_id{YType::uint16, "source-mep-id"},
    target_mac_address{YType::str, "target-mac-address"},
    target_mep_id{YType::uint16, "target-mep-id"},
    timestamp{YType::uint64, "timestamp"},
    transaction_id{YType::uint32, "transaction-id"},
    ttl{YType::uint8, "ttl"}
    	,
    options(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options>())
{
    options->parent = this;

    yang_name = "traceroute-information"; yang_parent_name = "traceroute-cache";
}

Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::~TracerouteInformation()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::has_data() const
{
    return directed_mac_address.is_set
	|| domain.is_set
	|| level.is_set
	|| service.is_set
	|| source_interface.is_set
	|| source_mac_address.is_set
	|| source_mep_id.is_set
	|| target_mac_address.is_set
	|| target_mep_id.is_set
	|| timestamp.is_set
	|| transaction_id.is_set
	|| ttl.is_set
	|| (options !=  nullptr && options->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(directed_mac_address.operation)
	|| is_set(domain.operation)
	|| is_set(level.operation)
	|| is_set(service.operation)
	|| is_set(source_interface.operation)
	|| is_set(source_mac_address.operation)
	|| is_set(source_mep_id.operation)
	|| is_set(target_mac_address.operation)
	|| is_set(target_mep_id.operation)
	|| is_set(timestamp.operation)
	|| is_set(transaction_id.operation)
	|| is_set(ttl.operation)
	|| (options !=  nullptr && options->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute-information";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TracerouteInformation' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (directed_mac_address.is_set || is_set(directed_mac_address.operation)) leaf_name_data.push_back(directed_mac_address.get_name_leafdata());
    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (source_mac_address.is_set || is_set(source_mac_address.operation)) leaf_name_data.push_back(source_mac_address.get_name_leafdata());
    if (source_mep_id.is_set || is_set(source_mep_id.operation)) leaf_name_data.push_back(source_mep_id.get_name_leafdata());
    if (target_mac_address.is_set || is_set(target_mac_address.operation)) leaf_name_data.push_back(target_mac_address.get_name_leafdata());
    if (target_mep_id.is_set || is_set(target_mep_id.operation)) leaf_name_data.push_back(target_mep_id.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.operation)) leaf_name_data.push_back(transaction_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "options")
    {
        if(options == nullptr)
        {
            options = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options>();
        }
        return options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(options != nullptr)
    {
        children["options"] = options;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "directed-mac-address")
    {
        directed_mac_address = value;
    }
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
    if(value_path == "source-mac-address")
    {
        source_mac_address = value;
    }
    if(value_path == "source-mep-id")
    {
        source_mep_id = value;
    }
    if(value_path == "target-mac-address")
    {
        target_mac_address = value;
    }
    if(value_path == "target-mep-id")
    {
        target_mep_id = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::Options()
    :
    mode{YType::enumeration, "mode"}
    	,
    basic_options(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions>())
	,exploratory_options(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions>())
{
    basic_options->parent = this;

    exploratory_options->parent = this;

    yang_name = "options"; yang_parent_name = "traceroute-information";
}

Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::~Options()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::has_data() const
{
    return mode.is_set
	|| (basic_options !=  nullptr && basic_options->has_data())
	|| (exploratory_options !=  nullptr && exploratory_options->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| (basic_options !=  nullptr && basic_options->has_operation())
	|| (exploratory_options !=  nullptr && exploratory_options->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "options";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Options' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-options")
    {
        if(basic_options == nullptr)
        {
            basic_options = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions>();
        }
        return basic_options;
    }

    if(child_yang_name == "exploratory-options")
    {
        if(exploratory_options == nullptr)
        {
            exploratory_options = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions>();
        }
        return exploratory_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_options != nullptr)
    {
        children["basic-options"] = basic_options;
    }

    if(exploratory_options != nullptr)
    {
        children["exploratory-options"] = exploratory_options;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions::BasicOptions()
    :
    fdb_only{YType::boolean, "fdb-only"},
    is_auto{YType::boolean, "is-auto"}
{
    yang_name = "basic-options"; yang_parent_name = "options";
}

Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions::~BasicOptions()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions::has_data() const
{
    return fdb_only.is_set
	|| is_auto.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(fdb_only.operation)
	|| is_set(is_auto.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-options";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicOptions' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_only.is_set || is_set(fdb_only.operation)) leaf_name_data.push_back(fdb_only.get_name_leafdata());
    if (is_auto.is_set || is_set(is_auto.operation)) leaf_name_data.push_back(is_auto.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fdb-only")
    {
        fdb_only = value;
    }
    if(value_path == "is-auto")
    {
        is_auto = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions::ExploratoryOptions()
    :
    delay_constant_factor{YType::uint32, "delay-constant-factor"},
    delay_model{YType::enumeration, "delay-model"},
    reply_filter{YType::enumeration, "reply-filter"}
{
    yang_name = "exploratory-options"; yang_parent_name = "options";
}

Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions::~ExploratoryOptions()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions::has_data() const
{
    return delay_constant_factor.is_set
	|| delay_model.is_set
	|| reply_filter.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(delay_constant_factor.operation)
	|| is_set(delay_model.operation)
	|| is_set(reply_filter.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exploratory-options";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExploratoryOptions' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay_constant_factor.is_set || is_set(delay_constant_factor.operation)) leaf_name_data.push_back(delay_constant_factor.get_name_leafdata());
    if (delay_model.is_set || is_set(delay_model.operation)) leaf_name_data.push_back(delay_model.get_name_leafdata());
    if (reply_filter.is_set || is_set(reply_filter.operation)) leaf_name_data.push_back(reply_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay-constant-factor")
    {
        delay_constant_factor = value;
    }
    if(value_path == "delay-model")
    {
        delay_model = value;
    }
    if(value_path == "reply-filter")
    {
        reply_filter = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LinktraceReply()
    :
    raw_data{YType::str, "raw-data"}
    	,
    egress_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId>())
	,header(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header>())
	,last_hop(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop>())
	,reply_egress(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress>())
	,reply_ingress(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress>())
	,sender_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId>())
{
    egress_id->parent = this;

    header->parent = this;

    last_hop->parent = this;

    reply_egress->parent = this;

    reply_ingress->parent = this;

    sender_id->parent = this;

    yang_name = "linktrace-reply"; yang_parent_name = "traceroute-cache";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::~LinktraceReply()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::has_data() const
{
    for (std::size_t index=0; index<organization_specific_tlv.size(); index++)
    {
        if(organization_specific_tlv[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_tlv.size(); index++)
    {
        if(unknown_tlv[index]->has_data())
            return true;
    }
    return raw_data.is_set
	|| (egress_id !=  nullptr && egress_id->has_data())
	|| (header !=  nullptr && header->has_data())
	|| (last_hop !=  nullptr && last_hop->has_data())
	|| (reply_egress !=  nullptr && reply_egress->has_data())
	|| (reply_ingress !=  nullptr && reply_ingress->has_data())
	|| (sender_id !=  nullptr && sender_id->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::has_operation() const
{
    for (std::size_t index=0; index<organization_specific_tlv.size(); index++)
    {
        if(organization_specific_tlv[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_tlv.size(); index++)
    {
        if(unknown_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(raw_data.operation)
	|| (egress_id !=  nullptr && egress_id->has_operation())
	|| (header !=  nullptr && header->has_operation())
	|| (last_hop !=  nullptr && last_hop->has_operation())
	|| (reply_egress !=  nullptr && reply_egress->has_operation())
	|| (reply_ingress !=  nullptr && reply_ingress->has_operation())
	|| (sender_id !=  nullptr && sender_id->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linktrace-reply";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinktraceReply' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (raw_data.is_set || is_set(raw_data.operation)) leaf_name_data.push_back(raw_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-id")
    {
        if(egress_id == nullptr)
        {
            egress_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId>();
        }
        return egress_id;
    }

    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header>();
        }
        return header;
    }

    if(child_yang_name == "last-hop")
    {
        if(last_hop == nullptr)
        {
            last_hop = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop>();
        }
        return last_hop;
    }

    if(child_yang_name == "organization-specific-tlv")
    {
        for(auto const & c : organization_specific_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv>();
        c->parent = this;
        organization_specific_tlv.push_back(c);
        return c;
    }

    if(child_yang_name == "reply-egress")
    {
        if(reply_egress == nullptr)
        {
            reply_egress = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress>();
        }
        return reply_egress;
    }

    if(child_yang_name == "reply-ingress")
    {
        if(reply_ingress == nullptr)
        {
            reply_ingress = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress>();
        }
        return reply_ingress;
    }

    if(child_yang_name == "sender-id")
    {
        if(sender_id == nullptr)
        {
            sender_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId>();
        }
        return sender_id;
    }

    if(child_yang_name == "unknown-tlv")
    {
        for(auto const & c : unknown_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv>();
        c->parent = this;
        unknown_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(egress_id != nullptr)
    {
        children["egress-id"] = egress_id;
    }

    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(last_hop != nullptr)
    {
        children["last-hop"] = last_hop;
    }

    for (auto const & c : organization_specific_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    if(reply_egress != nullptr)
    {
        children["reply-egress"] = reply_egress;
    }

    if(reply_ingress != nullptr)
    {
        children["reply-ingress"] = reply_ingress;
    }

    if(sender_id != nullptr)
    {
        children["sender-id"] = sender_id;
    }

    for (auto const & c : unknown_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "raw-data")
    {
        raw_data = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header::Header()
    :
    forwarded{YType::boolean, "forwarded"},
    level{YType::enumeration, "level"},
    relay_action{YType::enumeration, "relay-action"},
    terminal_mep{YType::boolean, "terminal-mep"},
    transaction_id{YType::uint32, "transaction-id"},
    ttl{YType::uint8, "ttl"},
    use_fdb_only{YType::boolean, "use-fdb-only"},
    version{YType::uint8, "version"}
{
    yang_name = "header"; yang_parent_name = "linktrace-reply";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header::~Header()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header::has_data() const
{
    return forwarded.is_set
	|| level.is_set
	|| relay_action.is_set
	|| terminal_mep.is_set
	|| transaction_id.is_set
	|| ttl.is_set
	|| use_fdb_only.is_set
	|| version.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarded.operation)
	|| is_set(level.operation)
	|| is_set(relay_action.operation)
	|| is_set(terminal_mep.operation)
	|| is_set(transaction_id.operation)
	|| is_set(ttl.operation)
	|| is_set(use_fdb_only.operation)
	|| is_set(version.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Header' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarded.is_set || is_set(forwarded.operation)) leaf_name_data.push_back(forwarded.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (relay_action.is_set || is_set(relay_action.operation)) leaf_name_data.push_back(relay_action.get_name_leafdata());
    if (terminal_mep.is_set || is_set(terminal_mep.operation)) leaf_name_data.push_back(terminal_mep.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.operation)) leaf_name_data.push_back(transaction_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (use_fdb_only.is_set || is_set(use_fdb_only.operation)) leaf_name_data.push_back(use_fdb_only.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarded")
    {
        forwarded = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "relay-action")
    {
        relay_action = value;
    }
    if(value_path == "terminal-mep")
    {
        terminal_mep = value;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "use-fdb-only")
    {
        use_fdb_only = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::SenderId()
    :
    management_address{YType::str, "management-address"},
    management_address_domain{YType::str, "management-address-domain"}
    	,
    chassis_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId>())
{
    chassis_id->parent = this;

    yang_name = "sender-id"; yang_parent_name = "linktrace-reply";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::~SenderId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::has_data() const
{
    return management_address.is_set
	|| management_address_domain.is_set
	|| (chassis_id !=  nullptr && chassis_id->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::has_operation() const
{
    return is_set(operation)
	|| is_set(management_address.operation)
	|| is_set(management_address_domain.operation)
	|| (chassis_id !=  nullptr && chassis_id->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (management_address.is_set || is_set(management_address.operation)) leaf_name_data.push_back(management_address.get_name_leafdata());
    if (management_address_domain.is_set || is_set(management_address_domain.operation)) leaf_name_data.push_back(management_address_domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chassis-id")
    {
        if(chassis_id == nullptr)
        {
            chassis_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId>();
        }
        return chassis_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(chassis_id != nullptr)
    {
        children["chassis-id"] = chassis_id;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "management-address")
    {
        management_address = value;
    }
    if(value_path == "management-address-domain")
    {
        management_address_domain = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisId()
    :
    chassis_id{YType::str, "chassis-id"},
    chassis_id_type{YType::enumeration, "chassis-id-type"},
    chassis_id_type_value{YType::uint8, "chassis-id-type-value"}
    	,
    chassis_id_value(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue>())
{
    chassis_id_value->parent = this;

    yang_name = "chassis-id"; yang_parent_name = "sender-id";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::~ChassisId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::has_data() const
{
    return chassis_id.is_set
	|| chassis_id_type.is_set
	|| chassis_id_type_value.is_set
	|| (chassis_id_value !=  nullptr && chassis_id_value->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::has_operation() const
{
    return is_set(operation)
	|| is_set(chassis_id.operation)
	|| is_set(chassis_id_type.operation)
	|| is_set(chassis_id_type_value.operation)
	|| (chassis_id_value !=  nullptr && chassis_id_value->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChassisId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id.is_set || is_set(chassis_id.operation)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (chassis_id_type.is_set || is_set(chassis_id_type.operation)) leaf_name_data.push_back(chassis_id_type.get_name_leafdata());
    if (chassis_id_type_value.is_set || is_set(chassis_id_type_value.operation)) leaf_name_data.push_back(chassis_id_type_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chassis-id-value")
    {
        if(chassis_id_value == nullptr)
        {
            chassis_id_value = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue>();
        }
        return chassis_id_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(chassis_id_value != nullptr)
    {
        children["chassis-id-value"] = chassis_id_value;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chassis-id")
    {
        chassis_id = value;
    }
    if(value_path == "chassis-id-type")
    {
        chassis_id_type = value;
    }
    if(value_path == "chassis-id-type-value")
    {
        chassis_id_type_value = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue::ChassisIdValue()
    :
    chassis_id_format{YType::enumeration, "chassis-id-format"},
    chassis_id_mac{YType::str, "chassis-id-mac"},
    chassis_id_raw{YType::str, "chassis-id-raw"},
    chassis_id_string{YType::str, "chassis-id-string"}
{
    yang_name = "chassis-id-value"; yang_parent_name = "chassis-id";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue::~ChassisIdValue()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue::has_data() const
{
    return chassis_id_format.is_set
	|| chassis_id_mac.is_set
	|| chassis_id_raw.is_set
	|| chassis_id_string.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue::has_operation() const
{
    return is_set(operation)
	|| is_set(chassis_id_format.operation)
	|| is_set(chassis_id_mac.operation)
	|| is_set(chassis_id_raw.operation)
	|| is_set(chassis_id_string.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis-id-value";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChassisIdValue' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id_format.is_set || is_set(chassis_id_format.operation)) leaf_name_data.push_back(chassis_id_format.get_name_leafdata());
    if (chassis_id_mac.is_set || is_set(chassis_id_mac.operation)) leaf_name_data.push_back(chassis_id_mac.get_name_leafdata());
    if (chassis_id_raw.is_set || is_set(chassis_id_raw.operation)) leaf_name_data.push_back(chassis_id_raw.get_name_leafdata());
    if (chassis_id_string.is_set || is_set(chassis_id_string.operation)) leaf_name_data.push_back(chassis_id_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chassis-id-format")
    {
        chassis_id_format = value;
    }
    if(value_path == "chassis-id-mac")
    {
        chassis_id_mac = value;
    }
    if(value_path == "chassis-id-raw")
    {
        chassis_id_raw = value;
    }
    if(value_path == "chassis-id-string")
    {
        chassis_id_string = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::EgressId()
    :
    last_egress_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId>())
	,next_egress_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId>())
{
    last_egress_id->parent = this;

    next_egress_id->parent = this;

    yang_name = "egress-id"; yang_parent_name = "linktrace-reply";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::~EgressId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::has_data() const
{
    return (last_egress_id !=  nullptr && last_egress_id->has_data())
	|| (next_egress_id !=  nullptr && next_egress_id->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::has_operation() const
{
    return is_set(operation)
	|| (last_egress_id !=  nullptr && last_egress_id->has_operation())
	|| (next_egress_id !=  nullptr && next_egress_id->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EgressId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-egress-id")
    {
        if(last_egress_id == nullptr)
        {
            last_egress_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId>();
        }
        return last_egress_id;
    }

    if(child_yang_name == "next-egress-id")
    {
        if(next_egress_id == nullptr)
        {
            next_egress_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId>();
        }
        return next_egress_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_egress_id != nullptr)
    {
        children["last-egress-id"] = last_egress_id;
    }

    if(next_egress_id != nullptr)
    {
        children["next-egress-id"] = next_egress_id;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::set_value(const std::string & value_path, std::string value)
{
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId::LastEgressId()
    :
    mac_address{YType::str, "mac-address"},
    unique_id{YType::uint16, "unique-id"}
{
    yang_name = "last-egress-id"; yang_parent_name = "egress-id";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId::~LastEgressId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId::has_data() const
{
    return mac_address.is_set
	|| unique_id.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(unique_id.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-egress-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastEgressId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId::NextEgressId()
    :
    mac_address{YType::str, "mac-address"},
    unique_id{YType::uint16, "unique-id"}
{
    yang_name = "next-egress-id"; yang_parent_name = "egress-id";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId::~NextEgressId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId::has_data() const
{
    return mac_address.is_set
	|| unique_id.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(unique_id.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-egress-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextEgressId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::ReplyIngress()
    :
    action{YType::enumeration, "action"},
    mac_address{YType::str, "mac-address"}
    	,
    port_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId>())
{
    port_id->parent = this;

    yang_name = "reply-ingress"; yang_parent_name = "linktrace-reply";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::~ReplyIngress()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::has_data() const
{
    return action.is_set
	|| mac_address.is_set
	|| (port_id !=  nullptr && port_id->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(mac_address.operation)
	|| (port_id !=  nullptr && port_id->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply-ingress";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReplyIngress' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-id")
    {
        if(port_id == nullptr)
        {
            port_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId>();
        }
        return port_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_id != nullptr)
    {
        children["port-id"] = port_id;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortId()
    :
    port_id{YType::str, "port-id"},
    port_id_type{YType::enumeration, "port-id-type"},
    port_id_type_value{YType::uint8, "port-id-type-value"}
    	,
    port_id_value(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue>())
{
    port_id_value->parent = this;

    yang_name = "port-id"; yang_parent_name = "reply-ingress";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::~PortId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::has_data() const
{
    return port_id.is_set
	|| port_id_type.is_set
	|| port_id_type_value.is_set
	|| (port_id_value !=  nullptr && port_id_value->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::has_operation() const
{
    return is_set(operation)
	|| is_set(port_id.operation)
	|| is_set(port_id_type.operation)
	|| is_set(port_id_type_value.operation)
	|| (port_id_value !=  nullptr && port_id_value->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_id.is_set || is_set(port_id.operation)) leaf_name_data.push_back(port_id.get_name_leafdata());
    if (port_id_type.is_set || is_set(port_id_type.operation)) leaf_name_data.push_back(port_id_type.get_name_leafdata());
    if (port_id_type_value.is_set || is_set(port_id_type_value.operation)) leaf_name_data.push_back(port_id_type_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-id-value")
    {
        if(port_id_value == nullptr)
        {
            port_id_value = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue>();
        }
        return port_id_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_id_value != nullptr)
    {
        children["port-id-value"] = port_id_value;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-id")
    {
        port_id = value;
    }
    if(value_path == "port-id-type")
    {
        port_id_type = value;
    }
    if(value_path == "port-id-type-value")
    {
        port_id_type_value = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue::PortIdValue()
    :
    port_id_format{YType::enumeration, "port-id-format"},
    port_id_mac{YType::str, "port-id-mac"},
    port_id_raw{YType::str, "port-id-raw"},
    port_id_string{YType::str, "port-id-string"}
{
    yang_name = "port-id-value"; yang_parent_name = "port-id";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue::~PortIdValue()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue::has_data() const
{
    return port_id_format.is_set
	|| port_id_mac.is_set
	|| port_id_raw.is_set
	|| port_id_string.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue::has_operation() const
{
    return is_set(operation)
	|| is_set(port_id_format.operation)
	|| is_set(port_id_mac.operation)
	|| is_set(port_id_raw.operation)
	|| is_set(port_id_string.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-id-value";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortIdValue' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_id_format.is_set || is_set(port_id_format.operation)) leaf_name_data.push_back(port_id_format.get_name_leafdata());
    if (port_id_mac.is_set || is_set(port_id_mac.operation)) leaf_name_data.push_back(port_id_mac.get_name_leafdata());
    if (port_id_raw.is_set || is_set(port_id_raw.operation)) leaf_name_data.push_back(port_id_raw.get_name_leafdata());
    if (port_id_string.is_set || is_set(port_id_string.operation)) leaf_name_data.push_back(port_id_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-id-format")
    {
        port_id_format = value;
    }
    if(value_path == "port-id-mac")
    {
        port_id_mac = value;
    }
    if(value_path == "port-id-raw")
    {
        port_id_raw = value;
    }
    if(value_path == "port-id-string")
    {
        port_id_string = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::ReplyEgress()
    :
    action{YType::enumeration, "action"},
    mac_address{YType::str, "mac-address"}
    	,
    port_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId>())
{
    port_id->parent = this;

    yang_name = "reply-egress"; yang_parent_name = "linktrace-reply";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::~ReplyEgress()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::has_data() const
{
    return action.is_set
	|| mac_address.is_set
	|| (port_id !=  nullptr && port_id->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(mac_address.operation)
	|| (port_id !=  nullptr && port_id->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply-egress";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReplyEgress' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-id")
    {
        if(port_id == nullptr)
        {
            port_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId>();
        }
        return port_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_id != nullptr)
    {
        children["port-id"] = port_id;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortId()
    :
    port_id{YType::str, "port-id"},
    port_id_type{YType::enumeration, "port-id-type"},
    port_id_type_value{YType::uint8, "port-id-type-value"}
    	,
    port_id_value(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue>())
{
    port_id_value->parent = this;

    yang_name = "port-id"; yang_parent_name = "reply-egress";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::~PortId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::has_data() const
{
    return port_id.is_set
	|| port_id_type.is_set
	|| port_id_type_value.is_set
	|| (port_id_value !=  nullptr && port_id_value->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::has_operation() const
{
    return is_set(operation)
	|| is_set(port_id.operation)
	|| is_set(port_id_type.operation)
	|| is_set(port_id_type_value.operation)
	|| (port_id_value !=  nullptr && port_id_value->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_id.is_set || is_set(port_id.operation)) leaf_name_data.push_back(port_id.get_name_leafdata());
    if (port_id_type.is_set || is_set(port_id_type.operation)) leaf_name_data.push_back(port_id_type.get_name_leafdata());
    if (port_id_type_value.is_set || is_set(port_id_type_value.operation)) leaf_name_data.push_back(port_id_type_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-id-value")
    {
        if(port_id_value == nullptr)
        {
            port_id_value = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue>();
        }
        return port_id_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_id_value != nullptr)
    {
        children["port-id-value"] = port_id_value;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-id")
    {
        port_id = value;
    }
    if(value_path == "port-id-type")
    {
        port_id_type = value;
    }
    if(value_path == "port-id-type-value")
    {
        port_id_type_value = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue::PortIdValue()
    :
    port_id_format{YType::enumeration, "port-id-format"},
    port_id_mac{YType::str, "port-id-mac"},
    port_id_raw{YType::str, "port-id-raw"},
    port_id_string{YType::str, "port-id-string"}
{
    yang_name = "port-id-value"; yang_parent_name = "port-id";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue::~PortIdValue()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue::has_data() const
{
    return port_id_format.is_set
	|| port_id_mac.is_set
	|| port_id_raw.is_set
	|| port_id_string.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue::has_operation() const
{
    return is_set(operation)
	|| is_set(port_id_format.operation)
	|| is_set(port_id_mac.operation)
	|| is_set(port_id_raw.operation)
	|| is_set(port_id_string.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-id-value";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortIdValue' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_id_format.is_set || is_set(port_id_format.operation)) leaf_name_data.push_back(port_id_format.get_name_leafdata());
    if (port_id_mac.is_set || is_set(port_id_mac.operation)) leaf_name_data.push_back(port_id_mac.get_name_leafdata());
    if (port_id_raw.is_set || is_set(port_id_raw.operation)) leaf_name_data.push_back(port_id_raw.get_name_leafdata());
    if (port_id_string.is_set || is_set(port_id_string.operation)) leaf_name_data.push_back(port_id_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-id-format")
    {
        port_id_format = value;
    }
    if(value_path == "port-id-mac")
    {
        port_id_mac = value;
    }
    if(value_path == "port-id-raw")
    {
        port_id_raw = value;
    }
    if(value_path == "port-id-string")
    {
        port_id_string = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::LastHop()
    :
    host_name{YType::str, "host-name"},
    last_hop_format{YType::enumeration, "last-hop-format"}
    	,
    egress_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId>())
{
    egress_id->parent = this;

    yang_name = "last-hop"; yang_parent_name = "linktrace-reply";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::~LastHop()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::has_data() const
{
    return host_name.is_set
	|| last_hop_format.is_set
	|| (egress_id !=  nullptr && egress_id->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(last_hop_format.operation)
	|| (egress_id !=  nullptr && egress_id->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-hop";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastHop' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (last_hop_format.is_set || is_set(last_hop_format.operation)) leaf_name_data.push_back(last_hop_format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-id")
    {
        if(egress_id == nullptr)
        {
            egress_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId>();
        }
        return egress_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(egress_id != nullptr)
    {
        children["egress-id"] = egress_id;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "last-hop-format")
    {
        last_hop_format = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId::EgressId()
    :
    mac_address{YType::str, "mac-address"},
    unique_id{YType::uint16, "unique-id"}
{
    yang_name = "egress-id"; yang_parent_name = "last-hop";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId::~EgressId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId::has_data() const
{
    return mac_address.is_set
	|| unique_id.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(unique_id.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EgressId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv::OrganizationSpecificTlv()
    :
    oui{YType::str, "oui"},
    subtype{YType::uint8, "subtype"},
    value_{YType::str, "value"}
{
    yang_name = "organization-specific-tlv"; yang_parent_name = "linktrace-reply";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv::~OrganizationSpecificTlv()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv::has_data() const
{
    return oui.is_set
	|| subtype.is_set
	|| value_.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(oui.operation)
	|| is_set(subtype.operation)
	|| is_set(value_.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "organization-specific-tlv";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OrganizationSpecificTlv' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oui.is_set || is_set(oui.operation)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (subtype.is_set || is_set(subtype.operation)) leaf_name_data.push_back(subtype.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oui")
    {
        oui = value;
    }
    if(value_path == "subtype")
    {
        subtype = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv::UnknownTlv()
    :
    typecode{YType::uint8, "typecode"},
    value_{YType::str, "value"}
{
    yang_name = "unknown-tlv"; yang_parent_name = "linktrace-reply";
}

Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv::~UnknownTlv()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv::has_data() const
{
    return typecode.is_set
	|| value_.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(typecode.operation)
	|| is_set(value_.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownTlv' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (typecode.is_set || is_set(typecode.operation)) leaf_name_data.push_back(typecode.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "typecode")
    {
        typecode = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ExploratoryLinktraceReply()
    :
    raw_data{YType::str, "raw-data"}
    	,
    header(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header>())
	,last_hop(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop>())
	,reply_egress(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress>())
	,reply_ingress(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress>())
	,sender_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId>())
{
    header->parent = this;

    last_hop->parent = this;

    reply_egress->parent = this;

    reply_ingress->parent = this;

    sender_id->parent = this;

    yang_name = "exploratory-linktrace-reply"; yang_parent_name = "traceroute-cache";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::~ExploratoryLinktraceReply()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::has_data() const
{
    for (std::size_t index=0; index<organization_specific_tlv.size(); index++)
    {
        if(organization_specific_tlv[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_tlv.size(); index++)
    {
        if(unknown_tlv[index]->has_data())
            return true;
    }
    return raw_data.is_set
	|| (header !=  nullptr && header->has_data())
	|| (last_hop !=  nullptr && last_hop->has_data())
	|| (reply_egress !=  nullptr && reply_egress->has_data())
	|| (reply_ingress !=  nullptr && reply_ingress->has_data())
	|| (sender_id !=  nullptr && sender_id->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::has_operation() const
{
    for (std::size_t index=0; index<organization_specific_tlv.size(); index++)
    {
        if(organization_specific_tlv[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_tlv.size(); index++)
    {
        if(unknown_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(raw_data.operation)
	|| (header !=  nullptr && header->has_operation())
	|| (last_hop !=  nullptr && last_hop->has_operation())
	|| (reply_egress !=  nullptr && reply_egress->has_operation())
	|| (reply_ingress !=  nullptr && reply_ingress->has_operation())
	|| (sender_id !=  nullptr && sender_id->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exploratory-linktrace-reply";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExploratoryLinktraceReply' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (raw_data.is_set || is_set(raw_data.operation)) leaf_name_data.push_back(raw_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header>();
        }
        return header;
    }

    if(child_yang_name == "last-hop")
    {
        if(last_hop == nullptr)
        {
            last_hop = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop>();
        }
        return last_hop;
    }

    if(child_yang_name == "organization-specific-tlv")
    {
        for(auto const & c : organization_specific_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv>();
        c->parent = this;
        organization_specific_tlv.push_back(c);
        return c;
    }

    if(child_yang_name == "reply-egress")
    {
        if(reply_egress == nullptr)
        {
            reply_egress = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress>();
        }
        return reply_egress;
    }

    if(child_yang_name == "reply-ingress")
    {
        if(reply_ingress == nullptr)
        {
            reply_ingress = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress>();
        }
        return reply_ingress;
    }

    if(child_yang_name == "sender-id")
    {
        if(sender_id == nullptr)
        {
            sender_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId>();
        }
        return sender_id;
    }

    if(child_yang_name == "unknown-tlv")
    {
        for(auto const & c : unknown_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv>();
        c->parent = this;
        unknown_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(last_hop != nullptr)
    {
        children["last-hop"] = last_hop;
    }

    for (auto const & c : organization_specific_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    if(reply_egress != nullptr)
    {
        children["reply-egress"] = reply_egress;
    }

    if(reply_ingress != nullptr)
    {
        children["reply-ingress"] = reply_ingress;
    }

    if(sender_id != nullptr)
    {
        children["sender-id"] = sender_id;
    }

    for (auto const & c : unknown_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "raw-data")
    {
        raw_data = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header::Header()
    :
    delay_model{YType::enumeration, "delay-model"},
    forwarded{YType::boolean, "forwarded"},
    level{YType::enumeration, "level"},
    next_hop_timeout{YType::uint32, "next-hop-timeout"},
    relay_action{YType::enumeration, "relay-action"},
    reply_filter_unknown{YType::boolean, "reply-filter-unknown"},
    terminal_mep{YType::boolean, "terminal-mep"},
    transaction_id{YType::uint32, "transaction-id"},
    ttl{YType::uint8, "ttl"},
    version{YType::uint8, "version"}
{
    yang_name = "header"; yang_parent_name = "exploratory-linktrace-reply";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header::~Header()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header::has_data() const
{
    return delay_model.is_set
	|| forwarded.is_set
	|| level.is_set
	|| next_hop_timeout.is_set
	|| relay_action.is_set
	|| reply_filter_unknown.is_set
	|| terminal_mep.is_set
	|| transaction_id.is_set
	|| ttl.is_set
	|| version.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(delay_model.operation)
	|| is_set(forwarded.operation)
	|| is_set(level.operation)
	|| is_set(next_hop_timeout.operation)
	|| is_set(relay_action.operation)
	|| is_set(reply_filter_unknown.operation)
	|| is_set(terminal_mep.operation)
	|| is_set(transaction_id.operation)
	|| is_set(ttl.operation)
	|| is_set(version.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Header' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay_model.is_set || is_set(delay_model.operation)) leaf_name_data.push_back(delay_model.get_name_leafdata());
    if (forwarded.is_set || is_set(forwarded.operation)) leaf_name_data.push_back(forwarded.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (next_hop_timeout.is_set || is_set(next_hop_timeout.operation)) leaf_name_data.push_back(next_hop_timeout.get_name_leafdata());
    if (relay_action.is_set || is_set(relay_action.operation)) leaf_name_data.push_back(relay_action.get_name_leafdata());
    if (reply_filter_unknown.is_set || is_set(reply_filter_unknown.operation)) leaf_name_data.push_back(reply_filter_unknown.get_name_leafdata());
    if (terminal_mep.is_set || is_set(terminal_mep.operation)) leaf_name_data.push_back(terminal_mep.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.operation)) leaf_name_data.push_back(transaction_id.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay-model")
    {
        delay_model = value;
    }
    if(value_path == "forwarded")
    {
        forwarded = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "next-hop-timeout")
    {
        next_hop_timeout = value;
    }
    if(value_path == "relay-action")
    {
        relay_action = value;
    }
    if(value_path == "reply-filter-unknown")
    {
        reply_filter_unknown = value;
    }
    if(value_path == "terminal-mep")
    {
        terminal_mep = value;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::SenderId()
    :
    management_address{YType::str, "management-address"},
    management_address_domain{YType::str, "management-address-domain"}
    	,
    chassis_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId>())
{
    chassis_id->parent = this;

    yang_name = "sender-id"; yang_parent_name = "exploratory-linktrace-reply";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::~SenderId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::has_data() const
{
    return management_address.is_set
	|| management_address_domain.is_set
	|| (chassis_id !=  nullptr && chassis_id->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::has_operation() const
{
    return is_set(operation)
	|| is_set(management_address.operation)
	|| is_set(management_address_domain.operation)
	|| (chassis_id !=  nullptr && chassis_id->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (management_address.is_set || is_set(management_address.operation)) leaf_name_data.push_back(management_address.get_name_leafdata());
    if (management_address_domain.is_set || is_set(management_address_domain.operation)) leaf_name_data.push_back(management_address_domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chassis-id")
    {
        if(chassis_id == nullptr)
        {
            chassis_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId>();
        }
        return chassis_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(chassis_id != nullptr)
    {
        children["chassis-id"] = chassis_id;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "management-address")
    {
        management_address = value;
    }
    if(value_path == "management-address-domain")
    {
        management_address_domain = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisId()
    :
    chassis_id{YType::str, "chassis-id"},
    chassis_id_type{YType::enumeration, "chassis-id-type"},
    chassis_id_type_value{YType::uint8, "chassis-id-type-value"}
    	,
    chassis_id_value(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue>())
{
    chassis_id_value->parent = this;

    yang_name = "chassis-id"; yang_parent_name = "sender-id";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::~ChassisId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::has_data() const
{
    return chassis_id.is_set
	|| chassis_id_type.is_set
	|| chassis_id_type_value.is_set
	|| (chassis_id_value !=  nullptr && chassis_id_value->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::has_operation() const
{
    return is_set(operation)
	|| is_set(chassis_id.operation)
	|| is_set(chassis_id_type.operation)
	|| is_set(chassis_id_type_value.operation)
	|| (chassis_id_value !=  nullptr && chassis_id_value->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChassisId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id.is_set || is_set(chassis_id.operation)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (chassis_id_type.is_set || is_set(chassis_id_type.operation)) leaf_name_data.push_back(chassis_id_type.get_name_leafdata());
    if (chassis_id_type_value.is_set || is_set(chassis_id_type_value.operation)) leaf_name_data.push_back(chassis_id_type_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chassis-id-value")
    {
        if(chassis_id_value == nullptr)
        {
            chassis_id_value = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue>();
        }
        return chassis_id_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(chassis_id_value != nullptr)
    {
        children["chassis-id-value"] = chassis_id_value;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chassis-id")
    {
        chassis_id = value;
    }
    if(value_path == "chassis-id-type")
    {
        chassis_id_type = value;
    }
    if(value_path == "chassis-id-type-value")
    {
        chassis_id_type_value = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue::ChassisIdValue()
    :
    chassis_id_format{YType::enumeration, "chassis-id-format"},
    chassis_id_mac{YType::str, "chassis-id-mac"},
    chassis_id_raw{YType::str, "chassis-id-raw"},
    chassis_id_string{YType::str, "chassis-id-string"}
{
    yang_name = "chassis-id-value"; yang_parent_name = "chassis-id";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue::~ChassisIdValue()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue::has_data() const
{
    return chassis_id_format.is_set
	|| chassis_id_mac.is_set
	|| chassis_id_raw.is_set
	|| chassis_id_string.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue::has_operation() const
{
    return is_set(operation)
	|| is_set(chassis_id_format.operation)
	|| is_set(chassis_id_mac.operation)
	|| is_set(chassis_id_raw.operation)
	|| is_set(chassis_id_string.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis-id-value";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChassisIdValue' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id_format.is_set || is_set(chassis_id_format.operation)) leaf_name_data.push_back(chassis_id_format.get_name_leafdata());
    if (chassis_id_mac.is_set || is_set(chassis_id_mac.operation)) leaf_name_data.push_back(chassis_id_mac.get_name_leafdata());
    if (chassis_id_raw.is_set || is_set(chassis_id_raw.operation)) leaf_name_data.push_back(chassis_id_raw.get_name_leafdata());
    if (chassis_id_string.is_set || is_set(chassis_id_string.operation)) leaf_name_data.push_back(chassis_id_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chassis-id-format")
    {
        chassis_id_format = value;
    }
    if(value_path == "chassis-id-mac")
    {
        chassis_id_mac = value;
    }
    if(value_path == "chassis-id-raw")
    {
        chassis_id_raw = value;
    }
    if(value_path == "chassis-id-string")
    {
        chassis_id_string = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::ReplyIngress()
    :
    action{YType::enumeration, "action"},
    mac_address{YType::str, "mac-address"}
    	,
    last_egress_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId>())
	,next_egress_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId>())
	,port_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId>())
{
    last_egress_id->parent = this;

    next_egress_id->parent = this;

    port_id->parent = this;

    yang_name = "reply-ingress"; yang_parent_name = "exploratory-linktrace-reply";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::~ReplyIngress()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::has_data() const
{
    return action.is_set
	|| mac_address.is_set
	|| (last_egress_id !=  nullptr && last_egress_id->has_data())
	|| (next_egress_id !=  nullptr && next_egress_id->has_data())
	|| (port_id !=  nullptr && port_id->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(mac_address.operation)
	|| (last_egress_id !=  nullptr && last_egress_id->has_operation())
	|| (next_egress_id !=  nullptr && next_egress_id->has_operation())
	|| (port_id !=  nullptr && port_id->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply-ingress";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReplyIngress' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-egress-id")
    {
        if(last_egress_id == nullptr)
        {
            last_egress_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId>();
        }
        return last_egress_id;
    }

    if(child_yang_name == "next-egress-id")
    {
        if(next_egress_id == nullptr)
        {
            next_egress_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId>();
        }
        return next_egress_id;
    }

    if(child_yang_name == "port-id")
    {
        if(port_id == nullptr)
        {
            port_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId>();
        }
        return port_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_egress_id != nullptr)
    {
        children["last-egress-id"] = last_egress_id;
    }

    if(next_egress_id != nullptr)
    {
        children["next-egress-id"] = next_egress_id;
    }

    if(port_id != nullptr)
    {
        children["port-id"] = port_id;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId::LastEgressId()
    :
    mac_address{YType::str, "mac-address"},
    unique_id{YType::uint16, "unique-id"}
{
    yang_name = "last-egress-id"; yang_parent_name = "reply-ingress";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId::~LastEgressId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId::has_data() const
{
    return mac_address.is_set
	|| unique_id.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(unique_id.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-egress-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastEgressId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId::NextEgressId()
    :
    mac_address{YType::str, "mac-address"},
    unique_id{YType::uint16, "unique-id"}
{
    yang_name = "next-egress-id"; yang_parent_name = "reply-ingress";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId::~NextEgressId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId::has_data() const
{
    return mac_address.is_set
	|| unique_id.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(unique_id.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-egress-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextEgressId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortId()
    :
    port_id{YType::str, "port-id"},
    port_id_type{YType::enumeration, "port-id-type"},
    port_id_type_value{YType::uint8, "port-id-type-value"}
    	,
    port_id_value(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue>())
{
    port_id_value->parent = this;

    yang_name = "port-id"; yang_parent_name = "reply-ingress";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::~PortId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::has_data() const
{
    return port_id.is_set
	|| port_id_type.is_set
	|| port_id_type_value.is_set
	|| (port_id_value !=  nullptr && port_id_value->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::has_operation() const
{
    return is_set(operation)
	|| is_set(port_id.operation)
	|| is_set(port_id_type.operation)
	|| is_set(port_id_type_value.operation)
	|| (port_id_value !=  nullptr && port_id_value->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_id.is_set || is_set(port_id.operation)) leaf_name_data.push_back(port_id.get_name_leafdata());
    if (port_id_type.is_set || is_set(port_id_type.operation)) leaf_name_data.push_back(port_id_type.get_name_leafdata());
    if (port_id_type_value.is_set || is_set(port_id_type_value.operation)) leaf_name_data.push_back(port_id_type_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-id-value")
    {
        if(port_id_value == nullptr)
        {
            port_id_value = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue>();
        }
        return port_id_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_id_value != nullptr)
    {
        children["port-id-value"] = port_id_value;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-id")
    {
        port_id = value;
    }
    if(value_path == "port-id-type")
    {
        port_id_type = value;
    }
    if(value_path == "port-id-type-value")
    {
        port_id_type_value = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue::PortIdValue()
    :
    port_id_format{YType::enumeration, "port-id-format"},
    port_id_mac{YType::str, "port-id-mac"},
    port_id_raw{YType::str, "port-id-raw"},
    port_id_string{YType::str, "port-id-string"}
{
    yang_name = "port-id-value"; yang_parent_name = "port-id";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue::~PortIdValue()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue::has_data() const
{
    return port_id_format.is_set
	|| port_id_mac.is_set
	|| port_id_raw.is_set
	|| port_id_string.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue::has_operation() const
{
    return is_set(operation)
	|| is_set(port_id_format.operation)
	|| is_set(port_id_mac.operation)
	|| is_set(port_id_raw.operation)
	|| is_set(port_id_string.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-id-value";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortIdValue' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_id_format.is_set || is_set(port_id_format.operation)) leaf_name_data.push_back(port_id_format.get_name_leafdata());
    if (port_id_mac.is_set || is_set(port_id_mac.operation)) leaf_name_data.push_back(port_id_mac.get_name_leafdata());
    if (port_id_raw.is_set || is_set(port_id_raw.operation)) leaf_name_data.push_back(port_id_raw.get_name_leafdata());
    if (port_id_string.is_set || is_set(port_id_string.operation)) leaf_name_data.push_back(port_id_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-id-format")
    {
        port_id_format = value;
    }
    if(value_path == "port-id-mac")
    {
        port_id_mac = value;
    }
    if(value_path == "port-id-raw")
    {
        port_id_raw = value;
    }
    if(value_path == "port-id-string")
    {
        port_id_string = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::ReplyEgress()
    :
    action{YType::enumeration, "action"},
    mac_address{YType::str, "mac-address"}
    	,
    last_egress_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId>())
	,next_egress_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId>())
	,port_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId>())
{
    last_egress_id->parent = this;

    next_egress_id->parent = this;

    port_id->parent = this;

    yang_name = "reply-egress"; yang_parent_name = "exploratory-linktrace-reply";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::~ReplyEgress()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::has_data() const
{
    return action.is_set
	|| mac_address.is_set
	|| (last_egress_id !=  nullptr && last_egress_id->has_data())
	|| (next_egress_id !=  nullptr && next_egress_id->has_data())
	|| (port_id !=  nullptr && port_id->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(mac_address.operation)
	|| (last_egress_id !=  nullptr && last_egress_id->has_operation())
	|| (next_egress_id !=  nullptr && next_egress_id->has_operation())
	|| (port_id !=  nullptr && port_id->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply-egress";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReplyEgress' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-egress-id")
    {
        if(last_egress_id == nullptr)
        {
            last_egress_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId>();
        }
        return last_egress_id;
    }

    if(child_yang_name == "next-egress-id")
    {
        if(next_egress_id == nullptr)
        {
            next_egress_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId>();
        }
        return next_egress_id;
    }

    if(child_yang_name == "port-id")
    {
        if(port_id == nullptr)
        {
            port_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId>();
        }
        return port_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_egress_id != nullptr)
    {
        children["last-egress-id"] = last_egress_id;
    }

    if(next_egress_id != nullptr)
    {
        children["next-egress-id"] = next_egress_id;
    }

    if(port_id != nullptr)
    {
        children["port-id"] = port_id;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId::LastEgressId()
    :
    mac_address{YType::str, "mac-address"},
    unique_id{YType::uint16, "unique-id"}
{
    yang_name = "last-egress-id"; yang_parent_name = "reply-egress";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId::~LastEgressId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId::has_data() const
{
    return mac_address.is_set
	|| unique_id.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(unique_id.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-egress-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastEgressId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId::NextEgressId()
    :
    mac_address{YType::str, "mac-address"},
    unique_id{YType::uint16, "unique-id"}
{
    yang_name = "next-egress-id"; yang_parent_name = "reply-egress";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId::~NextEgressId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId::has_data() const
{
    return mac_address.is_set
	|| unique_id.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(unique_id.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-egress-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextEgressId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortId()
    :
    port_id{YType::str, "port-id"},
    port_id_type{YType::enumeration, "port-id-type"},
    port_id_type_value{YType::uint8, "port-id-type-value"}
    	,
    port_id_value(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue>())
{
    port_id_value->parent = this;

    yang_name = "port-id"; yang_parent_name = "reply-egress";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::~PortId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::has_data() const
{
    return port_id.is_set
	|| port_id_type.is_set
	|| port_id_type_value.is_set
	|| (port_id_value !=  nullptr && port_id_value->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::has_operation() const
{
    return is_set(operation)
	|| is_set(port_id.operation)
	|| is_set(port_id_type.operation)
	|| is_set(port_id_type_value.operation)
	|| (port_id_value !=  nullptr && port_id_value->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_id.is_set || is_set(port_id.operation)) leaf_name_data.push_back(port_id.get_name_leafdata());
    if (port_id_type.is_set || is_set(port_id_type.operation)) leaf_name_data.push_back(port_id_type.get_name_leafdata());
    if (port_id_type_value.is_set || is_set(port_id_type_value.operation)) leaf_name_data.push_back(port_id_type_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-id-value")
    {
        if(port_id_value == nullptr)
        {
            port_id_value = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue>();
        }
        return port_id_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_id_value != nullptr)
    {
        children["port-id-value"] = port_id_value;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-id")
    {
        port_id = value;
    }
    if(value_path == "port-id-type")
    {
        port_id_type = value;
    }
    if(value_path == "port-id-type-value")
    {
        port_id_type_value = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue::PortIdValue()
    :
    port_id_format{YType::enumeration, "port-id-format"},
    port_id_mac{YType::str, "port-id-mac"},
    port_id_raw{YType::str, "port-id-raw"},
    port_id_string{YType::str, "port-id-string"}
{
    yang_name = "port-id-value"; yang_parent_name = "port-id";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue::~PortIdValue()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue::has_data() const
{
    return port_id_format.is_set
	|| port_id_mac.is_set
	|| port_id_raw.is_set
	|| port_id_string.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue::has_operation() const
{
    return is_set(operation)
	|| is_set(port_id_format.operation)
	|| is_set(port_id_mac.operation)
	|| is_set(port_id_raw.operation)
	|| is_set(port_id_string.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-id-value";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortIdValue' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_id_format.is_set || is_set(port_id_format.operation)) leaf_name_data.push_back(port_id_format.get_name_leafdata());
    if (port_id_mac.is_set || is_set(port_id_mac.operation)) leaf_name_data.push_back(port_id_mac.get_name_leafdata());
    if (port_id_raw.is_set || is_set(port_id_raw.operation)) leaf_name_data.push_back(port_id_raw.get_name_leafdata());
    if (port_id_string.is_set || is_set(port_id_string.operation)) leaf_name_data.push_back(port_id_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-id-format")
    {
        port_id_format = value;
    }
    if(value_path == "port-id-mac")
    {
        port_id_mac = value;
    }
    if(value_path == "port-id-raw")
    {
        port_id_raw = value;
    }
    if(value_path == "port-id-string")
    {
        port_id_string = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::LastHop()
    :
    host_name{YType::str, "host-name"},
    last_hop_format{YType::enumeration, "last-hop-format"}
    	,
    egress_id(std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId>())
{
    egress_id->parent = this;

    yang_name = "last-hop"; yang_parent_name = "exploratory-linktrace-reply";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::~LastHop()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::has_data() const
{
    return host_name.is_set
	|| last_hop_format.is_set
	|| (egress_id !=  nullptr && egress_id->has_data());
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(last_hop_format.operation)
	|| (egress_id !=  nullptr && egress_id->has_operation());
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-hop";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastHop' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (last_hop_format.is_set || is_set(last_hop_format.operation)) leaf_name_data.push_back(last_hop_format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-id")
    {
        if(egress_id == nullptr)
        {
            egress_id = std::make_shared<Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId>();
        }
        return egress_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(egress_id != nullptr)
    {
        children["egress-id"] = egress_id;
    }

    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "last-hop-format")
    {
        last_hop_format = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId::EgressId()
    :
    mac_address{YType::str, "mac-address"},
    unique_id{YType::uint16, "unique-id"}
{
    yang_name = "egress-id"; yang_parent_name = "last-hop";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId::~EgressId()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId::has_data() const
{
    return mac_address.is_set
	|| unique_id.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(unique_id.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EgressId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv::OrganizationSpecificTlv()
    :
    oui{YType::str, "oui"},
    subtype{YType::uint8, "subtype"},
    value_{YType::str, "value"}
{
    yang_name = "organization-specific-tlv"; yang_parent_name = "exploratory-linktrace-reply";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv::~OrganizationSpecificTlv()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv::has_data() const
{
    return oui.is_set
	|| subtype.is_set
	|| value_.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(oui.operation)
	|| is_set(subtype.operation)
	|| is_set(value_.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "organization-specific-tlv";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OrganizationSpecificTlv' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oui.is_set || is_set(oui.operation)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (subtype.is_set || is_set(subtype.operation)) leaf_name_data.push_back(subtype.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oui")
    {
        oui = value;
    }
    if(value_path == "subtype")
    {
        subtype = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv::UnknownTlv()
    :
    typecode{YType::uint8, "typecode"},
    value_{YType::str, "value"}
{
    yang_name = "unknown-tlv"; yang_parent_name = "exploratory-linktrace-reply";
}

Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv::~UnknownTlv()
{
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv::has_data() const
{
    return typecode.is_set
	|| value_.is_set;
}

bool Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(typecode.operation)
	|| is_set(value_.operation);
}

std::string Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv";

    return path_buffer.str();

}

const EntityPath Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownTlv' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (typecode.is_set || is_set(typecode.operation)) leaf_name_data.push_back(typecode.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "typecode")
    {
        typecode = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Cfm::Global::LocalMeps::LocalMeps()
{
    yang_name = "local-meps"; yang_parent_name = "global";
}

Cfm::Global::LocalMeps::~LocalMeps()
{
}

bool Cfm::Global::LocalMeps::has_data() const
{
    for (std::size_t index=0; index<local_mep.size(); index++)
    {
        if(local_mep[index]->has_data())
            return true;
    }
    return false;
}

bool Cfm::Global::LocalMeps::has_operation() const
{
    for (std::size_t index=0; index<local_mep.size(); index++)
    {
        if(local_mep[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cfm::Global::LocalMeps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-meps";

    return path_buffer.str();

}

const EntityPath Cfm::Global::LocalMeps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::LocalMeps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-mep")
    {
        for(auto const & c : local_mep)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Global::LocalMeps::LocalMep>();
        c->parent = this;
        local_mep.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::LocalMeps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_mep)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cfm::Global::LocalMeps::set_value(const std::string & value_path, std::string value)
{
}

Cfm::Global::LocalMeps::LocalMep::LocalMep()
    :
    domain{YType::str, "domain"},
    service{YType::str, "service"},
    mep_id{YType::uint32, "mep-id"},
    interface{YType::str, "interface"},
    ccm_generation_enabled{YType::boolean, "ccm-generation-enabled"},
    ccm_interval{YType::enumeration, "ccm-interval"},
    ccm_offload{YType::enumeration, "ccm-offload"},
    cos{YType::uint8, "cos"},
    cross_connect_ccm_defect{YType::boolean, "cross-connect-ccm-defect"},
    defects_ignored{YType::boolean, "defects-ignored"},
    domain_xr{YType::str, "domain-xr"},
    efd_triggered{YType::boolean, "efd-triggered"},
    error_ccm_defect{YType::boolean, "error-ccm-defect"},
    fault_notification_state{YType::enumeration, "fault-notification-state"},
    hairpin{YType::boolean, "hairpin"},
    highest_defect{YType::enumeration, "highest-defect"},
    interface_state{YType::str, "interface-state"},
    interface_xr{YType::str, "interface-xr"},
    interworking_state{YType::enumeration, "interworking-state"},
    level{YType::enumeration, "level"},
    mac_address{YType::str, "mac-address"},
    mac_status_defect{YType::boolean, "mac-status-defect"},
    mep_direction{YType::enumeration, "mep-direction"},
    mep_id_xr{YType::uint16, "mep-id-xr"},
    next_lbm_id{YType::uint32, "next-lbm-id"},
    next_ltm_id{YType::uint32, "next-ltm-id"},
    peer_mep_ccm_defect{YType::boolean, "peer-mep-ccm-defect"},
    peer_meps_detected{YType::uint32, "peer-meps-detected"},
    peer_meps_with_errors_detected{YType::uint32, "peer-meps-with-errors-detected"},
    rdi_defect{YType::boolean, "rdi-defect"},
    remote_defect{YType::boolean, "remote-defect"},
    service_xr{YType::str, "service-xr"},
    standby{YType::boolean, "standby"},
    stp_state{YType::enumeration, "stp-state"}
    	,
    ais_statistics(std::make_shared<Cfm::Global::LocalMeps::LocalMep::AisStatistics>())
	,defects(std::make_shared<Cfm::Global::LocalMeps::LocalMep::Defects>())
	,statistics(std::make_shared<Cfm::Global::LocalMeps::LocalMep::Statistics>())
{
    ais_statistics->parent = this;

    defects->parent = this;

    statistics->parent = this;

    yang_name = "local-mep"; yang_parent_name = "local-meps";
}

Cfm::Global::LocalMeps::LocalMep::~LocalMep()
{
}

bool Cfm::Global::LocalMeps::LocalMep::has_data() const
{
    return domain.is_set
	|| service.is_set
	|| mep_id.is_set
	|| interface.is_set
	|| ccm_generation_enabled.is_set
	|| ccm_interval.is_set
	|| ccm_offload.is_set
	|| cos.is_set
	|| cross_connect_ccm_defect.is_set
	|| defects_ignored.is_set
	|| domain_xr.is_set
	|| efd_triggered.is_set
	|| error_ccm_defect.is_set
	|| fault_notification_state.is_set
	|| hairpin.is_set
	|| highest_defect.is_set
	|| interface_state.is_set
	|| interface_xr.is_set
	|| interworking_state.is_set
	|| level.is_set
	|| mac_address.is_set
	|| mac_status_defect.is_set
	|| mep_direction.is_set
	|| mep_id_xr.is_set
	|| next_lbm_id.is_set
	|| next_ltm_id.is_set
	|| peer_mep_ccm_defect.is_set
	|| peer_meps_detected.is_set
	|| peer_meps_with_errors_detected.is_set
	|| rdi_defect.is_set
	|| remote_defect.is_set
	|| service_xr.is_set
	|| standby.is_set
	|| stp_state.is_set
	|| (ais_statistics !=  nullptr && ais_statistics->has_data())
	|| (defects !=  nullptr && defects->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Cfm::Global::LocalMeps::LocalMep::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation)
	|| is_set(service.operation)
	|| is_set(mep_id.operation)
	|| is_set(interface.operation)
	|| is_set(ccm_generation_enabled.operation)
	|| is_set(ccm_interval.operation)
	|| is_set(ccm_offload.operation)
	|| is_set(cos.operation)
	|| is_set(cross_connect_ccm_defect.operation)
	|| is_set(defects_ignored.operation)
	|| is_set(domain_xr.operation)
	|| is_set(efd_triggered.operation)
	|| is_set(error_ccm_defect.operation)
	|| is_set(fault_notification_state.operation)
	|| is_set(hairpin.operation)
	|| is_set(highest_defect.operation)
	|| is_set(interface_state.operation)
	|| is_set(interface_xr.operation)
	|| is_set(interworking_state.operation)
	|| is_set(level.operation)
	|| is_set(mac_address.operation)
	|| is_set(mac_status_defect.operation)
	|| is_set(mep_direction.operation)
	|| is_set(mep_id_xr.operation)
	|| is_set(next_lbm_id.operation)
	|| is_set(next_ltm_id.operation)
	|| is_set(peer_mep_ccm_defect.operation)
	|| is_set(peer_meps_detected.operation)
	|| is_set(peer_meps_with_errors_detected.operation)
	|| is_set(rdi_defect.operation)
	|| is_set(remote_defect.operation)
	|| is_set(service_xr.operation)
	|| is_set(standby.operation)
	|| is_set(stp_state.operation)
	|| (ais_statistics !=  nullptr && ais_statistics->has_operation())
	|| (defects !=  nullptr && defects->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Cfm::Global::LocalMeps::LocalMep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-mep" <<"[domain='" <<domain <<"']" <<"[service='" <<service <<"']" <<"[mep-id='" <<mep_id <<"']" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Cfm::Global::LocalMeps::LocalMep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/global/local-meps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.operation)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (ccm_generation_enabled.is_set || is_set(ccm_generation_enabled.operation)) leaf_name_data.push_back(ccm_generation_enabled.get_name_leafdata());
    if (ccm_interval.is_set || is_set(ccm_interval.operation)) leaf_name_data.push_back(ccm_interval.get_name_leafdata());
    if (ccm_offload.is_set || is_set(ccm_offload.operation)) leaf_name_data.push_back(ccm_offload.get_name_leafdata());
    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (cross_connect_ccm_defect.is_set || is_set(cross_connect_ccm_defect.operation)) leaf_name_data.push_back(cross_connect_ccm_defect.get_name_leafdata());
    if (defects_ignored.is_set || is_set(defects_ignored.operation)) leaf_name_data.push_back(defects_ignored.get_name_leafdata());
    if (domain_xr.is_set || is_set(domain_xr.operation)) leaf_name_data.push_back(domain_xr.get_name_leafdata());
    if (efd_triggered.is_set || is_set(efd_triggered.operation)) leaf_name_data.push_back(efd_triggered.get_name_leafdata());
    if (error_ccm_defect.is_set || is_set(error_ccm_defect.operation)) leaf_name_data.push_back(error_ccm_defect.get_name_leafdata());
    if (fault_notification_state.is_set || is_set(fault_notification_state.operation)) leaf_name_data.push_back(fault_notification_state.get_name_leafdata());
    if (hairpin.is_set || is_set(hairpin.operation)) leaf_name_data.push_back(hairpin.get_name_leafdata());
    if (highest_defect.is_set || is_set(highest_defect.operation)) leaf_name_data.push_back(highest_defect.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.operation)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (interface_xr.is_set || is_set(interface_xr.operation)) leaf_name_data.push_back(interface_xr.get_name_leafdata());
    if (interworking_state.is_set || is_set(interworking_state.operation)) leaf_name_data.push_back(interworking_state.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_status_defect.is_set || is_set(mac_status_defect.operation)) leaf_name_data.push_back(mac_status_defect.get_name_leafdata());
    if (mep_direction.is_set || is_set(mep_direction.operation)) leaf_name_data.push_back(mep_direction.get_name_leafdata());
    if (mep_id_xr.is_set || is_set(mep_id_xr.operation)) leaf_name_data.push_back(mep_id_xr.get_name_leafdata());
    if (next_lbm_id.is_set || is_set(next_lbm_id.operation)) leaf_name_data.push_back(next_lbm_id.get_name_leafdata());
    if (next_ltm_id.is_set || is_set(next_ltm_id.operation)) leaf_name_data.push_back(next_ltm_id.get_name_leafdata());
    if (peer_mep_ccm_defect.is_set || is_set(peer_mep_ccm_defect.operation)) leaf_name_data.push_back(peer_mep_ccm_defect.get_name_leafdata());
    if (peer_meps_detected.is_set || is_set(peer_meps_detected.operation)) leaf_name_data.push_back(peer_meps_detected.get_name_leafdata());
    if (peer_meps_with_errors_detected.is_set || is_set(peer_meps_with_errors_detected.operation)) leaf_name_data.push_back(peer_meps_with_errors_detected.get_name_leafdata());
    if (rdi_defect.is_set || is_set(rdi_defect.operation)) leaf_name_data.push_back(rdi_defect.get_name_leafdata());
    if (remote_defect.is_set || is_set(remote_defect.operation)) leaf_name_data.push_back(remote_defect.get_name_leafdata());
    if (service_xr.is_set || is_set(service_xr.operation)) leaf_name_data.push_back(service_xr.get_name_leafdata());
    if (standby.is_set || is_set(standby.operation)) leaf_name_data.push_back(standby.get_name_leafdata());
    if (stp_state.is_set || is_set(stp_state.operation)) leaf_name_data.push_back(stp_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::LocalMeps::LocalMep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ais-statistics")
    {
        if(ais_statistics == nullptr)
        {
            ais_statistics = std::make_shared<Cfm::Global::LocalMeps::LocalMep::AisStatistics>();
        }
        return ais_statistics;
    }

    if(child_yang_name == "defects")
    {
        if(defects == nullptr)
        {
            defects = std::make_shared<Cfm::Global::LocalMeps::LocalMep::Defects>();
        }
        return defects;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Cfm::Global::LocalMeps::LocalMep::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::LocalMeps::LocalMep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ais_statistics != nullptr)
    {
        children["ais-statistics"] = ais_statistics;
    }

    if(defects != nullptr)
    {
        children["defects"] = defects;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Cfm::Global::LocalMeps::LocalMep::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "ccm-generation-enabled")
    {
        ccm_generation_enabled = value;
    }
    if(value_path == "ccm-interval")
    {
        ccm_interval = value;
    }
    if(value_path == "ccm-offload")
    {
        ccm_offload = value;
    }
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "cross-connect-ccm-defect")
    {
        cross_connect_ccm_defect = value;
    }
    if(value_path == "defects-ignored")
    {
        defects_ignored = value;
    }
    if(value_path == "domain-xr")
    {
        domain_xr = value;
    }
    if(value_path == "efd-triggered")
    {
        efd_triggered = value;
    }
    if(value_path == "error-ccm-defect")
    {
        error_ccm_defect = value;
    }
    if(value_path == "fault-notification-state")
    {
        fault_notification_state = value;
    }
    if(value_path == "hairpin")
    {
        hairpin = value;
    }
    if(value_path == "highest-defect")
    {
        highest_defect = value;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
    }
    if(value_path == "interface-xr")
    {
        interface_xr = value;
    }
    if(value_path == "interworking-state")
    {
        interworking_state = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "mac-status-defect")
    {
        mac_status_defect = value;
    }
    if(value_path == "mep-direction")
    {
        mep_direction = value;
    }
    if(value_path == "mep-id-xr")
    {
        mep_id_xr = value;
    }
    if(value_path == "next-lbm-id")
    {
        next_lbm_id = value;
    }
    if(value_path == "next-ltm-id")
    {
        next_ltm_id = value;
    }
    if(value_path == "peer-mep-ccm-defect")
    {
        peer_mep_ccm_defect = value;
    }
    if(value_path == "peer-meps-detected")
    {
        peer_meps_detected = value;
    }
    if(value_path == "peer-meps-with-errors-detected")
    {
        peer_meps_with_errors_detected = value;
    }
    if(value_path == "rdi-defect")
    {
        rdi_defect = value;
    }
    if(value_path == "remote-defect")
    {
        remote_defect = value;
    }
    if(value_path == "service-xr")
    {
        service_xr = value;
    }
    if(value_path == "standby")
    {
        standby = value;
    }
    if(value_path == "stp-state")
    {
        stp_state = value;
    }
}

Cfm::Global::LocalMeps::LocalMep::Statistics::Statistics()
    :
    ai_ss_received{YType::uint64, "ai-ss-received"},
    ai_ss_sent{YType::uint64, "ai-ss-sent"},
    bn_ms_discarded{YType::uint64, "bn-ms-discarded"},
    bn_ms_received{YType::uint64, "bn-ms-received"},
    ccms_discarded{YType::uint64, "ccms-discarded"},
    ccms_out_of_sequence{YType::uint64, "ccms-out-of-sequence"},
    ccms_received{YType::uint64, "ccms-received"},
    ccms_sent{YType::uint64, "ccms-sent"},
    dm_ms_received{YType::uint64, "dm-ms-received"},
    dm_ms_sent{YType::uint64, "dm-ms-sent"},
    dm_rs_received{YType::uint64, "dm-rs-received"},
    dm_rs_sent{YType::uint64, "dm-rs-sent"},
    lb_ms_received{YType::uint64, "lb-ms-received"},
    lb_ms_sent{YType::uint64, "lb-ms-sent"},
    lb_rs_bad_data{YType::uint64, "lb-rs-bad-data"},
    lb_rs_out_of_sequence{YType::uint64, "lb-rs-out-of-sequence"},
    lb_rs_received{YType::uint64, "lb-rs-received"},
    lb_rs_sent{YType::uint64, "lb-rs-sent"},
    lc_ks_received{YType::uint64, "lc-ks-received"},
    lm_ms_received{YType::uint64, "lm-ms-received"},
    lm_ms_sent{YType::uint64, "lm-ms-sent"},
    lm_rs_received{YType::uint64, "lm-rs-received"},
    lm_rs_sent{YType::uint64, "lm-rs-sent"},
    lt_rs_received_unexpected{YType::uint64, "lt-rs-received-unexpected"},
    sl_ms_received{YType::uint64, "sl-ms-received"},
    sl_ms_sent{YType::uint64, "sl-ms-sent"},
    sl_rs_received{YType::uint64, "sl-rs-received"},
    sl_rs_sent{YType::uint64, "sl-rs-sent"}
{
    yang_name = "statistics"; yang_parent_name = "local-mep";
}

Cfm::Global::LocalMeps::LocalMep::Statistics::~Statistics()
{
}

bool Cfm::Global::LocalMeps::LocalMep::Statistics::has_data() const
{
    return ai_ss_received.is_set
	|| ai_ss_sent.is_set
	|| bn_ms_discarded.is_set
	|| bn_ms_received.is_set
	|| ccms_discarded.is_set
	|| ccms_out_of_sequence.is_set
	|| ccms_received.is_set
	|| ccms_sent.is_set
	|| dm_ms_received.is_set
	|| dm_ms_sent.is_set
	|| dm_rs_received.is_set
	|| dm_rs_sent.is_set
	|| lb_ms_received.is_set
	|| lb_ms_sent.is_set
	|| lb_rs_bad_data.is_set
	|| lb_rs_out_of_sequence.is_set
	|| lb_rs_received.is_set
	|| lb_rs_sent.is_set
	|| lc_ks_received.is_set
	|| lm_ms_received.is_set
	|| lm_ms_sent.is_set
	|| lm_rs_received.is_set
	|| lm_rs_sent.is_set
	|| lt_rs_received_unexpected.is_set
	|| sl_ms_received.is_set
	|| sl_ms_sent.is_set
	|| sl_rs_received.is_set
	|| sl_rs_sent.is_set;
}

bool Cfm::Global::LocalMeps::LocalMep::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(ai_ss_received.operation)
	|| is_set(ai_ss_sent.operation)
	|| is_set(bn_ms_discarded.operation)
	|| is_set(bn_ms_received.operation)
	|| is_set(ccms_discarded.operation)
	|| is_set(ccms_out_of_sequence.operation)
	|| is_set(ccms_received.operation)
	|| is_set(ccms_sent.operation)
	|| is_set(dm_ms_received.operation)
	|| is_set(dm_ms_sent.operation)
	|| is_set(dm_rs_received.operation)
	|| is_set(dm_rs_sent.operation)
	|| is_set(lb_ms_received.operation)
	|| is_set(lb_ms_sent.operation)
	|| is_set(lb_rs_bad_data.operation)
	|| is_set(lb_rs_out_of_sequence.operation)
	|| is_set(lb_rs_received.operation)
	|| is_set(lb_rs_sent.operation)
	|| is_set(lc_ks_received.operation)
	|| is_set(lm_ms_received.operation)
	|| is_set(lm_ms_sent.operation)
	|| is_set(lm_rs_received.operation)
	|| is_set(lm_rs_sent.operation)
	|| is_set(lt_rs_received_unexpected.operation)
	|| is_set(sl_ms_received.operation)
	|| is_set(sl_ms_sent.operation)
	|| is_set(sl_rs_received.operation)
	|| is_set(sl_rs_sent.operation);
}

std::string Cfm::Global::LocalMeps::LocalMep::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Cfm::Global::LocalMeps::LocalMep::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ai_ss_received.is_set || is_set(ai_ss_received.operation)) leaf_name_data.push_back(ai_ss_received.get_name_leafdata());
    if (ai_ss_sent.is_set || is_set(ai_ss_sent.operation)) leaf_name_data.push_back(ai_ss_sent.get_name_leafdata());
    if (bn_ms_discarded.is_set || is_set(bn_ms_discarded.operation)) leaf_name_data.push_back(bn_ms_discarded.get_name_leafdata());
    if (bn_ms_received.is_set || is_set(bn_ms_received.operation)) leaf_name_data.push_back(bn_ms_received.get_name_leafdata());
    if (ccms_discarded.is_set || is_set(ccms_discarded.operation)) leaf_name_data.push_back(ccms_discarded.get_name_leafdata());
    if (ccms_out_of_sequence.is_set || is_set(ccms_out_of_sequence.operation)) leaf_name_data.push_back(ccms_out_of_sequence.get_name_leafdata());
    if (ccms_received.is_set || is_set(ccms_received.operation)) leaf_name_data.push_back(ccms_received.get_name_leafdata());
    if (ccms_sent.is_set || is_set(ccms_sent.operation)) leaf_name_data.push_back(ccms_sent.get_name_leafdata());
    if (dm_ms_received.is_set || is_set(dm_ms_received.operation)) leaf_name_data.push_back(dm_ms_received.get_name_leafdata());
    if (dm_ms_sent.is_set || is_set(dm_ms_sent.operation)) leaf_name_data.push_back(dm_ms_sent.get_name_leafdata());
    if (dm_rs_received.is_set || is_set(dm_rs_received.operation)) leaf_name_data.push_back(dm_rs_received.get_name_leafdata());
    if (dm_rs_sent.is_set || is_set(dm_rs_sent.operation)) leaf_name_data.push_back(dm_rs_sent.get_name_leafdata());
    if (lb_ms_received.is_set || is_set(lb_ms_received.operation)) leaf_name_data.push_back(lb_ms_received.get_name_leafdata());
    if (lb_ms_sent.is_set || is_set(lb_ms_sent.operation)) leaf_name_data.push_back(lb_ms_sent.get_name_leafdata());
    if (lb_rs_bad_data.is_set || is_set(lb_rs_bad_data.operation)) leaf_name_data.push_back(lb_rs_bad_data.get_name_leafdata());
    if (lb_rs_out_of_sequence.is_set || is_set(lb_rs_out_of_sequence.operation)) leaf_name_data.push_back(lb_rs_out_of_sequence.get_name_leafdata());
    if (lb_rs_received.is_set || is_set(lb_rs_received.operation)) leaf_name_data.push_back(lb_rs_received.get_name_leafdata());
    if (lb_rs_sent.is_set || is_set(lb_rs_sent.operation)) leaf_name_data.push_back(lb_rs_sent.get_name_leafdata());
    if (lc_ks_received.is_set || is_set(lc_ks_received.operation)) leaf_name_data.push_back(lc_ks_received.get_name_leafdata());
    if (lm_ms_received.is_set || is_set(lm_ms_received.operation)) leaf_name_data.push_back(lm_ms_received.get_name_leafdata());
    if (lm_ms_sent.is_set || is_set(lm_ms_sent.operation)) leaf_name_data.push_back(lm_ms_sent.get_name_leafdata());
    if (lm_rs_received.is_set || is_set(lm_rs_received.operation)) leaf_name_data.push_back(lm_rs_received.get_name_leafdata());
    if (lm_rs_sent.is_set || is_set(lm_rs_sent.operation)) leaf_name_data.push_back(lm_rs_sent.get_name_leafdata());
    if (lt_rs_received_unexpected.is_set || is_set(lt_rs_received_unexpected.operation)) leaf_name_data.push_back(lt_rs_received_unexpected.get_name_leafdata());
    if (sl_ms_received.is_set || is_set(sl_ms_received.operation)) leaf_name_data.push_back(sl_ms_received.get_name_leafdata());
    if (sl_ms_sent.is_set || is_set(sl_ms_sent.operation)) leaf_name_data.push_back(sl_ms_sent.get_name_leafdata());
    if (sl_rs_received.is_set || is_set(sl_rs_received.operation)) leaf_name_data.push_back(sl_rs_received.get_name_leafdata());
    if (sl_rs_sent.is_set || is_set(sl_rs_sent.operation)) leaf_name_data.push_back(sl_rs_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::LocalMeps::LocalMep::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::LocalMeps::LocalMep::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::LocalMeps::LocalMep::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ai-ss-received")
    {
        ai_ss_received = value;
    }
    if(value_path == "ai-ss-sent")
    {
        ai_ss_sent = value;
    }
    if(value_path == "bn-ms-discarded")
    {
        bn_ms_discarded = value;
    }
    if(value_path == "bn-ms-received")
    {
        bn_ms_received = value;
    }
    if(value_path == "ccms-discarded")
    {
        ccms_discarded = value;
    }
    if(value_path == "ccms-out-of-sequence")
    {
        ccms_out_of_sequence = value;
    }
    if(value_path == "ccms-received")
    {
        ccms_received = value;
    }
    if(value_path == "ccms-sent")
    {
        ccms_sent = value;
    }
    if(value_path == "dm-ms-received")
    {
        dm_ms_received = value;
    }
    if(value_path == "dm-ms-sent")
    {
        dm_ms_sent = value;
    }
    if(value_path == "dm-rs-received")
    {
        dm_rs_received = value;
    }
    if(value_path == "dm-rs-sent")
    {
        dm_rs_sent = value;
    }
    if(value_path == "lb-ms-received")
    {
        lb_ms_received = value;
    }
    if(value_path == "lb-ms-sent")
    {
        lb_ms_sent = value;
    }
    if(value_path == "lb-rs-bad-data")
    {
        lb_rs_bad_data = value;
    }
    if(value_path == "lb-rs-out-of-sequence")
    {
        lb_rs_out_of_sequence = value;
    }
    if(value_path == "lb-rs-received")
    {
        lb_rs_received = value;
    }
    if(value_path == "lb-rs-sent")
    {
        lb_rs_sent = value;
    }
    if(value_path == "lc-ks-received")
    {
        lc_ks_received = value;
    }
    if(value_path == "lm-ms-received")
    {
        lm_ms_received = value;
    }
    if(value_path == "lm-ms-sent")
    {
        lm_ms_sent = value;
    }
    if(value_path == "lm-rs-received")
    {
        lm_rs_received = value;
    }
    if(value_path == "lm-rs-sent")
    {
        lm_rs_sent = value;
    }
    if(value_path == "lt-rs-received-unexpected")
    {
        lt_rs_received_unexpected = value;
    }
    if(value_path == "sl-ms-received")
    {
        sl_ms_received = value;
    }
    if(value_path == "sl-ms-sent")
    {
        sl_ms_sent = value;
    }
    if(value_path == "sl-rs-received")
    {
        sl_rs_received = value;
    }
    if(value_path == "sl-rs-sent")
    {
        sl_rs_sent = value;
    }
}

Cfm::Global::LocalMeps::LocalMep::AisStatistics::AisStatistics()
    :
    interval{YType::enumeration, "interval"},
    last_interval{YType::enumeration, "last-interval"},
    last_mac_address{YType::str, "last-mac-address"},
    level{YType::enumeration, "level"},
    receiving_ais{YType::enumeration, "receiving-ais"},
    sending_ais{YType::enumeration, "sending-ais"}
    	,
    receiving_start(std::make_shared<Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart>())
	,sending_start(std::make_shared<Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart>())
{
    receiving_start->parent = this;

    sending_start->parent = this;

    yang_name = "ais-statistics"; yang_parent_name = "local-mep";
}

Cfm::Global::LocalMeps::LocalMep::AisStatistics::~AisStatistics()
{
}

bool Cfm::Global::LocalMeps::LocalMep::AisStatistics::has_data() const
{
    return interval.is_set
	|| last_interval.is_set
	|| last_mac_address.is_set
	|| level.is_set
	|| receiving_ais.is_set
	|| sending_ais.is_set
	|| (receiving_start !=  nullptr && receiving_start->has_data())
	|| (sending_start !=  nullptr && sending_start->has_data());
}

bool Cfm::Global::LocalMeps::LocalMep::AisStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(last_interval.operation)
	|| is_set(last_mac_address.operation)
	|| is_set(level.operation)
	|| is_set(receiving_ais.operation)
	|| is_set(sending_ais.operation)
	|| (receiving_start !=  nullptr && receiving_start->has_operation())
	|| (sending_start !=  nullptr && sending_start->has_operation());
}

std::string Cfm::Global::LocalMeps::LocalMep::AisStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais-statistics";

    return path_buffer.str();

}

const EntityPath Cfm::Global::LocalMeps::LocalMep::AisStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AisStatistics' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (last_interval.is_set || is_set(last_interval.operation)) leaf_name_data.push_back(last_interval.get_name_leafdata());
    if (last_mac_address.is_set || is_set(last_mac_address.operation)) leaf_name_data.push_back(last_mac_address.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (receiving_ais.is_set || is_set(receiving_ais.operation)) leaf_name_data.push_back(receiving_ais.get_name_leafdata());
    if (sending_ais.is_set || is_set(sending_ais.operation)) leaf_name_data.push_back(sending_ais.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::LocalMeps::LocalMep::AisStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receiving-start")
    {
        if(receiving_start == nullptr)
        {
            receiving_start = std::make_shared<Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart>();
        }
        return receiving_start;
    }

    if(child_yang_name == "sending-start")
    {
        if(sending_start == nullptr)
        {
            sending_start = std::make_shared<Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart>();
        }
        return sending_start;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::LocalMeps::LocalMep::AisStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receiving_start != nullptr)
    {
        children["receiving-start"] = receiving_start;
    }

    if(sending_start != nullptr)
    {
        children["sending-start"] = sending_start;
    }

    return children;
}

void Cfm::Global::LocalMeps::LocalMep::AisStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "last-interval")
    {
        last_interval = value;
    }
    if(value_path == "last-mac-address")
    {
        last_mac_address = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "receiving-ais")
    {
        receiving_ais = value;
    }
    if(value_path == "sending-ais")
    {
        sending_ais = value;
    }
}

Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart::SendingStart()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "sending-start"; yang_parent_name = "ais-statistics";
}

Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart::~SendingStart()
{
}

bool Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sending-start";

    return path_buffer.str();

}

const EntityPath Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendingStart' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart::ReceivingStart()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "receiving-start"; yang_parent_name = "ais-statistics";
}

Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart::~ReceivingStart()
{
}

bool Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiving-start";

    return path_buffer.str();

}

const EntityPath Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivingStart' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Cfm::Global::LocalMeps::LocalMep::Defects::Defects()
    :
    ais_received{YType::boolean, "ais-received"},
    auto_missing{YType::uint32, "auto-missing"},
    local_port_status{YType::boolean, "local-port-status"},
    missing{YType::uint32, "missing"},
    peer_meps_that_timed_out{YType::uint32, "peer-meps-that-timed-out"},
    peer_port_status{YType::boolean, "peer-port-status"},
    unexpected{YType::uint32, "unexpected"}
    	,
    remote_meps_defects(std::make_shared<Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects>())
{
    remote_meps_defects->parent = this;

    yang_name = "defects"; yang_parent_name = "local-mep";
}

Cfm::Global::LocalMeps::LocalMep::Defects::~Defects()
{
}

bool Cfm::Global::LocalMeps::LocalMep::Defects::has_data() const
{
    return ais_received.is_set
	|| auto_missing.is_set
	|| local_port_status.is_set
	|| missing.is_set
	|| peer_meps_that_timed_out.is_set
	|| peer_port_status.is_set
	|| unexpected.is_set
	|| (remote_meps_defects !=  nullptr && remote_meps_defects->has_data());
}

bool Cfm::Global::LocalMeps::LocalMep::Defects::has_operation() const
{
    return is_set(operation)
	|| is_set(ais_received.operation)
	|| is_set(auto_missing.operation)
	|| is_set(local_port_status.operation)
	|| is_set(missing.operation)
	|| is_set(peer_meps_that_timed_out.operation)
	|| is_set(peer_port_status.operation)
	|| is_set(unexpected.operation)
	|| (remote_meps_defects !=  nullptr && remote_meps_defects->has_operation());
}

std::string Cfm::Global::LocalMeps::LocalMep::Defects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defects";

    return path_buffer.str();

}

const EntityPath Cfm::Global::LocalMeps::LocalMep::Defects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Defects' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais_received.is_set || is_set(ais_received.operation)) leaf_name_data.push_back(ais_received.get_name_leafdata());
    if (auto_missing.is_set || is_set(auto_missing.operation)) leaf_name_data.push_back(auto_missing.get_name_leafdata());
    if (local_port_status.is_set || is_set(local_port_status.operation)) leaf_name_data.push_back(local_port_status.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (peer_meps_that_timed_out.is_set || is_set(peer_meps_that_timed_out.operation)) leaf_name_data.push_back(peer_meps_that_timed_out.get_name_leafdata());
    if (peer_port_status.is_set || is_set(peer_port_status.operation)) leaf_name_data.push_back(peer_port_status.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::LocalMeps::LocalMep::Defects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-meps-defects")
    {
        if(remote_meps_defects == nullptr)
        {
            remote_meps_defects = std::make_shared<Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects>();
        }
        return remote_meps_defects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::LocalMeps::LocalMep::Defects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_meps_defects != nullptr)
    {
        children["remote-meps-defects"] = remote_meps_defects;
    }

    return children;
}

void Cfm::Global::LocalMeps::LocalMep::Defects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ais-received")
    {
        ais_received = value;
    }
    if(value_path == "auto-missing")
    {
        auto_missing = value;
    }
    if(value_path == "local-port-status")
    {
        local_port_status = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "peer-meps-that-timed-out")
    {
        peer_meps_that_timed_out = value;
    }
    if(value_path == "peer-port-status")
    {
        peer_port_status = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
}

Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects::RemoteMepsDefects()
    :
    invalid_ccm_interval{YType::boolean, "invalid-ccm-interval"},
    invalid_level{YType::boolean, "invalid-level"},
    invalid_maid{YType::boolean, "invalid-maid"},
    loss_threshold_exceeded{YType::boolean, "loss-threshold-exceeded"},
    received_our_mac{YType::boolean, "received-our-mac"},
    received_our_mep_id{YType::boolean, "received-our-mep-id"},
    received_rdi{YType::boolean, "received-rdi"}
{
    yang_name = "remote-meps-defects"; yang_parent_name = "defects";
}

Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects::~RemoteMepsDefects()
{
}

bool Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects::has_data() const
{
    return invalid_ccm_interval.is_set
	|| invalid_level.is_set
	|| invalid_maid.is_set
	|| loss_threshold_exceeded.is_set
	|| received_our_mac.is_set
	|| received_our_mep_id.is_set
	|| received_rdi.is_set;
}

bool Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects::has_operation() const
{
    return is_set(operation)
	|| is_set(invalid_ccm_interval.operation)
	|| is_set(invalid_level.operation)
	|| is_set(invalid_maid.operation)
	|| is_set(loss_threshold_exceeded.operation)
	|| is_set(received_our_mac.operation)
	|| is_set(received_our_mep_id.operation)
	|| is_set(received_rdi.operation);
}

std::string Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-meps-defects";

    return path_buffer.str();

}

const EntityPath Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteMepsDefects' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invalid_ccm_interval.is_set || is_set(invalid_ccm_interval.operation)) leaf_name_data.push_back(invalid_ccm_interval.get_name_leafdata());
    if (invalid_level.is_set || is_set(invalid_level.operation)) leaf_name_data.push_back(invalid_level.get_name_leafdata());
    if (invalid_maid.is_set || is_set(invalid_maid.operation)) leaf_name_data.push_back(invalid_maid.get_name_leafdata());
    if (loss_threshold_exceeded.is_set || is_set(loss_threshold_exceeded.operation)) leaf_name_data.push_back(loss_threshold_exceeded.get_name_leafdata());
    if (received_our_mac.is_set || is_set(received_our_mac.operation)) leaf_name_data.push_back(received_our_mac.get_name_leafdata());
    if (received_our_mep_id.is_set || is_set(received_our_mep_id.operation)) leaf_name_data.push_back(received_our_mep_id.get_name_leafdata());
    if (received_rdi.is_set || is_set(received_rdi.operation)) leaf_name_data.push_back(received_rdi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "invalid-ccm-interval")
    {
        invalid_ccm_interval = value;
    }
    if(value_path == "invalid-level")
    {
        invalid_level = value;
    }
    if(value_path == "invalid-maid")
    {
        invalid_maid = value;
    }
    if(value_path == "loss-threshold-exceeded")
    {
        loss_threshold_exceeded = value;
    }
    if(value_path == "received-our-mac")
    {
        received_our_mac = value;
    }
    if(value_path == "received-our-mep-id")
    {
        received_our_mep_id = value;
    }
    if(value_path == "received-rdi")
    {
        received_rdi = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2S()
{
    yang_name = "peer-me-pv2s"; yang_parent_name = "global";
}

Cfm::Global::PeerMePv2S::~PeerMePv2S()
{
}

bool Cfm::Global::PeerMePv2S::has_data() const
{
    for (std::size_t index=0; index<peer_me_pv2.size(); index++)
    {
        if(peer_me_pv2[index]->has_data())
            return true;
    }
    return false;
}

bool Cfm::Global::PeerMePv2S::has_operation() const
{
    for (std::size_t index=0; index<peer_me_pv2.size(); index++)
    {
        if(peer_me_pv2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cfm::Global::PeerMePv2S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-me-pv2s";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-me-pv2")
    {
        for(auto const & c : peer_me_pv2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2>();
        c->parent = this;
        peer_me_pv2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_me_pv2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cfm::Global::PeerMePv2S::set_value(const std::string & value_path, std::string value)
{
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMePv2()
    :
    domain{YType::str, "domain"},
    service{YType::str, "service"},
    local_mep_id{YType::uint32, "local-mep-id"},
    interface{YType::str, "interface"},
    peer_mep_id{YType::uint32, "peer-mep-id"},
    peer_mac_address{YType::str, "peer-mac-address"},
    domain_xr{YType::str, "domain-xr"},
    interface_xr{YType::str, "interface-xr"},
    level{YType::enumeration, "level"},
    mep_direction{YType::enumeration, "mep-direction"},
    mep_id{YType::uint16, "mep-id"},
    service_xr{YType::str, "service-xr"},
    standby{YType::boolean, "standby"}
    	,
    peer_mep(std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep>())
{
    peer_mep->parent = this;

    yang_name = "peer-me-pv2"; yang_parent_name = "peer-me-pv2s";
}

Cfm::Global::PeerMePv2S::PeerMePv2::~PeerMePv2()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::has_data() const
{
    return domain.is_set
	|| service.is_set
	|| local_mep_id.is_set
	|| interface.is_set
	|| peer_mep_id.is_set
	|| peer_mac_address.is_set
	|| domain_xr.is_set
	|| interface_xr.is_set
	|| level.is_set
	|| mep_direction.is_set
	|| mep_id.is_set
	|| service_xr.is_set
	|| standby.is_set
	|| (peer_mep !=  nullptr && peer_mep->has_data());
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation)
	|| is_set(service.operation)
	|| is_set(local_mep_id.operation)
	|| is_set(interface.operation)
	|| is_set(peer_mep_id.operation)
	|| is_set(peer_mac_address.operation)
	|| is_set(domain_xr.operation)
	|| is_set(interface_xr.operation)
	|| is_set(level.operation)
	|| is_set(mep_direction.operation)
	|| is_set(mep_id.operation)
	|| is_set(service_xr.operation)
	|| is_set(standby.operation)
	|| (peer_mep !=  nullptr && peer_mep->has_operation());
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-me-pv2" <<"[domain='" <<domain <<"']" <<"[service='" <<service <<"']" <<"[local-mep-id='" <<local_mep_id <<"']" <<"[interface='" <<interface <<"']" <<"[peer-mep-id='" <<peer_mep_id <<"']" <<"[peer-mac-address='" <<peer_mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-cfm-oper:cfm/global/peer-me-pv2s/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (local_mep_id.is_set || is_set(local_mep_id.operation)) leaf_name_data.push_back(local_mep_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (peer_mep_id.is_set || is_set(peer_mep_id.operation)) leaf_name_data.push_back(peer_mep_id.get_name_leafdata());
    if (peer_mac_address.is_set || is_set(peer_mac_address.operation)) leaf_name_data.push_back(peer_mac_address.get_name_leafdata());
    if (domain_xr.is_set || is_set(domain_xr.operation)) leaf_name_data.push_back(domain_xr.get_name_leafdata());
    if (interface_xr.is_set || is_set(interface_xr.operation)) leaf_name_data.push_back(interface_xr.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mep_direction.is_set || is_set(mep_direction.operation)) leaf_name_data.push_back(mep_direction.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.operation)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (service_xr.is_set || is_set(service_xr.operation)) leaf_name_data.push_back(service_xr.get_name_leafdata());
    if (standby.is_set || is_set(standby.operation)) leaf_name_data.push_back(standby.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-mep")
    {
        if(peer_mep == nullptr)
        {
            peer_mep = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep>();
        }
        return peer_mep;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_mep != nullptr)
    {
        children["peer-mep"] = peer_mep;
    }

    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "local-mep-id")
    {
        local_mep_id = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "peer-mep-id")
    {
        peer_mep_id = value;
    }
    if(value_path == "peer-mac-address")
    {
        peer_mac_address = value;
    }
    if(value_path == "domain-xr")
    {
        domain_xr = value;
    }
    if(value_path == "interface-xr")
    {
        interface_xr = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "mep-direction")
    {
        mep_direction = value;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
    }
    if(value_path == "service-xr")
    {
        service_xr = value;
    }
    if(value_path == "standby")
    {
        standby = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::PeerMep()
    :
    ccm_offload{YType::enumeration, "ccm-offload"},
    cross_check_state{YType::enumeration, "cross-check-state"},
    mac_address{YType::str, "mac-address"},
    mep_id{YType::uint16, "mep-id"},
    peer_mep_state{YType::enumeration, "peer-mep-state"}
    	,
    error_state(std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState>())
	,last_ccm_received(std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived>())
	,last_up_down_time(std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime>())
	,statistics(std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics>())
{
    error_state->parent = this;

    last_ccm_received->parent = this;

    last_up_down_time->parent = this;

    statistics->parent = this;

    yang_name = "peer-mep"; yang_parent_name = "peer-me-pv2";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::~PeerMep()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::has_data() const
{
    return ccm_offload.is_set
	|| cross_check_state.is_set
	|| mac_address.is_set
	|| mep_id.is_set
	|| peer_mep_state.is_set
	|| (error_state !=  nullptr && error_state->has_data())
	|| (last_ccm_received !=  nullptr && last_ccm_received->has_data())
	|| (last_up_down_time !=  nullptr && last_up_down_time->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::has_operation() const
{
    return is_set(operation)
	|| is_set(ccm_offload.operation)
	|| is_set(cross_check_state.operation)
	|| is_set(mac_address.operation)
	|| is_set(mep_id.operation)
	|| is_set(peer_mep_state.operation)
	|| (error_state !=  nullptr && error_state->has_operation())
	|| (last_ccm_received !=  nullptr && last_ccm_received->has_operation())
	|| (last_up_down_time !=  nullptr && last_up_down_time->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-mep";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerMep' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccm_offload.is_set || is_set(ccm_offload.operation)) leaf_name_data.push_back(ccm_offload.get_name_leafdata());
    if (cross_check_state.is_set || is_set(cross_check_state.operation)) leaf_name_data.push_back(cross_check_state.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.operation)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (peer_mep_state.is_set || is_set(peer_mep_state.operation)) leaf_name_data.push_back(peer_mep_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-state")
    {
        if(error_state == nullptr)
        {
            error_state = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState>();
        }
        return error_state;
    }

    if(child_yang_name == "last-ccm-received")
    {
        if(last_ccm_received == nullptr)
        {
            last_ccm_received = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived>();
        }
        return last_ccm_received;
    }

    if(child_yang_name == "last-up-down-time")
    {
        if(last_up_down_time == nullptr)
        {
            last_up_down_time = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime>();
        }
        return last_up_down_time;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(error_state != nullptr)
    {
        children["error-state"] = error_state;
    }

    if(last_ccm_received != nullptr)
    {
        children["last-ccm-received"] = last_ccm_received;
    }

    if(last_up_down_time != nullptr)
    {
        children["last-up-down-time"] = last_up_down_time;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ccm-offload")
    {
        ccm_offload = value;
    }
    if(value_path == "cross-check-state")
    {
        cross_check_state = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
    }
    if(value_path == "peer-mep-state")
    {
        peer_mep_state = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState::ErrorState()
    :
    invalid_ccm_interval{YType::boolean, "invalid-ccm-interval"},
    invalid_level{YType::boolean, "invalid-level"},
    invalid_maid{YType::boolean, "invalid-maid"},
    loss_threshold_exceeded{YType::boolean, "loss-threshold-exceeded"},
    received_our_mac{YType::boolean, "received-our-mac"},
    received_our_mep_id{YType::boolean, "received-our-mep-id"},
    received_rdi{YType::boolean, "received-rdi"}
{
    yang_name = "error-state"; yang_parent_name = "peer-mep";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState::~ErrorState()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState::has_data() const
{
    return invalid_ccm_interval.is_set
	|| invalid_level.is_set
	|| invalid_maid.is_set
	|| loss_threshold_exceeded.is_set
	|| received_our_mac.is_set
	|| received_our_mep_id.is_set
	|| received_rdi.is_set;
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState::has_operation() const
{
    return is_set(operation)
	|| is_set(invalid_ccm_interval.operation)
	|| is_set(invalid_level.operation)
	|| is_set(invalid_maid.operation)
	|| is_set(loss_threshold_exceeded.operation)
	|| is_set(received_our_mac.operation)
	|| is_set(received_our_mep_id.operation)
	|| is_set(received_rdi.operation);
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-state";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErrorState' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invalid_ccm_interval.is_set || is_set(invalid_ccm_interval.operation)) leaf_name_data.push_back(invalid_ccm_interval.get_name_leafdata());
    if (invalid_level.is_set || is_set(invalid_level.operation)) leaf_name_data.push_back(invalid_level.get_name_leafdata());
    if (invalid_maid.is_set || is_set(invalid_maid.operation)) leaf_name_data.push_back(invalid_maid.get_name_leafdata());
    if (loss_threshold_exceeded.is_set || is_set(loss_threshold_exceeded.operation)) leaf_name_data.push_back(loss_threshold_exceeded.get_name_leafdata());
    if (received_our_mac.is_set || is_set(received_our_mac.operation)) leaf_name_data.push_back(received_our_mac.get_name_leafdata());
    if (received_our_mep_id.is_set || is_set(received_our_mep_id.operation)) leaf_name_data.push_back(received_our_mep_id.get_name_leafdata());
    if (received_rdi.is_set || is_set(received_rdi.operation)) leaf_name_data.push_back(received_rdi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "invalid-ccm-interval")
    {
        invalid_ccm_interval = value;
    }
    if(value_path == "invalid-level")
    {
        invalid_level = value;
    }
    if(value_path == "invalid-maid")
    {
        invalid_maid = value;
    }
    if(value_path == "loss-threshold-exceeded")
    {
        loss_threshold_exceeded = value;
    }
    if(value_path == "received-our-mac")
    {
        received_our_mac = value;
    }
    if(value_path == "received-our-mep-id")
    {
        received_our_mep_id = value;
    }
    if(value_path == "received-rdi")
    {
        received_rdi = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime::LastUpDownTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-up-down-time"; yang_parent_name = "peer-mep";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime::~LastUpDownTime()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-up-down-time";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastUpDownTime' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::LastCcmReceived()
    :
    additional_interface_status{YType::enumeration, "additional-interface-status"},
    interface_status{YType::enumeration, "interface-status"},
    port_status{YType::enumeration, "port-status"},
    raw_data{YType::str, "raw-data"}
    	,
    header(std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header>())
	,mep_name(std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName>())
	,sender_id(std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId>())
{
    header->parent = this;

    mep_name->parent = this;

    sender_id->parent = this;

    yang_name = "last-ccm-received"; yang_parent_name = "peer-mep";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::~LastCcmReceived()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::has_data() const
{
    for (std::size_t index=0; index<organization_specific_tlv.size(); index++)
    {
        if(organization_specific_tlv[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_tlv.size(); index++)
    {
        if(unknown_tlv[index]->has_data())
            return true;
    }
    return additional_interface_status.is_set
	|| interface_status.is_set
	|| port_status.is_set
	|| raw_data.is_set
	|| (header !=  nullptr && header->has_data())
	|| (mep_name !=  nullptr && mep_name->has_data())
	|| (sender_id !=  nullptr && sender_id->has_data());
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::has_operation() const
{
    for (std::size_t index=0; index<organization_specific_tlv.size(); index++)
    {
        if(organization_specific_tlv[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_tlv.size(); index++)
    {
        if(unknown_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(additional_interface_status.operation)
	|| is_set(interface_status.operation)
	|| is_set(port_status.operation)
	|| is_set(raw_data.operation)
	|| (header !=  nullptr && header->has_operation())
	|| (mep_name !=  nullptr && mep_name->has_operation())
	|| (sender_id !=  nullptr && sender_id->has_operation());
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-ccm-received";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastCcmReceived' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additional_interface_status.is_set || is_set(additional_interface_status.operation)) leaf_name_data.push_back(additional_interface_status.get_name_leafdata());
    if (interface_status.is_set || is_set(interface_status.operation)) leaf_name_data.push_back(interface_status.get_name_leafdata());
    if (port_status.is_set || is_set(port_status.operation)) leaf_name_data.push_back(port_status.get_name_leafdata());
    if (raw_data.is_set || is_set(raw_data.operation)) leaf_name_data.push_back(raw_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header>();
        }
        return header;
    }

    if(child_yang_name == "mep-name")
    {
        if(mep_name == nullptr)
        {
            mep_name = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName>();
        }
        return mep_name;
    }

    if(child_yang_name == "organization-specific-tlv")
    {
        for(auto const & c : organization_specific_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv>();
        c->parent = this;
        organization_specific_tlv.push_back(c);
        return c;
    }

    if(child_yang_name == "sender-id")
    {
        if(sender_id == nullptr)
        {
            sender_id = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId>();
        }
        return sender_id;
    }

    if(child_yang_name == "unknown-tlv")
    {
        for(auto const & c : unknown_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv>();
        c->parent = this;
        unknown_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(mep_name != nullptr)
    {
        children["mep-name"] = mep_name;
    }

    for (auto const & c : organization_specific_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    if(sender_id != nullptr)
    {
        children["sender-id"] = sender_id;
    }

    for (auto const & c : unknown_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "additional-interface-status")
    {
        additional_interface_status = value;
    }
    if(value_path == "interface-status")
    {
        interface_status = value;
    }
    if(value_path == "port-status")
    {
        port_status = value;
    }
    if(value_path == "raw-data")
    {
        raw_data = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Header()
    :
    interval{YType::enumeration, "interval"},
    level{YType::enumeration, "level"},
    mdid_format{YType::uint8, "mdid-format"},
    mep_id{YType::uint16, "mep-id"},
    rdi{YType::boolean, "rdi"},
    sequence_number{YType::uint32, "sequence-number"},
    short_ma_name_format{YType::uint8, "short-ma-name-format"},
    version{YType::uint8, "version"}
    	,
    mdid(std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid>())
	,short_ma_name(std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName>())
{
    mdid->parent = this;

    short_ma_name->parent = this;

    yang_name = "header"; yang_parent_name = "last-ccm-received";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::~Header()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::has_data() const
{
    return interval.is_set
	|| level.is_set
	|| mdid_format.is_set
	|| mep_id.is_set
	|| rdi.is_set
	|| sequence_number.is_set
	|| short_ma_name_format.is_set
	|| version.is_set
	|| (mdid !=  nullptr && mdid->has_data())
	|| (short_ma_name !=  nullptr && short_ma_name->has_data());
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(level.operation)
	|| is_set(mdid_format.operation)
	|| is_set(mep_id.operation)
	|| is_set(rdi.operation)
	|| is_set(sequence_number.operation)
	|| is_set(short_ma_name_format.operation)
	|| is_set(version.operation)
	|| (mdid !=  nullptr && mdid->has_operation())
	|| (short_ma_name !=  nullptr && short_ma_name->has_operation());
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Header' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mdid_format.is_set || is_set(mdid_format.operation)) leaf_name_data.push_back(mdid_format.get_name_leafdata());
    if (mep_id.is_set || is_set(mep_id.operation)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (rdi.is_set || is_set(rdi.operation)) leaf_name_data.push_back(rdi.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (short_ma_name_format.is_set || is_set(short_ma_name_format.operation)) leaf_name_data.push_back(short_ma_name_format.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mdid")
    {
        if(mdid == nullptr)
        {
            mdid = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid>();
        }
        return mdid;
    }

    if(child_yang_name == "short-ma-name")
    {
        if(short_ma_name == nullptr)
        {
            short_ma_name = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName>();
        }
        return short_ma_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mdid != nullptr)
    {
        children["mdid"] = mdid;
    }

    if(short_ma_name != nullptr)
    {
        children["short-ma-name"] = short_ma_name;
    }

    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "mdid-format")
    {
        mdid_format = value;
    }
    if(value_path == "mep-id")
    {
        mep_id = value;
    }
    if(value_path == "rdi")
    {
        rdi = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
    if(value_path == "short-ma-name-format")
    {
        short_ma_name_format = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::Mdid()
    :
    dns_like_name{YType::str, "dns-like-name"},
    mdid_data{YType::str, "mdid-data"},
    mdid_format_value{YType::enumeration, "mdid-format-value"},
    string_name{YType::str, "string-name"}
    	,
    mac_name(std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName>())
{
    mac_name->parent = this;

    yang_name = "mdid"; yang_parent_name = "header";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::~Mdid()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::has_data() const
{
    return dns_like_name.is_set
	|| mdid_data.is_set
	|| mdid_format_value.is_set
	|| string_name.is_set
	|| (mac_name !=  nullptr && mac_name->has_data());
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::has_operation() const
{
    return is_set(operation)
	|| is_set(dns_like_name.operation)
	|| is_set(mdid_data.operation)
	|| is_set(mdid_format_value.operation)
	|| is_set(string_name.operation)
	|| (mac_name !=  nullptr && mac_name->has_operation());
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdid";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mdid' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns_like_name.is_set || is_set(dns_like_name.operation)) leaf_name_data.push_back(dns_like_name.get_name_leafdata());
    if (mdid_data.is_set || is_set(mdid_data.operation)) leaf_name_data.push_back(mdid_data.get_name_leafdata());
    if (mdid_format_value.is_set || is_set(mdid_format_value.operation)) leaf_name_data.push_back(mdid_format_value.get_name_leafdata());
    if (string_name.is_set || is_set(string_name.operation)) leaf_name_data.push_back(string_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-name")
    {
        if(mac_name == nullptr)
        {
            mac_name = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName>();
        }
        return mac_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac_name != nullptr)
    {
        children["mac-name"] = mac_name;
    }

    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dns-like-name")
    {
        dns_like_name = value;
    }
    if(value_path == "mdid-data")
    {
        mdid_data = value;
    }
    if(value_path == "mdid-format-value")
    {
        mdid_format_value = value;
    }
    if(value_path == "string-name")
    {
        string_name = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName::MacName()
    :
    integer{YType::uint16, "integer"},
    mac_address{YType::str, "mac-address"}
{
    yang_name = "mac-name"; yang_parent_name = "mdid";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName::~MacName()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName::has_data() const
{
    return integer.is_set
	|| mac_address.is_set;
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName::has_operation() const
{
    return is_set(operation)
	|| is_set(integer.operation)
	|| is_set(mac_address.operation);
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-name";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacName' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (integer.is_set || is_set(integer.operation)) leaf_name_data.push_back(integer.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "integer")
    {
        integer = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::ShortMaName()
    :
    icc_based{YType::str, "icc-based"},
    integer_name{YType::uint16, "integer-name"},
    short_ma_name_data{YType::str, "short-ma-name-data"},
    short_ma_name_format_value{YType::enumeration, "short-ma-name-format-value"},
    string_name{YType::str, "string-name"},
    vlan_id_name{YType::uint16, "vlan-id-name"}
    	,
    vpn_id_name(std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName>())
{
    vpn_id_name->parent = this;

    yang_name = "short-ma-name"; yang_parent_name = "header";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::~ShortMaName()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::has_data() const
{
    return icc_based.is_set
	|| integer_name.is_set
	|| short_ma_name_data.is_set
	|| short_ma_name_format_value.is_set
	|| string_name.is_set
	|| vlan_id_name.is_set
	|| (vpn_id_name !=  nullptr && vpn_id_name->has_data());
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::has_operation() const
{
    return is_set(operation)
	|| is_set(icc_based.operation)
	|| is_set(integer_name.operation)
	|| is_set(short_ma_name_data.operation)
	|| is_set(short_ma_name_format_value.operation)
	|| is_set(string_name.operation)
	|| is_set(vlan_id_name.operation)
	|| (vpn_id_name !=  nullptr && vpn_id_name->has_operation());
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "short-ma-name";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShortMaName' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icc_based.is_set || is_set(icc_based.operation)) leaf_name_data.push_back(icc_based.get_name_leafdata());
    if (integer_name.is_set || is_set(integer_name.operation)) leaf_name_data.push_back(integer_name.get_name_leafdata());
    if (short_ma_name_data.is_set || is_set(short_ma_name_data.operation)) leaf_name_data.push_back(short_ma_name_data.get_name_leafdata());
    if (short_ma_name_format_value.is_set || is_set(short_ma_name_format_value.operation)) leaf_name_data.push_back(short_ma_name_format_value.get_name_leafdata());
    if (string_name.is_set || is_set(string_name.operation)) leaf_name_data.push_back(string_name.get_name_leafdata());
    if (vlan_id_name.is_set || is_set(vlan_id_name.operation)) leaf_name_data.push_back(vlan_id_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpn-id-name")
    {
        if(vpn_id_name == nullptr)
        {
            vpn_id_name = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName>();
        }
        return vpn_id_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vpn_id_name != nullptr)
    {
        children["vpn-id-name"] = vpn_id_name;
    }

    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "icc-based")
    {
        icc_based = value;
    }
    if(value_path == "integer-name")
    {
        integer_name = value;
    }
    if(value_path == "short-ma-name-data")
    {
        short_ma_name_data = value;
    }
    if(value_path == "short-ma-name-format-value")
    {
        short_ma_name_format_value = value;
    }
    if(value_path == "string-name")
    {
        string_name = value;
    }
    if(value_path == "vlan-id-name")
    {
        vlan_id_name = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName::VpnIdName()
    :
    index_{YType::uint32, "index"},
    oui{YType::uint32, "oui"}
{
    yang_name = "vpn-id-name"; yang_parent_name = "short-ma-name";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName::~VpnIdName()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName::has_data() const
{
    return index_.is_set
	|| oui.is_set;
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(oui.operation);
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-id-name";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VpnIdName' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (oui.is_set || is_set(oui.operation)) leaf_name_data.push_back(oui.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "oui")
    {
        oui = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::SenderId()
    :
    management_address{YType::str, "management-address"},
    management_address_domain{YType::str, "management-address-domain"}
    	,
    chassis_id(std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId>())
{
    chassis_id->parent = this;

    yang_name = "sender-id"; yang_parent_name = "last-ccm-received";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::~SenderId()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::has_data() const
{
    return management_address.is_set
	|| management_address_domain.is_set
	|| (chassis_id !=  nullptr && chassis_id->has_data());
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::has_operation() const
{
    return is_set(operation)
	|| is_set(management_address.operation)
	|| is_set(management_address_domain.operation)
	|| (chassis_id !=  nullptr && chassis_id->has_operation());
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (management_address.is_set || is_set(management_address.operation)) leaf_name_data.push_back(management_address.get_name_leafdata());
    if (management_address_domain.is_set || is_set(management_address_domain.operation)) leaf_name_data.push_back(management_address_domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chassis-id")
    {
        if(chassis_id == nullptr)
        {
            chassis_id = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId>();
        }
        return chassis_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(chassis_id != nullptr)
    {
        children["chassis-id"] = chassis_id;
    }

    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "management-address")
    {
        management_address = value;
    }
    if(value_path == "management-address-domain")
    {
        management_address_domain = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisId()
    :
    chassis_id{YType::str, "chassis-id"},
    chassis_id_type{YType::enumeration, "chassis-id-type"},
    chassis_id_type_value{YType::uint8, "chassis-id-type-value"}
    	,
    chassis_id_value(std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue>())
{
    chassis_id_value->parent = this;

    yang_name = "chassis-id"; yang_parent_name = "sender-id";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::~ChassisId()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::has_data() const
{
    return chassis_id.is_set
	|| chassis_id_type.is_set
	|| chassis_id_type_value.is_set
	|| (chassis_id_value !=  nullptr && chassis_id_value->has_data());
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::has_operation() const
{
    return is_set(operation)
	|| is_set(chassis_id.operation)
	|| is_set(chassis_id_type.operation)
	|| is_set(chassis_id_type_value.operation)
	|| (chassis_id_value !=  nullptr && chassis_id_value->has_operation());
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis-id";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChassisId' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id.is_set || is_set(chassis_id.operation)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (chassis_id_type.is_set || is_set(chassis_id_type.operation)) leaf_name_data.push_back(chassis_id_type.get_name_leafdata());
    if (chassis_id_type_value.is_set || is_set(chassis_id_type_value.operation)) leaf_name_data.push_back(chassis_id_type_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chassis-id-value")
    {
        if(chassis_id_value == nullptr)
        {
            chassis_id_value = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue>();
        }
        return chassis_id_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(chassis_id_value != nullptr)
    {
        children["chassis-id-value"] = chassis_id_value;
    }

    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chassis-id")
    {
        chassis_id = value;
    }
    if(value_path == "chassis-id-type")
    {
        chassis_id_type = value;
    }
    if(value_path == "chassis-id-type-value")
    {
        chassis_id_type_value = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue::ChassisIdValue()
    :
    chassis_id_format{YType::enumeration, "chassis-id-format"},
    chassis_id_mac{YType::str, "chassis-id-mac"},
    chassis_id_raw{YType::str, "chassis-id-raw"},
    chassis_id_string{YType::str, "chassis-id-string"}
{
    yang_name = "chassis-id-value"; yang_parent_name = "chassis-id";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue::~ChassisIdValue()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue::has_data() const
{
    return chassis_id_format.is_set
	|| chassis_id_mac.is_set
	|| chassis_id_raw.is_set
	|| chassis_id_string.is_set;
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue::has_operation() const
{
    return is_set(operation)
	|| is_set(chassis_id_format.operation)
	|| is_set(chassis_id_mac.operation)
	|| is_set(chassis_id_raw.operation)
	|| is_set(chassis_id_string.operation);
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis-id-value";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChassisIdValue' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id_format.is_set || is_set(chassis_id_format.operation)) leaf_name_data.push_back(chassis_id_format.get_name_leafdata());
    if (chassis_id_mac.is_set || is_set(chassis_id_mac.operation)) leaf_name_data.push_back(chassis_id_mac.get_name_leafdata());
    if (chassis_id_raw.is_set || is_set(chassis_id_raw.operation)) leaf_name_data.push_back(chassis_id_raw.get_name_leafdata());
    if (chassis_id_string.is_set || is_set(chassis_id_string.operation)) leaf_name_data.push_back(chassis_id_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chassis-id-format")
    {
        chassis_id_format = value;
    }
    if(value_path == "chassis-id-mac")
    {
        chassis_id_mac = value;
    }
    if(value_path == "chassis-id-raw")
    {
        chassis_id_raw = value;
    }
    if(value_path == "chassis-id-string")
    {
        chassis_id_string = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName::MepName()
    :
    name{YType::str, "name"}
{
    yang_name = "mep-name"; yang_parent_name = "last-ccm-received";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName::~MepName()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName::has_data() const
{
    return name.is_set;
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep-name";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MepName' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv::OrganizationSpecificTlv()
    :
    oui{YType::str, "oui"},
    subtype{YType::uint8, "subtype"},
    value_{YType::str, "value"}
{
    yang_name = "organization-specific-tlv"; yang_parent_name = "last-ccm-received";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv::~OrganizationSpecificTlv()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv::has_data() const
{
    return oui.is_set
	|| subtype.is_set
	|| value_.is_set;
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(oui.operation)
	|| is_set(subtype.operation)
	|| is_set(value_.operation);
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "organization-specific-tlv";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OrganizationSpecificTlv' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oui.is_set || is_set(oui.operation)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (subtype.is_set || is_set(subtype.operation)) leaf_name_data.push_back(subtype.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oui")
    {
        oui = value;
    }
    if(value_path == "subtype")
    {
        subtype = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv::UnknownTlv()
    :
    typecode{YType::uint8, "typecode"},
    value_{YType::str, "value"}
{
    yang_name = "unknown-tlv"; yang_parent_name = "last-ccm-received";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv::~UnknownTlv()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv::has_data() const
{
    return typecode.is_set
	|| value_.is_set;
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(typecode.operation)
	|| is_set(value_.operation);
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownTlv' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (typecode.is_set || is_set(typecode.operation)) leaf_name_data.push_back(typecode.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "typecode")
    {
        typecode = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::Statistics()
    :
    ccms_invalid_interval{YType::uint64, "ccms-invalid-interval"},
    ccms_invalid_maid{YType::uint64, "ccms-invalid-maid"},
    ccms_invalid_source_mac_address{YType::uint64, "ccms-invalid-source-mac-address"},
    ccms_our_mep_id{YType::uint64, "ccms-our-mep-id"},
    ccms_out_of_sequence{YType::uint64, "ccms-out-of-sequence"},
    ccms_rdi{YType::uint64, "ccms-rdi"},
    ccms_received{YType::uint64, "ccms-received"},
    ccms_wrong_level{YType::uint64, "ccms-wrong-level"},
    last_ccm_sequence_number{YType::uint32, "last-ccm-sequence-number"}
    	,
    last_ccm_received_time(std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime>())
{
    last_ccm_received_time->parent = this;

    yang_name = "statistics"; yang_parent_name = "peer-mep";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::~Statistics()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::has_data() const
{
    return ccms_invalid_interval.is_set
	|| ccms_invalid_maid.is_set
	|| ccms_invalid_source_mac_address.is_set
	|| ccms_our_mep_id.is_set
	|| ccms_out_of_sequence.is_set
	|| ccms_rdi.is_set
	|| ccms_received.is_set
	|| ccms_wrong_level.is_set
	|| last_ccm_sequence_number.is_set
	|| (last_ccm_received_time !=  nullptr && last_ccm_received_time->has_data());
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(ccms_invalid_interval.operation)
	|| is_set(ccms_invalid_maid.operation)
	|| is_set(ccms_invalid_source_mac_address.operation)
	|| is_set(ccms_our_mep_id.operation)
	|| is_set(ccms_out_of_sequence.operation)
	|| is_set(ccms_rdi.operation)
	|| is_set(ccms_received.operation)
	|| is_set(ccms_wrong_level.operation)
	|| is_set(last_ccm_sequence_number.operation)
	|| (last_ccm_received_time !=  nullptr && last_ccm_received_time->has_operation());
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccms_invalid_interval.is_set || is_set(ccms_invalid_interval.operation)) leaf_name_data.push_back(ccms_invalid_interval.get_name_leafdata());
    if (ccms_invalid_maid.is_set || is_set(ccms_invalid_maid.operation)) leaf_name_data.push_back(ccms_invalid_maid.get_name_leafdata());
    if (ccms_invalid_source_mac_address.is_set || is_set(ccms_invalid_source_mac_address.operation)) leaf_name_data.push_back(ccms_invalid_source_mac_address.get_name_leafdata());
    if (ccms_our_mep_id.is_set || is_set(ccms_our_mep_id.operation)) leaf_name_data.push_back(ccms_our_mep_id.get_name_leafdata());
    if (ccms_out_of_sequence.is_set || is_set(ccms_out_of_sequence.operation)) leaf_name_data.push_back(ccms_out_of_sequence.get_name_leafdata());
    if (ccms_rdi.is_set || is_set(ccms_rdi.operation)) leaf_name_data.push_back(ccms_rdi.get_name_leafdata());
    if (ccms_received.is_set || is_set(ccms_received.operation)) leaf_name_data.push_back(ccms_received.get_name_leafdata());
    if (ccms_wrong_level.is_set || is_set(ccms_wrong_level.operation)) leaf_name_data.push_back(ccms_wrong_level.get_name_leafdata());
    if (last_ccm_sequence_number.is_set || is_set(last_ccm_sequence_number.operation)) leaf_name_data.push_back(last_ccm_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-ccm-received-time")
    {
        if(last_ccm_received_time == nullptr)
        {
            last_ccm_received_time = std::make_shared<Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime>();
        }
        return last_ccm_received_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_ccm_received_time != nullptr)
    {
        children["last-ccm-received-time"] = last_ccm_received_time;
    }

    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ccms-invalid-interval")
    {
        ccms_invalid_interval = value;
    }
    if(value_path == "ccms-invalid-maid")
    {
        ccms_invalid_maid = value;
    }
    if(value_path == "ccms-invalid-source-mac-address")
    {
        ccms_invalid_source_mac_address = value;
    }
    if(value_path == "ccms-our-mep-id")
    {
        ccms_our_mep_id = value;
    }
    if(value_path == "ccms-out-of-sequence")
    {
        ccms_out_of_sequence = value;
    }
    if(value_path == "ccms-rdi")
    {
        ccms_rdi = value;
    }
    if(value_path == "ccms-received")
    {
        ccms_received = value;
    }
    if(value_path == "ccms-wrong-level")
    {
        ccms_wrong_level = value;
    }
    if(value_path == "last-ccm-sequence-number")
    {
        last_ccm_sequence_number = value;
    }
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime::LastCcmReceivedTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-ccm-received-time"; yang_parent_name = "statistics";
}

Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime::~LastCcmReceivedTime()
{
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-ccm-received-time";

    return path_buffer.str();

}

const EntityPath Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastCcmReceivedTime' in Cisco_IOS_XR_ethernet_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

const Enum::YLeaf CfmPmElrIngressActionEnum::elr_ingress_ok {1, "elr-ingress-ok"};
const Enum::YLeaf CfmPmElrIngressActionEnum::elr_ingress_down {2, "elr-ingress-down"};
const Enum::YLeaf CfmPmElrIngressActionEnum::elr_ingress_blocked {3, "elr-ingress-blocked"};
const Enum::YLeaf CfmPmElrIngressActionEnum::elr_ingress_vid {4, "elr-ingress-vid"};

const Enum::YLeaf CfmPmRelayActionEnum::relay_hit {1, "relay-hit"};
const Enum::YLeaf CfmPmRelayActionEnum::relay_fdb {2, "relay-fdb"};
const Enum::YLeaf CfmPmRelayActionEnum::relay_mpdb {3, "relay-mpdb"};

const Enum::YLeaf CfmBagSmanFmtEnum::sman_vlan_id {1, "sman-vlan-id"};
const Enum::YLeaf CfmBagSmanFmtEnum::sman_string {2, "sman-string"};
const Enum::YLeaf CfmBagSmanFmtEnum::sman_uint16 {3, "sman-uint16"};
const Enum::YLeaf CfmBagSmanFmtEnum::sman_vpn_id {4, "sman-vpn-id"};
const Enum::YLeaf CfmBagSmanFmtEnum::sman_icc {32, "sman-icc"};
const Enum::YLeaf CfmBagSmanFmtEnum::sman_unknown {33, "sman-unknown"};

const Enum::YLeaf CfmPmMepDefectEnum::defect_none {0, "defect-none"};
const Enum::YLeaf CfmPmMepDefectEnum::defect_rdi_ccm {1, "defect-rdi-ccm"};
const Enum::YLeaf CfmPmMepDefectEnum::defect_ma_cstatus {2, "defect-ma-cstatus"};
const Enum::YLeaf CfmPmMepDefectEnum::defect_remote_ccm {3, "defect-remote-ccm"};
const Enum::YLeaf CfmPmMepDefectEnum::defect_error_ccm {4, "defect-error-ccm"};
const Enum::YLeaf CfmPmMepDefectEnum::defect_cross_connect_ccm {5, "defect-cross-connect-ccm"};

const Enum::YLeaf CfmPmElrEgressActionEnum::elr_egress_ok {1, "elr-egress-ok"};
const Enum::YLeaf CfmPmElrEgressActionEnum::elr_egress_down {2, "elr-egress-down"};
const Enum::YLeaf CfmPmElrEgressActionEnum::elr_egress_blocked {3, "elr-egress-blocked"};
const Enum::YLeaf CfmPmElrEgressActionEnum::elr_egress_vid {4, "elr-egress-vid"};
const Enum::YLeaf CfmPmElrEgressActionEnum::elr_egress_mac {255, "elr-egress-mac"};

const Enum::YLeaf CfmPmIngressActionEnum::ingress_ok {1, "ingress-ok"};
const Enum::YLeaf CfmPmIngressActionEnum::ingress_down {2, "ingress-down"};
const Enum::YLeaf CfmPmIngressActionEnum::ingress_blocked {3, "ingress-blocked"};
const Enum::YLeaf CfmPmIngressActionEnum::ingress_vid {4, "ingress-vid"};

const Enum::YLeaf CfmBagCcmIntervalEnum::interval_none {0, "interval-none"};
const Enum::YLeaf CfmBagCcmIntervalEnum::interval3_3ms {1, "interval3-3ms"};
const Enum::YLeaf CfmBagCcmIntervalEnum::interval10ms {2, "interval10ms"};
const Enum::YLeaf CfmBagCcmIntervalEnum::interval100ms {3, "interval100ms"};
const Enum::YLeaf CfmBagCcmIntervalEnum::interval1s {4, "interval1s"};
const Enum::YLeaf CfmBagCcmIntervalEnum::interval10s {5, "interval10s"};
const Enum::YLeaf CfmBagCcmIntervalEnum::interval1m {6, "interval1m"};
const Enum::YLeaf CfmBagCcmIntervalEnum::interval10m {7, "interval10m"};

const Enum::YLeaf CfmPmChassisIdFmtEnum::chassis_id_chassis_component {1, "chassis-id-chassis-component"};
const Enum::YLeaf CfmPmChassisIdFmtEnum::chassis_id_interface_alias {2, "chassis-id-interface-alias"};
const Enum::YLeaf CfmPmChassisIdFmtEnum::chassis_id_port_component {3, "chassis-id-port-component"};
const Enum::YLeaf CfmPmChassisIdFmtEnum::chassis_id_mac_address {4, "chassis-id-mac-address"};
const Enum::YLeaf CfmPmChassisIdFmtEnum::chassis_id_network_address {5, "chassis-id-network-address"};
const Enum::YLeaf CfmPmChassisIdFmtEnum::chassis_id_interface_name {6, "chassis-id-interface-name"};
const Enum::YLeaf CfmPmChassisIdFmtEnum::chassis_id_local {7, "chassis-id-local"};
const Enum::YLeaf CfmPmChassisIdFmtEnum::chassis_id_unknown_type {8, "chassis-id-unknown-type"};

const Enum::YLeaf SlaOperOperationEnum::operation_type_configured {0, "operation-type-configured"};
const Enum::YLeaf SlaOperOperationEnum::operation_type_ondemand {1, "operation-type-ondemand"};

const Enum::YLeaf CfmPmLastHopFmtEnum::last_hop_none {0, "last-hop-none"};
const Enum::YLeaf CfmPmLastHopFmtEnum::last_hop_host_name {1, "last-hop-host-name"};
const Enum::YLeaf CfmPmLastHopFmtEnum::last_hop_egress_id {2, "last-hop-egress-id"};

const Enum::YLeaf CfmPmIdFmtEnum::id_format_is_string {0, "id-format-is-string"};
const Enum::YLeaf CfmPmIdFmtEnum::id_format_is_mac_address {1, "id-format-is-mac-address"};
const Enum::YLeaf CfmPmIdFmtEnum::id_format_is_raw_hex {2, "id-format-is-raw-hex"};

const Enum::YLeaf CfmPmRmepStateEnum::peer_mep_idle {1, "peer-mep-idle"};
const Enum::YLeaf CfmPmRmepStateEnum::peer_mep_start {2, "peer-mep-start"};
const Enum::YLeaf CfmPmRmepStateEnum::peer_mep_failed {3, "peer-mep-failed"};
const Enum::YLeaf CfmPmRmepStateEnum::peer_mep_ok {4, "peer-mep-ok"};

const Enum::YLeaf CfmBagCcmOffloadEnum::offload_none {0, "offload-none"};
const Enum::YLeaf CfmBagCcmOffloadEnum::offload_software {1, "offload-software"};
const Enum::YLeaf CfmBagCcmOffloadEnum::offload_hardware {2, "offload-hardware"};

const Enum::YLeaf CfmPmAisReceiveEnum::receive_none {0, "receive-none"};
const Enum::YLeaf CfmPmAisReceiveEnum::receive_ais {1, "receive-ais"};
const Enum::YLeaf CfmPmAisReceiveEnum::receive_lck {2, "receive-lck"};
const Enum::YLeaf CfmPmAisReceiveEnum::receive_direct {3, "receive-direct"};

const Enum::YLeaf CfmMaMpVarietyEnum::mip {0, "mip"};
const Enum::YLeaf CfmMaMpVarietyEnum::up_mep {1, "up-mep"};
const Enum::YLeaf CfmMaMpVarietyEnum::downmep {2, "downmep"};
const Enum::YLeaf CfmMaMpVarietyEnum::unknown_mep {3, "unknown-mep"};

const Enum::YLeaf CfmPmPktActionEnum::packet_processed {0, "packet-processed"};
const Enum::YLeaf CfmPmPktActionEnum::packet_forwarded {1, "packet-forwarded"};
const Enum::YLeaf CfmPmPktActionEnum::unknown_opcode {2, "unknown-opcode"};
const Enum::YLeaf CfmPmPktActionEnum::filter_level {3, "filter-level"};
const Enum::YLeaf CfmPmPktActionEnum::filter_blocked {4, "filter-blocked"};
const Enum::YLeaf CfmPmPktActionEnum::filter_local_mac {5, "filter-local-mac"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_ccm_size {6, "malformed-ccm-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_ccm_mep_id {7, "malformed-ccm-mep-id"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_too_short {8, "malformed-too-short"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_destination_mac_unicast {9, "malformed-destination-mac-unicast"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_destination_mac_multicast {10, "malformed-destination-mac-multicast"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_tlv_offset {11, "malformed-tlv-offset"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_lbm_source_mac {12, "malformed-lbm-source-mac"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_ltr_relay_action {13, "malformed-ltr-relay-action"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_ltr_reply_tlv {14, "malformed-ltr-reply-tlv"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_lt_origin {15, "malformed-lt-origin"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_ltm_target {16, "malformed-ltm-target"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_source_mac {17, "malformed-source-mac"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_header_too_short {18, "malformed-header-too-short"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_tlv_header_overrun {19, "malformed-tlv-header-overrun"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_tlv_overrun {20, "malformed-tlv-overrun"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_duplicate_sender_id {21, "malformed-duplicate-sender-id"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_duplicate_port_status {22, "malformed-duplicate-port-status"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_duplicate_interface_status {23, "malformed-duplicate-interface-status"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_wrong_tlv {24, "malformed-wrong-tlv"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_duplicate_data {25, "malformed-duplicate-data"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_duplicate_ltr_egress_id {26, "malformed-duplicate-ltr-egress-id"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_duplicate_reply_ingress {27, "malformed-duplicate-reply-ingress"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_duplicate_reply_egress {28, "malformed-duplicate-reply-egress"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_duplicate_ltm_egress_id {29, "malformed-duplicate-ltm-egress-id"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_sender_id_size {30, "malformed-sender-id-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_chassis_id_size {31, "malformed-chassis-id-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_mgmt_address_domain_size {32, "malformed-mgmt-address-domain-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_mgmt_address_size {33, "malformed-mgmt-address-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_port_status_size {34, "malformed-port-status-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_port_status {35, "malformed-port-status"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_interface_status_size {36, "malformed-interface-status-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_interface_status {37, "malformed-interface-status"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_organization_specific_tlv_size {38, "malformed-organization-specific-tlv-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_duplicate_mep_name {39, "malformed-duplicate-mep-name"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_duplicate_additional_interface_status {40, "malformed-duplicate-additional-interface-status"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_ltr_egress_id_size {41, "malformed-ltr-egress-id-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_reply_ingress_size {42, "malformed-reply-ingress-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_ingress_action {43, "malformed-ingress-action"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_reply_ingress_mac {44, "malformed-reply-ingress-mac"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_ingress_port_length_size {45, "malformed-ingress-port-length-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_ingress_port_id_length {46, "malformed-ingress-port-id-length"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_ingress_port_id_size {47, "malformed-ingress-port-id-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_reply_egress_size {48, "malformed-reply-egress-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_egress_action {49, "malformed-egress-action"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_reply_egress_mac {50, "malformed-reply-egress-mac"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_egress_port_length_size {51, "malformed-egress-port-length-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_egress_port_id_length {52, "malformed-egress-port-id-length"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_egress_port_id_size {53, "malformed-egress-port-id-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_ltm_egress_id_size {54, "malformed-ltm-egress-id-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_mep_name_size {55, "malformed-mep-name-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_mep_name_name_length {56, "malformed-mep-name-name-length"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_additional_interface_status_size {57, "malformed-additional-interface-status-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_additional_interface_status {58, "malformed-additional-interface-status"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_ccm_interval {59, "malformed-ccm-interval"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_mdid_mac_address_length {60, "malformed-mdid-mac-address-length"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_mdid_length {61, "malformed-mdid-length"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_sman_length {62, "malformed-sman-length"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_sman2_byte_length {63, "malformed-sman2-byte-length"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_sman_vpn_id_length {64, "malformed-sman-vpn-id-length"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_elr_no_reply_tlv {65, "malformed-elr-no-reply-tlv"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_separate_elr_reply_egress {66, "malformed-separate-elr-reply-egress"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_dcm_destination_multicast {67, "malformed-dcm-destination-multicast"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_dcm_embed_length {68, "malformed-dcm-embed-length"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_dcm_embed_level {69, "malformed-dcm-embed-level"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_dcm_embed_version {70, "malformed-dcm-embed-version"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_elr_relay_action {71, "malformed-elr-relay-action"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_elr_tt_ls {73, "malformed-elr-tt-ls"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_elr_ttl_ingress {74, "malformed-elr-ttl-ingress"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_elr_ttl_egress {75, "malformed-elr-ttl-egress"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_elm_destination_unicast {76, "malformed-elm-destination-unicast"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_elm_egress_id {77, "malformed-elm-egress-id"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_dcm_embed_oui {78, "malformed-dcm-embed-oui"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_dcm_embed_opcode {79, "malformed-dcm-embed-opcode"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_elm_constant_zero {80, "malformed-elm-constant-zero"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_elr_timeout_zero {81, "malformed-elr-timeout-zero"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_duplicate_test {82, "malformed-duplicate-test"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_dmm_source_mac {83, "malformed-dmm-source-mac"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_test_size {84, "malformed-test-size"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_dmr_time_stamps {85, "malformed-dmr-time-stamps"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_dm_time_stamp_fmt {86, "malformed-dm-time-stamp-fmt"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_ais_interval {87, "malformed-ais-interval"};
const Enum::YLeaf CfmPmPktActionEnum::filter_interface_down {88, "filter-interface-down"};
const Enum::YLeaf CfmPmPktActionEnum::filter_forward_standby {89, "filter-forward-standby"};
const Enum::YLeaf CfmPmPktActionEnum::malformed_sman_icc_based_length {90, "malformed-sman-icc-based-length"};
const Enum::YLeaf CfmPmPktActionEnum::filter_foward_issu_secondary {120, "filter-foward-issu-secondary"};
const Enum::YLeaf CfmPmPktActionEnum::filter_response_standby {121, "filter-response-standby"};
const Enum::YLeaf CfmPmPktActionEnum::filter_response_issu_secondary {122, "filter-response-issu-secondary"};

const Enum::YLeaf SlaBucketSizeEnum::buckets_per_probe {0, "buckets-per-probe"};
const Enum::YLeaf SlaBucketSizeEnum::probes_per_bucket {1, "probes-per-bucket"};

const Enum::YLeaf CfmPmEltDelayModelEnum::delay_model_invalid {0, "delay-model-invalid"};
const Enum::YLeaf CfmPmEltDelayModelEnum::delay_model_logarithmic {1, "delay-model-logarithmic"};
const Enum::YLeaf CfmPmEltDelayModelEnum::delay_model_constant {2, "delay-model-constant"};

const Enum::YLeaf CfmPmAisTransmitEnum::transmit_none {0, "transmit-none"};
const Enum::YLeaf CfmPmAisTransmitEnum::transmit_ais {1, "transmit-ais"};
const Enum::YLeaf CfmPmAisTransmitEnum::transmit_ais_direct {2, "transmit-ais-direct"};

const Enum::YLeaf CfmPmElrRelayActionEnum::elr_relay_hit {1, "elr-relay-hit"};
const Enum::YLeaf CfmPmElrRelayActionEnum::elr_relay_fdb {2, "elr-relay-fdb"};
const Enum::YLeaf CfmPmElrRelayActionEnum::elr_relay_flood {3, "elr-relay-flood"};
const Enum::YLeaf CfmPmElrRelayActionEnum::elr_relay_drop {4, "elr-relay-drop"};

const Enum::YLeaf CfmPmPortStatusEnum::port_status_blocked {1, "port-status-blocked"};
const Enum::YLeaf CfmPmPortStatusEnum::port_status_up {2, "port-status-up"};
const Enum::YLeaf CfmPmPortStatusEnum::port_status_unknown {3, "port-status-unknown"};

const Enum::YLeaf CfmBagIwStateEnum::interworking_up {0, "interworking-up"};
const Enum::YLeaf CfmBagIwStateEnum::interworking_test {1, "interworking-test"};

const Enum::YLeaf CfmBagMdidFmtEnum::mdid_null {1, "mdid-null"};
const Enum::YLeaf CfmBagMdidFmtEnum::mdid_dns_like {2, "mdid-dns-like"};
const Enum::YLeaf CfmBagMdidFmtEnum::mdid_mac_address {3, "mdid-mac-address"};
const Enum::YLeaf CfmBagMdidFmtEnum::mdid_string {4, "mdid-string"};
const Enum::YLeaf CfmBagMdidFmtEnum::mdid_unknown {5, "mdid-unknown"};

const Enum::YLeaf CfmBagBdidFmtEnum::invalid {0, "invalid"};
const Enum::YLeaf CfmBagBdidFmtEnum::bd_id {1, "bd-id"};
const Enum::YLeaf CfmBagBdidFmtEnum::xc_p2p_id {2, "xc-p2p-id"};
const Enum::YLeaf CfmBagBdidFmtEnum::xc_mp2mp_id {3, "xc-mp2mp-id"};
const Enum::YLeaf CfmBagBdidFmtEnum::down_only {4, "down-only"};

const Enum::YLeaf CfmBagIssuRoleEnum::unknown {0, "unknown"};
const Enum::YLeaf CfmBagIssuRoleEnum::primary {1, "primary"};
const Enum::YLeaf CfmBagIssuRoleEnum::secondary {2, "secondary"};

const Enum::YLeaf CfmBagStpStateEnum::stp_up {0, "stp-up"};
const Enum::YLeaf CfmBagStpStateEnum::stp_blocked {1, "stp-blocked"};
const Enum::YLeaf CfmBagStpStateEnum::stp_unknown {2, "stp-unknown"};

const Enum::YLeaf CfmBagMdLevelEnum::level0 {0, "level0"};
const Enum::YLeaf CfmBagMdLevelEnum::level1 {1, "level1"};
const Enum::YLeaf CfmBagMdLevelEnum::level2 {2, "level2"};
const Enum::YLeaf CfmBagMdLevelEnum::level3 {3, "level3"};
const Enum::YLeaf CfmBagMdLevelEnum::level4 {4, "level4"};
const Enum::YLeaf CfmBagMdLevelEnum::level5 {5, "level5"};
const Enum::YLeaf CfmBagMdLevelEnum::level6 {6, "level6"};
const Enum::YLeaf CfmBagMdLevelEnum::level7 {7, "level7"};
const Enum::YLeaf CfmBagMdLevelEnum::level_invalid {8, "level-invalid"};

const Enum::YLeaf SlaOperPacketPriorityEnum::priority_none {0, "priority-none"};
const Enum::YLeaf SlaOperPacketPriorityEnum::priority_cos {1, "priority-cos"};

const Enum::YLeaf CfmBagAisIntervalEnum::ais_interval_none {0, "ais-interval-none"};
const Enum::YLeaf CfmBagAisIntervalEnum::ais_interval1s {4, "ais-interval1s"};
const Enum::YLeaf CfmBagAisIntervalEnum::ais_interval1m {6, "ais-interval1m"};

const Enum::YLeaf CfmPmRmepXcStateEnum::cross_check_ok {0, "cross-check-ok"};
const Enum::YLeaf CfmPmRmepXcStateEnum::cross_check_missing {1, "cross-check-missing"};
const Enum::YLeaf CfmPmRmepXcStateEnum::cross_check_extra {2, "cross-check-extra"};

const Enum::YLeaf CfmPmLtModeEnum::cfm_pm_lt_mode_basic {1, "cfm-pm-lt-mode-basic"};
const Enum::YLeaf CfmPmLtModeEnum::cfm_pm_lt_mode_exploratory {2, "cfm-pm-lt-mode-exploratory"};

const Enum::YLeaf CfmPmIntfStatusEnum::interface_status_up {1, "interface-status-up"};
const Enum::YLeaf CfmPmIntfStatusEnum::interface_status_down {2, "interface-status-down"};
const Enum::YLeaf CfmPmIntfStatusEnum::interface_status_testing {3, "interface-status-testing"};
const Enum::YLeaf CfmPmIntfStatusEnum::interface_status_unknown {4, "interface-status-unknown"};
const Enum::YLeaf CfmPmIntfStatusEnum::interface_status_dormant {5, "interface-status-dormant"};
const Enum::YLeaf CfmPmIntfStatusEnum::interface_status_not_present {6, "interface-status-not-present"};
const Enum::YLeaf CfmPmIntfStatusEnum::interface_status_lower_layer_down {7, "interface-status-lower-layer-down"};

const Enum::YLeaf CfmBagDirectionEnum::direction_up {0, "direction-up"};
const Enum::YLeaf CfmBagDirectionEnum::direction_down {1, "direction-down"};
const Enum::YLeaf CfmBagDirectionEnum::direction_invalid {2, "direction-invalid"};

const Enum::YLeaf CfmPmEgressActionEnum::egress_ok {1, "egress-ok"};
const Enum::YLeaf CfmPmEgressActionEnum::egress_down {2, "egress-down"};
const Enum::YLeaf CfmPmEgressActionEnum::egress_blocked {3, "egress-blocked"};
const Enum::YLeaf CfmPmEgressActionEnum::egress_vid {4, "egress-vid"};

const Enum::YLeaf CfmPmElmReplyFilterEnum::reply_filter_not_present {0, "reply-filter-not-present"};
const Enum::YLeaf CfmPmElmReplyFilterEnum::reply_filter_default {1, "reply-filter-default"};
const Enum::YLeaf CfmPmElmReplyFilterEnum::reply_filter_vlan_topology {2, "reply-filter-vlan-topology"};
const Enum::YLeaf CfmPmElmReplyFilterEnum::reply_filter_spanning_tree {3, "reply-filter-spanning-tree"};
const Enum::YLeaf CfmPmElmReplyFilterEnum::reply_filter_all_ports {4, "reply-filter-all-ports"};

const Enum::YLeaf CfmAisDirEnum::up {0, "up"};
const Enum::YLeaf CfmAisDirEnum::down {1, "down"};

const Enum::YLeaf CfmPmAddlIntfStatusEnum::unknown {0, "unknown"};
const Enum::YLeaf CfmPmAddlIntfStatusEnum::administratively_down {1, "administratively-down"};
const Enum::YLeaf CfmPmAddlIntfStatusEnum::remote_excessive_errors {2, "remote-excessive-errors"};
const Enum::YLeaf CfmPmAddlIntfStatusEnum::local_excessive_errors {3, "local-excessive-errors"};

const Enum::YLeaf CfmBagOpcodeEnum::reserved {0, "reserved"};
const Enum::YLeaf CfmBagOpcodeEnum::ccm {1, "ccm"};
const Enum::YLeaf CfmBagOpcodeEnum::lbr {2, "lbr"};
const Enum::YLeaf CfmBagOpcodeEnum::lbm {3, "lbm"};
const Enum::YLeaf CfmBagOpcodeEnum::ltr {4, "ltr"};
const Enum::YLeaf CfmBagOpcodeEnum::ltm {5, "ltm"};

const Enum::YLeaf SlaOperTestPatternSchemeEnum::hex {0, "hex"};
const Enum::YLeaf SlaOperTestPatternSchemeEnum::pseudo_random {1, "pseudo-random"};

const Enum::YLeaf CfmPmMepFngStateEnum::fng_reset {1, "fng-reset"};
const Enum::YLeaf CfmPmMepFngStateEnum::fng_defect {2, "fng-defect"};
const Enum::YLeaf CfmPmMepFngStateEnum::fng_report_defect {3, "fng-report-defect"};
const Enum::YLeaf CfmPmMepFngStateEnum::fng_defect_reported {4, "fng-defect-reported"};
const Enum::YLeaf CfmPmMepFngStateEnum::fng_defect_clearing {5, "fng-defect-clearing"};

const Enum::YLeaf CfmPmPortIdFmtEnum::port_id_interface_alias {1, "port-id-interface-alias"};
const Enum::YLeaf CfmPmPortIdFmtEnum::port_id_port_component {2, "port-id-port-component"};
const Enum::YLeaf CfmPmPortIdFmtEnum::port_id_mac_address {3, "port-id-mac-address"};
const Enum::YLeaf CfmPmPortIdFmtEnum::port_id_network_address {4, "port-id-network-address"};
const Enum::YLeaf CfmPmPortIdFmtEnum::port_id_interface_name {5, "port-id-interface-name"};
const Enum::YLeaf CfmPmPortIdFmtEnum::port_id_agent_circuit_id {6, "port-id-agent-circuit-id"};
const Enum::YLeaf CfmPmPortIdFmtEnum::port_id_local {7, "port-id-local"};
const Enum::YLeaf CfmPmPortIdFmtEnum::port_id_unknown {8, "port-id-unknown"};

const Enum::YLeaf SlaOperBucketEnum::bucket_type_bins {0, "bucket-type-bins"};
const Enum::YLeaf SlaOperBucketEnum::bucket_type_samples {1, "bucket-type-samples"};

const Enum::YLeaf SlaRecordableMetricEnum::metric_invalid {0, "metric-invalid"};
const Enum::YLeaf SlaRecordableMetricEnum::metric_round_trip_delay {1, "metric-round-trip-delay"};
const Enum::YLeaf SlaRecordableMetricEnum::metric_one_way_delay_sd {2, "metric-one-way-delay-sd"};
const Enum::YLeaf SlaRecordableMetricEnum::metric_one_way_delay_ds {3, "metric-one-way-delay-ds"};
const Enum::YLeaf SlaRecordableMetricEnum::metric_round_trip_jitter {4, "metric-round-trip-jitter"};
const Enum::YLeaf SlaRecordableMetricEnum::metric_one_way_jitter_sd {5, "metric-one-way-jitter-sd"};
const Enum::YLeaf SlaRecordableMetricEnum::metric_one_way_jitter_ds {6, "metric-one-way-jitter-ds"};
const Enum::YLeaf SlaRecordableMetricEnum::metric_one_way_flr_sd {7, "metric-one-way-flr-sd"};
const Enum::YLeaf SlaRecordableMetricEnum::metric_one_way_flr_ds {8, "metric-one-way-flr-ds"};


}
}

