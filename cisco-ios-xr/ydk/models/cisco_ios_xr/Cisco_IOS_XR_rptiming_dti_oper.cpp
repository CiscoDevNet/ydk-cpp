
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_rptiming_dti_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_rptiming_dti_oper {

DtiController::DtiController()
    :
    nodes(std::make_shared<DtiController::Nodes>())
{
    nodes->parent = this;

    yang_name = "dti-controller"; yang_parent_name = "Cisco-IOS-XR-rptiming-dti-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

DtiController::~DtiController()
{
}

bool DtiController::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool DtiController::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string DtiController::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rptiming-dti-oper:dti-controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DtiController::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DtiController::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<DtiController::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DtiController::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void DtiController::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DtiController::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DtiController::clone_ptr() const
{
    return std::make_shared<DtiController>();
}

std::string DtiController::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string DtiController::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function DtiController::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DtiController::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool DtiController::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

DtiController::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "dti-controller"; is_top_level_class = false; has_list_ancestor = false; 
}

DtiController::Nodes::~Nodes()
{
}

bool DtiController::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool DtiController::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DtiController::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rptiming-dti-oper:dti-controller/" << get_segment_path();
    return path_buffer.str();
}

std::string DtiController::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DtiController::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DtiController::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<DtiController::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DtiController::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DtiController::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DtiController::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DtiController::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

DtiController::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    client(std::make_shared<DtiController::Nodes::Node::Client>())
    , port(std::make_shared<DtiController::Nodes::Node::Port>())
    , time_of_day(std::make_shared<DtiController::Nodes::Node::TimeOfDay>())
{
    client->parent = this;
    port->parent = this;
    time_of_day->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

DtiController::Nodes::Node::~Node()
{
}

bool DtiController::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (client !=  nullptr && client->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (time_of_day !=  nullptr && time_of_day->has_data());
}

bool DtiController::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (time_of_day !=  nullptr && time_of_day->has_operation());
}

std::string DtiController::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rptiming-dti-oper:dti-controller/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string DtiController::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DtiController::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DtiController::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<DtiController::Nodes::Node::Client>();
        }
        return client;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<DtiController::Nodes::Node::Port>();
        }
        return port;
    }

    if(child_yang_name == "time-of-day")
    {
        if(time_of_day == nullptr)
        {
            time_of_day = std::make_shared<DtiController::Nodes::Node::TimeOfDay>();
        }
        return time_of_day;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DtiController::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(time_of_day != nullptr)
    {
        children["time-of-day"] = time_of_day;
    }

    return children;
}

void DtiController::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void DtiController::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool DtiController::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "port" || name == "time-of-day" || name == "node-name")
        return true;
    return false;
}

DtiController::Nodes::Node::Client::Client()
    :
    timestamp_comparator_enable{YType::str, "timestamp-comparator-enable"},
    register_write_enable{YType::str, "register-write-enable"},
    revertive_mode_enable{YType::str, "revertive-mode-enable"},
    port_mode_select{YType::str, "port-mode-select"},
    force_freerun{YType::str, "force-freerun"},
    reference_select_port{YType::str, "reference-select-port"},
    timestamp_sync_detected{YType::str, "timestamp-sync-detected"},
    reference10mhz_detected{YType::str, "reference10mhz-detected"},
    active_input_port{YType::str, "active-input-port"},
    client_state{YType::str, "client-state"}
{

    yang_name = "client"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

DtiController::Nodes::Node::Client::~Client()
{
}

bool DtiController::Nodes::Node::Client::has_data() const
{
    if (is_presence_container) return true;
    return timestamp_comparator_enable.is_set
	|| register_write_enable.is_set
	|| revertive_mode_enable.is_set
	|| port_mode_select.is_set
	|| force_freerun.is_set
	|| reference_select_port.is_set
	|| timestamp_sync_detected.is_set
	|| reference10mhz_detected.is_set
	|| active_input_port.is_set
	|| client_state.is_set;
}

bool DtiController::Nodes::Node::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp_comparator_enable.yfilter)
	|| ydk::is_set(register_write_enable.yfilter)
	|| ydk::is_set(revertive_mode_enable.yfilter)
	|| ydk::is_set(port_mode_select.yfilter)
	|| ydk::is_set(force_freerun.yfilter)
	|| ydk::is_set(reference_select_port.yfilter)
	|| ydk::is_set(timestamp_sync_detected.yfilter)
	|| ydk::is_set(reference10mhz_detected.yfilter)
	|| ydk::is_set(active_input_port.yfilter)
	|| ydk::is_set(client_state.yfilter);
}

std::string DtiController::Nodes::Node::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DtiController::Nodes::Node::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp_comparator_enable.is_set || is_set(timestamp_comparator_enable.yfilter)) leaf_name_data.push_back(timestamp_comparator_enable.get_name_leafdata());
    if (register_write_enable.is_set || is_set(register_write_enable.yfilter)) leaf_name_data.push_back(register_write_enable.get_name_leafdata());
    if (revertive_mode_enable.is_set || is_set(revertive_mode_enable.yfilter)) leaf_name_data.push_back(revertive_mode_enable.get_name_leafdata());
    if (port_mode_select.is_set || is_set(port_mode_select.yfilter)) leaf_name_data.push_back(port_mode_select.get_name_leafdata());
    if (force_freerun.is_set || is_set(force_freerun.yfilter)) leaf_name_data.push_back(force_freerun.get_name_leafdata());
    if (reference_select_port.is_set || is_set(reference_select_port.yfilter)) leaf_name_data.push_back(reference_select_port.get_name_leafdata());
    if (timestamp_sync_detected.is_set || is_set(timestamp_sync_detected.yfilter)) leaf_name_data.push_back(timestamp_sync_detected.get_name_leafdata());
    if (reference10mhz_detected.is_set || is_set(reference10mhz_detected.yfilter)) leaf_name_data.push_back(reference10mhz_detected.get_name_leafdata());
    if (active_input_port.is_set || is_set(active_input_port.yfilter)) leaf_name_data.push_back(active_input_port.get_name_leafdata());
    if (client_state.is_set || is_set(client_state.yfilter)) leaf_name_data.push_back(client_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DtiController::Nodes::Node::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DtiController::Nodes::Node::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DtiController::Nodes::Node::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp-comparator-enable")
    {
        timestamp_comparator_enable = value;
        timestamp_comparator_enable.value_namespace = name_space;
        timestamp_comparator_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-write-enable")
    {
        register_write_enable = value;
        register_write_enable.value_namespace = name_space;
        register_write_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revertive-mode-enable")
    {
        revertive_mode_enable = value;
        revertive_mode_enable.value_namespace = name_space;
        revertive_mode_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-mode-select")
    {
        port_mode_select = value;
        port_mode_select.value_namespace = name_space;
        port_mode_select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-freerun")
    {
        force_freerun = value;
        force_freerun.value_namespace = name_space;
        force_freerun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-select-port")
    {
        reference_select_port = value;
        reference_select_port.value_namespace = name_space;
        reference_select_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-sync-detected")
    {
        timestamp_sync_detected = value;
        timestamp_sync_detected.value_namespace = name_space;
        timestamp_sync_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference10mhz-detected")
    {
        reference10mhz_detected = value;
        reference10mhz_detected.value_namespace = name_space;
        reference10mhz_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-input-port")
    {
        active_input_port = value;
        active_input_port.value_namespace = name_space;
        active_input_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-state")
    {
        client_state = value;
        client_state.value_namespace = name_space;
        client_state.value_namespace_prefix = name_space_prefix;
    }
}

void DtiController::Nodes::Node::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp-comparator-enable")
    {
        timestamp_comparator_enable.yfilter = yfilter;
    }
    if(value_path == "register-write-enable")
    {
        register_write_enable.yfilter = yfilter;
    }
    if(value_path == "revertive-mode-enable")
    {
        revertive_mode_enable.yfilter = yfilter;
    }
    if(value_path == "port-mode-select")
    {
        port_mode_select.yfilter = yfilter;
    }
    if(value_path == "force-freerun")
    {
        force_freerun.yfilter = yfilter;
    }
    if(value_path == "reference-select-port")
    {
        reference_select_port.yfilter = yfilter;
    }
    if(value_path == "timestamp-sync-detected")
    {
        timestamp_sync_detected.yfilter = yfilter;
    }
    if(value_path == "reference10mhz-detected")
    {
        reference10mhz_detected.yfilter = yfilter;
    }
    if(value_path == "active-input-port")
    {
        active_input_port.yfilter = yfilter;
    }
    if(value_path == "client-state")
    {
        client_state.yfilter = yfilter;
    }
}

bool DtiController::Nodes::Node::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp-comparator-enable" || name == "register-write-enable" || name == "revertive-mode-enable" || name == "port-mode-select" || name == "force-freerun" || name == "reference-select-port" || name == "timestamp-sync-detected" || name == "reference10mhz-detected" || name == "active-input-port" || name == "client-state")
        return true;
    return false;
}

DtiController::Nodes::Node::Port::Port()
    :
    port1_fr_err_rate_greater5_per{YType::str, "port1-fr-err-rate-greater5-per"},
    port1_fr_err_rate_greater2_per{YType::str, "port1-fr-err-rate-greater2-per"},
    port1_dti_signal_detected{YType::str, "port1-dti-signal-detected"},
    port1_server_timing_source{YType::str, "port1-server-timing-source"},
    port1_server_type{YType::str, "port1-server-type"},
    port1_server_clock_type{YType::str, "port1-server-clock-type"},
    port1_server_state{YType::str, "port1-server-state"},
    port1_client_perf_stable{YType::str, "port1-client-perf-stable"},
    port1_cable_advance_valid{YType::str, "port1-cable-advance-valid"},
    port2_fr_err_rate_greater5_per{YType::str, "port2-fr-err-rate-greater5-per"},
    port2_fr_err_rate_greater2_per{YType::str, "port2-fr-err-rate-greater2-per"},
    port2_dti_signal_detected{YType::str, "port2-dti-signal-detected"},
    port2_server_timing_source{YType::str, "port2-server-timing-source"},
    port2_server_type{YType::str, "port2-server-type"},
    port2_server_clock_type{YType::str, "port2-server-clock-type"},
    port2_server_state{YType::str, "port2-server-state"},
    port2_client_perf_stable{YType::str, "port2-client-perf-stable"},
    port2_cable_advance_valid{YType::str, "port2-cable-advance-valid"}
{

    yang_name = "port"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

DtiController::Nodes::Node::Port::~Port()
{
}

bool DtiController::Nodes::Node::Port::has_data() const
{
    if (is_presence_container) return true;
    return port1_fr_err_rate_greater5_per.is_set
	|| port1_fr_err_rate_greater2_per.is_set
	|| port1_dti_signal_detected.is_set
	|| port1_server_timing_source.is_set
	|| port1_server_type.is_set
	|| port1_server_clock_type.is_set
	|| port1_server_state.is_set
	|| port1_client_perf_stable.is_set
	|| port1_cable_advance_valid.is_set
	|| port2_fr_err_rate_greater5_per.is_set
	|| port2_fr_err_rate_greater2_per.is_set
	|| port2_dti_signal_detected.is_set
	|| port2_server_timing_source.is_set
	|| port2_server_type.is_set
	|| port2_server_clock_type.is_set
	|| port2_server_state.is_set
	|| port2_client_perf_stable.is_set
	|| port2_cable_advance_valid.is_set;
}

bool DtiController::Nodes::Node::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port1_fr_err_rate_greater5_per.yfilter)
	|| ydk::is_set(port1_fr_err_rate_greater2_per.yfilter)
	|| ydk::is_set(port1_dti_signal_detected.yfilter)
	|| ydk::is_set(port1_server_timing_source.yfilter)
	|| ydk::is_set(port1_server_type.yfilter)
	|| ydk::is_set(port1_server_clock_type.yfilter)
	|| ydk::is_set(port1_server_state.yfilter)
	|| ydk::is_set(port1_client_perf_stable.yfilter)
	|| ydk::is_set(port1_cable_advance_valid.yfilter)
	|| ydk::is_set(port2_fr_err_rate_greater5_per.yfilter)
	|| ydk::is_set(port2_fr_err_rate_greater2_per.yfilter)
	|| ydk::is_set(port2_dti_signal_detected.yfilter)
	|| ydk::is_set(port2_server_timing_source.yfilter)
	|| ydk::is_set(port2_server_type.yfilter)
	|| ydk::is_set(port2_server_clock_type.yfilter)
	|| ydk::is_set(port2_server_state.yfilter)
	|| ydk::is_set(port2_client_perf_stable.yfilter)
	|| ydk::is_set(port2_cable_advance_valid.yfilter);
}

std::string DtiController::Nodes::Node::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DtiController::Nodes::Node::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port1_fr_err_rate_greater5_per.is_set || is_set(port1_fr_err_rate_greater5_per.yfilter)) leaf_name_data.push_back(port1_fr_err_rate_greater5_per.get_name_leafdata());
    if (port1_fr_err_rate_greater2_per.is_set || is_set(port1_fr_err_rate_greater2_per.yfilter)) leaf_name_data.push_back(port1_fr_err_rate_greater2_per.get_name_leafdata());
    if (port1_dti_signal_detected.is_set || is_set(port1_dti_signal_detected.yfilter)) leaf_name_data.push_back(port1_dti_signal_detected.get_name_leafdata());
    if (port1_server_timing_source.is_set || is_set(port1_server_timing_source.yfilter)) leaf_name_data.push_back(port1_server_timing_source.get_name_leafdata());
    if (port1_server_type.is_set || is_set(port1_server_type.yfilter)) leaf_name_data.push_back(port1_server_type.get_name_leafdata());
    if (port1_server_clock_type.is_set || is_set(port1_server_clock_type.yfilter)) leaf_name_data.push_back(port1_server_clock_type.get_name_leafdata());
    if (port1_server_state.is_set || is_set(port1_server_state.yfilter)) leaf_name_data.push_back(port1_server_state.get_name_leafdata());
    if (port1_client_perf_stable.is_set || is_set(port1_client_perf_stable.yfilter)) leaf_name_data.push_back(port1_client_perf_stable.get_name_leafdata());
    if (port1_cable_advance_valid.is_set || is_set(port1_cable_advance_valid.yfilter)) leaf_name_data.push_back(port1_cable_advance_valid.get_name_leafdata());
    if (port2_fr_err_rate_greater5_per.is_set || is_set(port2_fr_err_rate_greater5_per.yfilter)) leaf_name_data.push_back(port2_fr_err_rate_greater5_per.get_name_leafdata());
    if (port2_fr_err_rate_greater2_per.is_set || is_set(port2_fr_err_rate_greater2_per.yfilter)) leaf_name_data.push_back(port2_fr_err_rate_greater2_per.get_name_leafdata());
    if (port2_dti_signal_detected.is_set || is_set(port2_dti_signal_detected.yfilter)) leaf_name_data.push_back(port2_dti_signal_detected.get_name_leafdata());
    if (port2_server_timing_source.is_set || is_set(port2_server_timing_source.yfilter)) leaf_name_data.push_back(port2_server_timing_source.get_name_leafdata());
    if (port2_server_type.is_set || is_set(port2_server_type.yfilter)) leaf_name_data.push_back(port2_server_type.get_name_leafdata());
    if (port2_server_clock_type.is_set || is_set(port2_server_clock_type.yfilter)) leaf_name_data.push_back(port2_server_clock_type.get_name_leafdata());
    if (port2_server_state.is_set || is_set(port2_server_state.yfilter)) leaf_name_data.push_back(port2_server_state.get_name_leafdata());
    if (port2_client_perf_stable.is_set || is_set(port2_client_perf_stable.yfilter)) leaf_name_data.push_back(port2_client_perf_stable.get_name_leafdata());
    if (port2_cable_advance_valid.is_set || is_set(port2_cable_advance_valid.yfilter)) leaf_name_data.push_back(port2_cable_advance_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DtiController::Nodes::Node::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DtiController::Nodes::Node::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DtiController::Nodes::Node::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port1-fr-err-rate-greater5-per")
    {
        port1_fr_err_rate_greater5_per = value;
        port1_fr_err_rate_greater5_per.value_namespace = name_space;
        port1_fr_err_rate_greater5_per.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-fr-err-rate-greater2-per")
    {
        port1_fr_err_rate_greater2_per = value;
        port1_fr_err_rate_greater2_per.value_namespace = name_space;
        port1_fr_err_rate_greater2_per.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-dti-signal-detected")
    {
        port1_dti_signal_detected = value;
        port1_dti_signal_detected.value_namespace = name_space;
        port1_dti_signal_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-server-timing-source")
    {
        port1_server_timing_source = value;
        port1_server_timing_source.value_namespace = name_space;
        port1_server_timing_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-server-type")
    {
        port1_server_type = value;
        port1_server_type.value_namespace = name_space;
        port1_server_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-server-clock-type")
    {
        port1_server_clock_type = value;
        port1_server_clock_type.value_namespace = name_space;
        port1_server_clock_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-server-state")
    {
        port1_server_state = value;
        port1_server_state.value_namespace = name_space;
        port1_server_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-client-perf-stable")
    {
        port1_client_perf_stable = value;
        port1_client_perf_stable.value_namespace = name_space;
        port1_client_perf_stable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-cable-advance-valid")
    {
        port1_cable_advance_valid = value;
        port1_cable_advance_valid.value_namespace = name_space;
        port1_cable_advance_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-fr-err-rate-greater5-per")
    {
        port2_fr_err_rate_greater5_per = value;
        port2_fr_err_rate_greater5_per.value_namespace = name_space;
        port2_fr_err_rate_greater5_per.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-fr-err-rate-greater2-per")
    {
        port2_fr_err_rate_greater2_per = value;
        port2_fr_err_rate_greater2_per.value_namespace = name_space;
        port2_fr_err_rate_greater2_per.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-dti-signal-detected")
    {
        port2_dti_signal_detected = value;
        port2_dti_signal_detected.value_namespace = name_space;
        port2_dti_signal_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-server-timing-source")
    {
        port2_server_timing_source = value;
        port2_server_timing_source.value_namespace = name_space;
        port2_server_timing_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-server-type")
    {
        port2_server_type = value;
        port2_server_type.value_namespace = name_space;
        port2_server_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-server-clock-type")
    {
        port2_server_clock_type = value;
        port2_server_clock_type.value_namespace = name_space;
        port2_server_clock_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-server-state")
    {
        port2_server_state = value;
        port2_server_state.value_namespace = name_space;
        port2_server_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-client-perf-stable")
    {
        port2_client_perf_stable = value;
        port2_client_perf_stable.value_namespace = name_space;
        port2_client_perf_stable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-cable-advance-valid")
    {
        port2_cable_advance_valid = value;
        port2_cable_advance_valid.value_namespace = name_space;
        port2_cable_advance_valid.value_namespace_prefix = name_space_prefix;
    }
}

void DtiController::Nodes::Node::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port1-fr-err-rate-greater5-per")
    {
        port1_fr_err_rate_greater5_per.yfilter = yfilter;
    }
    if(value_path == "port1-fr-err-rate-greater2-per")
    {
        port1_fr_err_rate_greater2_per.yfilter = yfilter;
    }
    if(value_path == "port1-dti-signal-detected")
    {
        port1_dti_signal_detected.yfilter = yfilter;
    }
    if(value_path == "port1-server-timing-source")
    {
        port1_server_timing_source.yfilter = yfilter;
    }
    if(value_path == "port1-server-type")
    {
        port1_server_type.yfilter = yfilter;
    }
    if(value_path == "port1-server-clock-type")
    {
        port1_server_clock_type.yfilter = yfilter;
    }
    if(value_path == "port1-server-state")
    {
        port1_server_state.yfilter = yfilter;
    }
    if(value_path == "port1-client-perf-stable")
    {
        port1_client_perf_stable.yfilter = yfilter;
    }
    if(value_path == "port1-cable-advance-valid")
    {
        port1_cable_advance_valid.yfilter = yfilter;
    }
    if(value_path == "port2-fr-err-rate-greater5-per")
    {
        port2_fr_err_rate_greater5_per.yfilter = yfilter;
    }
    if(value_path == "port2-fr-err-rate-greater2-per")
    {
        port2_fr_err_rate_greater2_per.yfilter = yfilter;
    }
    if(value_path == "port2-dti-signal-detected")
    {
        port2_dti_signal_detected.yfilter = yfilter;
    }
    if(value_path == "port2-server-timing-source")
    {
        port2_server_timing_source.yfilter = yfilter;
    }
    if(value_path == "port2-server-type")
    {
        port2_server_type.yfilter = yfilter;
    }
    if(value_path == "port2-server-clock-type")
    {
        port2_server_clock_type.yfilter = yfilter;
    }
    if(value_path == "port2-server-state")
    {
        port2_server_state.yfilter = yfilter;
    }
    if(value_path == "port2-client-perf-stable")
    {
        port2_client_perf_stable.yfilter = yfilter;
    }
    if(value_path == "port2-cable-advance-valid")
    {
        port2_cable_advance_valid.yfilter = yfilter;
    }
}

bool DtiController::Nodes::Node::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port1-fr-err-rate-greater5-per" || name == "port1-fr-err-rate-greater2-per" || name == "port1-dti-signal-detected" || name == "port1-server-timing-source" || name == "port1-server-type" || name == "port1-server-clock-type" || name == "port1-server-state" || name == "port1-client-perf-stable" || name == "port1-cable-advance-valid" || name == "port2-fr-err-rate-greater5-per" || name == "port2-fr-err-rate-greater2-per" || name == "port2-dti-signal-detected" || name == "port2-server-timing-source" || name == "port2-server-type" || name == "port2-server-clock-type" || name == "port2-server-state" || name == "port2-client-perf-stable" || name == "port2-cable-advance-valid")
        return true;
    return false;
}

DtiController::Nodes::Node::TimeOfDay::TimeOfDay()
    :
    port1_tod_message_mode{YType::str, "port1-tod-message-mode"},
    port1_tod_state{YType::str, "port1-tod-state"},
    port1_tod_time_setting_mode{YType::str, "port1-tod-time-setting-mode"},
    port1_gps_seconds{YType::uint32, "port1-gps-seconds"},
    port1_leap_seconds{YType::uint8, "port1-leap-seconds"},
    port1_calendar_time_valid{YType::str, "port1-calendar-time-valid"},
    port1_modified_julian_date{YType::str, "port1-modified-julian-date"},
    port1_date{YType::str, "port1-date"},
    port1_time{YType::str, "port1-time"},
    port1_time_zone_offset{YType::str, "port1-time-zone-offset"},
    port1_leap_second_indicator{YType::uint8, "port1-leap-second-indicator"},
    port2_tod_message_mode{YType::str, "port2-tod-message-mode"},
    port2_tod_state{YType::str, "port2-tod-state"},
    port2_tod_time_setting_mode{YType::str, "port2-tod-time-setting-mode"},
    port2_gps_seconds{YType::uint32, "port2-gps-seconds"},
    port2_leap_seconds{YType::uint8, "port2-leap-seconds"},
    port2_calendar_time_valid{YType::str, "port2-calendar-time-valid"},
    port2_modified_julian_date{YType::str, "port2-modified-julian-date"},
    port2_date{YType::str, "port2-date"},
    port2_time{YType::str, "port2-time"},
    port2_time_zone_offset{YType::str, "port2-time-zone-offset"},
    port2_leap_second_indicator{YType::uint8, "port2-leap-second-indicator"}
{

    yang_name = "time-of-day"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

DtiController::Nodes::Node::TimeOfDay::~TimeOfDay()
{
}

bool DtiController::Nodes::Node::TimeOfDay::has_data() const
{
    if (is_presence_container) return true;
    return port1_tod_message_mode.is_set
	|| port1_tod_state.is_set
	|| port1_tod_time_setting_mode.is_set
	|| port1_gps_seconds.is_set
	|| port1_leap_seconds.is_set
	|| port1_calendar_time_valid.is_set
	|| port1_modified_julian_date.is_set
	|| port1_date.is_set
	|| port1_time.is_set
	|| port1_time_zone_offset.is_set
	|| port1_leap_second_indicator.is_set
	|| port2_tod_message_mode.is_set
	|| port2_tod_state.is_set
	|| port2_tod_time_setting_mode.is_set
	|| port2_gps_seconds.is_set
	|| port2_leap_seconds.is_set
	|| port2_calendar_time_valid.is_set
	|| port2_modified_julian_date.is_set
	|| port2_date.is_set
	|| port2_time.is_set
	|| port2_time_zone_offset.is_set
	|| port2_leap_second_indicator.is_set;
}

bool DtiController::Nodes::Node::TimeOfDay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port1_tod_message_mode.yfilter)
	|| ydk::is_set(port1_tod_state.yfilter)
	|| ydk::is_set(port1_tod_time_setting_mode.yfilter)
	|| ydk::is_set(port1_gps_seconds.yfilter)
	|| ydk::is_set(port1_leap_seconds.yfilter)
	|| ydk::is_set(port1_calendar_time_valid.yfilter)
	|| ydk::is_set(port1_modified_julian_date.yfilter)
	|| ydk::is_set(port1_date.yfilter)
	|| ydk::is_set(port1_time.yfilter)
	|| ydk::is_set(port1_time_zone_offset.yfilter)
	|| ydk::is_set(port1_leap_second_indicator.yfilter)
	|| ydk::is_set(port2_tod_message_mode.yfilter)
	|| ydk::is_set(port2_tod_state.yfilter)
	|| ydk::is_set(port2_tod_time_setting_mode.yfilter)
	|| ydk::is_set(port2_gps_seconds.yfilter)
	|| ydk::is_set(port2_leap_seconds.yfilter)
	|| ydk::is_set(port2_calendar_time_valid.yfilter)
	|| ydk::is_set(port2_modified_julian_date.yfilter)
	|| ydk::is_set(port2_date.yfilter)
	|| ydk::is_set(port2_time.yfilter)
	|| ydk::is_set(port2_time_zone_offset.yfilter)
	|| ydk::is_set(port2_leap_second_indicator.yfilter);
}

std::string DtiController::Nodes::Node::TimeOfDay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-of-day";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DtiController::Nodes::Node::TimeOfDay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port1_tod_message_mode.is_set || is_set(port1_tod_message_mode.yfilter)) leaf_name_data.push_back(port1_tod_message_mode.get_name_leafdata());
    if (port1_tod_state.is_set || is_set(port1_tod_state.yfilter)) leaf_name_data.push_back(port1_tod_state.get_name_leafdata());
    if (port1_tod_time_setting_mode.is_set || is_set(port1_tod_time_setting_mode.yfilter)) leaf_name_data.push_back(port1_tod_time_setting_mode.get_name_leafdata());
    if (port1_gps_seconds.is_set || is_set(port1_gps_seconds.yfilter)) leaf_name_data.push_back(port1_gps_seconds.get_name_leafdata());
    if (port1_leap_seconds.is_set || is_set(port1_leap_seconds.yfilter)) leaf_name_data.push_back(port1_leap_seconds.get_name_leafdata());
    if (port1_calendar_time_valid.is_set || is_set(port1_calendar_time_valid.yfilter)) leaf_name_data.push_back(port1_calendar_time_valid.get_name_leafdata());
    if (port1_modified_julian_date.is_set || is_set(port1_modified_julian_date.yfilter)) leaf_name_data.push_back(port1_modified_julian_date.get_name_leafdata());
    if (port1_date.is_set || is_set(port1_date.yfilter)) leaf_name_data.push_back(port1_date.get_name_leafdata());
    if (port1_time.is_set || is_set(port1_time.yfilter)) leaf_name_data.push_back(port1_time.get_name_leafdata());
    if (port1_time_zone_offset.is_set || is_set(port1_time_zone_offset.yfilter)) leaf_name_data.push_back(port1_time_zone_offset.get_name_leafdata());
    if (port1_leap_second_indicator.is_set || is_set(port1_leap_second_indicator.yfilter)) leaf_name_data.push_back(port1_leap_second_indicator.get_name_leafdata());
    if (port2_tod_message_mode.is_set || is_set(port2_tod_message_mode.yfilter)) leaf_name_data.push_back(port2_tod_message_mode.get_name_leafdata());
    if (port2_tod_state.is_set || is_set(port2_tod_state.yfilter)) leaf_name_data.push_back(port2_tod_state.get_name_leafdata());
    if (port2_tod_time_setting_mode.is_set || is_set(port2_tod_time_setting_mode.yfilter)) leaf_name_data.push_back(port2_tod_time_setting_mode.get_name_leafdata());
    if (port2_gps_seconds.is_set || is_set(port2_gps_seconds.yfilter)) leaf_name_data.push_back(port2_gps_seconds.get_name_leafdata());
    if (port2_leap_seconds.is_set || is_set(port2_leap_seconds.yfilter)) leaf_name_data.push_back(port2_leap_seconds.get_name_leafdata());
    if (port2_calendar_time_valid.is_set || is_set(port2_calendar_time_valid.yfilter)) leaf_name_data.push_back(port2_calendar_time_valid.get_name_leafdata());
    if (port2_modified_julian_date.is_set || is_set(port2_modified_julian_date.yfilter)) leaf_name_data.push_back(port2_modified_julian_date.get_name_leafdata());
    if (port2_date.is_set || is_set(port2_date.yfilter)) leaf_name_data.push_back(port2_date.get_name_leafdata());
    if (port2_time.is_set || is_set(port2_time.yfilter)) leaf_name_data.push_back(port2_time.get_name_leafdata());
    if (port2_time_zone_offset.is_set || is_set(port2_time_zone_offset.yfilter)) leaf_name_data.push_back(port2_time_zone_offset.get_name_leafdata());
    if (port2_leap_second_indicator.is_set || is_set(port2_leap_second_indicator.yfilter)) leaf_name_data.push_back(port2_leap_second_indicator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DtiController::Nodes::Node::TimeOfDay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DtiController::Nodes::Node::TimeOfDay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DtiController::Nodes::Node::TimeOfDay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port1-tod-message-mode")
    {
        port1_tod_message_mode = value;
        port1_tod_message_mode.value_namespace = name_space;
        port1_tod_message_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-tod-state")
    {
        port1_tod_state = value;
        port1_tod_state.value_namespace = name_space;
        port1_tod_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-tod-time-setting-mode")
    {
        port1_tod_time_setting_mode = value;
        port1_tod_time_setting_mode.value_namespace = name_space;
        port1_tod_time_setting_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-gps-seconds")
    {
        port1_gps_seconds = value;
        port1_gps_seconds.value_namespace = name_space;
        port1_gps_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-leap-seconds")
    {
        port1_leap_seconds = value;
        port1_leap_seconds.value_namespace = name_space;
        port1_leap_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-calendar-time-valid")
    {
        port1_calendar_time_valid = value;
        port1_calendar_time_valid.value_namespace = name_space;
        port1_calendar_time_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-modified-julian-date")
    {
        port1_modified_julian_date = value;
        port1_modified_julian_date.value_namespace = name_space;
        port1_modified_julian_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-date")
    {
        port1_date = value;
        port1_date.value_namespace = name_space;
        port1_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-time")
    {
        port1_time = value;
        port1_time.value_namespace = name_space;
        port1_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-time-zone-offset")
    {
        port1_time_zone_offset = value;
        port1_time_zone_offset.value_namespace = name_space;
        port1_time_zone_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1-leap-second-indicator")
    {
        port1_leap_second_indicator = value;
        port1_leap_second_indicator.value_namespace = name_space;
        port1_leap_second_indicator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-tod-message-mode")
    {
        port2_tod_message_mode = value;
        port2_tod_message_mode.value_namespace = name_space;
        port2_tod_message_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-tod-state")
    {
        port2_tod_state = value;
        port2_tod_state.value_namespace = name_space;
        port2_tod_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-tod-time-setting-mode")
    {
        port2_tod_time_setting_mode = value;
        port2_tod_time_setting_mode.value_namespace = name_space;
        port2_tod_time_setting_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-gps-seconds")
    {
        port2_gps_seconds = value;
        port2_gps_seconds.value_namespace = name_space;
        port2_gps_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-leap-seconds")
    {
        port2_leap_seconds = value;
        port2_leap_seconds.value_namespace = name_space;
        port2_leap_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-calendar-time-valid")
    {
        port2_calendar_time_valid = value;
        port2_calendar_time_valid.value_namespace = name_space;
        port2_calendar_time_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-modified-julian-date")
    {
        port2_modified_julian_date = value;
        port2_modified_julian_date.value_namespace = name_space;
        port2_modified_julian_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-date")
    {
        port2_date = value;
        port2_date.value_namespace = name_space;
        port2_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-time")
    {
        port2_time = value;
        port2_time.value_namespace = name_space;
        port2_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-time-zone-offset")
    {
        port2_time_zone_offset = value;
        port2_time_zone_offset.value_namespace = name_space;
        port2_time_zone_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2-leap-second-indicator")
    {
        port2_leap_second_indicator = value;
        port2_leap_second_indicator.value_namespace = name_space;
        port2_leap_second_indicator.value_namespace_prefix = name_space_prefix;
    }
}

void DtiController::Nodes::Node::TimeOfDay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port1-tod-message-mode")
    {
        port1_tod_message_mode.yfilter = yfilter;
    }
    if(value_path == "port1-tod-state")
    {
        port1_tod_state.yfilter = yfilter;
    }
    if(value_path == "port1-tod-time-setting-mode")
    {
        port1_tod_time_setting_mode.yfilter = yfilter;
    }
    if(value_path == "port1-gps-seconds")
    {
        port1_gps_seconds.yfilter = yfilter;
    }
    if(value_path == "port1-leap-seconds")
    {
        port1_leap_seconds.yfilter = yfilter;
    }
    if(value_path == "port1-calendar-time-valid")
    {
        port1_calendar_time_valid.yfilter = yfilter;
    }
    if(value_path == "port1-modified-julian-date")
    {
        port1_modified_julian_date.yfilter = yfilter;
    }
    if(value_path == "port1-date")
    {
        port1_date.yfilter = yfilter;
    }
    if(value_path == "port1-time")
    {
        port1_time.yfilter = yfilter;
    }
    if(value_path == "port1-time-zone-offset")
    {
        port1_time_zone_offset.yfilter = yfilter;
    }
    if(value_path == "port1-leap-second-indicator")
    {
        port1_leap_second_indicator.yfilter = yfilter;
    }
    if(value_path == "port2-tod-message-mode")
    {
        port2_tod_message_mode.yfilter = yfilter;
    }
    if(value_path == "port2-tod-state")
    {
        port2_tod_state.yfilter = yfilter;
    }
    if(value_path == "port2-tod-time-setting-mode")
    {
        port2_tod_time_setting_mode.yfilter = yfilter;
    }
    if(value_path == "port2-gps-seconds")
    {
        port2_gps_seconds.yfilter = yfilter;
    }
    if(value_path == "port2-leap-seconds")
    {
        port2_leap_seconds.yfilter = yfilter;
    }
    if(value_path == "port2-calendar-time-valid")
    {
        port2_calendar_time_valid.yfilter = yfilter;
    }
    if(value_path == "port2-modified-julian-date")
    {
        port2_modified_julian_date.yfilter = yfilter;
    }
    if(value_path == "port2-date")
    {
        port2_date.yfilter = yfilter;
    }
    if(value_path == "port2-time")
    {
        port2_time.yfilter = yfilter;
    }
    if(value_path == "port2-time-zone-offset")
    {
        port2_time_zone_offset.yfilter = yfilter;
    }
    if(value_path == "port2-leap-second-indicator")
    {
        port2_leap_second_indicator.yfilter = yfilter;
    }
}

bool DtiController::Nodes::Node::TimeOfDay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port1-tod-message-mode" || name == "port1-tod-state" || name == "port1-tod-time-setting-mode" || name == "port1-gps-seconds" || name == "port1-leap-seconds" || name == "port1-calendar-time-valid" || name == "port1-modified-julian-date" || name == "port1-date" || name == "port1-time" || name == "port1-time-zone-offset" || name == "port1-leap-second-indicator" || name == "port2-tod-message-mode" || name == "port2-tod-state" || name == "port2-tod-time-setting-mode" || name == "port2-gps-seconds" || name == "port2-leap-seconds" || name == "port2-calendar-time-valid" || name == "port2-modified-julian-date" || name == "port2-date" || name == "port2-time" || name == "port2-time-zone-offset" || name == "port2-leap-second-indicator")
        return true;
    return false;
}


}
}

