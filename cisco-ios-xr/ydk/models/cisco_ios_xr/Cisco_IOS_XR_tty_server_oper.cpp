
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tty_server_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tty_server_oper {

Tty::Tty()
    :
    auxiliary_nodes(std::make_shared<Tty::AuxiliaryNodes>())
	,console_nodes(std::make_shared<Tty::ConsoleNodes>())
	,vty_lines(std::make_shared<Tty::VtyLines>())
{
    auxiliary_nodes->parent = this;

    console_nodes->parent = this;

    vty_lines->parent = this;

    yang_name = "tty"; yang_parent_name = "Cisco-IOS-XR-tty-server-oper";
}

Tty::~Tty()
{
}

bool Tty::has_data() const
{
    return (auxiliary_nodes !=  nullptr && auxiliary_nodes->has_data())
	|| (console_nodes !=  nullptr && console_nodes->has_data())
	|| (vty_lines !=  nullptr && vty_lines->has_data());
}

bool Tty::has_operation() const
{
    return is_set(operation)
	|| (auxiliary_nodes !=  nullptr && auxiliary_nodes->has_operation())
	|| (console_nodes !=  nullptr && console_nodes->has_operation())
	|| (vty_lines !=  nullptr && vty_lines->has_operation());
}

std::string Tty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-server-oper:tty";

    return path_buffer.str();

}

const EntityPath Tty::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Tty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auxiliary-nodes")
    {
        if(auxiliary_nodes == nullptr)
        {
            auxiliary_nodes = std::make_shared<Tty::AuxiliaryNodes>();
        }
        return auxiliary_nodes;
    }

    if(child_yang_name == "console-nodes")
    {
        if(console_nodes == nullptr)
        {
            console_nodes = std::make_shared<Tty::ConsoleNodes>();
        }
        return console_nodes;
    }

    if(child_yang_name == "vty-lines")
    {
        if(vty_lines == nullptr)
        {
            vty_lines = std::make_shared<Tty::VtyLines>();
        }
        return vty_lines;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auxiliary_nodes != nullptr)
    {
        children["auxiliary-nodes"] = auxiliary_nodes;
    }

    if(console_nodes != nullptr)
    {
        children["console-nodes"] = console_nodes;
    }

    if(vty_lines != nullptr)
    {
        children["vty-lines"] = vty_lines;
    }

    return children;
}

void Tty::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Tty::clone_ptr() const
{
    return std::make_shared<Tty>();
}

std::string Tty::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Tty::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Tty::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Tty::ConsoleNodes::ConsoleNodes()
{
    yang_name = "console-nodes"; yang_parent_name = "tty";
}

Tty::ConsoleNodes::~ConsoleNodes()
{
}

bool Tty::ConsoleNodes::has_data() const
{
    for (std::size_t index=0; index<console_node.size(); index++)
    {
        if(console_node[index]->has_data())
            return true;
    }
    return false;
}

bool Tty::ConsoleNodes::has_operation() const
{
    for (std::size_t index=0; index<console_node.size(); index++)
    {
        if(console_node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Tty::ConsoleNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-nodes";

    return path_buffer.str();

}

const EntityPath Tty::ConsoleNodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tty-server-oper:tty/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "console-node")
    {
        for(auto const & c : console_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Tty::ConsoleNodes::ConsoleNode>();
        c->parent = this;
        console_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : console_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Tty::ConsoleNodes::set_value(const std::string & value_path, std::string value)
{
}

Tty::ConsoleNodes::ConsoleNode::ConsoleNode()
    :
    id{YType::str, "id"}
    	,
    console_line(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine>())
{
    console_line->parent = this;

    yang_name = "console-node"; yang_parent_name = "console-nodes";
}

Tty::ConsoleNodes::ConsoleNode::~ConsoleNode()
{
}

bool Tty::ConsoleNodes::ConsoleNode::has_data() const
{
    return id.is_set
	|| (console_line !=  nullptr && console_line->has_data());
}

bool Tty::ConsoleNodes::ConsoleNode::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (console_line !=  nullptr && console_line->has_operation());
}

std::string Tty::ConsoleNodes::ConsoleNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-node" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Tty::ConsoleNodes::ConsoleNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tty-server-oper:tty/console-nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "console-line")
    {
        if(console_line == nullptr)
        {
            console_line = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine>();
        }
        return console_line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(console_line != nullptr)
    {
        children["console-line"] = console_line;
    }

    return children;
}

void Tty::ConsoleNodes::ConsoleNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleLine()
    :
    configuration(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration>())
	,console_statistics(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics>())
	,state(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State>())
{
    configuration->parent = this;

    console_statistics->parent = this;

    state->parent = this;

    yang_name = "console-line"; yang_parent_name = "console-node";
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::~ConsoleLine()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::has_data() const
{
    return (configuration !=  nullptr && configuration->has_data())
	|| (console_statistics !=  nullptr && console_statistics->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::has_operation() const
{
    return is_set(operation)
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (console_statistics !=  nullptr && console_statistics->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-line";

    return path_buffer.str();

}

const EntityPath Tty::ConsoleNodes::ConsoleNode::ConsoleLine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConsoleLine' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "console-statistics")
    {
        if(console_statistics == nullptr)
        {
            console_statistics = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics>();
        }
        return console_statistics;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(console_statistics != nullptr)
    {
        children["console-statistics"] = console_statistics;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::set_value(const std::string & value_path, std::string value)
{
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::ConsoleStatistics()
    :
    aaa(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa>())
	,exec(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec>())
	,general_statistics(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics>())
	,rs232(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232>())
{
    aaa->parent = this;

    exec->parent = this;

    general_statistics->parent = this;

    rs232->parent = this;

    yang_name = "console-statistics"; yang_parent_name = "console-line";
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::~ConsoleStatistics()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::has_data() const
{
    return (aaa !=  nullptr && aaa->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (general_statistics !=  nullptr && general_statistics->has_data())
	|| (rs232 !=  nullptr && rs232->has_data());
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::has_operation() const
{
    return is_set(operation)
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (general_statistics !=  nullptr && general_statistics->has_operation())
	|| (rs232 !=  nullptr && rs232->has_operation());
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-statistics";

    return path_buffer.str();

}

const EntityPath Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConsoleStatistics' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa>();
        }
        return aaa;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "general-statistics")
    {
        if(general_statistics == nullptr)
        {
            general_statistics = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics>();
        }
        return general_statistics;
    }

    if(child_yang_name == "rs232")
    {
        if(rs232 == nullptr)
        {
            rs232 = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232>();
        }
        return rs232;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aaa != nullptr)
    {
        children["aaa"] = aaa;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(general_statistics != nullptr)
    {
        children["general-statistics"] = general_statistics;
    }

    if(rs232 != nullptr)
    {
        children["rs232"] = rs232;
    }

    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::set_value(const std::string & value_path, std::string value)
{
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::Rs232()
    :
    baud_rate{YType::uint32, "baud-rate"},
    data_bits{YType::uint32, "data-bits"},
    exec_disabled{YType::boolean, "exec-disabled"},
    framing_error_count{YType::uint32, "framing-error-count"},
    hardware_flow_control_status{YType::uint32, "hardware-flow-control-status"},
    overrun_error_count{YType::uint32, "overrun-error-count"},
    parity_error_count{YType::uint32, "parity-error-count"},
    parity_status{YType::uint32, "parity-status"},
    stop_bits{YType::uint32, "stop-bits"}
{
    yang_name = "rs232"; yang_parent_name = "console-statistics";
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::~Rs232()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::has_data() const
{
    return baud_rate.is_set
	|| data_bits.is_set
	|| exec_disabled.is_set
	|| framing_error_count.is_set
	|| hardware_flow_control_status.is_set
	|| overrun_error_count.is_set
	|| parity_error_count.is_set
	|| parity_status.is_set
	|| stop_bits.is_set;
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::has_operation() const
{
    return is_set(operation)
	|| is_set(baud_rate.operation)
	|| is_set(data_bits.operation)
	|| is_set(exec_disabled.operation)
	|| is_set(framing_error_count.operation)
	|| is_set(hardware_flow_control_status.operation)
	|| is_set(overrun_error_count.operation)
	|| is_set(parity_error_count.operation)
	|| is_set(parity_status.operation)
	|| is_set(stop_bits.operation);
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rs232";

    return path_buffer.str();

}

const EntityPath Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rs232' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (baud_rate.is_set || is_set(baud_rate.operation)) leaf_name_data.push_back(baud_rate.get_name_leafdata());
    if (data_bits.is_set || is_set(data_bits.operation)) leaf_name_data.push_back(data_bits.get_name_leafdata());
    if (exec_disabled.is_set || is_set(exec_disabled.operation)) leaf_name_data.push_back(exec_disabled.get_name_leafdata());
    if (framing_error_count.is_set || is_set(framing_error_count.operation)) leaf_name_data.push_back(framing_error_count.get_name_leafdata());
    if (hardware_flow_control_status.is_set || is_set(hardware_flow_control_status.operation)) leaf_name_data.push_back(hardware_flow_control_status.get_name_leafdata());
    if (overrun_error_count.is_set || is_set(overrun_error_count.operation)) leaf_name_data.push_back(overrun_error_count.get_name_leafdata());
    if (parity_error_count.is_set || is_set(parity_error_count.operation)) leaf_name_data.push_back(parity_error_count.get_name_leafdata());
    if (parity_status.is_set || is_set(parity_status.operation)) leaf_name_data.push_back(parity_status.get_name_leafdata());
    if (stop_bits.is_set || is_set(stop_bits.operation)) leaf_name_data.push_back(stop_bits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "baud-rate")
    {
        baud_rate = value;
    }
    if(value_path == "data-bits")
    {
        data_bits = value;
    }
    if(value_path == "exec-disabled")
    {
        exec_disabled = value;
    }
    if(value_path == "framing-error-count")
    {
        framing_error_count = value;
    }
    if(value_path == "hardware-flow-control-status")
    {
        hardware_flow_control_status = value;
    }
    if(value_path == "overrun-error-count")
    {
        overrun_error_count = value;
    }
    if(value_path == "parity-error-count")
    {
        parity_error_count = value;
    }
    if(value_path == "parity-status")
    {
        parity_status = value;
    }
    if(value_path == "stop-bits")
    {
        stop_bits = value;
    }
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::GeneralStatistics()
    :
    absolute_timeout{YType::uint32, "absolute-timeout"},
    async_interface{YType::boolean, "async-interface"},
    domain_lookup_enabled{YType::boolean, "domain-lookup-enabled"},
    flow_control_start_character{YType::int8, "flow-control-start-character"},
    flow_control_stop_character{YType::int8, "flow-control-stop-character"},
    idle_time{YType::uint32, "idle-time"},
    motd_banner_enabled{YType::boolean, "motd-banner-enabled"},
    private_flag{YType::boolean, "private-flag"},
    terminal_length{YType::uint32, "terminal-length"},
    terminal_type{YType::str, "terminal-type"},
    terminal_width{YType::uint32, "terminal-width"}
{
    yang_name = "general-statistics"; yang_parent_name = "console-statistics";
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::~GeneralStatistics()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::has_data() const
{
    return absolute_timeout.is_set
	|| async_interface.is_set
	|| domain_lookup_enabled.is_set
	|| flow_control_start_character.is_set
	|| flow_control_stop_character.is_set
	|| idle_time.is_set
	|| motd_banner_enabled.is_set
	|| private_flag.is_set
	|| terminal_length.is_set
	|| terminal_type.is_set
	|| terminal_width.is_set;
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(absolute_timeout.operation)
	|| is_set(async_interface.operation)
	|| is_set(domain_lookup_enabled.operation)
	|| is_set(flow_control_start_character.operation)
	|| is_set(flow_control_stop_character.operation)
	|| is_set(idle_time.operation)
	|| is_set(motd_banner_enabled.operation)
	|| is_set(private_flag.operation)
	|| is_set(terminal_length.operation)
	|| is_set(terminal_type.operation)
	|| is_set(terminal_width.operation);
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-statistics";

    return path_buffer.str();

}

const EntityPath Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GeneralStatistics' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_timeout.is_set || is_set(absolute_timeout.operation)) leaf_name_data.push_back(absolute_timeout.get_name_leafdata());
    if (async_interface.is_set || is_set(async_interface.operation)) leaf_name_data.push_back(async_interface.get_name_leafdata());
    if (domain_lookup_enabled.is_set || is_set(domain_lookup_enabled.operation)) leaf_name_data.push_back(domain_lookup_enabled.get_name_leafdata());
    if (flow_control_start_character.is_set || is_set(flow_control_start_character.operation)) leaf_name_data.push_back(flow_control_start_character.get_name_leafdata());
    if (flow_control_stop_character.is_set || is_set(flow_control_stop_character.operation)) leaf_name_data.push_back(flow_control_stop_character.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.operation)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (motd_banner_enabled.is_set || is_set(motd_banner_enabled.operation)) leaf_name_data.push_back(motd_banner_enabled.get_name_leafdata());
    if (private_flag.is_set || is_set(private_flag.operation)) leaf_name_data.push_back(private_flag.get_name_leafdata());
    if (terminal_length.is_set || is_set(terminal_length.operation)) leaf_name_data.push_back(terminal_length.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.operation)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (terminal_width.is_set || is_set(terminal_width.operation)) leaf_name_data.push_back(terminal_width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "absolute-timeout")
    {
        absolute_timeout = value;
    }
    if(value_path == "async-interface")
    {
        async_interface = value;
    }
    if(value_path == "domain-lookup-enabled")
    {
        domain_lookup_enabled = value;
    }
    if(value_path == "flow-control-start-character")
    {
        flow_control_start_character = value;
    }
    if(value_path == "flow-control-stop-character")
    {
        flow_control_stop_character = value;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
    }
    if(value_path == "motd-banner-enabled")
    {
        motd_banner_enabled = value;
    }
    if(value_path == "private-flag")
    {
        private_flag = value;
    }
    if(value_path == "terminal-length")
    {
        terminal_length = value;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
    }
    if(value_path == "terminal-width")
    {
        terminal_width = value;
    }
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::Exec()
    :
    time_stamp_enabled{YType::boolean, "time-stamp-enabled"}
{
    yang_name = "exec"; yang_parent_name = "console-statistics";
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::~Exec()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::has_data() const
{
    return time_stamp_enabled.is_set;
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::has_operation() const
{
    return is_set(operation)
	|| is_set(time_stamp_enabled.operation);
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";

    return path_buffer.str();

}

const EntityPath Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exec' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_stamp_enabled.is_set || is_set(time_stamp_enabled.operation)) leaf_name_data.push_back(time_stamp_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-stamp-enabled")
    {
        time_stamp_enabled = value;
    }
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::Aaa()
    :
    user_name{YType::str, "user-name"}
{
    yang_name = "aaa"; yang_parent_name = "console-statistics";
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::~Aaa()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::has_data() const
{
    return user_name.is_set;
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::has_operation() const
{
    return is_set(operation)
	|| is_set(user_name.operation);
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";

    return path_buffer.str();

}

const EntityPath Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aaa' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_name.is_set || is_set(user_name.operation)) leaf_name_data.push_back(user_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "user-name")
    {
        user_name = value;
    }
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::State()
    :
    general(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General>())
	,template_(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_>())
{
    general->parent = this;

    template_->parent = this;

    yang_name = "state"; yang_parent_name = "console-line";
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::~State()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::has_data() const
{
    return (general !=  nullptr && general->has_data())
	|| (template_ !=  nullptr && template_->has_data());
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::has_operation() const
{
    return is_set(operation)
	|| (general !=  nullptr && general->has_operation())
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "general")
    {
        if(general == nullptr)
        {
            general = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General>();
        }
        return general;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(general != nullptr)
    {
        children["general"] = general;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::set_value(const std::string & value_path, std::string value)
{
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_::Template_()
    :
    name{YType::str, "name"}
{
    yang_name = "template"; yang_parent_name = "state";
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_::~Template_()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_::has_data() const
{
    return name.is_set;
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";

    return path_buffer.str();

}

const EntityPath Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Template_' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::General()
    :
    general_state{YType::enumeration, "general-state"},
    operation_{YType::enumeration, "operation"}
{
    yang_name = "general"; yang_parent_name = "state";
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::~General()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::has_data() const
{
    return general_state.is_set
	|| operation_.is_set;
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::has_operation() const
{
    return is_set(operation)
	|| is_set(general_state.operation)
	|| is_set(operation_.operation);
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general";

    return path_buffer.str();

}

const EntityPath Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'General' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (general_state.is_set || is_set(general_state.operation)) leaf_name_data.push_back(general_state.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "general-state")
    {
        general_state = value;
    }
    if(value_path == "operation")
    {
        operation_ = value;
    }
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::Configuration()
    :
    connection_configuration(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration>())
{
    connection_configuration->parent = this;

    yang_name = "configuration"; yang_parent_name = "console-line";
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::~Configuration()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::has_data() const
{
    return (connection_configuration !=  nullptr && connection_configuration->has_data());
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::has_operation() const
{
    return is_set(operation)
	|| (connection_configuration !=  nullptr && connection_configuration->has_operation());
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";

    return path_buffer.str();

}

const EntityPath Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Configuration' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection-configuration")
    {
        if(connection_configuration == nullptr)
        {
            connection_configuration = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration>();
        }
        return connection_configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connection_configuration != nullptr)
    {
        children["connection-configuration"] = connection_configuration;
    }

    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::set_value(const std::string & value_path, std::string value)
{
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::ConnectionConfiguration()
    :
    acl_in{YType::str, "acl-in"},
    acl_out{YType::str, "acl-out"}
    	,
    transport_input(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput>())
{
    transport_input->parent = this;

    yang_name = "connection-configuration"; yang_parent_name = "configuration";
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::~ConnectionConfiguration()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::has_data() const
{
    return acl_in.is_set
	|| acl_out.is_set
	|| (transport_input !=  nullptr && transport_input->has_data());
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_in.operation)
	|| is_set(acl_out.operation)
	|| (transport_input !=  nullptr && transport_input->has_operation());
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-configuration";

    return path_buffer.str();

}

const EntityPath Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionConfiguration' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_in.is_set || is_set(acl_in.operation)) leaf_name_data.push_back(acl_in.get_name_leafdata());
    if (acl_out.is_set || is_set(acl_out.operation)) leaf_name_data.push_back(acl_out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport-input")
    {
        if(transport_input == nullptr)
        {
            transport_input = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput>();
        }
        return transport_input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transport_input != nullptr)
    {
        children["transport-input"] = transport_input;
    }

    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-in")
    {
        acl_in = value;
    }
    if(value_path == "acl-out")
    {
        acl_out = value;
    }
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::TransportInput()
    :
    none{YType::int32, "none"},
    protocol1{YType::enumeration, "protocol1"},
    protocol2{YType::enumeration, "protocol2"},
    select{YType::enumeration, "select"}
{
    yang_name = "transport-input"; yang_parent_name = "connection-configuration";
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::~TransportInput()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::has_data() const
{
    return none.is_set
	|| protocol1.is_set
	|| protocol2.is_set
	|| select.is_set;
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| is_set(protocol1.operation)
	|| is_set(protocol2.operation)
	|| is_set(select.operation);
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-input";

    return path_buffer.str();

}

const EntityPath Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransportInput' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (protocol1.is_set || is_set(protocol1.operation)) leaf_name_data.push_back(protocol1.get_name_leafdata());
    if (protocol2.is_set || is_set(protocol2.operation)) leaf_name_data.push_back(protocol2.get_name_leafdata());
    if (select.is_set || is_set(select.operation)) leaf_name_data.push_back(select.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "protocol1")
    {
        protocol1 = value;
    }
    if(value_path == "protocol2")
    {
        protocol2 = value;
    }
    if(value_path == "select")
    {
        select = value;
    }
}

Tty::VtyLines::VtyLines()
{
    yang_name = "vty-lines"; yang_parent_name = "tty";
}

Tty::VtyLines::~VtyLines()
{
}

bool Tty::VtyLines::has_data() const
{
    for (std::size_t index=0; index<vty_line.size(); index++)
    {
        if(vty_line[index]->has_data())
            return true;
    }
    return false;
}

bool Tty::VtyLines::has_operation() const
{
    for (std::size_t index=0; index<vty_line.size(); index++)
    {
        if(vty_line[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Tty::VtyLines::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-lines";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tty-server-oper:tty/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::VtyLines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vty-line")
    {
        for(auto const & c : vty_line)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Tty::VtyLines::VtyLine>();
        c->parent = this;
        vty_line.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vty_line)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Tty::VtyLines::set_value(const std::string & value_path, std::string value)
{
}

Tty::VtyLines::VtyLine::VtyLine()
    :
    line_number{YType::int32, "line-number"}
    	,
    configuration(std::make_shared<Tty::VtyLines::VtyLine::Configuration>())
	,sessions(std::make_shared<Tty::VtyLines::VtyLine::Sessions>())
	,state(std::make_shared<Tty::VtyLines::VtyLine::State>())
	,vty_statistics(std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics>())
{
    configuration->parent = this;

    sessions->parent = this;

    state->parent = this;

    vty_statistics->parent = this;

    yang_name = "vty-line"; yang_parent_name = "vty-lines";
}

Tty::VtyLines::VtyLine::~VtyLine()
{
}

bool Tty::VtyLines::VtyLine::has_data() const
{
    return line_number.is_set
	|| (configuration !=  nullptr && configuration->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (vty_statistics !=  nullptr && vty_statistics->has_data());
}

bool Tty::VtyLines::VtyLine::has_operation() const
{
    return is_set(operation)
	|| is_set(line_number.operation)
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (vty_statistics !=  nullptr && vty_statistics->has_operation());
}

std::string Tty::VtyLines::VtyLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-line" <<"[line-number='" <<line_number <<"']";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::VtyLine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tty-server-oper:tty/vty-lines/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_number.is_set || is_set(line_number.operation)) leaf_name_data.push_back(line_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Tty::VtyLines::VtyLine::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Tty::VtyLines::VtyLine::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Tty::VtyLines::VtyLine::State>();
        }
        return state;
    }

    if(child_yang_name == "vty-statistics")
    {
        if(vty_statistics == nullptr)
        {
            vty_statistics = std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics>();
        }
        return vty_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(vty_statistics != nullptr)
    {
        children["vty-statistics"] = vty_statistics;
    }

    return children;
}

void Tty::VtyLines::VtyLine::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line-number")
    {
        line_number = value;
    }
}

Tty::VtyLines::VtyLine::VtyStatistics::VtyStatistics()
    :
    aaa(std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::Aaa>())
	,connection(std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::Connection>())
	,exec(std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::Exec>())
	,general_statistics(std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics>())
{
    aaa->parent = this;

    connection->parent = this;

    exec->parent = this;

    general_statistics->parent = this;

    yang_name = "vty-statistics"; yang_parent_name = "vty-line";
}

Tty::VtyLines::VtyLine::VtyStatistics::~VtyStatistics()
{
}

bool Tty::VtyLines::VtyLine::VtyStatistics::has_data() const
{
    return (aaa !=  nullptr && aaa->has_data())
	|| (connection !=  nullptr && connection->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (general_statistics !=  nullptr && general_statistics->has_data());
}

bool Tty::VtyLines::VtyLine::VtyStatistics::has_operation() const
{
    return is_set(operation)
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (connection !=  nullptr && connection->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (general_statistics !=  nullptr && general_statistics->has_operation());
}

std::string Tty::VtyLines::VtyLine::VtyStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-statistics";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::VtyLine::VtyStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VtyStatistics' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::VtyStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::Aaa>();
        }
        return aaa;
    }

    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "general-statistics")
    {
        if(general_statistics == nullptr)
        {
            general_statistics = std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics>();
        }
        return general_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::VtyStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aaa != nullptr)
    {
        children["aaa"] = aaa;
    }

    if(connection != nullptr)
    {
        children["connection"] = connection;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(general_statistics != nullptr)
    {
        children["general-statistics"] = general_statistics;
    }

    return children;
}

void Tty::VtyLines::VtyLine::VtyStatistics::set_value(const std::string & value_path, std::string value)
{
}

Tty::VtyLines::VtyLine::VtyStatistics::Connection::Connection()
    :
    host_address_family{YType::uint32, "host-address-family"},
    incoming_host_address{YType::str, "incoming-host-address"},
    service{YType::uint32, "service"}
{
    yang_name = "connection"; yang_parent_name = "vty-statistics";
}

Tty::VtyLines::VtyLine::VtyStatistics::Connection::~Connection()
{
}

bool Tty::VtyLines::VtyLine::VtyStatistics::Connection::has_data() const
{
    return host_address_family.is_set
	|| incoming_host_address.is_set
	|| service.is_set;
}

bool Tty::VtyLines::VtyLine::VtyStatistics::Connection::has_operation() const
{
    return is_set(operation)
	|| is_set(host_address_family.operation)
	|| is_set(incoming_host_address.operation)
	|| is_set(service.operation);
}

std::string Tty::VtyLines::VtyLine::VtyStatistics::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::VtyLine::VtyStatistics::Connection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connection' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_address_family.is_set || is_set(host_address_family.operation)) leaf_name_data.push_back(host_address_family.get_name_leafdata());
    if (incoming_host_address.is_set || is_set(incoming_host_address.operation)) leaf_name_data.push_back(incoming_host_address.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::VtyStatistics::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::VtyStatistics::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::VtyLines::VtyLine::VtyStatistics::Connection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-address-family")
    {
        host_address_family = value;
    }
    if(value_path == "incoming-host-address")
    {
        incoming_host_address = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
}

Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::GeneralStatistics()
    :
    absolute_timeout{YType::uint32, "absolute-timeout"},
    async_interface{YType::boolean, "async-interface"},
    domain_lookup_enabled{YType::boolean, "domain-lookup-enabled"},
    flow_control_start_character{YType::int8, "flow-control-start-character"},
    flow_control_stop_character{YType::int8, "flow-control-stop-character"},
    idle_time{YType::uint32, "idle-time"},
    motd_banner_enabled{YType::boolean, "motd-banner-enabled"},
    private_flag{YType::boolean, "private-flag"},
    terminal_length{YType::uint32, "terminal-length"},
    terminal_type{YType::str, "terminal-type"},
    terminal_width{YType::uint32, "terminal-width"}
{
    yang_name = "general-statistics"; yang_parent_name = "vty-statistics";
}

Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::~GeneralStatistics()
{
}

bool Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::has_data() const
{
    return absolute_timeout.is_set
	|| async_interface.is_set
	|| domain_lookup_enabled.is_set
	|| flow_control_start_character.is_set
	|| flow_control_stop_character.is_set
	|| idle_time.is_set
	|| motd_banner_enabled.is_set
	|| private_flag.is_set
	|| terminal_length.is_set
	|| terminal_type.is_set
	|| terminal_width.is_set;
}

bool Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(absolute_timeout.operation)
	|| is_set(async_interface.operation)
	|| is_set(domain_lookup_enabled.operation)
	|| is_set(flow_control_start_character.operation)
	|| is_set(flow_control_stop_character.operation)
	|| is_set(idle_time.operation)
	|| is_set(motd_banner_enabled.operation)
	|| is_set(private_flag.operation)
	|| is_set(terminal_length.operation)
	|| is_set(terminal_type.operation)
	|| is_set(terminal_width.operation);
}

std::string Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-statistics";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GeneralStatistics' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_timeout.is_set || is_set(absolute_timeout.operation)) leaf_name_data.push_back(absolute_timeout.get_name_leafdata());
    if (async_interface.is_set || is_set(async_interface.operation)) leaf_name_data.push_back(async_interface.get_name_leafdata());
    if (domain_lookup_enabled.is_set || is_set(domain_lookup_enabled.operation)) leaf_name_data.push_back(domain_lookup_enabled.get_name_leafdata());
    if (flow_control_start_character.is_set || is_set(flow_control_start_character.operation)) leaf_name_data.push_back(flow_control_start_character.get_name_leafdata());
    if (flow_control_stop_character.is_set || is_set(flow_control_stop_character.operation)) leaf_name_data.push_back(flow_control_stop_character.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.operation)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (motd_banner_enabled.is_set || is_set(motd_banner_enabled.operation)) leaf_name_data.push_back(motd_banner_enabled.get_name_leafdata());
    if (private_flag.is_set || is_set(private_flag.operation)) leaf_name_data.push_back(private_flag.get_name_leafdata());
    if (terminal_length.is_set || is_set(terminal_length.operation)) leaf_name_data.push_back(terminal_length.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.operation)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (terminal_width.is_set || is_set(terminal_width.operation)) leaf_name_data.push_back(terminal_width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "absolute-timeout")
    {
        absolute_timeout = value;
    }
    if(value_path == "async-interface")
    {
        async_interface = value;
    }
    if(value_path == "domain-lookup-enabled")
    {
        domain_lookup_enabled = value;
    }
    if(value_path == "flow-control-start-character")
    {
        flow_control_start_character = value;
    }
    if(value_path == "flow-control-stop-character")
    {
        flow_control_stop_character = value;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
    }
    if(value_path == "motd-banner-enabled")
    {
        motd_banner_enabled = value;
    }
    if(value_path == "private-flag")
    {
        private_flag = value;
    }
    if(value_path == "terminal-length")
    {
        terminal_length = value;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
    }
    if(value_path == "terminal-width")
    {
        terminal_width = value;
    }
}

Tty::VtyLines::VtyLine::VtyStatistics::Exec::Exec()
    :
    time_stamp_enabled{YType::boolean, "time-stamp-enabled"}
{
    yang_name = "exec"; yang_parent_name = "vty-statistics";
}

Tty::VtyLines::VtyLine::VtyStatistics::Exec::~Exec()
{
}

bool Tty::VtyLines::VtyLine::VtyStatistics::Exec::has_data() const
{
    return time_stamp_enabled.is_set;
}

bool Tty::VtyLines::VtyLine::VtyStatistics::Exec::has_operation() const
{
    return is_set(operation)
	|| is_set(time_stamp_enabled.operation);
}

std::string Tty::VtyLines::VtyLine::VtyStatistics::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::VtyLine::VtyStatistics::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exec' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_stamp_enabled.is_set || is_set(time_stamp_enabled.operation)) leaf_name_data.push_back(time_stamp_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::VtyStatistics::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::VtyStatistics::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::VtyLines::VtyLine::VtyStatistics::Exec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-stamp-enabled")
    {
        time_stamp_enabled = value;
    }
}

Tty::VtyLines::VtyLine::VtyStatistics::Aaa::Aaa()
    :
    user_name{YType::str, "user-name"}
{
    yang_name = "aaa"; yang_parent_name = "vty-statistics";
}

Tty::VtyLines::VtyLine::VtyStatistics::Aaa::~Aaa()
{
}

bool Tty::VtyLines::VtyLine::VtyStatistics::Aaa::has_data() const
{
    return user_name.is_set;
}

bool Tty::VtyLines::VtyLine::VtyStatistics::Aaa::has_operation() const
{
    return is_set(operation)
	|| is_set(user_name.operation);
}

std::string Tty::VtyLines::VtyLine::VtyStatistics::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::VtyLine::VtyStatistics::Aaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aaa' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_name.is_set || is_set(user_name.operation)) leaf_name_data.push_back(user_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::VtyStatistics::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::VtyStatistics::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::VtyLines::VtyLine::VtyStatistics::Aaa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "user-name")
    {
        user_name = value;
    }
}

Tty::VtyLines::VtyLine::State::State()
    :
    general(std::make_shared<Tty::VtyLines::VtyLine::State::General>())
	,template_(std::make_shared<Tty::VtyLines::VtyLine::State::Template_>())
{
    general->parent = this;

    template_->parent = this;

    yang_name = "state"; yang_parent_name = "vty-line";
}

Tty::VtyLines::VtyLine::State::~State()
{
}

bool Tty::VtyLines::VtyLine::State::has_data() const
{
    return (general !=  nullptr && general->has_data())
	|| (template_ !=  nullptr && template_->has_data());
}

bool Tty::VtyLines::VtyLine::State::has_operation() const
{
    return is_set(operation)
	|| (general !=  nullptr && general->has_operation())
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Tty::VtyLines::VtyLine::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::VtyLine::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "general")
    {
        if(general == nullptr)
        {
            general = std::make_shared<Tty::VtyLines::VtyLine::State::General>();
        }
        return general;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Tty::VtyLines::VtyLine::State::Template_>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(general != nullptr)
    {
        children["general"] = general;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    return children;
}

void Tty::VtyLines::VtyLine::State::set_value(const std::string & value_path, std::string value)
{
}

Tty::VtyLines::VtyLine::State::Template_::Template_()
    :
    name{YType::str, "name"}
{
    yang_name = "template"; yang_parent_name = "state";
}

Tty::VtyLines::VtyLine::State::Template_::~Template_()
{
}

bool Tty::VtyLines::VtyLine::State::Template_::has_data() const
{
    return name.is_set;
}

bool Tty::VtyLines::VtyLine::State::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Tty::VtyLines::VtyLine::State::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::VtyLine::State::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Template_' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::State::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::State::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::VtyLines::VtyLine::State::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Tty::VtyLines::VtyLine::State::General::General()
    :
    general_state{YType::enumeration, "general-state"},
    operation_{YType::enumeration, "operation"}
{
    yang_name = "general"; yang_parent_name = "state";
}

Tty::VtyLines::VtyLine::State::General::~General()
{
}

bool Tty::VtyLines::VtyLine::State::General::has_data() const
{
    return general_state.is_set
	|| operation_.is_set;
}

bool Tty::VtyLines::VtyLine::State::General::has_operation() const
{
    return is_set(operation)
	|| is_set(general_state.operation)
	|| is_set(operation_.operation);
}

std::string Tty::VtyLines::VtyLine::State::General::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::VtyLine::State::General::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'General' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (general_state.is_set || is_set(general_state.operation)) leaf_name_data.push_back(general_state.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::State::General::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::State::General::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::VtyLines::VtyLine::State::General::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "general-state")
    {
        general_state = value;
    }
    if(value_path == "operation")
    {
        operation_ = value;
    }
}

Tty::VtyLines::VtyLine::Configuration::Configuration()
    :
    connection_configuration(std::make_shared<Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration>())
{
    connection_configuration->parent = this;

    yang_name = "configuration"; yang_parent_name = "vty-line";
}

Tty::VtyLines::VtyLine::Configuration::~Configuration()
{
}

bool Tty::VtyLines::VtyLine::Configuration::has_data() const
{
    return (connection_configuration !=  nullptr && connection_configuration->has_data());
}

bool Tty::VtyLines::VtyLine::Configuration::has_operation() const
{
    return is_set(operation)
	|| (connection_configuration !=  nullptr && connection_configuration->has_operation());
}

std::string Tty::VtyLines::VtyLine::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::VtyLine::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Configuration' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection-configuration")
    {
        if(connection_configuration == nullptr)
        {
            connection_configuration = std::make_shared<Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration>();
        }
        return connection_configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connection_configuration != nullptr)
    {
        children["connection-configuration"] = connection_configuration;
    }

    return children;
}

void Tty::VtyLines::VtyLine::Configuration::set_value(const std::string & value_path, std::string value)
{
}

Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::ConnectionConfiguration()
    :
    acl_in{YType::str, "acl-in"},
    acl_out{YType::str, "acl-out"}
    	,
    transport_input(std::make_shared<Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput>())
{
    transport_input->parent = this;

    yang_name = "connection-configuration"; yang_parent_name = "configuration";
}

Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::~ConnectionConfiguration()
{
}

bool Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::has_data() const
{
    return acl_in.is_set
	|| acl_out.is_set
	|| (transport_input !=  nullptr && transport_input->has_data());
}

bool Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_in.operation)
	|| is_set(acl_out.operation)
	|| (transport_input !=  nullptr && transport_input->has_operation());
}

std::string Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-configuration";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionConfiguration' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_in.is_set || is_set(acl_in.operation)) leaf_name_data.push_back(acl_in.get_name_leafdata());
    if (acl_out.is_set || is_set(acl_out.operation)) leaf_name_data.push_back(acl_out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport-input")
    {
        if(transport_input == nullptr)
        {
            transport_input = std::make_shared<Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput>();
        }
        return transport_input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transport_input != nullptr)
    {
        children["transport-input"] = transport_input;
    }

    return children;
}

void Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-in")
    {
        acl_in = value;
    }
    if(value_path == "acl-out")
    {
        acl_out = value;
    }
}

Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::TransportInput()
    :
    none{YType::int32, "none"},
    protocol1{YType::enumeration, "protocol1"},
    protocol2{YType::enumeration, "protocol2"},
    select{YType::enumeration, "select"}
{
    yang_name = "transport-input"; yang_parent_name = "connection-configuration";
}

Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::~TransportInput()
{
}

bool Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::has_data() const
{
    return none.is_set
	|| protocol1.is_set
	|| protocol2.is_set
	|| select.is_set;
}

bool Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| is_set(protocol1.operation)
	|| is_set(protocol2.operation)
	|| is_set(select.operation);
}

std::string Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-input";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransportInput' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (protocol1.is_set || is_set(protocol1.operation)) leaf_name_data.push_back(protocol1.get_name_leafdata());
    if (protocol2.is_set || is_set(protocol2.operation)) leaf_name_data.push_back(protocol2.get_name_leafdata());
    if (select.is_set || is_set(select.operation)) leaf_name_data.push_back(select.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "protocol1")
    {
        protocol1 = value;
    }
    if(value_path == "protocol2")
    {
        protocol2 = value;
    }
    if(value_path == "select")
    {
        select = value;
    }
}

Tty::VtyLines::VtyLine::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "vty-line";
}

Tty::VtyLines::VtyLine::Sessions::~Sessions()
{
}

bool Tty::VtyLines::VtyLine::Sessions::has_data() const
{
    for (std::size_t index=0; index<outgoing_connection.size(); index++)
    {
        if(outgoing_connection[index]->has_data())
            return true;
    }
    return false;
}

bool Tty::VtyLines::VtyLine::Sessions::has_operation() const
{
    for (std::size_t index=0; index<outgoing_connection.size(); index++)
    {
        if(outgoing_connection[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Tty::VtyLines::VtyLine::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-management-oper:sessions";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::VtyLine::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sessions' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outgoing-connection")
    {
        for(auto const & c : outgoing_connection)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Tty::VtyLines::VtyLine::Sessions::OutgoingConnection>();
        c->parent = this;
        outgoing_connection.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : outgoing_connection)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Tty::VtyLines::VtyLine::Sessions::set_value(const std::string & value_path, std::string value)
{
}

Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::OutgoingConnection()
    :
    connection_id{YType::uint8, "connection-id"},
    host_name{YType::str, "host-name"},
    idle_time{YType::uint32, "idle-time"},
    is_last_active_session{YType::boolean, "is-last-active-session"},
    transport_protocol{YType::enumeration, "transport-protocol"}
    	,
    host_address(std::make_shared<Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress>())
{
    host_address->parent = this;

    yang_name = "outgoing-connection"; yang_parent_name = "sessions";
}

Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::~OutgoingConnection()
{
}

bool Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::has_data() const
{
    return connection_id.is_set
	|| host_name.is_set
	|| idle_time.is_set
	|| is_last_active_session.is_set
	|| transport_protocol.is_set
	|| (host_address !=  nullptr && host_address->has_data());
}

bool Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::has_operation() const
{
    return is_set(operation)
	|| is_set(connection_id.operation)
	|| is_set(host_name.operation)
	|| is_set(idle_time.operation)
	|| is_set(is_last_active_session.operation)
	|| is_set(transport_protocol.operation)
	|| (host_address !=  nullptr && host_address->has_operation());
}

std::string Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-connection";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutgoingConnection' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_id.is_set || is_set(connection_id.operation)) leaf_name_data.push_back(connection_id.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.operation)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (is_last_active_session.is_set || is_set(is_last_active_session.operation)) leaf_name_data.push_back(is_last_active_session.get_name_leafdata());
    if (transport_protocol.is_set || is_set(transport_protocol.operation)) leaf_name_data.push_back(transport_protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-address")
    {
        if(host_address == nullptr)
        {
            host_address = std::make_shared<Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress>();
        }
        return host_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host_address != nullptr)
    {
        children["host-address"] = host_address;
    }

    return children;
}

void Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connection-id")
    {
        connection_id = value;
    }
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
    }
    if(value_path == "is-last-active-session")
    {
        is_last_active_session = value;
    }
    if(value_path == "transport-protocol")
    {
        transport_protocol = value;
    }
}

Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::HostAddress()
    :
    af_name{YType::identityref, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "host-address"; yang_parent_name = "outgoing-connection";
}

Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::~HostAddress()
{
}

bool Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-address";

    return path_buffer.str();

}

const EntityPath Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HostAddress' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Tty::AuxiliaryNodes::AuxiliaryNodes()
{
    yang_name = "auxiliary-nodes"; yang_parent_name = "tty";
}

Tty::AuxiliaryNodes::~AuxiliaryNodes()
{
}

bool Tty::AuxiliaryNodes::has_data() const
{
    for (std::size_t index=0; index<auxiliary_node.size(); index++)
    {
        if(auxiliary_node[index]->has_data())
            return true;
    }
    return false;
}

bool Tty::AuxiliaryNodes::has_operation() const
{
    for (std::size_t index=0; index<auxiliary_node.size(); index++)
    {
        if(auxiliary_node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Tty::AuxiliaryNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auxiliary-nodes";

    return path_buffer.str();

}

const EntityPath Tty::AuxiliaryNodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tty-server-oper:tty/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auxiliary-node")
    {
        for(auto const & c : auxiliary_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode>();
        c->parent = this;
        auxiliary_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : auxiliary_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Tty::AuxiliaryNodes::set_value(const std::string & value_path, std::string value)
{
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryNode()
    :
    id{YType::str, "id"}
    	,
    auxiliary_line(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine>())
{
    auxiliary_line->parent = this;

    yang_name = "auxiliary-node"; yang_parent_name = "auxiliary-nodes";
}

Tty::AuxiliaryNodes::AuxiliaryNode::~AuxiliaryNode()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::has_data() const
{
    return id.is_set
	|| (auxiliary_line !=  nullptr && auxiliary_line->has_data());
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (auxiliary_line !=  nullptr && auxiliary_line->has_operation());
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auxiliary-node" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Tty::AuxiliaryNodes::AuxiliaryNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tty-server-oper:tty/auxiliary-nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auxiliary-line")
    {
        if(auxiliary_line == nullptr)
        {
            auxiliary_line = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine>();
        }
        return auxiliary_line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auxiliary_line != nullptr)
    {
        children["auxiliary-line"] = auxiliary_line;
    }

    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryLine()
    :
    auxiliary_statistics(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics>())
	,configuration(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration>())
	,state(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State>())
{
    auxiliary_statistics->parent = this;

    configuration->parent = this;

    state->parent = this;

    yang_name = "auxiliary-line"; yang_parent_name = "auxiliary-node";
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::~AuxiliaryLine()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::has_data() const
{
    return (auxiliary_statistics !=  nullptr && auxiliary_statistics->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::has_operation() const
{
    return is_set(operation)
	|| (auxiliary_statistics !=  nullptr && auxiliary_statistics->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auxiliary-line";

    return path_buffer.str();

}

const EntityPath Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuxiliaryLine' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auxiliary-statistics")
    {
        if(auxiliary_statistics == nullptr)
        {
            auxiliary_statistics = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics>();
        }
        return auxiliary_statistics;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auxiliary_statistics != nullptr)
    {
        children["auxiliary-statistics"] = auxiliary_statistics;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::set_value(const std::string & value_path, std::string value)
{
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::AuxiliaryStatistics()
    :
    aaa(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa>())
	,exec(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec>())
	,general_statistics(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics>())
	,rs232(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232>())
{
    aaa->parent = this;

    exec->parent = this;

    general_statistics->parent = this;

    rs232->parent = this;

    yang_name = "auxiliary-statistics"; yang_parent_name = "auxiliary-line";
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::~AuxiliaryStatistics()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::has_data() const
{
    return (aaa !=  nullptr && aaa->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (general_statistics !=  nullptr && general_statistics->has_data())
	|| (rs232 !=  nullptr && rs232->has_data());
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::has_operation() const
{
    return is_set(operation)
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (general_statistics !=  nullptr && general_statistics->has_operation())
	|| (rs232 !=  nullptr && rs232->has_operation());
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auxiliary-statistics";

    return path_buffer.str();

}

const EntityPath Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuxiliaryStatistics' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa>();
        }
        return aaa;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "general-statistics")
    {
        if(general_statistics == nullptr)
        {
            general_statistics = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics>();
        }
        return general_statistics;
    }

    if(child_yang_name == "rs232")
    {
        if(rs232 == nullptr)
        {
            rs232 = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232>();
        }
        return rs232;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aaa != nullptr)
    {
        children["aaa"] = aaa;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(general_statistics != nullptr)
    {
        children["general-statistics"] = general_statistics;
    }

    if(rs232 != nullptr)
    {
        children["rs232"] = rs232;
    }

    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::set_value(const std::string & value_path, std::string value)
{
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::Rs232()
    :
    baud_rate{YType::uint32, "baud-rate"},
    data_bits{YType::uint32, "data-bits"},
    exec_disabled{YType::boolean, "exec-disabled"},
    framing_error_count{YType::uint32, "framing-error-count"},
    hardware_flow_control_status{YType::uint32, "hardware-flow-control-status"},
    overrun_error_count{YType::uint32, "overrun-error-count"},
    parity_error_count{YType::uint32, "parity-error-count"},
    parity_status{YType::uint32, "parity-status"},
    stop_bits{YType::uint32, "stop-bits"}
{
    yang_name = "rs232"; yang_parent_name = "auxiliary-statistics";
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::~Rs232()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::has_data() const
{
    return baud_rate.is_set
	|| data_bits.is_set
	|| exec_disabled.is_set
	|| framing_error_count.is_set
	|| hardware_flow_control_status.is_set
	|| overrun_error_count.is_set
	|| parity_error_count.is_set
	|| parity_status.is_set
	|| stop_bits.is_set;
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::has_operation() const
{
    return is_set(operation)
	|| is_set(baud_rate.operation)
	|| is_set(data_bits.operation)
	|| is_set(exec_disabled.operation)
	|| is_set(framing_error_count.operation)
	|| is_set(hardware_flow_control_status.operation)
	|| is_set(overrun_error_count.operation)
	|| is_set(parity_error_count.operation)
	|| is_set(parity_status.operation)
	|| is_set(stop_bits.operation);
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rs232";

    return path_buffer.str();

}

const EntityPath Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rs232' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (baud_rate.is_set || is_set(baud_rate.operation)) leaf_name_data.push_back(baud_rate.get_name_leafdata());
    if (data_bits.is_set || is_set(data_bits.operation)) leaf_name_data.push_back(data_bits.get_name_leafdata());
    if (exec_disabled.is_set || is_set(exec_disabled.operation)) leaf_name_data.push_back(exec_disabled.get_name_leafdata());
    if (framing_error_count.is_set || is_set(framing_error_count.operation)) leaf_name_data.push_back(framing_error_count.get_name_leafdata());
    if (hardware_flow_control_status.is_set || is_set(hardware_flow_control_status.operation)) leaf_name_data.push_back(hardware_flow_control_status.get_name_leafdata());
    if (overrun_error_count.is_set || is_set(overrun_error_count.operation)) leaf_name_data.push_back(overrun_error_count.get_name_leafdata());
    if (parity_error_count.is_set || is_set(parity_error_count.operation)) leaf_name_data.push_back(parity_error_count.get_name_leafdata());
    if (parity_status.is_set || is_set(parity_status.operation)) leaf_name_data.push_back(parity_status.get_name_leafdata());
    if (stop_bits.is_set || is_set(stop_bits.operation)) leaf_name_data.push_back(stop_bits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "baud-rate")
    {
        baud_rate = value;
    }
    if(value_path == "data-bits")
    {
        data_bits = value;
    }
    if(value_path == "exec-disabled")
    {
        exec_disabled = value;
    }
    if(value_path == "framing-error-count")
    {
        framing_error_count = value;
    }
    if(value_path == "hardware-flow-control-status")
    {
        hardware_flow_control_status = value;
    }
    if(value_path == "overrun-error-count")
    {
        overrun_error_count = value;
    }
    if(value_path == "parity-error-count")
    {
        parity_error_count = value;
    }
    if(value_path == "parity-status")
    {
        parity_status = value;
    }
    if(value_path == "stop-bits")
    {
        stop_bits = value;
    }
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::GeneralStatistics()
    :
    absolute_timeout{YType::uint32, "absolute-timeout"},
    async_interface{YType::boolean, "async-interface"},
    domain_lookup_enabled{YType::boolean, "domain-lookup-enabled"},
    flow_control_start_character{YType::int8, "flow-control-start-character"},
    flow_control_stop_character{YType::int8, "flow-control-stop-character"},
    idle_time{YType::uint32, "idle-time"},
    motd_banner_enabled{YType::boolean, "motd-banner-enabled"},
    private_flag{YType::boolean, "private-flag"},
    terminal_length{YType::uint32, "terminal-length"},
    terminal_type{YType::str, "terminal-type"},
    terminal_width{YType::uint32, "terminal-width"}
{
    yang_name = "general-statistics"; yang_parent_name = "auxiliary-statistics";
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::~GeneralStatistics()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::has_data() const
{
    return absolute_timeout.is_set
	|| async_interface.is_set
	|| domain_lookup_enabled.is_set
	|| flow_control_start_character.is_set
	|| flow_control_stop_character.is_set
	|| idle_time.is_set
	|| motd_banner_enabled.is_set
	|| private_flag.is_set
	|| terminal_length.is_set
	|| terminal_type.is_set
	|| terminal_width.is_set;
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(absolute_timeout.operation)
	|| is_set(async_interface.operation)
	|| is_set(domain_lookup_enabled.operation)
	|| is_set(flow_control_start_character.operation)
	|| is_set(flow_control_stop_character.operation)
	|| is_set(idle_time.operation)
	|| is_set(motd_banner_enabled.operation)
	|| is_set(private_flag.operation)
	|| is_set(terminal_length.operation)
	|| is_set(terminal_type.operation)
	|| is_set(terminal_width.operation);
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-statistics";

    return path_buffer.str();

}

const EntityPath Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GeneralStatistics' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_timeout.is_set || is_set(absolute_timeout.operation)) leaf_name_data.push_back(absolute_timeout.get_name_leafdata());
    if (async_interface.is_set || is_set(async_interface.operation)) leaf_name_data.push_back(async_interface.get_name_leafdata());
    if (domain_lookup_enabled.is_set || is_set(domain_lookup_enabled.operation)) leaf_name_data.push_back(domain_lookup_enabled.get_name_leafdata());
    if (flow_control_start_character.is_set || is_set(flow_control_start_character.operation)) leaf_name_data.push_back(flow_control_start_character.get_name_leafdata());
    if (flow_control_stop_character.is_set || is_set(flow_control_stop_character.operation)) leaf_name_data.push_back(flow_control_stop_character.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.operation)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (motd_banner_enabled.is_set || is_set(motd_banner_enabled.operation)) leaf_name_data.push_back(motd_banner_enabled.get_name_leafdata());
    if (private_flag.is_set || is_set(private_flag.operation)) leaf_name_data.push_back(private_flag.get_name_leafdata());
    if (terminal_length.is_set || is_set(terminal_length.operation)) leaf_name_data.push_back(terminal_length.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.operation)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (terminal_width.is_set || is_set(terminal_width.operation)) leaf_name_data.push_back(terminal_width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "absolute-timeout")
    {
        absolute_timeout = value;
    }
    if(value_path == "async-interface")
    {
        async_interface = value;
    }
    if(value_path == "domain-lookup-enabled")
    {
        domain_lookup_enabled = value;
    }
    if(value_path == "flow-control-start-character")
    {
        flow_control_start_character = value;
    }
    if(value_path == "flow-control-stop-character")
    {
        flow_control_stop_character = value;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
    }
    if(value_path == "motd-banner-enabled")
    {
        motd_banner_enabled = value;
    }
    if(value_path == "private-flag")
    {
        private_flag = value;
    }
    if(value_path == "terminal-length")
    {
        terminal_length = value;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
    }
    if(value_path == "terminal-width")
    {
        terminal_width = value;
    }
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::Exec()
    :
    time_stamp_enabled{YType::boolean, "time-stamp-enabled"}
{
    yang_name = "exec"; yang_parent_name = "auxiliary-statistics";
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::~Exec()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::has_data() const
{
    return time_stamp_enabled.is_set;
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::has_operation() const
{
    return is_set(operation)
	|| is_set(time_stamp_enabled.operation);
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";

    return path_buffer.str();

}

const EntityPath Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exec' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_stamp_enabled.is_set || is_set(time_stamp_enabled.operation)) leaf_name_data.push_back(time_stamp_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-stamp-enabled")
    {
        time_stamp_enabled = value;
    }
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::Aaa()
    :
    user_name{YType::str, "user-name"}
{
    yang_name = "aaa"; yang_parent_name = "auxiliary-statistics";
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::~Aaa()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::has_data() const
{
    return user_name.is_set;
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::has_operation() const
{
    return is_set(operation)
	|| is_set(user_name.operation);
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";

    return path_buffer.str();

}

const EntityPath Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aaa' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_name.is_set || is_set(user_name.operation)) leaf_name_data.push_back(user_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "user-name")
    {
        user_name = value;
    }
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::State()
    :
    general(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General>())
	,template_(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_>())
{
    general->parent = this;

    template_->parent = this;

    yang_name = "state"; yang_parent_name = "auxiliary-line";
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::~State()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::has_data() const
{
    return (general !=  nullptr && general->has_data())
	|| (template_ !=  nullptr && template_->has_data());
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::has_operation() const
{
    return is_set(operation)
	|| (general !=  nullptr && general->has_operation())
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "general")
    {
        if(general == nullptr)
        {
            general = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General>();
        }
        return general;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(general != nullptr)
    {
        children["general"] = general;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::set_value(const std::string & value_path, std::string value)
{
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_::Template_()
    :
    name{YType::str, "name"}
{
    yang_name = "template"; yang_parent_name = "state";
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_::~Template_()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_::has_data() const
{
    return name.is_set;
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";

    return path_buffer.str();

}

const EntityPath Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Template_' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::General()
    :
    general_state{YType::enumeration, "general-state"},
    operation_{YType::enumeration, "operation"}
{
    yang_name = "general"; yang_parent_name = "state";
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::~General()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::has_data() const
{
    return general_state.is_set
	|| operation_.is_set;
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::has_operation() const
{
    return is_set(operation)
	|| is_set(general_state.operation)
	|| is_set(operation_.operation);
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general";

    return path_buffer.str();

}

const EntityPath Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'General' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (general_state.is_set || is_set(general_state.operation)) leaf_name_data.push_back(general_state.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "general-state")
    {
        general_state = value;
    }
    if(value_path == "operation")
    {
        operation_ = value;
    }
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::Configuration()
    :
    connection_configuration(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration>())
{
    connection_configuration->parent = this;

    yang_name = "configuration"; yang_parent_name = "auxiliary-line";
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::~Configuration()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::has_data() const
{
    return (connection_configuration !=  nullptr && connection_configuration->has_data());
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::has_operation() const
{
    return is_set(operation)
	|| (connection_configuration !=  nullptr && connection_configuration->has_operation());
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";

    return path_buffer.str();

}

const EntityPath Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Configuration' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection-configuration")
    {
        if(connection_configuration == nullptr)
        {
            connection_configuration = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration>();
        }
        return connection_configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connection_configuration != nullptr)
    {
        children["connection-configuration"] = connection_configuration;
    }

    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::set_value(const std::string & value_path, std::string value)
{
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::ConnectionConfiguration()
    :
    acl_in{YType::str, "acl-in"},
    acl_out{YType::str, "acl-out"}
    	,
    transport_input(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput>())
{
    transport_input->parent = this;

    yang_name = "connection-configuration"; yang_parent_name = "configuration";
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::~ConnectionConfiguration()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::has_data() const
{
    return acl_in.is_set
	|| acl_out.is_set
	|| (transport_input !=  nullptr && transport_input->has_data());
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_in.operation)
	|| is_set(acl_out.operation)
	|| (transport_input !=  nullptr && transport_input->has_operation());
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-configuration";

    return path_buffer.str();

}

const EntityPath Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionConfiguration' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_in.is_set || is_set(acl_in.operation)) leaf_name_data.push_back(acl_in.get_name_leafdata());
    if (acl_out.is_set || is_set(acl_out.operation)) leaf_name_data.push_back(acl_out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport-input")
    {
        if(transport_input == nullptr)
        {
            transport_input = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput>();
        }
        return transport_input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transport_input != nullptr)
    {
        children["transport-input"] = transport_input;
    }

    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-in")
    {
        acl_in = value;
    }
    if(value_path == "acl-out")
    {
        acl_out = value;
    }
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::TransportInput()
    :
    none{YType::int32, "none"},
    protocol1{YType::enumeration, "protocol1"},
    protocol2{YType::enumeration, "protocol2"},
    select{YType::enumeration, "select"}
{
    yang_name = "transport-input"; yang_parent_name = "connection-configuration";
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::~TransportInput()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::has_data() const
{
    return none.is_set
	|| protocol1.is_set
	|| protocol2.is_set
	|| select.is_set;
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| is_set(protocol1.operation)
	|| is_set(protocol2.operation)
	|| is_set(select.operation);
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-input";

    return path_buffer.str();

}

const EntityPath Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransportInput' in Cisco_IOS_XR_tty_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (protocol1.is_set || is_set(protocol1.operation)) leaf_name_data.push_back(protocol1.get_name_leafdata());
    if (protocol2.is_set || is_set(protocol2.operation)) leaf_name_data.push_back(protocol2.get_name_leafdata());
    if (select.is_set || is_set(select.operation)) leaf_name_data.push_back(select.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "protocol1")
    {
        protocol1 = value;
    }
    if(value_path == "protocol2")
    {
        protocol2 = value;
    }
    if(value_path == "select")
    {
        select = value;
    }
}

const Enum::YLeaf LineStateEnum::none {0, "none"};
const Enum::YLeaf LineStateEnum::registered {1, "registered"};
const Enum::YLeaf LineStateEnum::in_use {2, "in-use"};

const Enum::YLeaf SessionOperationEnum::none {0, "none"};
const Enum::YLeaf SessionOperationEnum::setup {1, "setup"};
const Enum::YLeaf SessionOperationEnum::shell {2, "shell"};
const Enum::YLeaf SessionOperationEnum::transitioning {3, "transitioning"};
const Enum::YLeaf SessionOperationEnum::packet {4, "packet"};


}
}

