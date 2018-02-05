
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tty_server_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tty_server_oper {

Tty::Tty()
    :
    console_nodes(std::make_shared<Tty::ConsoleNodes>())
	,vty_lines(std::make_shared<Tty::VtyLines>())
	,auxiliary_nodes(std::make_shared<Tty::AuxiliaryNodes>())
{
    console_nodes->parent = this;
    vty_lines->parent = this;
    auxiliary_nodes->parent = this;

    yang_name = "tty"; yang_parent_name = "Cisco-IOS-XR-tty-server-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Tty::~Tty()
{
}

bool Tty::has_data() const
{
    return (console_nodes !=  nullptr && console_nodes->has_data())
	|| (vty_lines !=  nullptr && vty_lines->has_data())
	|| (auxiliary_nodes !=  nullptr && auxiliary_nodes->has_data());
}

bool Tty::has_operation() const
{
    return is_set(yfilter)
	|| (console_nodes !=  nullptr && console_nodes->has_operation())
	|| (vty_lines !=  nullptr && vty_lines->has_operation())
	|| (auxiliary_nodes !=  nullptr && auxiliary_nodes->has_operation());
}

std::string Tty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-server-oper:tty";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "auxiliary-nodes")
    {
        if(auxiliary_nodes == nullptr)
        {
            auxiliary_nodes = std::make_shared<Tty::AuxiliaryNodes>();
        }
        return auxiliary_nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(console_nodes != nullptr)
    {
        children["console-nodes"] = console_nodes;
    }

    if(vty_lines != nullptr)
    {
        children["vty-lines"] = vty_lines;
    }

    if(auxiliary_nodes != nullptr)
    {
        children["auxiliary-nodes"] = auxiliary_nodes;
    }

    return children;
}

void Tty::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> Tty::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Tty::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "console-nodes" || name == "vty-lines" || name == "auxiliary-nodes")
        return true;
    return false;
}

Tty::ConsoleNodes::ConsoleNodes()
{

    yang_name = "console-nodes"; yang_parent_name = "tty"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Tty::ConsoleNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-server-oper:tty/" << get_segment_path();
    return path_buffer.str();
}

std::string Tty::ConsoleNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::ConsoleNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "console-node")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : console_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Tty::ConsoleNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::ConsoleNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::ConsoleNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "console-node")
        return true;
    return false;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleNode()
    :
    id{YType::str, "id"}
    	,
    console_line(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine>())
{
    console_line->parent = this;

    yang_name = "console-node"; yang_parent_name = "console-nodes"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (console_line !=  nullptr && console_line->has_operation());
}

std::string Tty::ConsoleNodes::ConsoleNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-server-oper:tty/console-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Tty::ConsoleNodes::ConsoleNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-node" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::ConsoleNodes::ConsoleNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(console_line != nullptr)
    {
        children["console-line"] = console_line;
    }

    return children;
}

void Tty::ConsoleNodes::ConsoleNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::ConsoleNodes::ConsoleNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Tty::ConsoleNodes::ConsoleNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "console-line" || name == "id")
        return true;
    return false;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleLine()
    :
    console_statistics(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics>())
	,state(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State>())
	,configuration(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration>())
{
    console_statistics->parent = this;
    state->parent = this;
    configuration->parent = this;

    yang_name = "console-line"; yang_parent_name = "console-node"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::~ConsoleLine()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::has_data() const
{
    return (console_statistics !=  nullptr && console_statistics->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (configuration !=  nullptr && configuration->has_data());
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::has_operation() const
{
    return is_set(yfilter)
	|| (console_statistics !=  nullptr && console_statistics->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::ConsoleNodes::ConsoleNode::ConsoleLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration>();
        }
        return configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(console_statistics != nullptr)
    {
        children["console-statistics"] = console_statistics;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "console-statistics" || name == "state" || name == "configuration")
        return true;
    return false;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::ConsoleStatistics()
    :
    rs232(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232>())
	,general_statistics(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics>())
	,exec(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec>())
	,aaa(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa>())
{
    rs232->parent = this;
    general_statistics->parent = this;
    exec->parent = this;
    aaa->parent = this;

    yang_name = "console-statistics"; yang_parent_name = "console-line"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::~ConsoleStatistics()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::has_data() const
{
    return (rs232 !=  nullptr && rs232->has_data())
	|| (general_statistics !=  nullptr && general_statistics->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (aaa !=  nullptr && aaa->has_data());
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (rs232 !=  nullptr && rs232->has_operation())
	|| (general_statistics !=  nullptr && general_statistics->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (aaa !=  nullptr && aaa->has_operation());
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rs232")
    {
        if(rs232 == nullptr)
        {
            rs232 = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232>();
        }
        return rs232;
    }

    if(child_yang_name == "general-statistics")
    {
        if(general_statistics == nullptr)
        {
            general_statistics = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics>();
        }
        return general_statistics;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa>();
        }
        return aaa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rs232 != nullptr)
    {
        children["rs232"] = rs232;
    }

    if(general_statistics != nullptr)
    {
        children["general-statistics"] = general_statistics;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(aaa != nullptr)
    {
        children["aaa"] = aaa;
    }

    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rs232" || name == "general-statistics" || name == "exec" || name == "aaa")
        return true;
    return false;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::Rs232()
    :
    data_bits{YType::uint32, "data-bits"},
    exec_disabled{YType::boolean, "exec-disabled"},
    hardware_flow_control_status{YType::uint32, "hardware-flow-control-status"},
    parity_status{YType::uint32, "parity-status"},
    baud_rate{YType::uint32, "baud-rate"},
    stop_bits{YType::uint32, "stop-bits"},
    overrun_error_count{YType::uint32, "overrun-error-count"},
    framing_error_count{YType::uint32, "framing-error-count"},
    parity_error_count{YType::uint32, "parity-error-count"}
{

    yang_name = "rs232"; yang_parent_name = "console-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::~Rs232()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::has_data() const
{
    return data_bits.is_set
	|| exec_disabled.is_set
	|| hardware_flow_control_status.is_set
	|| parity_status.is_set
	|| baud_rate.is_set
	|| stop_bits.is_set
	|| overrun_error_count.is_set
	|| framing_error_count.is_set
	|| parity_error_count.is_set;
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_bits.yfilter)
	|| ydk::is_set(exec_disabled.yfilter)
	|| ydk::is_set(hardware_flow_control_status.yfilter)
	|| ydk::is_set(parity_status.yfilter)
	|| ydk::is_set(baud_rate.yfilter)
	|| ydk::is_set(stop_bits.yfilter)
	|| ydk::is_set(overrun_error_count.yfilter)
	|| ydk::is_set(framing_error_count.yfilter)
	|| ydk::is_set(parity_error_count.yfilter);
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rs232";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_bits.is_set || is_set(data_bits.yfilter)) leaf_name_data.push_back(data_bits.get_name_leafdata());
    if (exec_disabled.is_set || is_set(exec_disabled.yfilter)) leaf_name_data.push_back(exec_disabled.get_name_leafdata());
    if (hardware_flow_control_status.is_set || is_set(hardware_flow_control_status.yfilter)) leaf_name_data.push_back(hardware_flow_control_status.get_name_leafdata());
    if (parity_status.is_set || is_set(parity_status.yfilter)) leaf_name_data.push_back(parity_status.get_name_leafdata());
    if (baud_rate.is_set || is_set(baud_rate.yfilter)) leaf_name_data.push_back(baud_rate.get_name_leafdata());
    if (stop_bits.is_set || is_set(stop_bits.yfilter)) leaf_name_data.push_back(stop_bits.get_name_leafdata());
    if (overrun_error_count.is_set || is_set(overrun_error_count.yfilter)) leaf_name_data.push_back(overrun_error_count.get_name_leafdata());
    if (framing_error_count.is_set || is_set(framing_error_count.yfilter)) leaf_name_data.push_back(framing_error_count.get_name_leafdata());
    if (parity_error_count.is_set || is_set(parity_error_count.yfilter)) leaf_name_data.push_back(parity_error_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-bits")
    {
        data_bits = value;
        data_bits.value_namespace = name_space;
        data_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-disabled")
    {
        exec_disabled = value;
        exec_disabled.value_namespace = name_space;
        exec_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-flow-control-status")
    {
        hardware_flow_control_status = value;
        hardware_flow_control_status.value_namespace = name_space;
        hardware_flow_control_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parity-status")
    {
        parity_status = value;
        parity_status.value_namespace = name_space;
        parity_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baud-rate")
    {
        baud_rate = value;
        baud_rate.value_namespace = name_space;
        baud_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-bits")
    {
        stop_bits = value;
        stop_bits.value_namespace = name_space;
        stop_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overrun-error-count")
    {
        overrun_error_count = value;
        overrun_error_count.value_namespace = name_space;
        overrun_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing-error-count")
    {
        framing_error_count = value;
        framing_error_count.value_namespace = name_space;
        framing_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parity-error-count")
    {
        parity_error_count = value;
        parity_error_count.value_namespace = name_space;
        parity_error_count.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-bits")
    {
        data_bits.yfilter = yfilter;
    }
    if(value_path == "exec-disabled")
    {
        exec_disabled.yfilter = yfilter;
    }
    if(value_path == "hardware-flow-control-status")
    {
        hardware_flow_control_status.yfilter = yfilter;
    }
    if(value_path == "parity-status")
    {
        parity_status.yfilter = yfilter;
    }
    if(value_path == "baud-rate")
    {
        baud_rate.yfilter = yfilter;
    }
    if(value_path == "stop-bits")
    {
        stop_bits.yfilter = yfilter;
    }
    if(value_path == "overrun-error-count")
    {
        overrun_error_count.yfilter = yfilter;
    }
    if(value_path == "framing-error-count")
    {
        framing_error_count.yfilter = yfilter;
    }
    if(value_path == "parity-error-count")
    {
        parity_error_count.yfilter = yfilter;
    }
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Rs232::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-bits" || name == "exec-disabled" || name == "hardware-flow-control-status" || name == "parity-status" || name == "baud-rate" || name == "stop-bits" || name == "overrun-error-count" || name == "framing-error-count" || name == "parity-error-count")
        return true;
    return false;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::GeneralStatistics()
    :
    terminal_length{YType::uint32, "terminal-length"},
    terminal_width{YType::uint32, "terminal-width"},
    async_interface{YType::boolean, "async-interface"},
    flow_control_start_character{YType::int8, "flow-control-start-character"},
    flow_control_stop_character{YType::int8, "flow-control-stop-character"},
    domain_lookup_enabled{YType::boolean, "domain-lookup-enabled"},
    motd_banner_enabled{YType::boolean, "motd-banner-enabled"},
    private_flag{YType::boolean, "private-flag"},
    terminal_type{YType::str, "terminal-type"},
    absolute_timeout{YType::uint32, "absolute-timeout"},
    idle_time{YType::uint32, "idle-time"}
{

    yang_name = "general-statistics"; yang_parent_name = "console-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::~GeneralStatistics()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::has_data() const
{
    return terminal_length.is_set
	|| terminal_width.is_set
	|| async_interface.is_set
	|| flow_control_start_character.is_set
	|| flow_control_stop_character.is_set
	|| domain_lookup_enabled.is_set
	|| motd_banner_enabled.is_set
	|| private_flag.is_set
	|| terminal_type.is_set
	|| absolute_timeout.is_set
	|| idle_time.is_set;
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminal_length.yfilter)
	|| ydk::is_set(terminal_width.yfilter)
	|| ydk::is_set(async_interface.yfilter)
	|| ydk::is_set(flow_control_start_character.yfilter)
	|| ydk::is_set(flow_control_stop_character.yfilter)
	|| ydk::is_set(domain_lookup_enabled.yfilter)
	|| ydk::is_set(motd_banner_enabled.yfilter)
	|| ydk::is_set(private_flag.yfilter)
	|| ydk::is_set(terminal_type.yfilter)
	|| ydk::is_set(absolute_timeout.yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminal_length.is_set || is_set(terminal_length.yfilter)) leaf_name_data.push_back(terminal_length.get_name_leafdata());
    if (terminal_width.is_set || is_set(terminal_width.yfilter)) leaf_name_data.push_back(terminal_width.get_name_leafdata());
    if (async_interface.is_set || is_set(async_interface.yfilter)) leaf_name_data.push_back(async_interface.get_name_leafdata());
    if (flow_control_start_character.is_set || is_set(flow_control_start_character.yfilter)) leaf_name_data.push_back(flow_control_start_character.get_name_leafdata());
    if (flow_control_stop_character.is_set || is_set(flow_control_stop_character.yfilter)) leaf_name_data.push_back(flow_control_stop_character.get_name_leafdata());
    if (domain_lookup_enabled.is_set || is_set(domain_lookup_enabled.yfilter)) leaf_name_data.push_back(domain_lookup_enabled.get_name_leafdata());
    if (motd_banner_enabled.is_set || is_set(motd_banner_enabled.yfilter)) leaf_name_data.push_back(motd_banner_enabled.get_name_leafdata());
    if (private_flag.is_set || is_set(private_flag.yfilter)) leaf_name_data.push_back(private_flag.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.yfilter)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (absolute_timeout.is_set || is_set(absolute_timeout.yfilter)) leaf_name_data.push_back(absolute_timeout.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminal-length")
    {
        terminal_length = value;
        terminal_length.value_namespace = name_space;
        terminal_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal-width")
    {
        terminal_width = value;
        terminal_width.value_namespace = name_space;
        terminal_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "async-interface")
    {
        async_interface = value;
        async_interface.value_namespace = name_space;
        async_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-control-start-character")
    {
        flow_control_start_character = value;
        flow_control_start_character.value_namespace = name_space;
        flow_control_start_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-control-stop-character")
    {
        flow_control_stop_character = value;
        flow_control_stop_character.value_namespace = name_space;
        flow_control_stop_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-lookup-enabled")
    {
        domain_lookup_enabled = value;
        domain_lookup_enabled.value_namespace = name_space;
        domain_lookup_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "motd-banner-enabled")
    {
        motd_banner_enabled = value;
        motd_banner_enabled.value_namespace = name_space;
        motd_banner_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flag")
    {
        private_flag = value;
        private_flag.value_namespace = name_space;
        private_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
        terminal_type.value_namespace = name_space;
        terminal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-timeout")
    {
        absolute_timeout = value;
        absolute_timeout.value_namespace = name_space;
        absolute_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminal-length")
    {
        terminal_length.yfilter = yfilter;
    }
    if(value_path == "terminal-width")
    {
        terminal_width.yfilter = yfilter;
    }
    if(value_path == "async-interface")
    {
        async_interface.yfilter = yfilter;
    }
    if(value_path == "flow-control-start-character")
    {
        flow_control_start_character.yfilter = yfilter;
    }
    if(value_path == "flow-control-stop-character")
    {
        flow_control_stop_character.yfilter = yfilter;
    }
    if(value_path == "domain-lookup-enabled")
    {
        domain_lookup_enabled.yfilter = yfilter;
    }
    if(value_path == "motd-banner-enabled")
    {
        motd_banner_enabled.yfilter = yfilter;
    }
    if(value_path == "private-flag")
    {
        private_flag.yfilter = yfilter;
    }
    if(value_path == "terminal-type")
    {
        terminal_type.yfilter = yfilter;
    }
    if(value_path == "absolute-timeout")
    {
        absolute_timeout.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::GeneralStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminal-length" || name == "terminal-width" || name == "async-interface" || name == "flow-control-start-character" || name == "flow-control-stop-character" || name == "domain-lookup-enabled" || name == "motd-banner-enabled" || name == "private-flag" || name == "terminal-type" || name == "absolute-timeout" || name == "idle-time")
        return true;
    return false;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::Exec()
    :
    time_stamp_enabled{YType::boolean, "time-stamp-enabled"}
{

    yang_name = "exec"; yang_parent_name = "console-statistics"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(time_stamp_enabled.yfilter);
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_stamp_enabled.is_set || is_set(time_stamp_enabled.yfilter)) leaf_name_data.push_back(time_stamp_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-stamp-enabled")
    {
        time_stamp_enabled = value;
        time_stamp_enabled.value_namespace = name_space;
        time_stamp_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-stamp-enabled")
    {
        time_stamp_enabled.yfilter = yfilter;
    }
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-stamp-enabled")
        return true;
    return false;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::Aaa()
    :
    user_name{YType::str, "user-name"}
{

    yang_name = "aaa"; yang_parent_name = "console-statistics"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(user_name.yfilter);
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_name.is_set || is_set(user_name.yfilter)) leaf_name_data.push_back(user_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user-name")
    {
        user_name = value;
        user_name.value_namespace = name_space;
        user_name.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user-name")
    {
        user_name.yfilter = yfilter;
    }
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::ConsoleStatistics::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user-name")
        return true;
    return false;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::State()
    :
    template_(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template>())
	,general(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General>())
{
    template_->parent = this;
    general->parent = this;

    yang_name = "state"; yang_parent_name = "console-line"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::~State()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::has_data() const
{
    return (template_ !=  nullptr && template_->has_data())
	|| (general !=  nullptr && general->has_data());
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::has_operation() const
{
    return is_set(yfilter)
	|| (template_ !=  nullptr && template_->has_operation())
	|| (general !=  nullptr && general->has_operation());
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template>();
        }
        return template_;
    }

    if(child_yang_name == "general")
    {
        if(general == nullptr)
        {
            general = std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General>();
        }
        return general;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(general != nullptr)
    {
        children["general"] = general;
    }

    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template" || name == "general")
        return true;
    return false;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template::Template()
    :
    name{YType::str, "name"}
{

    yang_name = "template"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template::~Template()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template::has_data() const
{
    return name.is_set;
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::General()
    :
    operation_{YType::enumeration, "operation"},
    general_state{YType::enumeration, "general-state"}
{

    yang_name = "general"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::~General()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::has_data() const
{
    return operation_.is_set
	|| general_state.is_set;
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_.yfilter)
	|| ydk::is_set(general_state.yfilter);
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());
    if (general_state.is_set || is_set(general_state.yfilter)) leaf_name_data.push_back(general_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-state")
    {
        general_state = value;
        general_state.value_namespace = name_space;
        general_state.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
    if(value_path == "general-state")
    {
        general_state.yfilter = yfilter;
    }
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::State::General::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation" || name == "general-state")
        return true;
    return false;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::Configuration()
    :
    connection_configuration(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration>())
{
    connection_configuration->parent = this;

    yang_name = "configuration"; yang_parent_name = "console-line"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (connection_configuration !=  nullptr && connection_configuration->has_operation());
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
    if(connection_configuration != nullptr)
    {
        children["connection-configuration"] = connection_configuration;
    }

    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-configuration")
        return true;
    return false;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::ConnectionConfiguration()
    :
    acl_out{YType::str, "acl-out"},
    acl_in{YType::str, "acl-in"}
    	,
    transport_input(std::make_shared<Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput>())
{
    transport_input->parent = this;

    yang_name = "connection-configuration"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::~ConnectionConfiguration()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::has_data() const
{
    return acl_out.is_set
	|| acl_in.is_set
	|| (transport_input !=  nullptr && transport_input->has_data());
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_out.yfilter)
	|| ydk::is_set(acl_in.yfilter)
	|| (transport_input !=  nullptr && transport_input->has_operation());
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_out.is_set || is_set(acl_out.yfilter)) leaf_name_data.push_back(acl_out.get_name_leafdata());
    if (acl_in.is_set || is_set(acl_in.yfilter)) leaf_name_data.push_back(acl_in.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(transport_input != nullptr)
    {
        children["transport-input"] = transport_input;
    }

    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-out")
    {
        acl_out = value;
        acl_out.value_namespace = name_space;
        acl_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-in")
    {
        acl_in = value;
        acl_in.value_namespace = name_space;
        acl_in.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-out")
    {
        acl_out.yfilter = yfilter;
    }
    if(value_path == "acl-in")
    {
        acl_in.yfilter = yfilter;
    }
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-input" || name == "acl-out" || name == "acl-in")
        return true;
    return false;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::TransportInput()
    :
    select{YType::enumeration, "select"},
    protocol1{YType::enumeration, "protocol1"},
    protocol2{YType::enumeration, "protocol2"},
    none{YType::int32, "none"}
{

    yang_name = "transport-input"; yang_parent_name = "connection-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::~TransportInput()
{
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::has_data() const
{
    return select.is_set
	|| protocol1.is_set
	|| protocol2.is_set
	|| none.is_set;
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(select.yfilter)
	|| ydk::is_set(protocol1.yfilter)
	|| ydk::is_set(protocol2.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (select.is_set || is_set(select.yfilter)) leaf_name_data.push_back(select.get_name_leafdata());
    if (protocol1.is_set || is_set(protocol1.yfilter)) leaf_name_data.push_back(protocol1.get_name_leafdata());
    if (protocol2.is_set || is_set(protocol2.yfilter)) leaf_name_data.push_back(protocol2.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "select")
    {
        select = value;
        select.value_namespace = name_space;
        select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol1")
    {
        protocol1 = value;
        protocol1.value_namespace = name_space;
        protocol1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol2")
    {
        protocol2 = value;
        protocol2.value_namespace = name_space;
        protocol2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "select")
    {
        select.yfilter = yfilter;
    }
    if(value_path == "protocol1")
    {
        protocol1.yfilter = yfilter;
    }
    if(value_path == "protocol2")
    {
        protocol2.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Tty::ConsoleNodes::ConsoleNode::ConsoleLine::Configuration::ConnectionConfiguration::TransportInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select" || name == "protocol1" || name == "protocol2" || name == "none")
        return true;
    return false;
}

Tty::VtyLines::VtyLines()
{

    yang_name = "vty-lines"; yang_parent_name = "tty"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Tty::VtyLines::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-server-oper:tty/" << get_segment_path();
    return path_buffer.str();
}

std::string Tty::VtyLines::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-lines";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::VtyLines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vty-line")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : vty_line)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Tty::VtyLines::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::VtyLines::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::VtyLines::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vty-line")
        return true;
    return false;
}

Tty::VtyLines::VtyLine::VtyLine()
    :
    line_number{YType::int32, "line-number"}
    	,
    vty_statistics(std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics>())
	,state(std::make_shared<Tty::VtyLines::VtyLine::State>())
	,configuration(std::make_shared<Tty::VtyLines::VtyLine::Configuration>())
	,sessions(std::make_shared<Tty::VtyLines::VtyLine::Sessions>())
{
    vty_statistics->parent = this;
    state->parent = this;
    configuration->parent = this;
    sessions->parent = this;

    yang_name = "vty-line"; yang_parent_name = "vty-lines"; is_top_level_class = false; has_list_ancestor = false;
}

Tty::VtyLines::VtyLine::~VtyLine()
{
}

bool Tty::VtyLines::VtyLine::has_data() const
{
    return line_number.is_set
	|| (vty_statistics !=  nullptr && vty_statistics->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (sessions !=  nullptr && sessions->has_data());
}

bool Tty::VtyLines::VtyLine::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_number.yfilter)
	|| (vty_statistics !=  nullptr && vty_statistics->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string Tty::VtyLines::VtyLine::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-server-oper:tty/vty-lines/" << get_segment_path();
    return path_buffer.str();
}

std::string Tty::VtyLines::VtyLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-line" <<"[line-number='" <<line_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::VtyLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_number.is_set || is_set(line_number.yfilter)) leaf_name_data.push_back(line_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vty-statistics")
    {
        if(vty_statistics == nullptr)
        {
            vty_statistics = std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics>();
        }
        return vty_statistics;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Tty::VtyLines::VtyLine::State>();
        }
        return state;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Tty::VtyLines::VtyLine::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "Cisco-IOS-XR-tty-management-oper:sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Tty::VtyLines::VtyLine::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vty_statistics != nullptr)
    {
        children["vty-statistics"] = vty_statistics;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(sessions != nullptr)
    {
        children["Cisco-IOS-XR-tty-management-oper:sessions"] = sessions;
    }

    return children;
}

void Tty::VtyLines::VtyLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-number")
    {
        line_number = value;
        line_number.value_namespace = name_space;
        line_number.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::VtyLines::VtyLine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-number")
    {
        line_number.yfilter = yfilter;
    }
}

bool Tty::VtyLines::VtyLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vty-statistics" || name == "state" || name == "configuration" || name == "sessions" || name == "line-number")
        return true;
    return false;
}

Tty::VtyLines::VtyLine::VtyStatistics::VtyStatistics()
    :
    connection(std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::Connection>())
	,general_statistics(std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics>())
	,exec(std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::Exec>())
	,aaa(std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::Aaa>())
{
    connection->parent = this;
    general_statistics->parent = this;
    exec->parent = this;
    aaa->parent = this;

    yang_name = "vty-statistics"; yang_parent_name = "vty-line"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::VtyLines::VtyLine::VtyStatistics::~VtyStatistics()
{
}

bool Tty::VtyLines::VtyLine::VtyStatistics::has_data() const
{
    return (connection !=  nullptr && connection->has_data())
	|| (general_statistics !=  nullptr && general_statistics->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (aaa !=  nullptr && aaa->has_data());
}

bool Tty::VtyLines::VtyLine::VtyStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (connection !=  nullptr && connection->has_operation())
	|| (general_statistics !=  nullptr && general_statistics->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (aaa !=  nullptr && aaa->has_operation());
}

std::string Tty::VtyLines::VtyLine::VtyStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::VtyLine::VtyStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::VtyStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "general-statistics")
    {
        if(general_statistics == nullptr)
        {
            general_statistics = std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics>();
        }
        return general_statistics;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Tty::VtyLines::VtyLine::VtyStatistics::Aaa>();
        }
        return aaa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::VtyStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(connection != nullptr)
    {
        children["connection"] = connection;
    }

    if(general_statistics != nullptr)
    {
        children["general-statistics"] = general_statistics;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(aaa != nullptr)
    {
        children["aaa"] = aaa;
    }

    return children;
}

void Tty::VtyLines::VtyLine::VtyStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::VtyLines::VtyLine::VtyStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::VtyLines::VtyLine::VtyStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection" || name == "general-statistics" || name == "exec" || name == "aaa")
        return true;
    return false;
}

Tty::VtyLines::VtyLine::VtyStatistics::Connection::Connection()
    :
    incoming_host_address{YType::str, "incoming-host-address"},
    host_address_family{YType::uint32, "host-address-family"},
    service{YType::uint32, "service"}
{

    yang_name = "connection"; yang_parent_name = "vty-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::VtyLines::VtyLine::VtyStatistics::Connection::~Connection()
{
}

bool Tty::VtyLines::VtyLine::VtyStatistics::Connection::has_data() const
{
    return incoming_host_address.is_set
	|| host_address_family.is_set
	|| service.is_set;
}

bool Tty::VtyLines::VtyLine::VtyStatistics::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incoming_host_address.yfilter)
	|| ydk::is_set(host_address_family.yfilter)
	|| ydk::is_set(service.yfilter);
}

std::string Tty::VtyLines::VtyLine::VtyStatistics::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::VtyLine::VtyStatistics::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_host_address.is_set || is_set(incoming_host_address.yfilter)) leaf_name_data.push_back(incoming_host_address.get_name_leafdata());
    if (host_address_family.is_set || is_set(host_address_family.yfilter)) leaf_name_data.push_back(host_address_family.get_name_leafdata());
    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::VtyStatistics::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::VtyStatistics::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::VtyLines::VtyLine::VtyStatistics::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incoming-host-address")
    {
        incoming_host_address = value;
        incoming_host_address.value_namespace = name_space;
        incoming_host_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-address-family")
    {
        host_address_family = value;
        host_address_family.value_namespace = name_space;
        host_address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::VtyLines::VtyLine::VtyStatistics::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incoming-host-address")
    {
        incoming_host_address.yfilter = yfilter;
    }
    if(value_path == "host-address-family")
    {
        host_address_family.yfilter = yfilter;
    }
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
}

bool Tty::VtyLines::VtyLine::VtyStatistics::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-host-address" || name == "host-address-family" || name == "service")
        return true;
    return false;
}

Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::GeneralStatistics()
    :
    terminal_length{YType::uint32, "terminal-length"},
    terminal_width{YType::uint32, "terminal-width"},
    async_interface{YType::boolean, "async-interface"},
    flow_control_start_character{YType::int8, "flow-control-start-character"},
    flow_control_stop_character{YType::int8, "flow-control-stop-character"},
    domain_lookup_enabled{YType::boolean, "domain-lookup-enabled"},
    motd_banner_enabled{YType::boolean, "motd-banner-enabled"},
    private_flag{YType::boolean, "private-flag"},
    terminal_type{YType::str, "terminal-type"},
    absolute_timeout{YType::uint32, "absolute-timeout"},
    idle_time{YType::uint32, "idle-time"}
{

    yang_name = "general-statistics"; yang_parent_name = "vty-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::~GeneralStatistics()
{
}

bool Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::has_data() const
{
    return terminal_length.is_set
	|| terminal_width.is_set
	|| async_interface.is_set
	|| flow_control_start_character.is_set
	|| flow_control_stop_character.is_set
	|| domain_lookup_enabled.is_set
	|| motd_banner_enabled.is_set
	|| private_flag.is_set
	|| terminal_type.is_set
	|| absolute_timeout.is_set
	|| idle_time.is_set;
}

bool Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminal_length.yfilter)
	|| ydk::is_set(terminal_width.yfilter)
	|| ydk::is_set(async_interface.yfilter)
	|| ydk::is_set(flow_control_start_character.yfilter)
	|| ydk::is_set(flow_control_stop_character.yfilter)
	|| ydk::is_set(domain_lookup_enabled.yfilter)
	|| ydk::is_set(motd_banner_enabled.yfilter)
	|| ydk::is_set(private_flag.yfilter)
	|| ydk::is_set(terminal_type.yfilter)
	|| ydk::is_set(absolute_timeout.yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminal_length.is_set || is_set(terminal_length.yfilter)) leaf_name_data.push_back(terminal_length.get_name_leafdata());
    if (terminal_width.is_set || is_set(terminal_width.yfilter)) leaf_name_data.push_back(terminal_width.get_name_leafdata());
    if (async_interface.is_set || is_set(async_interface.yfilter)) leaf_name_data.push_back(async_interface.get_name_leafdata());
    if (flow_control_start_character.is_set || is_set(flow_control_start_character.yfilter)) leaf_name_data.push_back(flow_control_start_character.get_name_leafdata());
    if (flow_control_stop_character.is_set || is_set(flow_control_stop_character.yfilter)) leaf_name_data.push_back(flow_control_stop_character.get_name_leafdata());
    if (domain_lookup_enabled.is_set || is_set(domain_lookup_enabled.yfilter)) leaf_name_data.push_back(domain_lookup_enabled.get_name_leafdata());
    if (motd_banner_enabled.is_set || is_set(motd_banner_enabled.yfilter)) leaf_name_data.push_back(motd_banner_enabled.get_name_leafdata());
    if (private_flag.is_set || is_set(private_flag.yfilter)) leaf_name_data.push_back(private_flag.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.yfilter)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (absolute_timeout.is_set || is_set(absolute_timeout.yfilter)) leaf_name_data.push_back(absolute_timeout.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminal-length")
    {
        terminal_length = value;
        terminal_length.value_namespace = name_space;
        terminal_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal-width")
    {
        terminal_width = value;
        terminal_width.value_namespace = name_space;
        terminal_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "async-interface")
    {
        async_interface = value;
        async_interface.value_namespace = name_space;
        async_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-control-start-character")
    {
        flow_control_start_character = value;
        flow_control_start_character.value_namespace = name_space;
        flow_control_start_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-control-stop-character")
    {
        flow_control_stop_character = value;
        flow_control_stop_character.value_namespace = name_space;
        flow_control_stop_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-lookup-enabled")
    {
        domain_lookup_enabled = value;
        domain_lookup_enabled.value_namespace = name_space;
        domain_lookup_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "motd-banner-enabled")
    {
        motd_banner_enabled = value;
        motd_banner_enabled.value_namespace = name_space;
        motd_banner_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flag")
    {
        private_flag = value;
        private_flag.value_namespace = name_space;
        private_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
        terminal_type.value_namespace = name_space;
        terminal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-timeout")
    {
        absolute_timeout = value;
        absolute_timeout.value_namespace = name_space;
        absolute_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminal-length")
    {
        terminal_length.yfilter = yfilter;
    }
    if(value_path == "terminal-width")
    {
        terminal_width.yfilter = yfilter;
    }
    if(value_path == "async-interface")
    {
        async_interface.yfilter = yfilter;
    }
    if(value_path == "flow-control-start-character")
    {
        flow_control_start_character.yfilter = yfilter;
    }
    if(value_path == "flow-control-stop-character")
    {
        flow_control_stop_character.yfilter = yfilter;
    }
    if(value_path == "domain-lookup-enabled")
    {
        domain_lookup_enabled.yfilter = yfilter;
    }
    if(value_path == "motd-banner-enabled")
    {
        motd_banner_enabled.yfilter = yfilter;
    }
    if(value_path == "private-flag")
    {
        private_flag.yfilter = yfilter;
    }
    if(value_path == "terminal-type")
    {
        terminal_type.yfilter = yfilter;
    }
    if(value_path == "absolute-timeout")
    {
        absolute_timeout.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Tty::VtyLines::VtyLine::VtyStatistics::GeneralStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminal-length" || name == "terminal-width" || name == "async-interface" || name == "flow-control-start-character" || name == "flow-control-stop-character" || name == "domain-lookup-enabled" || name == "motd-banner-enabled" || name == "private-flag" || name == "terminal-type" || name == "absolute-timeout" || name == "idle-time")
        return true;
    return false;
}

Tty::VtyLines::VtyLine::VtyStatistics::Exec::Exec()
    :
    time_stamp_enabled{YType::boolean, "time-stamp-enabled"}
{

    yang_name = "exec"; yang_parent_name = "vty-statistics"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(time_stamp_enabled.yfilter);
}

std::string Tty::VtyLines::VtyLine::VtyStatistics::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::VtyLine::VtyStatistics::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_stamp_enabled.is_set || is_set(time_stamp_enabled.yfilter)) leaf_name_data.push_back(time_stamp_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::VtyStatistics::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::VtyStatistics::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::VtyLines::VtyLine::VtyStatistics::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-stamp-enabled")
    {
        time_stamp_enabled = value;
        time_stamp_enabled.value_namespace = name_space;
        time_stamp_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::VtyLines::VtyLine::VtyStatistics::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-stamp-enabled")
    {
        time_stamp_enabled.yfilter = yfilter;
    }
}

bool Tty::VtyLines::VtyLine::VtyStatistics::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-stamp-enabled")
        return true;
    return false;
}

Tty::VtyLines::VtyLine::VtyStatistics::Aaa::Aaa()
    :
    user_name{YType::str, "user-name"}
{

    yang_name = "aaa"; yang_parent_name = "vty-statistics"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(user_name.yfilter);
}

std::string Tty::VtyLines::VtyLine::VtyStatistics::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::VtyLine::VtyStatistics::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_name.is_set || is_set(user_name.yfilter)) leaf_name_data.push_back(user_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::VtyStatistics::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::VtyStatistics::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::VtyLines::VtyLine::VtyStatistics::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user-name")
    {
        user_name = value;
        user_name.value_namespace = name_space;
        user_name.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::VtyLines::VtyLine::VtyStatistics::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user-name")
    {
        user_name.yfilter = yfilter;
    }
}

bool Tty::VtyLines::VtyLine::VtyStatistics::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user-name")
        return true;
    return false;
}

Tty::VtyLines::VtyLine::State::State()
    :
    template_(std::make_shared<Tty::VtyLines::VtyLine::State::Template>())
	,general(std::make_shared<Tty::VtyLines::VtyLine::State::General>())
{
    template_->parent = this;
    general->parent = this;

    yang_name = "state"; yang_parent_name = "vty-line"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::VtyLines::VtyLine::State::~State()
{
}

bool Tty::VtyLines::VtyLine::State::has_data() const
{
    return (template_ !=  nullptr && template_->has_data())
	|| (general !=  nullptr && general->has_data());
}

bool Tty::VtyLines::VtyLine::State::has_operation() const
{
    return is_set(yfilter)
	|| (template_ !=  nullptr && template_->has_operation())
	|| (general !=  nullptr && general->has_operation());
}

std::string Tty::VtyLines::VtyLine::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::VtyLine::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Tty::VtyLines::VtyLine::State::Template>();
        }
        return template_;
    }

    if(child_yang_name == "general")
    {
        if(general == nullptr)
        {
            general = std::make_shared<Tty::VtyLines::VtyLine::State::General>();
        }
        return general;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(general != nullptr)
    {
        children["general"] = general;
    }

    return children;
}

void Tty::VtyLines::VtyLine::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::VtyLines::VtyLine::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::VtyLines::VtyLine::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template" || name == "general")
        return true;
    return false;
}

Tty::VtyLines::VtyLine::State::Template::Template()
    :
    name{YType::str, "name"}
{

    yang_name = "template"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::VtyLines::VtyLine::State::Template::~Template()
{
}

bool Tty::VtyLines::VtyLine::State::Template::has_data() const
{
    return name.is_set;
}

bool Tty::VtyLines::VtyLine::State::Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Tty::VtyLines::VtyLine::State::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::VtyLine::State::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::State::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::State::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::VtyLines::VtyLine::State::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::VtyLines::VtyLine::State::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Tty::VtyLines::VtyLine::State::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Tty::VtyLines::VtyLine::State::General::General()
    :
    operation_{YType::enumeration, "operation"},
    general_state{YType::enumeration, "general-state"}
{

    yang_name = "general"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::VtyLines::VtyLine::State::General::~General()
{
}

bool Tty::VtyLines::VtyLine::State::General::has_data() const
{
    return operation_.is_set
	|| general_state.is_set;
}

bool Tty::VtyLines::VtyLine::State::General::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_.yfilter)
	|| ydk::is_set(general_state.yfilter);
}

std::string Tty::VtyLines::VtyLine::State::General::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::VtyLine::State::General::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());
    if (general_state.is_set || is_set(general_state.yfilter)) leaf_name_data.push_back(general_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::State::General::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::State::General::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::VtyLines::VtyLine::State::General::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-state")
    {
        general_state = value;
        general_state.value_namespace = name_space;
        general_state.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::VtyLines::VtyLine::State::General::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
    if(value_path == "general-state")
    {
        general_state.yfilter = yfilter;
    }
}

bool Tty::VtyLines::VtyLine::State::General::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation" || name == "general-state")
        return true;
    return false;
}

Tty::VtyLines::VtyLine::Configuration::Configuration()
    :
    connection_configuration(std::make_shared<Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration>())
{
    connection_configuration->parent = this;

    yang_name = "configuration"; yang_parent_name = "vty-line"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (connection_configuration !=  nullptr && connection_configuration->has_operation());
}

std::string Tty::VtyLines::VtyLine::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::VtyLine::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
    if(connection_configuration != nullptr)
    {
        children["connection-configuration"] = connection_configuration;
    }

    return children;
}

void Tty::VtyLines::VtyLine::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::VtyLines::VtyLine::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::VtyLines::VtyLine::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-configuration")
        return true;
    return false;
}

Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::ConnectionConfiguration()
    :
    acl_out{YType::str, "acl-out"},
    acl_in{YType::str, "acl-in"}
    	,
    transport_input(std::make_shared<Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput>())
{
    transport_input->parent = this;

    yang_name = "connection-configuration"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::~ConnectionConfiguration()
{
}

bool Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::has_data() const
{
    return acl_out.is_set
	|| acl_in.is_set
	|| (transport_input !=  nullptr && transport_input->has_data());
}

bool Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_out.yfilter)
	|| ydk::is_set(acl_in.yfilter)
	|| (transport_input !=  nullptr && transport_input->has_operation());
}

std::string Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_out.is_set || is_set(acl_out.yfilter)) leaf_name_data.push_back(acl_out.get_name_leafdata());
    if (acl_in.is_set || is_set(acl_in.yfilter)) leaf_name_data.push_back(acl_in.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(transport_input != nullptr)
    {
        children["transport-input"] = transport_input;
    }

    return children;
}

void Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-out")
    {
        acl_out = value;
        acl_out.value_namespace = name_space;
        acl_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-in")
    {
        acl_in = value;
        acl_in.value_namespace = name_space;
        acl_in.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-out")
    {
        acl_out.yfilter = yfilter;
    }
    if(value_path == "acl-in")
    {
        acl_in.yfilter = yfilter;
    }
}

bool Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-input" || name == "acl-out" || name == "acl-in")
        return true;
    return false;
}

Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::TransportInput()
    :
    select{YType::enumeration, "select"},
    protocol1{YType::enumeration, "protocol1"},
    protocol2{YType::enumeration, "protocol2"},
    none{YType::int32, "none"}
{

    yang_name = "transport-input"; yang_parent_name = "connection-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::~TransportInput()
{
}

bool Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::has_data() const
{
    return select.is_set
	|| protocol1.is_set
	|| protocol2.is_set
	|| none.is_set;
}

bool Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(select.yfilter)
	|| ydk::is_set(protocol1.yfilter)
	|| ydk::is_set(protocol2.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (select.is_set || is_set(select.yfilter)) leaf_name_data.push_back(select.get_name_leafdata());
    if (protocol1.is_set || is_set(protocol1.yfilter)) leaf_name_data.push_back(protocol1.get_name_leafdata());
    if (protocol2.is_set || is_set(protocol2.yfilter)) leaf_name_data.push_back(protocol2.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "select")
    {
        select = value;
        select.value_namespace = name_space;
        select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol1")
    {
        protocol1 = value;
        protocol1.value_namespace = name_space;
        protocol1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol2")
    {
        protocol2 = value;
        protocol2.value_namespace = name_space;
        protocol2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "select")
    {
        select.yfilter = yfilter;
    }
    if(value_path == "protocol1")
    {
        protocol1.yfilter = yfilter;
    }
    if(value_path == "protocol2")
    {
        protocol2.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Tty::VtyLines::VtyLine::Configuration::ConnectionConfiguration::TransportInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select" || name == "protocol1" || name == "protocol2" || name == "none")
        return true;
    return false;
}

Tty::VtyLines::VtyLine::Sessions::Sessions()
{

    yang_name = "sessions"; yang_parent_name = "vty-line"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Tty::VtyLines::VtyLine::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-management-oper:sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::VtyLine::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outgoing-connection")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : outgoing_connection)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Tty::VtyLines::VtyLine::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::VtyLines::VtyLine::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::VtyLines::VtyLine::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-connection")
        return true;
    return false;
}

Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::OutgoingConnection()
    :
    connection_id{YType::uint8, "connection-id"},
    host_name{YType::str, "host-name"},
    transport_protocol{YType::enumeration, "transport-protocol"},
    is_last_active_session{YType::boolean, "is-last-active-session"},
    idle_time{YType::uint32, "idle-time"}
    	,
    host_address(std::make_shared<Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress>())
{
    host_address->parent = this;

    yang_name = "outgoing-connection"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::~OutgoingConnection()
{
}

bool Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::has_data() const
{
    return connection_id.is_set
	|| host_name.is_set
	|| transport_protocol.is_set
	|| is_last_active_session.is_set
	|| idle_time.is_set
	|| (host_address !=  nullptr && host_address->has_data());
}

bool Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_id.yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(transport_protocol.yfilter)
	|| ydk::is_set(is_last_active_session.yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| (host_address !=  nullptr && host_address->has_operation());
}

std::string Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_id.is_set || is_set(connection_id.yfilter)) leaf_name_data.push_back(connection_id.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (transport_protocol.is_set || is_set(transport_protocol.yfilter)) leaf_name_data.push_back(transport_protocol.get_name_leafdata());
    if (is_last_active_session.is_set || is_set(is_last_active_session.yfilter)) leaf_name_data.push_back(is_last_active_session.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(host_address != nullptr)
    {
        children["host-address"] = host_address;
    }

    return children;
}

void Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-id")
    {
        connection_id = value;
        connection_id.value_namespace = name_space;
        connection_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-protocol")
    {
        transport_protocol = value;
        transport_protocol.value_namespace = name_space;
        transport_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-last-active-session")
    {
        is_last_active_session = value;
        is_last_active_session.value_namespace = name_space;
        is_last_active_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-id")
    {
        connection_id.yfilter = yfilter;
    }
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "transport-protocol")
    {
        transport_protocol.yfilter = yfilter;
    }
    if(value_path == "is-last-active-session")
    {
        is_last_active_session.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-address" || name == "connection-id" || name == "host-name" || name == "transport-protocol" || name == "is-last-active-session" || name == "idle-time")
        return true;
    return false;
}

Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::HostAddress()
    :
    af_name{YType::identityref, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "host-address"; yang_parent_name = "outgoing-connection"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Tty::VtyLines::VtyLine::Sessions::OutgoingConnection::HostAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Tty::AuxiliaryNodes::AuxiliaryNodes()
{

    yang_name = "auxiliary-nodes"; yang_parent_name = "tty"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Tty::AuxiliaryNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-server-oper:tty/" << get_segment_path();
    return path_buffer.str();
}

std::string Tty::AuxiliaryNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auxiliary-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::AuxiliaryNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auxiliary-node")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : auxiliary_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Tty::AuxiliaryNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::AuxiliaryNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::AuxiliaryNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auxiliary-node")
        return true;
    return false;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryNode()
    :
    id{YType::str, "id"}
    	,
    auxiliary_line(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine>())
{
    auxiliary_line->parent = this;

    yang_name = "auxiliary-node"; yang_parent_name = "auxiliary-nodes"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (auxiliary_line !=  nullptr && auxiliary_line->has_operation());
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-server-oper:tty/auxiliary-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auxiliary-node" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::AuxiliaryNodes::AuxiliaryNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(auxiliary_line != nullptr)
    {
        children["auxiliary-line"] = auxiliary_line;
    }

    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::AuxiliaryNodes::AuxiliaryNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auxiliary-line" || name == "id")
        return true;
    return false;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryLine()
    :
    auxiliary_statistics(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics>())
	,state(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State>())
	,configuration(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration>())
{
    auxiliary_statistics->parent = this;
    state->parent = this;
    configuration->parent = this;

    yang_name = "auxiliary-line"; yang_parent_name = "auxiliary-node"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::~AuxiliaryLine()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::has_data() const
{
    return (auxiliary_statistics !=  nullptr && auxiliary_statistics->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (configuration !=  nullptr && configuration->has_data());
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::has_operation() const
{
    return is_set(yfilter)
	|| (auxiliary_statistics !=  nullptr && auxiliary_statistics->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auxiliary-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State>();
        }
        return state;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration>();
        }
        return configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auxiliary_statistics != nullptr)
    {
        children["auxiliary-statistics"] = auxiliary_statistics;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auxiliary-statistics" || name == "state" || name == "configuration")
        return true;
    return false;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::AuxiliaryStatistics()
    :
    rs232(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232>())
	,general_statistics(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics>())
	,exec(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec>())
	,aaa(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa>())
{
    rs232->parent = this;
    general_statistics->parent = this;
    exec->parent = this;
    aaa->parent = this;

    yang_name = "auxiliary-statistics"; yang_parent_name = "auxiliary-line"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::~AuxiliaryStatistics()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::has_data() const
{
    return (rs232 !=  nullptr && rs232->has_data())
	|| (general_statistics !=  nullptr && general_statistics->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (aaa !=  nullptr && aaa->has_data());
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (rs232 !=  nullptr && rs232->has_operation())
	|| (general_statistics !=  nullptr && general_statistics->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (aaa !=  nullptr && aaa->has_operation());
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auxiliary-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rs232")
    {
        if(rs232 == nullptr)
        {
            rs232 = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232>();
        }
        return rs232;
    }

    if(child_yang_name == "general-statistics")
    {
        if(general_statistics == nullptr)
        {
            general_statistics = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics>();
        }
        return general_statistics;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa>();
        }
        return aaa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rs232 != nullptr)
    {
        children["rs232"] = rs232;
    }

    if(general_statistics != nullptr)
    {
        children["general-statistics"] = general_statistics;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(aaa != nullptr)
    {
        children["aaa"] = aaa;
    }

    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rs232" || name == "general-statistics" || name == "exec" || name == "aaa")
        return true;
    return false;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::Rs232()
    :
    data_bits{YType::uint32, "data-bits"},
    exec_disabled{YType::boolean, "exec-disabled"},
    hardware_flow_control_status{YType::uint32, "hardware-flow-control-status"},
    parity_status{YType::uint32, "parity-status"},
    baud_rate{YType::uint32, "baud-rate"},
    stop_bits{YType::uint32, "stop-bits"},
    overrun_error_count{YType::uint32, "overrun-error-count"},
    framing_error_count{YType::uint32, "framing-error-count"},
    parity_error_count{YType::uint32, "parity-error-count"}
{

    yang_name = "rs232"; yang_parent_name = "auxiliary-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::~Rs232()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::has_data() const
{
    return data_bits.is_set
	|| exec_disabled.is_set
	|| hardware_flow_control_status.is_set
	|| parity_status.is_set
	|| baud_rate.is_set
	|| stop_bits.is_set
	|| overrun_error_count.is_set
	|| framing_error_count.is_set
	|| parity_error_count.is_set;
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_bits.yfilter)
	|| ydk::is_set(exec_disabled.yfilter)
	|| ydk::is_set(hardware_flow_control_status.yfilter)
	|| ydk::is_set(parity_status.yfilter)
	|| ydk::is_set(baud_rate.yfilter)
	|| ydk::is_set(stop_bits.yfilter)
	|| ydk::is_set(overrun_error_count.yfilter)
	|| ydk::is_set(framing_error_count.yfilter)
	|| ydk::is_set(parity_error_count.yfilter);
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rs232";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_bits.is_set || is_set(data_bits.yfilter)) leaf_name_data.push_back(data_bits.get_name_leafdata());
    if (exec_disabled.is_set || is_set(exec_disabled.yfilter)) leaf_name_data.push_back(exec_disabled.get_name_leafdata());
    if (hardware_flow_control_status.is_set || is_set(hardware_flow_control_status.yfilter)) leaf_name_data.push_back(hardware_flow_control_status.get_name_leafdata());
    if (parity_status.is_set || is_set(parity_status.yfilter)) leaf_name_data.push_back(parity_status.get_name_leafdata());
    if (baud_rate.is_set || is_set(baud_rate.yfilter)) leaf_name_data.push_back(baud_rate.get_name_leafdata());
    if (stop_bits.is_set || is_set(stop_bits.yfilter)) leaf_name_data.push_back(stop_bits.get_name_leafdata());
    if (overrun_error_count.is_set || is_set(overrun_error_count.yfilter)) leaf_name_data.push_back(overrun_error_count.get_name_leafdata());
    if (framing_error_count.is_set || is_set(framing_error_count.yfilter)) leaf_name_data.push_back(framing_error_count.get_name_leafdata());
    if (parity_error_count.is_set || is_set(parity_error_count.yfilter)) leaf_name_data.push_back(parity_error_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-bits")
    {
        data_bits = value;
        data_bits.value_namespace = name_space;
        data_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-disabled")
    {
        exec_disabled = value;
        exec_disabled.value_namespace = name_space;
        exec_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-flow-control-status")
    {
        hardware_flow_control_status = value;
        hardware_flow_control_status.value_namespace = name_space;
        hardware_flow_control_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parity-status")
    {
        parity_status = value;
        parity_status.value_namespace = name_space;
        parity_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baud-rate")
    {
        baud_rate = value;
        baud_rate.value_namespace = name_space;
        baud_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-bits")
    {
        stop_bits = value;
        stop_bits.value_namespace = name_space;
        stop_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overrun-error-count")
    {
        overrun_error_count = value;
        overrun_error_count.value_namespace = name_space;
        overrun_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing-error-count")
    {
        framing_error_count = value;
        framing_error_count.value_namespace = name_space;
        framing_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parity-error-count")
    {
        parity_error_count = value;
        parity_error_count.value_namespace = name_space;
        parity_error_count.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-bits")
    {
        data_bits.yfilter = yfilter;
    }
    if(value_path == "exec-disabled")
    {
        exec_disabled.yfilter = yfilter;
    }
    if(value_path == "hardware-flow-control-status")
    {
        hardware_flow_control_status.yfilter = yfilter;
    }
    if(value_path == "parity-status")
    {
        parity_status.yfilter = yfilter;
    }
    if(value_path == "baud-rate")
    {
        baud_rate.yfilter = yfilter;
    }
    if(value_path == "stop-bits")
    {
        stop_bits.yfilter = yfilter;
    }
    if(value_path == "overrun-error-count")
    {
        overrun_error_count.yfilter = yfilter;
    }
    if(value_path == "framing-error-count")
    {
        framing_error_count.yfilter = yfilter;
    }
    if(value_path == "parity-error-count")
    {
        parity_error_count.yfilter = yfilter;
    }
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Rs232::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-bits" || name == "exec-disabled" || name == "hardware-flow-control-status" || name == "parity-status" || name == "baud-rate" || name == "stop-bits" || name == "overrun-error-count" || name == "framing-error-count" || name == "parity-error-count")
        return true;
    return false;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::GeneralStatistics()
    :
    terminal_length{YType::uint32, "terminal-length"},
    terminal_width{YType::uint32, "terminal-width"},
    async_interface{YType::boolean, "async-interface"},
    flow_control_start_character{YType::int8, "flow-control-start-character"},
    flow_control_stop_character{YType::int8, "flow-control-stop-character"},
    domain_lookup_enabled{YType::boolean, "domain-lookup-enabled"},
    motd_banner_enabled{YType::boolean, "motd-banner-enabled"},
    private_flag{YType::boolean, "private-flag"},
    terminal_type{YType::str, "terminal-type"},
    absolute_timeout{YType::uint32, "absolute-timeout"},
    idle_time{YType::uint32, "idle-time"}
{

    yang_name = "general-statistics"; yang_parent_name = "auxiliary-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::~GeneralStatistics()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::has_data() const
{
    return terminal_length.is_set
	|| terminal_width.is_set
	|| async_interface.is_set
	|| flow_control_start_character.is_set
	|| flow_control_stop_character.is_set
	|| domain_lookup_enabled.is_set
	|| motd_banner_enabled.is_set
	|| private_flag.is_set
	|| terminal_type.is_set
	|| absolute_timeout.is_set
	|| idle_time.is_set;
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminal_length.yfilter)
	|| ydk::is_set(terminal_width.yfilter)
	|| ydk::is_set(async_interface.yfilter)
	|| ydk::is_set(flow_control_start_character.yfilter)
	|| ydk::is_set(flow_control_stop_character.yfilter)
	|| ydk::is_set(domain_lookup_enabled.yfilter)
	|| ydk::is_set(motd_banner_enabled.yfilter)
	|| ydk::is_set(private_flag.yfilter)
	|| ydk::is_set(terminal_type.yfilter)
	|| ydk::is_set(absolute_timeout.yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminal_length.is_set || is_set(terminal_length.yfilter)) leaf_name_data.push_back(terminal_length.get_name_leafdata());
    if (terminal_width.is_set || is_set(terminal_width.yfilter)) leaf_name_data.push_back(terminal_width.get_name_leafdata());
    if (async_interface.is_set || is_set(async_interface.yfilter)) leaf_name_data.push_back(async_interface.get_name_leafdata());
    if (flow_control_start_character.is_set || is_set(flow_control_start_character.yfilter)) leaf_name_data.push_back(flow_control_start_character.get_name_leafdata());
    if (flow_control_stop_character.is_set || is_set(flow_control_stop_character.yfilter)) leaf_name_data.push_back(flow_control_stop_character.get_name_leafdata());
    if (domain_lookup_enabled.is_set || is_set(domain_lookup_enabled.yfilter)) leaf_name_data.push_back(domain_lookup_enabled.get_name_leafdata());
    if (motd_banner_enabled.is_set || is_set(motd_banner_enabled.yfilter)) leaf_name_data.push_back(motd_banner_enabled.get_name_leafdata());
    if (private_flag.is_set || is_set(private_flag.yfilter)) leaf_name_data.push_back(private_flag.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.yfilter)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (absolute_timeout.is_set || is_set(absolute_timeout.yfilter)) leaf_name_data.push_back(absolute_timeout.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminal-length")
    {
        terminal_length = value;
        terminal_length.value_namespace = name_space;
        terminal_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal-width")
    {
        terminal_width = value;
        terminal_width.value_namespace = name_space;
        terminal_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "async-interface")
    {
        async_interface = value;
        async_interface.value_namespace = name_space;
        async_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-control-start-character")
    {
        flow_control_start_character = value;
        flow_control_start_character.value_namespace = name_space;
        flow_control_start_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-control-stop-character")
    {
        flow_control_stop_character = value;
        flow_control_stop_character.value_namespace = name_space;
        flow_control_stop_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-lookup-enabled")
    {
        domain_lookup_enabled = value;
        domain_lookup_enabled.value_namespace = name_space;
        domain_lookup_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "motd-banner-enabled")
    {
        motd_banner_enabled = value;
        motd_banner_enabled.value_namespace = name_space;
        motd_banner_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "private-flag")
    {
        private_flag = value;
        private_flag.value_namespace = name_space;
        private_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
        terminal_type.value_namespace = name_space;
        terminal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-timeout")
    {
        absolute_timeout = value;
        absolute_timeout.value_namespace = name_space;
        absolute_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminal-length")
    {
        terminal_length.yfilter = yfilter;
    }
    if(value_path == "terminal-width")
    {
        terminal_width.yfilter = yfilter;
    }
    if(value_path == "async-interface")
    {
        async_interface.yfilter = yfilter;
    }
    if(value_path == "flow-control-start-character")
    {
        flow_control_start_character.yfilter = yfilter;
    }
    if(value_path == "flow-control-stop-character")
    {
        flow_control_stop_character.yfilter = yfilter;
    }
    if(value_path == "domain-lookup-enabled")
    {
        domain_lookup_enabled.yfilter = yfilter;
    }
    if(value_path == "motd-banner-enabled")
    {
        motd_banner_enabled.yfilter = yfilter;
    }
    if(value_path == "private-flag")
    {
        private_flag.yfilter = yfilter;
    }
    if(value_path == "terminal-type")
    {
        terminal_type.yfilter = yfilter;
    }
    if(value_path == "absolute-timeout")
    {
        absolute_timeout.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::GeneralStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminal-length" || name == "terminal-width" || name == "async-interface" || name == "flow-control-start-character" || name == "flow-control-stop-character" || name == "domain-lookup-enabled" || name == "motd-banner-enabled" || name == "private-flag" || name == "terminal-type" || name == "absolute-timeout" || name == "idle-time")
        return true;
    return false;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::Exec()
    :
    time_stamp_enabled{YType::boolean, "time-stamp-enabled"}
{

    yang_name = "exec"; yang_parent_name = "auxiliary-statistics"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(time_stamp_enabled.yfilter);
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_stamp_enabled.is_set || is_set(time_stamp_enabled.yfilter)) leaf_name_data.push_back(time_stamp_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-stamp-enabled")
    {
        time_stamp_enabled = value;
        time_stamp_enabled.value_namespace = name_space;
        time_stamp_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-stamp-enabled")
    {
        time_stamp_enabled.yfilter = yfilter;
    }
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-stamp-enabled")
        return true;
    return false;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::Aaa()
    :
    user_name{YType::str, "user-name"}
{

    yang_name = "aaa"; yang_parent_name = "auxiliary-statistics"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(user_name.yfilter);
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_name.is_set || is_set(user_name.yfilter)) leaf_name_data.push_back(user_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user-name")
    {
        user_name = value;
        user_name.value_namespace = name_space;
        user_name.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user-name")
    {
        user_name.yfilter = yfilter;
    }
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::AuxiliaryStatistics::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user-name")
        return true;
    return false;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::State()
    :
    template_(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template>())
	,general(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General>())
{
    template_->parent = this;
    general->parent = this;

    yang_name = "state"; yang_parent_name = "auxiliary-line"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::~State()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::has_data() const
{
    return (template_ !=  nullptr && template_->has_data())
	|| (general !=  nullptr && general->has_data());
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::has_operation() const
{
    return is_set(yfilter)
	|| (template_ !=  nullptr && template_->has_operation())
	|| (general !=  nullptr && general->has_operation());
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template>();
        }
        return template_;
    }

    if(child_yang_name == "general")
    {
        if(general == nullptr)
        {
            general = std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General>();
        }
        return general;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(general != nullptr)
    {
        children["general"] = general;
    }

    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template" || name == "general")
        return true;
    return false;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template::Template()
    :
    name{YType::str, "name"}
{

    yang_name = "template"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template::~Template()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template::has_data() const
{
    return name.is_set;
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::General()
    :
    operation_{YType::enumeration, "operation"},
    general_state{YType::enumeration, "general-state"}
{

    yang_name = "general"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::~General()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::has_data() const
{
    return operation_.is_set
	|| general_state.is_set;
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_.yfilter)
	|| ydk::is_set(general_state.yfilter);
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());
    if (general_state.is_set || is_set(general_state.yfilter)) leaf_name_data.push_back(general_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-state")
    {
        general_state = value;
        general_state.value_namespace = name_space;
        general_state.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
    if(value_path == "general-state")
    {
        general_state.yfilter = yfilter;
    }
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::State::General::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation" || name == "general-state")
        return true;
    return false;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::Configuration()
    :
    connection_configuration(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration>())
{
    connection_configuration->parent = this;

    yang_name = "configuration"; yang_parent_name = "auxiliary-line"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (connection_configuration !=  nullptr && connection_configuration->has_operation());
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
    if(connection_configuration != nullptr)
    {
        children["connection-configuration"] = connection_configuration;
    }

    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-configuration")
        return true;
    return false;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::ConnectionConfiguration()
    :
    acl_out{YType::str, "acl-out"},
    acl_in{YType::str, "acl-in"}
    	,
    transport_input(std::make_shared<Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput>())
{
    transport_input->parent = this;

    yang_name = "connection-configuration"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::~ConnectionConfiguration()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::has_data() const
{
    return acl_out.is_set
	|| acl_in.is_set
	|| (transport_input !=  nullptr && transport_input->has_data());
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_out.yfilter)
	|| ydk::is_set(acl_in.yfilter)
	|| (transport_input !=  nullptr && transport_input->has_operation());
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_out.is_set || is_set(acl_out.yfilter)) leaf_name_data.push_back(acl_out.get_name_leafdata());
    if (acl_in.is_set || is_set(acl_in.yfilter)) leaf_name_data.push_back(acl_in.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(transport_input != nullptr)
    {
        children["transport-input"] = transport_input;
    }

    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-out")
    {
        acl_out = value;
        acl_out.value_namespace = name_space;
        acl_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-in")
    {
        acl_in = value;
        acl_in.value_namespace = name_space;
        acl_in.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-out")
    {
        acl_out.yfilter = yfilter;
    }
    if(value_path == "acl-in")
    {
        acl_in.yfilter = yfilter;
    }
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-input" || name == "acl-out" || name == "acl-in")
        return true;
    return false;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::TransportInput()
    :
    select{YType::enumeration, "select"},
    protocol1{YType::enumeration, "protocol1"},
    protocol2{YType::enumeration, "protocol2"},
    none{YType::int32, "none"}
{

    yang_name = "transport-input"; yang_parent_name = "connection-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::~TransportInput()
{
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::has_data() const
{
    return select.is_set
	|| protocol1.is_set
	|| protocol2.is_set
	|| none.is_set;
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(select.yfilter)
	|| ydk::is_set(protocol1.yfilter)
	|| ydk::is_set(protocol2.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (select.is_set || is_set(select.yfilter)) leaf_name_data.push_back(select.get_name_leafdata());
    if (protocol1.is_set || is_set(protocol1.yfilter)) leaf_name_data.push_back(protocol1.get_name_leafdata());
    if (protocol2.is_set || is_set(protocol2.yfilter)) leaf_name_data.push_back(protocol2.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "select")
    {
        select = value;
        select.value_namespace = name_space;
        select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol1")
    {
        protocol1 = value;
        protocol1.value_namespace = name_space;
        protocol1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol2")
    {
        protocol2 = value;
        protocol2.value_namespace = name_space;
        protocol2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "select")
    {
        select.yfilter = yfilter;
    }
    if(value_path == "protocol1")
    {
        protocol1.yfilter = yfilter;
    }
    if(value_path == "protocol2")
    {
        protocol2.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Tty::AuxiliaryNodes::AuxiliaryNode::AuxiliaryLine::Configuration::ConnectionConfiguration::TransportInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select" || name == "protocol1" || name == "protocol2" || name == "none")
        return true;
    return false;
}

const Enum::YLeaf LineState::none {0, "none"};
const Enum::YLeaf LineState::registered {1, "registered"};
const Enum::YLeaf LineState::in_use {2, "in-use"};

const Enum::YLeaf SessionOperation::none {0, "none"};
const Enum::YLeaf SessionOperation::setup {1, "setup"};
const Enum::YLeaf SessionOperation::shell {2, "shell"};
const Enum::YLeaf SessionOperation::transitioning {3, "transitioning"};
const Enum::YLeaf SessionOperation::packet {4, "packet"};


}
}

