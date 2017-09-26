
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_17.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_18.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_20.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_19.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::IccpGroupInfo()
    :
    group_id{YType::uint32, "group-id"},
    iccp_member_up{YType::boolean, "iccp-member-up"},
    iccp_transport_up{YType::boolean, "iccp-transport-up"},
    local_node_id{YType::uint8, "local-node-id"},
    remote_node_id{YType::uint8, "remote-node-id"},
    state{YType::enumeration, "state"}
{

    yang_name = "iccp-group-info"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::~IccpGroupInfo()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_data() const
{
    for (std::size_t index=0; index<ports.size(); index++)
    {
        if(ports[index]->has_data())
            return true;
    }
    return group_id.is_set
	|| iccp_member_up.is_set
	|| iccp_transport_up.is_set
	|| local_node_id.is_set
	|| remote_node_id.is_set
	|| state.is_set;
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_operation() const
{
    for (std::size_t index=0; index<ports.size(); index++)
    {
        if(ports[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(iccp_member_up.yfilter)
	|| ydk::is_set(iccp_transport_up.yfilter)
	|| ydk::is_set(local_node_id.yfilter)
	|| ydk::is_set(remote_node_id.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (iccp_member_up.is_set || is_set(iccp_member_up.yfilter)) leaf_name_data.push_back(iccp_member_up.get_name_leafdata());
    if (iccp_transport_up.is_set || is_set(iccp_transport_up.yfilter)) leaf_name_data.push_back(iccp_transport_up.get_name_leafdata());
    if (local_node_id.is_set || is_set(local_node_id.yfilter)) leaf_name_data.push_back(local_node_id.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ports")
    {
        for(auto const & c : ports)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports>();
        c->parent = this;
        ports.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ports)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-member-up")
    {
        iccp_member_up = value;
        iccp_member_up.value_namespace = name_space;
        iccp_member_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-transport-up")
    {
        iccp_transport_up = value;
        iccp_transport_up.value_namespace = name_space;
        iccp_transport_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node-id")
    {
        local_node_id = value;
        local_node_id.value_namespace = name_space;
        local_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "iccp-member-up")
    {
        iccp_member_up.yfilter = yfilter;
    }
    if(value_path == "iccp-transport-up")
    {
        iccp_transport_up.yfilter = yfilter;
    }
    if(value_path == "local-node-id")
    {
        local_node_id.yfilter = yfilter;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ports" || name == "group-id" || name == "iccp-member-up" || name == "iccp-transport-up" || name == "local-node-id" || name == "remote-node-id" || name == "state")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::Ports()
    :
    interface_name{YType::str, "interface-name"},
    mac_flush_tcn{YType::boolean, "mac-flush-tcn"}
    	,
    local_port(std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort>())
	,remote_port(std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort>())
{
    local_port->parent = this;
    remote_port->parent = this;

    yang_name = "ports"; yang_parent_name = "iccp-group-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::~Ports()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_data() const
{
    return interface_name.is_set
	|| mac_flush_tcn.is_set
	|| (local_port !=  nullptr && local_port->has_data())
	|| (remote_port !=  nullptr && remote_port->has_data());
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_flush_tcn.yfilter)
	|| (local_port !=  nullptr && local_port->has_operation())
	|| (remote_port !=  nullptr && remote_port->has_operation());
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush_tcn.is_set || is_set(mac_flush_tcn.yfilter)) leaf_name_data.push_back(mac_flush_tcn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-port")
    {
        if(local_port == nullptr)
        {
            local_port = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort>();
        }
        return local_port;
    }

    if(child_yang_name == "remote-port")
    {
        if(remote_port == nullptr)
        {
            remote_port = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort>();
        }
        return remote_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_port != nullptr)
    {
        children["local-port"] = local_port;
    }

    if(remote_port != nullptr)
    {
        children["remote-port"] = remote_port;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn = value;
        mac_flush_tcn.value_namespace = name_space;
        mac_flush_tcn.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-port" || name == "remote-port" || name == "interface-name" || name == "mac-flush-tcn")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::LocalPort()
    :
    fsm_state{YType::uint8, "fsm-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    port_state{YType::enumeration, "port-state"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"}
{

    yang_name = "local-port"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::~LocalPort()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_data() const
{
    return fsm_state.is_set
	|| port_fail_code.is_set
	|| port_state.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set;
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter);
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsm-state" || name == "port-fail-code" || name == "port-state" || name == "reversion-time" || name == "reversion-time-remaining" || name == "vlan-state" || name == "vlan-vector")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::RemotePort()
    :
    fsm_state{YType::uint8, "fsm-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    port_state{YType::enumeration, "port-state"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"}
{

    yang_name = "remote-port"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::~RemotePort()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_data() const
{
    return fsm_state.is_set
	|| port_fail_code.is_set
	|| port_state.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set;
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter);
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsm-state" || name == "port-fail-code" || name == "port-state" || name == "reversion-time" || name == "reversion-time-remaining" || name == "vlan-state" || name == "vlan-vector")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPorts()
{

    yang_name = "iccp-ports"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::~IccpPorts()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_data() const
{
    for (std::size_t index=0; index<iccp_port.size(); index++)
    {
        if(iccp_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_operation() const
{
    for (std::size_t index=0; index<iccp_port.size(); index++)
    {
        if(iccp_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-port")
    {
        for(auto const & c : iccp_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort>();
        c->parent = this;
        iccp_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iccp_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-port")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::IccpPort()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"},
    mac_flush_tcn{YType::boolean, "mac-flush-tcn"}
    	,
    local_port(std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort>())
	,remote_port(std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort>())
{
    local_port->parent = this;
    remote_port->parent = this;

    yang_name = "iccp-port"; yang_parent_name = "iccp-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::~IccpPort()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_data() const
{
    return interface.is_set
	|| interface_name.is_set
	|| mac_flush_tcn.is_set
	|| (local_port !=  nullptr && local_port->has_data())
	|| (remote_port !=  nullptr && remote_port->has_data());
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_flush_tcn.yfilter)
	|| (local_port !=  nullptr && local_port->has_operation())
	|| (remote_port !=  nullptr && remote_port->has_operation());
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-port" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush_tcn.is_set || is_set(mac_flush_tcn.yfilter)) leaf_name_data.push_back(mac_flush_tcn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-port")
    {
        if(local_port == nullptr)
        {
            local_port = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort>();
        }
        return local_port;
    }

    if(child_yang_name == "remote-port")
    {
        if(remote_port == nullptr)
        {
            remote_port = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort>();
        }
        return remote_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_port != nullptr)
    {
        children["local-port"] = local_port;
    }

    if(remote_port != nullptr)
    {
        children["remote-port"] = remote_port;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn = value;
        mac_flush_tcn.value_namespace = name_space;
        mac_flush_tcn.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-port" || name == "remote-port" || name == "interface" || name == "interface-name" || name == "mac-flush-tcn")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::LocalPort()
    :
    fsm_state{YType::uint8, "fsm-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    port_state{YType::enumeration, "port-state"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"}
{

    yang_name = "local-port"; yang_parent_name = "iccp-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::~LocalPort()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_data() const
{
    return fsm_state.is_set
	|| port_fail_code.is_set
	|| port_state.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set;
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter);
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsm-state" || name == "port-fail-code" || name == "port-state" || name == "reversion-time" || name == "reversion-time-remaining" || name == "vlan-state" || name == "vlan-vector")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::RemotePort()
    :
    fsm_state{YType::uint8, "fsm-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    port_state{YType::enumeration, "port-state"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"}
{

    yang_name = "remote-port"; yang_parent_name = "iccp-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::~RemotePort()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_data() const
{
    return fsm_state.is_set
	|| port_fail_code.is_set
	|| port_state.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set;
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter);
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsm-state" || name == "port-fail-code" || name == "port-state" || name == "reversion-time" || name == "reversion-time-remaining" || name == "vlan-state" || name == "vlan-vector")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::IccpSmSummary()
    :
    connected_groups{YType::uint32, "connected-groups"},
    connecting_groups{YType::uint32, "connecting-groups"},
    failed_ports{YType::uint32, "failed-ports"},
    groups{YType::uint32, "groups"},
    operational_ports{YType::uint32, "operational-ports"},
    ports{YType::uint32, "ports"},
    provisioned_groups{YType::uint32, "provisioned-groups"},
    reverting_ports{YType::uint32, "reverting-ports"},
    synchronized_groups{YType::uint32, "synchronized-groups"},
    synchronizing_groups{YType::uint32, "synchronizing-groups"},
    unconfigured_ports{YType::uint32, "unconfigured-ports"},
    unknown_ports{YType::uint32, "unknown-ports"},
    unresolved_groups{YType::uint32, "unresolved-groups"},
    unsynchronized_ports{YType::uint32, "unsynchronized-ports"}
{

    yang_name = "iccp-sm-summary"; yang_parent_name = "iccp-sm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::~IccpSmSummary()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::has_data() const
{
    return connected_groups.is_set
	|| connecting_groups.is_set
	|| failed_ports.is_set
	|| groups.is_set
	|| operational_ports.is_set
	|| ports.is_set
	|| provisioned_groups.is_set
	|| reverting_ports.is_set
	|| synchronized_groups.is_set
	|| synchronizing_groups.is_set
	|| unconfigured_ports.is_set
	|| unknown_ports.is_set
	|| unresolved_groups.is_set
	|| unsynchronized_ports.is_set;
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connected_groups.yfilter)
	|| ydk::is_set(connecting_groups.yfilter)
	|| ydk::is_set(failed_ports.yfilter)
	|| ydk::is_set(groups.yfilter)
	|| ydk::is_set(operational_ports.yfilter)
	|| ydk::is_set(ports.yfilter)
	|| ydk::is_set(provisioned_groups.yfilter)
	|| ydk::is_set(reverting_ports.yfilter)
	|| ydk::is_set(synchronized_groups.yfilter)
	|| ydk::is_set(synchronizing_groups.yfilter)
	|| ydk::is_set(unconfigured_ports.yfilter)
	|| ydk::is_set(unknown_ports.yfilter)
	|| ydk::is_set(unresolved_groups.yfilter)
	|| ydk::is_set(unsynchronized_ports.yfilter);
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-sm-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected_groups.is_set || is_set(connected_groups.yfilter)) leaf_name_data.push_back(connected_groups.get_name_leafdata());
    if (connecting_groups.is_set || is_set(connecting_groups.yfilter)) leaf_name_data.push_back(connecting_groups.get_name_leafdata());
    if (failed_ports.is_set || is_set(failed_ports.yfilter)) leaf_name_data.push_back(failed_ports.get_name_leafdata());
    if (groups.is_set || is_set(groups.yfilter)) leaf_name_data.push_back(groups.get_name_leafdata());
    if (operational_ports.is_set || is_set(operational_ports.yfilter)) leaf_name_data.push_back(operational_ports.get_name_leafdata());
    if (ports.is_set || is_set(ports.yfilter)) leaf_name_data.push_back(ports.get_name_leafdata());
    if (provisioned_groups.is_set || is_set(provisioned_groups.yfilter)) leaf_name_data.push_back(provisioned_groups.get_name_leafdata());
    if (reverting_ports.is_set || is_set(reverting_ports.yfilter)) leaf_name_data.push_back(reverting_ports.get_name_leafdata());
    if (synchronized_groups.is_set || is_set(synchronized_groups.yfilter)) leaf_name_data.push_back(synchronized_groups.get_name_leafdata());
    if (synchronizing_groups.is_set || is_set(synchronizing_groups.yfilter)) leaf_name_data.push_back(synchronizing_groups.get_name_leafdata());
    if (unconfigured_ports.is_set || is_set(unconfigured_ports.yfilter)) leaf_name_data.push_back(unconfigured_ports.get_name_leafdata());
    if (unknown_ports.is_set || is_set(unknown_ports.yfilter)) leaf_name_data.push_back(unknown_ports.get_name_leafdata());
    if (unresolved_groups.is_set || is_set(unresolved_groups.yfilter)) leaf_name_data.push_back(unresolved_groups.get_name_leafdata());
    if (unsynchronized_ports.is_set || is_set(unsynchronized_ports.yfilter)) leaf_name_data.push_back(unsynchronized_ports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connected-groups")
    {
        connected_groups = value;
        connected_groups.value_namespace = name_space;
        connected_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-groups")
    {
        connecting_groups = value;
        connecting_groups.value_namespace = name_space;
        connecting_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed-ports")
    {
        failed_ports = value;
        failed_ports.value_namespace = name_space;
        failed_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groups")
    {
        groups = value;
        groups.value_namespace = name_space;
        groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-ports")
    {
        operational_ports = value;
        operational_ports.value_namespace = name_space;
        operational_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ports")
    {
        ports = value;
        ports.value_namespace = name_space;
        ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-groups")
    {
        provisioned_groups = value;
        provisioned_groups.value_namespace = name_space;
        provisioned_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverting-ports")
    {
        reverting_ports = value;
        reverting_ports.value_namespace = name_space;
        reverting_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronized-groups")
    {
        synchronized_groups = value;
        synchronized_groups.value_namespace = name_space;
        synchronized_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronizing-groups")
    {
        synchronizing_groups = value;
        synchronizing_groups.value_namespace = name_space;
        synchronizing_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unconfigured-ports")
    {
        unconfigured_ports = value;
        unconfigured_ports.value_namespace = name_space;
        unconfigured_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-ports")
    {
        unknown_ports = value;
        unknown_ports.value_namespace = name_space;
        unknown_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unresolved-groups")
    {
        unresolved_groups = value;
        unresolved_groups.value_namespace = name_space;
        unresolved_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsynchronized-ports")
    {
        unsynchronized_ports = value;
        unsynchronized_ports.value_namespace = name_space;
        unsynchronized_ports.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connected-groups")
    {
        connected_groups.yfilter = yfilter;
    }
    if(value_path == "connecting-groups")
    {
        connecting_groups.yfilter = yfilter;
    }
    if(value_path == "failed-ports")
    {
        failed_ports.yfilter = yfilter;
    }
    if(value_path == "groups")
    {
        groups.yfilter = yfilter;
    }
    if(value_path == "operational-ports")
    {
        operational_ports.yfilter = yfilter;
    }
    if(value_path == "ports")
    {
        ports.yfilter = yfilter;
    }
    if(value_path == "provisioned-groups")
    {
        provisioned_groups.yfilter = yfilter;
    }
    if(value_path == "reverting-ports")
    {
        reverting_ports.yfilter = yfilter;
    }
    if(value_path == "synchronized-groups")
    {
        synchronized_groups.yfilter = yfilter;
    }
    if(value_path == "synchronizing-groups")
    {
        synchronizing_groups.yfilter = yfilter;
    }
    if(value_path == "unconfigured-ports")
    {
        unconfigured_ports.yfilter = yfilter;
    }
    if(value_path == "unknown-ports")
    {
        unknown_ports.yfilter = yfilter;
    }
    if(value_path == "unresolved-groups")
    {
        unresolved_groups.yfilter = yfilter;
    }
    if(value_path == "unsynchronized-ports")
    {
        unsynchronized_ports.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-groups" || name == "connecting-groups" || name == "failed-ports" || name == "groups" || name == "operational-ports" || name == "ports" || name == "provisioned-groups" || name == "reverting-ports" || name == "synchronized-groups" || name == "synchronizing-groups" || name == "unconfigured-ports" || name == "unknown-ports" || name == "unresolved-groups" || name == "unsynchronized-ports")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Indexes::Indexes()
{

    yang_name = "indexes"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Indexes::~Indexes()
{
}

bool L2Vpnv2::Nodes::Node::Indexes::has_data() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::Indexes::has_operation() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::Indexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Indexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Indexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        for(auto const & c : index_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Indexes::Index_>();
        c->parent = this;
        index_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Indexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : index_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Indexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::Indexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::Indexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Indexes::Index_::Index_()
    :
    pool_id{YType::str, "pool-id"},
    allocated_ids{YType::uint32, "allocated-ids"},
    application_type{YType::enumeration, "application-type"},
    max_num_id_mgr{YType::uint32, "max-num-id-mgr"},
    num_id_mgr_in_use{YType::uint32, "num-id-mgr-in-use"},
    pool_id_xr{YType::uint32, "pool-id-xr"},
    pool_size{YType::uint32, "pool-size"},
    zombied_ids{YType::uint32, "zombied-ids"}
{

    yang_name = "index"; yang_parent_name = "indexes"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Indexes::Index_::~Index_()
{
}

bool L2Vpnv2::Nodes::Node::Indexes::Index_::has_data() const
{
    return pool_id.is_set
	|| allocated_ids.is_set
	|| application_type.is_set
	|| max_num_id_mgr.is_set
	|| num_id_mgr_in_use.is_set
	|| pool_id_xr.is_set
	|| pool_size.is_set
	|| zombied_ids.is_set;
}

bool L2Vpnv2::Nodes::Node::Indexes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_id.yfilter)
	|| ydk::is_set(allocated_ids.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(max_num_id_mgr.yfilter)
	|| ydk::is_set(num_id_mgr_in_use.yfilter)
	|| ydk::is_set(pool_id_xr.yfilter)
	|| ydk::is_set(pool_size.yfilter)
	|| ydk::is_set(zombied_ids.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Indexes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index" <<"[pool-id='" <<pool_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Indexes::Index_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_id.is_set || is_set(pool_id.yfilter)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (allocated_ids.is_set || is_set(allocated_ids.yfilter)) leaf_name_data.push_back(allocated_ids.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (max_num_id_mgr.is_set || is_set(max_num_id_mgr.yfilter)) leaf_name_data.push_back(max_num_id_mgr.get_name_leafdata());
    if (num_id_mgr_in_use.is_set || is_set(num_id_mgr_in_use.yfilter)) leaf_name_data.push_back(num_id_mgr_in_use.get_name_leafdata());
    if (pool_id_xr.is_set || is_set(pool_id_xr.yfilter)) leaf_name_data.push_back(pool_id_xr.get_name_leafdata());
    if (pool_size.is_set || is_set(pool_size.yfilter)) leaf_name_data.push_back(pool_size.get_name_leafdata());
    if (zombied_ids.is_set || is_set(zombied_ids.yfilter)) leaf_name_data.push_back(zombied_ids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Indexes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Indexes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Indexes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-id")
    {
        pool_id = value;
        pool_id.value_namespace = name_space;
        pool_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-ids")
    {
        allocated_ids = value;
        allocated_ids.value_namespace = name_space;
        allocated_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-num-id-mgr")
    {
        max_num_id_mgr = value;
        max_num_id_mgr.value_namespace = name_space;
        max_num_id_mgr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-id-mgr-in-use")
    {
        num_id_mgr_in_use = value;
        num_id_mgr_in_use.value_namespace = name_space;
        num_id_mgr_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-id-xr")
    {
        pool_id_xr = value;
        pool_id_xr.value_namespace = name_space;
        pool_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-size")
    {
        pool_size = value;
        pool_size.value_namespace = name_space;
        pool_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zombied-ids")
    {
        zombied_ids = value;
        zombied_ids.value_namespace = name_space;
        zombied_ids.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Indexes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-id")
    {
        pool_id.yfilter = yfilter;
    }
    if(value_path == "allocated-ids")
    {
        allocated_ids.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "max-num-id-mgr")
    {
        max_num_id_mgr.yfilter = yfilter;
    }
    if(value_path == "num-id-mgr-in-use")
    {
        num_id_mgr_in_use.yfilter = yfilter;
    }
    if(value_path == "pool-id-xr")
    {
        pool_id_xr.yfilter = yfilter;
    }
    if(value_path == "pool-size")
    {
        pool_size.yfilter = yfilter;
    }
    if(value_path == "zombied-ids")
    {
        zombied_ids.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Indexes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-id" || name == "allocated-ids" || name == "application-type" || name == "max-num-id-mgr" || name == "num-id-mgr-in-use" || name == "pool-id-xr" || name == "pool-size" || name == "zombied-ids")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::L2VpnCollaborators::L2VpnCollaborators()
    :
    collaborator_statistics(std::make_shared<L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics>())
{
    collaborator_statistics->parent = this;

    yang_name = "l2vpn-collaborators"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::L2VpnCollaborators::~L2VpnCollaborators()
{
}

bool L2Vpnv2::Nodes::Node::L2VpnCollaborators::has_data() const
{
    return (collaborator_statistics !=  nullptr && collaborator_statistics->has_data());
}

bool L2Vpnv2::Nodes::Node::L2VpnCollaborators::has_operation() const
{
    return is_set(yfilter)
	|| (collaborator_statistics !=  nullptr && collaborator_statistics->has_operation());
}

std::string L2Vpnv2::Nodes::Node::L2VpnCollaborators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-collaborators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::L2VpnCollaborators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::L2VpnCollaborators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collaborator-statistics")
    {
        if(collaborator_statistics == nullptr)
        {
            collaborator_statistics = std::make_shared<L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics>();
        }
        return collaborator_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::L2VpnCollaborators::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(collaborator_statistics != nullptr)
    {
        children["collaborator-statistics"] = collaborator_statistics;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::L2VpnCollaborators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::L2VpnCollaborators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::L2VpnCollaborators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-statistics")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::CollaboratorStatistics()
{

    yang_name = "collaborator-statistics"; yang_parent_name = "l2vpn-collaborators"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::~CollaboratorStatistics()
{
}

bool L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::has_data() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::has_operation() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count")
    {
        for(auto const & c : count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count>();
        c->parent = this;
        count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count::Count()
    :
    collaborator_name{YType::str, "collaborator-name"},
    down{YType::uint32, "down"},
    is_up{YType::boolean, "is-up"},
    up{YType::uint32, "up"}
{

    yang_name = "count"; yang_parent_name = "collaborator-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count::~Count()
{
}

bool L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count::has_data() const
{
    return collaborator_name.is_set
	|| down.is_set
	|| is_up.is_set
	|| up.is_set;
}

bool L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(collaborator_name.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(is_up.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collaborator_name.is_set || is_set(collaborator_name.yfilter)) leaf_name_data.push_back(collaborator_name.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (is_up.is_set || is_set(is_up.yfilter)) leaf_name_data.push_back(is_up.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collaborator-name")
    {
        collaborator_name = value;
        collaborator_name.value_namespace = name_space;
        collaborator_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-up")
    {
        is_up = value;
        is_up.value_namespace = name_space;
        is_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collaborator-name")
    {
        collaborator_name.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "is-up")
    {
        is_up.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::L2VpnCollaborators::CollaboratorStatistics::Count::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-name" || name == "down" || name == "is-up" || name == "up")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::L2VpnPbbBsa::L2VpnPbbBsa()
    :
    bmac_sa{YType::str, "bmac-sa"},
    chassis_is_provisioned{YType::boolean, "chassis-is-provisioned"},
    chassis_mac{YType::str, "chassis-mac"},
    provisioned{YType::boolean, "provisioned"}
{

    yang_name = "l2vpn-pbb-bsa"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::L2VpnPbbBsa::~L2VpnPbbBsa()
{
}

bool L2Vpnv2::Nodes::Node::L2VpnPbbBsa::has_data() const
{
    return bmac_sa.is_set
	|| chassis_is_provisioned.is_set
	|| chassis_mac.is_set
	|| provisioned.is_set;
}

bool L2Vpnv2::Nodes::Node::L2VpnPbbBsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bmac_sa.yfilter)
	|| ydk::is_set(chassis_is_provisioned.yfilter)
	|| ydk::is_set(chassis_mac.yfilter)
	|| ydk::is_set(provisioned.yfilter);
}

std::string L2Vpnv2::Nodes::Node::L2VpnPbbBsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-pbb-bsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::L2VpnPbbBsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bmac_sa.is_set || is_set(bmac_sa.yfilter)) leaf_name_data.push_back(bmac_sa.get_name_leafdata());
    if (chassis_is_provisioned.is_set || is_set(chassis_is_provisioned.yfilter)) leaf_name_data.push_back(chassis_is_provisioned.get_name_leafdata());
    if (chassis_mac.is_set || is_set(chassis_mac.yfilter)) leaf_name_data.push_back(chassis_mac.get_name_leafdata());
    if (provisioned.is_set || is_set(provisioned.yfilter)) leaf_name_data.push_back(provisioned.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::L2VpnPbbBsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::L2VpnPbbBsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::L2VpnPbbBsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bmac-sa")
    {
        bmac_sa = value;
        bmac_sa.value_namespace = name_space;
        bmac_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-is-provisioned")
    {
        chassis_is_provisioned = value;
        chassis_is_provisioned.value_namespace = name_space;
        chassis_is_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-mac")
    {
        chassis_mac = value;
        chassis_mac.value_namespace = name_space;
        chassis_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned")
    {
        provisioned = value;
        provisioned.value_namespace = name_space;
        provisioned.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::L2VpnPbbBsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bmac-sa")
    {
        bmac_sa.yfilter = yfilter;
    }
    if(value_path == "chassis-is-provisioned")
    {
        chassis_is_provisioned.yfilter = yfilter;
    }
    if(value_path == "chassis-mac")
    {
        chassis_mac.yfilter = yfilter;
    }
    if(value_path == "provisioned")
    {
        provisioned.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::L2VpnPbbBsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmac-sa" || name == "chassis-is-provisioned" || name == "chassis-mac" || name == "provisioned")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::L2VpnResourceState::L2VpnResourceState()
    :
    resource_out_of_memory_state{YType::uint32, "resource-out-of-memory-state"}
{

    yang_name = "l2vpn-resource-state"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::L2VpnResourceState::~L2VpnResourceState()
{
}

bool L2Vpnv2::Nodes::Node::L2VpnResourceState::has_data() const
{
    return resource_out_of_memory_state.is_set;
}

bool L2Vpnv2::Nodes::Node::L2VpnResourceState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(resource_out_of_memory_state.yfilter);
}

std::string L2Vpnv2::Nodes::Node::L2VpnResourceState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-resource-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::L2VpnResourceState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resource_out_of_memory_state.is_set || is_set(resource_out_of_memory_state.yfilter)) leaf_name_data.push_back(resource_out_of_memory_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::L2VpnResourceState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::L2VpnResourceState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::L2VpnResourceState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resource-out-of-memory-state")
    {
        resource_out_of_memory_state = value;
        resource_out_of_memory_state.value_namespace = name_space;
        resource_out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::L2VpnResourceState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resource-out-of-memory-state")
    {
        resource_out_of_memory_state.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::L2VpnResourceState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resource-out-of-memory-state")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterfaces()
{

    yang_name = "main-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::~MainInterfaces()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::has_data() const
{
    for (std::size_t index=0; index<main_interface.size(); index++)
    {
        if(main_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::has_operation() const
{
    for (std::size_t index=0; index<main_interface.size(); index++)
    {
        if(main_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface")
    {
        for(auto const & c : main_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface>();
        c->parent = this;
        main_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : main_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::MainInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    main_interface_info(std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo>())
	,main_interface_instances(std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances>())
{
    main_interface_info->parent = this;
    main_interface_instances->parent = this;

    yang_name = "main-interface"; yang_parent_name = "main-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::~MainInterface()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::has_data() const
{
    return interface_name.is_set
	|| (main_interface_info !=  nullptr && main_interface_info->has_data())
	|| (main_interface_instances !=  nullptr && main_interface_instances->has_data());
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (main_interface_info !=  nullptr && main_interface_info->has_operation())
	|| (main_interface_instances !=  nullptr && main_interface_instances->has_operation());
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-info")
    {
        if(main_interface_info == nullptr)
        {
            main_interface_info = std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo>();
        }
        return main_interface_info;
    }

    if(child_yang_name == "main-interface-instances")
    {
        if(main_interface_instances == nullptr)
        {
            main_interface_instances = std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances>();
        }
        return main_interface_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(main_interface_info != nullptr)
    {
        children["main-interface-info"] = main_interface_info;
    }

    if(main_interface_instances != nullptr)
    {
        children["main-interface-instances"] = main_interface_instances;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-info" || name == "main-interface-instances" || name == "interface-name")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::MainInterfaceInfo()
    :
    interface_count{YType::uint32, "interface-count"},
    main_interface_handle{YType::str, "main-interface-handle"},
    protected_{YType::enumeration, "protected"}
{

    yang_name = "main-interface-info"; yang_parent_name = "main-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::~MainInterfaceInfo()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::has_data() const
{
    return interface_count.is_set
	|| main_interface_handle.is_set
	|| protected_.is_set;
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(main_interface_handle.yfilter)
	|| ydk::is_set(protected_.yfilter);
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (main_interface_handle.is_set || is_set(main_interface_handle.yfilter)) leaf_name_data.push_back(main_interface_handle.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface-handle")
    {
        main_interface_handle = value;
        main_interface_handle.value_namespace = name_space;
        main_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "main-interface-handle")
    {
        main_interface_handle.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-count" || name == "main-interface-handle" || name == "protected")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstances()
{

    yang_name = "main-interface-instances"; yang_parent_name = "main-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::~MainInterfaceInstances()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::has_data() const
{
    for (std::size_t index=0; index<main_interface_instance.size(); index++)
    {
        if(main_interface_instance[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::has_operation() const
{
    for (std::size_t index=0; index<main_interface_instance.size(); index++)
    {
        if(main_interface_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instance")
    {
        for(auto const & c : main_interface_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance>();
        c->parent = this;
        main_interface_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : main_interface_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instance")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstance()
    :
    instance{YType::int32, "instance"}
    	,
    main_interface_instance_bridge_ports(std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts>())
	,main_interface_instance_info(std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo>())
{
    main_interface_instance_bridge_ports->parent = this;
    main_interface_instance_info->parent = this;

    yang_name = "main-interface-instance"; yang_parent_name = "main-interface-instances"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::~MainInterfaceInstance()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_data() const
{
    return instance.is_set
	|| (main_interface_instance_bridge_ports !=  nullptr && main_interface_instance_bridge_ports->has_data())
	|| (main_interface_instance_info !=  nullptr && main_interface_instance_info->has_data());
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| (main_interface_instance_bridge_ports !=  nullptr && main_interface_instance_bridge_ports->has_operation())
	|| (main_interface_instance_info !=  nullptr && main_interface_instance_info->has_operation());
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instance-bridge-ports")
    {
        if(main_interface_instance_bridge_ports == nullptr)
        {
            main_interface_instance_bridge_ports = std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts>();
        }
        return main_interface_instance_bridge_ports;
    }

    if(child_yang_name == "main-interface-instance-info")
    {
        if(main_interface_instance_info == nullptr)
        {
            main_interface_instance_info = std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo>();
        }
        return main_interface_instance_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(main_interface_instance_bridge_ports != nullptr)
    {
        children["main-interface-instance-bridge-ports"] = main_interface_instance_bridge_ports;
    }

    if(main_interface_instance_info != nullptr)
    {
        children["main-interface-instance-info"] = main_interface_instance_info;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instance-bridge-ports" || name == "main-interface-instance-info" || name == "instance")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePorts()
{

    yang_name = "main-interface-instance-bridge-ports"; yang_parent_name = "main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::~MainInterfaceInstanceBridgePorts()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_data() const
{
    for (std::size_t index=0; index<main_interface_instance_bridge_port.size(); index++)
    {
        if(main_interface_instance_bridge_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_operation() const
{
    for (std::size_t index=0; index<main_interface_instance_bridge_port.size(); index++)
    {
        if(main_interface_instance_bridge_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-bridge-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instance-bridge-port")
    {
        for(auto const & c : main_interface_instance_bridge_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort>();
        c->parent = this;
        main_interface_instance_bridge_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : main_interface_instance_bridge_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instance-bridge-port")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::MainInterfaceInstanceBridgePort()
    :
    bridge_port{YType::str, "bridge-port"},
    bridge_port_xr{YType::str, "bridge-port-xr"},
    instance_id{YType::uint32, "instance-id"}
{

    yang_name = "main-interface-instance-bridge-port"; yang_parent_name = "main-interface-instance-bridge-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::~MainInterfaceInstanceBridgePort()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_data() const
{
    return bridge_port.is_set
	|| bridge_port_xr.is_set
	|| instance_id.is_set;
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_port.yfilter)
	|| ydk::is_set(bridge_port_xr.yfilter)
	|| ydk::is_set(instance_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-bridge-port" <<"[bridge-port='" <<bridge_port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port.is_set || is_set(bridge_port.yfilter)) leaf_name_data.push_back(bridge_port.get_name_leafdata());
    if (bridge_port_xr.is_set || is_set(bridge_port_xr.yfilter)) leaf_name_data.push_back(bridge_port_xr.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-port")
    {
        bridge_port = value;
        bridge_port.value_namespace = name_space;
        bridge_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-xr")
    {
        bridge_port_xr = value;
        bridge_port_xr.value_namespace = name_space;
        bridge_port_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-port")
    {
        bridge_port.yfilter = yfilter;
    }
    if(value_path == "bridge-port-xr")
    {
        bridge_port_xr.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-port" || name == "bridge-port-xr" || name == "instance-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::MainInterfaceInstanceInfo()
    :
    configured_instance{YType::uint32, "configured-instance"},
    flush_count{YType::uint32, "flush-count"},
    instance_flags{YType::uint32, "instance-flags"},
    instance_id{YType::uint32, "instance-id"},
    instance_state{YType::enumeration, "instance-state"},
    interface_count{YType::uint32, "interface-count"}
{

    yang_name = "main-interface-instance-info"; yang_parent_name = "main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::~MainInterfaceInstanceInfo()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_data() const
{
    return configured_instance.is_set
	|| flush_count.is_set
	|| instance_flags.is_set
	|| instance_id.is_set
	|| instance_state.is_set
	|| interface_count.is_set;
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured_instance.yfilter)
	|| ydk::is_set(flush_count.yfilter)
	|| ydk::is_set(instance_flags.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(instance_state.yfilter)
	|| ydk::is_set(interface_count.yfilter);
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_instance.is_set || is_set(configured_instance.yfilter)) leaf_name_data.push_back(configured_instance.get_name_leafdata());
    if (flush_count.is_set || is_set(flush_count.yfilter)) leaf_name_data.push_back(flush_count.get_name_leafdata());
    if (instance_flags.is_set || is_set(instance_flags.yfilter)) leaf_name_data.push_back(instance_flags.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (instance_state.is_set || is_set(instance_state.yfilter)) leaf_name_data.push_back(instance_state.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-instance")
    {
        configured_instance = value;
        configured_instance.value_namespace = name_space;
        configured_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-count")
    {
        flush_count = value;
        flush_count.value_namespace = name_space;
        flush_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-flags")
    {
        instance_flags = value;
        instance_flags.value_namespace = name_space;
        instance_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-state")
    {
        instance_state = value;
        instance_state.value_namespace = name_space;
        instance_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-instance")
    {
        configured_instance.yfilter = yfilter;
    }
    if(value_path == "flush-count")
    {
        flush_count.yfilter = yfilter;
    }
    if(value_path == "instance-flags")
    {
        instance_flags.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "instance-state")
    {
        instance_state.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-instance" || name == "flush-count" || name == "instance-flags" || name == "instance-id" || name == "instance-state" || name == "interface-count")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MstpPorts::MstpPorts()
{

    yang_name = "mstp-ports"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MstpPorts::~MstpPorts()
{
}

bool L2Vpnv2::Nodes::Node::MstpPorts::has_data() const
{
    for (std::size_t index=0; index<mstp_port.size(); index++)
    {
        if(mstp_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::MstpPorts::has_operation() const
{
    for (std::size_t index=0; index<mstp_port.size(); index++)
    {
        if(mstp_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::MstpPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mstp-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MstpPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MstpPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mstp-port")
    {
        for(auto const & c : mstp_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::MstpPorts::MstpPort>();
        c->parent = this;
        mstp_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MstpPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mstp_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MstpPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::MstpPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::MstpPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mstp-port")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstpPort()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"},
    mstp_interface_handle{YType::str, "mstp-interface-handle"},
    protected_{YType::boolean, "protected"},
    reference_count{YType::uint32, "reference-count"}
{

    yang_name = "mstp-port"; yang_parent_name = "mstp-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::~MstpPort()
{
}

bool L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::has_data() const
{
    for (std::size_t index=0; index<msti_entry.size(); index++)
    {
        if(msti_entry[index]->has_data())
            return true;
    }
    return interface.is_set
	|| interface_name.is_set
	|| mstp_interface_handle.is_set
	|| protected_.is_set
	|| reference_count.is_set;
}

bool L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::has_operation() const
{
    for (std::size_t index=0; index<msti_entry.size(); index++)
    {
        if(msti_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mstp_interface_handle.yfilter)
	|| ydk::is_set(protected_.yfilter)
	|| ydk::is_set(reference_count.yfilter);
}

std::string L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mstp-port" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mstp_interface_handle.is_set || is_set(mstp_interface_handle.yfilter)) leaf_name_data.push_back(mstp_interface_handle.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (reference_count.is_set || is_set(reference_count.yfilter)) leaf_name_data.push_back(reference_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msti-entry")
    {
        for(auto const & c : msti_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry>();
        c->parent = this;
        msti_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : msti_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mstp-interface-handle")
    {
        mstp_interface_handle = value;
        mstp_interface_handle.value_namespace = name_space;
        mstp_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-count")
    {
        reference_count = value;
        reference_count.value_namespace = name_space;
        reference_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mstp-interface-handle")
    {
        mstp_interface_handle.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
    if(value_path == "reference-count")
    {
        reference_count.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msti-entry" || name == "interface" || name == "interface-name" || name == "mstp-interface-handle" || name == "protected" || name == "reference-count")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::MstiEntry()
    :
    ack_count{YType::uint32, "ack-count"},
    bd_count{YType::uint32, "bd-count"},
    cfg_ms_ti{YType::uint32, "cfg-ms-ti"},
    flush_count{YType::uint32, "flush-count"},
    interface_count{YType::uint32, "interface-count"},
    msti_flags{YType::uint32, "msti-flags"},
    msti_state{YType::enumeration, "msti-state"},
    nack_count{YType::uint32, "nack-count"},
    rcv_count{YType::uint32, "rcv-count"}
{

    yang_name = "msti-entry"; yang_parent_name = "mstp-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::~MstiEntry()
{
}

bool L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::has_data() const
{
    for (std::size_t index=0; index<bd_entry.size(); index++)
    {
        if(bd_entry[index]->has_data())
            return true;
    }
    return ack_count.is_set
	|| bd_count.is_set
	|| cfg_ms_ti.is_set
	|| flush_count.is_set
	|| interface_count.is_set
	|| msti_flags.is_set
	|| msti_state.is_set
	|| nack_count.is_set
	|| rcv_count.is_set;
}

bool L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::has_operation() const
{
    for (std::size_t index=0; index<bd_entry.size(); index++)
    {
        if(bd_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ack_count.yfilter)
	|| ydk::is_set(bd_count.yfilter)
	|| ydk::is_set(cfg_ms_ti.yfilter)
	|| ydk::is_set(flush_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(msti_flags.yfilter)
	|| ydk::is_set(msti_state.yfilter)
	|| ydk::is_set(nack_count.yfilter)
	|| ydk::is_set(rcv_count.yfilter);
}

std::string L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msti-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_count.is_set || is_set(ack_count.yfilter)) leaf_name_data.push_back(ack_count.get_name_leafdata());
    if (bd_count.is_set || is_set(bd_count.yfilter)) leaf_name_data.push_back(bd_count.get_name_leafdata());
    if (cfg_ms_ti.is_set || is_set(cfg_ms_ti.yfilter)) leaf_name_data.push_back(cfg_ms_ti.get_name_leafdata());
    if (flush_count.is_set || is_set(flush_count.yfilter)) leaf_name_data.push_back(flush_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (msti_flags.is_set || is_set(msti_flags.yfilter)) leaf_name_data.push_back(msti_flags.get_name_leafdata());
    if (msti_state.is_set || is_set(msti_state.yfilter)) leaf_name_data.push_back(msti_state.get_name_leafdata());
    if (nack_count.is_set || is_set(nack_count.yfilter)) leaf_name_data.push_back(nack_count.get_name_leafdata());
    if (rcv_count.is_set || is_set(rcv_count.yfilter)) leaf_name_data.push_back(rcv_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-entry")
    {
        for(auto const & c : bd_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry>();
        c->parent = this;
        bd_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bd_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack-count")
    {
        ack_count = value;
        ack_count.value_namespace = name_space;
        ack_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-count")
    {
        bd_count = value;
        bd_count.value_namespace = name_space;
        bd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-ms-ti")
    {
        cfg_ms_ti = value;
        cfg_ms_ti.value_namespace = name_space;
        cfg_ms_ti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-count")
    {
        flush_count = value;
        flush_count.value_namespace = name_space;
        flush_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-flags")
    {
        msti_flags = value;
        msti_flags.value_namespace = name_space;
        msti_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-state")
    {
        msti_state = value;
        msti_state.value_namespace = name_space;
        msti_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-count")
    {
        nack_count = value;
        nack_count.value_namespace = name_space;
        nack_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-count")
    {
        rcv_count = value;
        rcv_count.value_namespace = name_space;
        rcv_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack-count")
    {
        ack_count.yfilter = yfilter;
    }
    if(value_path == "bd-count")
    {
        bd_count.yfilter = yfilter;
    }
    if(value_path == "cfg-ms-ti")
    {
        cfg_ms_ti.yfilter = yfilter;
    }
    if(value_path == "flush-count")
    {
        flush_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "msti-flags")
    {
        msti_flags.yfilter = yfilter;
    }
    if(value_path == "msti-state")
    {
        msti_state.yfilter = yfilter;
    }
    if(value_path == "nack-count")
    {
        nack_count.yfilter = yfilter;
    }
    if(value_path == "rcv-count")
    {
        rcv_count.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-entry" || name == "ack-count" || name == "bd-count" || name == "cfg-ms-ti" || name == "flush-count" || name == "interface-count" || name == "msti-flags" || name == "msti-state" || name == "nack-count" || name == "rcv-count")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::BdEntry()
    :
    bdid{YType::uint32, "bdid"},
    bdif_count{YType::uint32, "bdif-count"}
{

    yang_name = "bd-entry"; yang_parent_name = "msti-entry"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::~BdEntry()
{
}

bool L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::has_data() const
{
    return bdid.is_set
	|| bdif_count.is_set;
}

bool L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bdid.yfilter)
	|| ydk::is_set(bdif_count.yfilter);
}

std::string L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bdid.is_set || is_set(bdid.yfilter)) leaf_name_data.push_back(bdid.get_name_leafdata());
    if (bdif_count.is_set || is_set(bdif_count.yfilter)) leaf_name_data.push_back(bdif_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bdid")
    {
        bdid = value;
        bdid.value_namespace = name_space;
        bdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdif-count")
    {
        bdif_count = value;
        bdif_count.value_namespace = name_space;
        bdif_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bdid")
    {
        bdid.yfilter = yfilter;
    }
    if(value_path == "bdif-count")
    {
        bdif_count.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdid" || name == "bdif-count")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MstpVlans::MstpVlans()
{

    yang_name = "mstp-vlans"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MstpVlans::~MstpVlans()
{
}

bool L2Vpnv2::Nodes::Node::MstpVlans::has_data() const
{
    for (std::size_t index=0; index<mstp_vlan.size(); index++)
    {
        if(mstp_vlan[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::MstpVlans::has_operation() const
{
    for (std::size_t index=0; index<mstp_vlan.size(); index++)
    {
        if(mstp_vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::MstpVlans::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mstp-vlans";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MstpVlans::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MstpVlans::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mstp-vlan")
    {
        for(auto const & c : mstp_vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan>();
        c->parent = this;
        mstp_vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MstpVlans::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mstp_vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MstpVlans::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::MstpVlans::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::MstpVlans::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mstp-vlan")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::MstpVlan()
    :
    vlan_id{YType::uint32, "vlan-id"},
    msti_id{YType::uint32, "msti-id"},
    port_count{YType::uint32, "port-count"},
    vlan_id_xr{YType::uint32, "vlan-id-xr"}
{

    yang_name = "mstp-vlan"; yang_parent_name = "mstp-vlans"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::~MstpVlan()
{
}

bool L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::has_data() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_data())
            return true;
    }
    return vlan_id.is_set
	|| msti_id.is_set
	|| port_count.is_set
	|| vlan_id_xr.is_set;
}

bool L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::has_operation() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(msti_id.yfilter)
	|| ydk::is_set(port_count.yfilter)
	|| ydk::is_set(vlan_id_xr.yfilter);
}

std::string L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mstp-vlan" <<"[vlan-id='" <<vlan_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (msti_id.is_set || is_set(msti_id.yfilter)) leaf_name_data.push_back(msti_id.get_name_leafdata());
    if (port_count.is_set || is_set(port_count.yfilter)) leaf_name_data.push_back(port_count.get_name_leafdata());
    if (vlan_id_xr.is_set || is_set(vlan_id_xr.yfilter)) leaf_name_data.push_back(vlan_id_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-interface")
    {
        for(auto const & c : sub_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface>();
        c->parent = this;
        sub_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sub_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-id")
    {
        msti_id = value;
        msti_id.value_namespace = name_space;
        msti_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-count")
    {
        port_count = value;
        port_count.value_namespace = name_space;
        port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id-xr")
    {
        vlan_id_xr = value;
        vlan_id_xr.value_namespace = name_space;
        vlan_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "msti-id")
    {
        msti_id.yfilter = yfilter;
    }
    if(value_path == "port-count")
    {
        port_count.yfilter = yfilter;
    }
    if(value_path == "vlan-id-xr")
    {
        vlan_id_xr.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-interface" || name == "vlan-id" || name == "msti-id" || name == "port-count" || name == "vlan-id-xr")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface::SubInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "sub-interface"; yang_parent_name = "mstp-vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface::~SubInterface()
{
}

bool L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface::has_data() const
{
    return interface_name.is_set;
}

bool L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::MstpVlans::MstpVlan::SubInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Mvrp::Mvrp()
    :
    mvrp_main_ports(std::make_shared<L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts>())
{
    mvrp_main_ports->parent = this;

    yang_name = "mvrp"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Mvrp::~Mvrp()
{
}

bool L2Vpnv2::Nodes::Node::Mvrp::has_data() const
{
    return (mvrp_main_ports !=  nullptr && mvrp_main_ports->has_data());
}

bool L2Vpnv2::Nodes::Node::Mvrp::has_operation() const
{
    return is_set(yfilter)
	|| (mvrp_main_ports !=  nullptr && mvrp_main_ports->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Mvrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Mvrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Mvrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mvrp-main-ports")
    {
        if(mvrp_main_ports == nullptr)
        {
            mvrp_main_ports = std::make_shared<L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts>();
        }
        return mvrp_main_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Mvrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mvrp_main_ports != nullptr)
    {
        children["mvrp-main-ports"] = mvrp_main_ports;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Mvrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::Mvrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::Mvrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mvrp-main-ports")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPorts()
{

    yang_name = "mvrp-main-ports"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::~MvrpMainPorts()
{
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::has_data() const
{
    for (std::size_t index=0; index<mvrp_main_port.size(); index++)
    {
        if(mvrp_main_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::has_operation() const
{
    for (std::size_t index=0; index<mvrp_main_port.size(); index++)
    {
        if(mvrp_main_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp-main-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mvrp-main-port")
    {
        for(auto const & c : mvrp_main_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort>();
        c->parent = this;
        mvrp_main_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mvrp_main_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mvrp-main-port")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPort()
    :
    main_port_interface_name{YType::str, "main-port-interface-name"}
    	,
    mvrp_bridge_ports(std::make_shared<L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts>())
	,mvrp_main_port_info(std::make_shared<L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo>())
{
    mvrp_bridge_ports->parent = this;
    mvrp_main_port_info->parent = this;

    yang_name = "mvrp-main-port"; yang_parent_name = "mvrp-main-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::~MvrpMainPort()
{
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::has_data() const
{
    return main_port_interface_name.is_set
	|| (mvrp_bridge_ports !=  nullptr && mvrp_bridge_ports->has_data())
	|| (mvrp_main_port_info !=  nullptr && mvrp_main_port_info->has_data());
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(main_port_interface_name.yfilter)
	|| (mvrp_bridge_ports !=  nullptr && mvrp_bridge_ports->has_operation())
	|| (mvrp_main_port_info !=  nullptr && mvrp_main_port_info->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp-main-port" <<"[main-port-interface-name='" <<main_port_interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_port_interface_name.is_set || is_set(main_port_interface_name.yfilter)) leaf_name_data.push_back(main_port_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mvrp-bridge-ports")
    {
        if(mvrp_bridge_ports == nullptr)
        {
            mvrp_bridge_ports = std::make_shared<L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts>();
        }
        return mvrp_bridge_ports;
    }

    if(child_yang_name == "mvrp-main-port-info")
    {
        if(mvrp_main_port_info == nullptr)
        {
            mvrp_main_port_info = std::make_shared<L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo>();
        }
        return mvrp_main_port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mvrp_bridge_ports != nullptr)
    {
        children["mvrp-bridge-ports"] = mvrp_bridge_ports;
    }

    if(mvrp_main_port_info != nullptr)
    {
        children["mvrp-main-port-info"] = mvrp_main_port_info;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-port-interface-name")
    {
        main_port_interface_name = value;
        main_port_interface_name.value_namespace = name_space;
        main_port_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-port-interface-name")
    {
        main_port_interface_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mvrp-bridge-ports" || name == "mvrp-main-port-info" || name == "main-port-interface-name")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePorts()
{

    yang_name = "mvrp-bridge-ports"; yang_parent_name = "mvrp-main-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::~MvrpBridgePorts()
{
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::has_data() const
{
    for (std::size_t index=0; index<mvrp_bridge_port.size(); index++)
    {
        if(mvrp_bridge_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::has_operation() const
{
    for (std::size_t index=0; index<mvrp_bridge_port.size(); index++)
    {
        if(mvrp_bridge_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp-bridge-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mvrp-bridge-port")
    {
        for(auto const & c : mvrp_bridge_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort>();
        c->parent = this;
        mvrp_bridge_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mvrp_bridge_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mvrp-bridge-port")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::MvrpBridgePort()
    :
    interface_name{YType::str, "interface-name"},
    bridge_port_interface_name{YType::str, "bridge-port-interface-name"},
    bridge_port_xconnect_id{YType::uint32, "bridge-port-xconnect-id"},
    mvrp_sequence_number{YType::uint16, "mvrp-sequence-number"}
{

    yang_name = "mvrp-bridge-port"; yang_parent_name = "mvrp-bridge-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::~MvrpBridgePort()
{
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| bridge_port_interface_name.is_set
	|| bridge_port_xconnect_id.is_set
	|| mvrp_sequence_number.is_set;
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bridge_port_interface_name.yfilter)
	|| ydk::is_set(bridge_port_xconnect_id.yfilter)
	|| ydk::is_set(mvrp_sequence_number.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp-bridge-port" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bridge_port_interface_name.is_set || is_set(bridge_port_interface_name.yfilter)) leaf_name_data.push_back(bridge_port_interface_name.get_name_leafdata());
    if (bridge_port_xconnect_id.is_set || is_set(bridge_port_xconnect_id.yfilter)) leaf_name_data.push_back(bridge_port_xconnect_id.get_name_leafdata());
    if (mvrp_sequence_number.is_set || is_set(mvrp_sequence_number.yfilter)) leaf_name_data.push_back(mvrp_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-interface-name")
    {
        bridge_port_interface_name = value;
        bridge_port_interface_name.value_namespace = name_space;
        bridge_port_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-xconnect-id")
    {
        bridge_port_xconnect_id = value;
        bridge_port_xconnect_id.value_namespace = name_space;
        bridge_port_xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number = value;
        mvrp_sequence_number.value_namespace = name_space;
        mvrp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bridge-port-interface-name")
    {
        bridge_port_interface_name.yfilter = yfilter;
    }
    if(value_path == "bridge-port-xconnect-id")
    {
        bridge_port_xconnect_id.yfilter = yfilter;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "interface-name" || name == "bridge-port-interface-name" || name == "bridge-port-xconnect-id" || name == "mvrp-sequence-number")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "mvrp-bridge-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::MvrpMainPortInfo()
    :
    is_default_encap{YType::boolean, "is-default-encap"},
    is_trunk{YType::boolean, "is-trunk"},
    main_port_interface_name{YType::str, "main-port-interface-name"},
    number_of_bridge_ports{YType::uint32, "number-of-bridge-ports"}
    	,
    default_bridge_port(std::make_shared<L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort>())
{
    default_bridge_port->parent = this;

    yang_name = "mvrp-main-port-info"; yang_parent_name = "mvrp-main-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::~MvrpMainPortInfo()
{
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::has_data() const
{
    return is_default_encap.is_set
	|| is_trunk.is_set
	|| main_port_interface_name.is_set
	|| number_of_bridge_ports.is_set
	|| (default_bridge_port !=  nullptr && default_bridge_port->has_data());
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_default_encap.yfilter)
	|| ydk::is_set(is_trunk.yfilter)
	|| ydk::is_set(main_port_interface_name.yfilter)
	|| ydk::is_set(number_of_bridge_ports.yfilter)
	|| (default_bridge_port !=  nullptr && default_bridge_port->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp-main-port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_default_encap.is_set || is_set(is_default_encap.yfilter)) leaf_name_data.push_back(is_default_encap.get_name_leafdata());
    if (is_trunk.is_set || is_set(is_trunk.yfilter)) leaf_name_data.push_back(is_trunk.get_name_leafdata());
    if (main_port_interface_name.is_set || is_set(main_port_interface_name.yfilter)) leaf_name_data.push_back(main_port_interface_name.get_name_leafdata());
    if (number_of_bridge_ports.is_set || is_set(number_of_bridge_ports.yfilter)) leaf_name_data.push_back(number_of_bridge_ports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-bridge-port")
    {
        if(default_bridge_port == nullptr)
        {
            default_bridge_port = std::make_shared<L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort>();
        }
        return default_bridge_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_bridge_port != nullptr)
    {
        children["default-bridge-port"] = default_bridge_port;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-default-encap")
    {
        is_default_encap = value;
        is_default_encap.value_namespace = name_space;
        is_default_encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-trunk")
    {
        is_trunk = value;
        is_trunk.value_namespace = name_space;
        is_trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-port-interface-name")
    {
        main_port_interface_name = value;
        main_port_interface_name.value_namespace = name_space;
        main_port_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-bridge-ports")
    {
        number_of_bridge_ports = value;
        number_of_bridge_ports.value_namespace = name_space;
        number_of_bridge_ports.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-default-encap")
    {
        is_default_encap.yfilter = yfilter;
    }
    if(value_path == "is-trunk")
    {
        is_trunk.yfilter = yfilter;
    }
    if(value_path == "main-port-interface-name")
    {
        main_port_interface_name.yfilter = yfilter;
    }
    if(value_path == "number-of-bridge-ports")
    {
        number_of_bridge_ports.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-bridge-port" || name == "is-default-encap" || name == "is-trunk" || name == "main-port-interface-name" || name == "number-of-bridge-ports")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::DefaultBridgePort()
    :
    bridge_port_interface_name{YType::str, "bridge-port-interface-name"},
    bridge_port_xconnect_id{YType::uint32, "bridge-port-xconnect-id"},
    mvrp_sequence_number{YType::uint16, "mvrp-sequence-number"}
{

    yang_name = "default-bridge-port"; yang_parent_name = "mvrp-main-port-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::~DefaultBridgePort()
{
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return bridge_port_interface_name.is_set
	|| bridge_port_xconnect_id.is_set
	|| mvrp_sequence_number.is_set;
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bridge_port_interface_name.yfilter)
	|| ydk::is_set(bridge_port_xconnect_id.yfilter)
	|| ydk::is_set(mvrp_sequence_number.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-bridge-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_interface_name.is_set || is_set(bridge_port_interface_name.yfilter)) leaf_name_data.push_back(bridge_port_interface_name.get_name_leafdata());
    if (bridge_port_xconnect_id.is_set || is_set(bridge_port_xconnect_id.yfilter)) leaf_name_data.push_back(bridge_port_xconnect_id.get_name_leafdata());
    if (mvrp_sequence_number.is_set || is_set(mvrp_sequence_number.yfilter)) leaf_name_data.push_back(mvrp_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-port-interface-name")
    {
        bridge_port_interface_name = value;
        bridge_port_interface_name.value_namespace = name_space;
        bridge_port_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-xconnect-id")
    {
        bridge_port_xconnect_id = value;
        bridge_port_xconnect_id.value_namespace = name_space;
        bridge_port_xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number = value;
        mvrp_sequence_number.value_namespace = name_space;
        mvrp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-port-interface-name")
    {
        bridge_port_interface_name.yfilter = yfilter;
    }
    if(value_path == "bridge-port-xconnect-id")
    {
        bridge_port_xconnect_id.yfilter = yfilter;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "bridge-port-interface-name" || name == "bridge-port-xconnect-id" || name == "mvrp-sequence-number")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "default-bridge-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::Nsr()
    :
    process_role{YType::uint8, "process-role"},
    process_state{YType::uint8, "process-state"},
    sw_install_in_progress{YType::boolean, "sw-install-in-progress"},
    sync_flags{YType::uint32, "sync-flags"}
    	,
    failover_status(std::make_shared<L2Vpnv2::Nodes::Node::Nsr::FailoverStatus>())
	,issu_status(std::make_shared<L2Vpnv2::Nodes::Node::Nsr::IssuStatus>())
	,nsr_status(std::make_shared<L2Vpnv2::Nodes::Node::Nsr::NsrStatus>())
{
    failover_status->parent = this;
    issu_status->parent = this;
    nsr_status->parent = this;

    yang_name = "nsr"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::~Nsr()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::has_data() const
{
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<report_card.size(); index++)
    {
        if(report_card[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<state_transition_time.size(); index++)
    {
        if(state_transition_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<xid_info.size(); index++)
    {
        if(xid_info[index]->has_data())
            return true;
    }
    return process_role.is_set
	|| process_state.is_set
	|| sw_install_in_progress.is_set
	|| sync_flags.is_set
	|| (failover_status !=  nullptr && failover_status->has_data())
	|| (issu_status !=  nullptr && issu_status->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data());
}

bool L2Vpnv2::Nodes::Node::Nsr::has_operation() const
{
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<report_card.size(); index++)
    {
        if(report_card[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<state_transition_time.size(); index++)
    {
        if(state_transition_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<xid_info.size(); index++)
    {
        if(xid_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_role.yfilter)
	|| ydk::is_set(process_state.yfilter)
	|| ydk::is_set(sw_install_in_progress.yfilter)
	|| ydk::is_set(sync_flags.yfilter)
	|| (failover_status !=  nullptr && failover_status->has_operation())
	|| (issu_status !=  nullptr && issu_status->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_role.is_set || is_set(process_role.yfilter)) leaf_name_data.push_back(process_role.get_name_leafdata());
    if (process_state.is_set || is_set(process_state.yfilter)) leaf_name_data.push_back(process_state.get_name_leafdata());
    if (sw_install_in_progress.is_set || is_set(sw_install_in_progress.yfilter)) leaf_name_data.push_back(sw_install_in_progress.get_name_leafdata());
    if (sync_flags.is_set || is_set(sync_flags.yfilter)) leaf_name_data.push_back(sync_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-history")
    {
        for(auto const & c : event_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::EventHistory>();
        c->parent = this;
        event_history.push_back(c);
        return c;
    }

    if(child_yang_name == "failover-status")
    {
        if(failover_status == nullptr)
        {
            failover_status = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::FailoverStatus>();
        }
        return failover_status;
    }

    if(child_yang_name == "issu-status")
    {
        if(issu_status == nullptr)
        {
            issu_status = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::IssuStatus>();
        }
        return issu_status;
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status == nullptr)
        {
            nsr_status = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::NsrStatus>();
        }
        return nsr_status;
    }

    if(child_yang_name == "report-card")
    {
        for(auto const & c : report_card)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::ReportCard>();
        c->parent = this;
        report_card.push_back(c);
        return c;
    }

    if(child_yang_name == "state-transition-time")
    {
        for(auto const & c : state_transition_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime>();
        c->parent = this;
        state_transition_time.push_back(c);
        return c;
    }

    if(child_yang_name == "xid-info")
    {
        for(auto const & c : xid_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::XidInfo>();
        c->parent = this;
        xid_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : event_history)
    {
        children[c->get_segment_path()] = c;
    }

    if(failover_status != nullptr)
    {
        children["failover-status"] = failover_status;
    }

    if(issu_status != nullptr)
    {
        children["issu-status"] = issu_status;
    }

    if(nsr_status != nullptr)
    {
        children["nsr-status"] = nsr_status;
    }

    for (auto const & c : report_card)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : state_transition_time)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : xid_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-role")
    {
        process_role = value;
        process_role.value_namespace = name_space;
        process_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-state")
    {
        process_state = value;
        process_state.value_namespace = name_space;
        process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress = value;
        sw_install_in_progress.value_namespace = name_space;
        sw_install_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-flags")
    {
        sync_flags = value;
        sync_flags.value_namespace = name_space;
        sync_flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-role")
    {
        process_role.yfilter = yfilter;
    }
    if(value_path == "process-state")
    {
        process_state.yfilter = yfilter;
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress.yfilter = yfilter;
    }
    if(value_path == "sync-flags")
    {
        sync_flags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-history" || name == "failover-status" || name == "issu-status" || name == "nsr-status" || name == "report-card" || name == "state-transition-time" || name == "xid-info" || name == "process-role" || name == "process-state" || name == "sw-install-in-progress" || name == "sync-flags")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::EventHistory::EventHistory()
    :
    event_timestamp{YType::uint32, "event-timestamp"},
    new_state{YType::uint8, "new-state"},
    previous_state{YType::uint8, "previous-state"},
    process_collaborator{YType::uint16, "process-collaborator"},
    process_event{YType::uint16, "process-event"}
{

    yang_name = "event-history"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::EventHistory::~EventHistory()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::EventHistory::has_data() const
{
    return event_timestamp.is_set
	|| new_state.is_set
	|| previous_state.is_set
	|| process_collaborator.is_set
	|| process_event.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::EventHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_timestamp.yfilter)
	|| ydk::is_set(new_state.yfilter)
	|| ydk::is_set(previous_state.yfilter)
	|| ydk::is_set(process_collaborator.yfilter)
	|| ydk::is_set(process_event.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::EventHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::EventHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_timestamp.is_set || is_set(event_timestamp.yfilter)) leaf_name_data.push_back(event_timestamp.get_name_leafdata());
    if (new_state.is_set || is_set(new_state.yfilter)) leaf_name_data.push_back(new_state.get_name_leafdata());
    if (previous_state.is_set || is_set(previous_state.yfilter)) leaf_name_data.push_back(previous_state.get_name_leafdata());
    if (process_collaborator.is_set || is_set(process_collaborator.yfilter)) leaf_name_data.push_back(process_collaborator.get_name_leafdata());
    if (process_event.is_set || is_set(process_event.yfilter)) leaf_name_data.push_back(process_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::EventHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::EventHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::EventHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-timestamp")
    {
        event_timestamp = value;
        event_timestamp.value_namespace = name_space;
        event_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-state")
    {
        new_state = value;
        new_state.value_namespace = name_space;
        new_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-state")
    {
        previous_state = value;
        previous_state.value_namespace = name_space;
        previous_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-collaborator")
    {
        process_collaborator = value;
        process_collaborator.value_namespace = name_space;
        process_collaborator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-event")
    {
        process_event = value;
        process_event.value_namespace = name_space;
        process_event.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::EventHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-timestamp")
    {
        event_timestamp.yfilter = yfilter;
    }
    if(value_path == "new-state")
    {
        new_state.yfilter = yfilter;
    }
    if(value_path == "previous-state")
    {
        previous_state.yfilter = yfilter;
    }
    if(value_path == "process-collaborator")
    {
        process_collaborator.yfilter = yfilter;
    }
    if(value_path == "process-event")
    {
        process_event.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::EventHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-timestamp" || name == "new-state" || name == "previous-state" || name == "process-collaborator" || name == "process-event")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::FailoverStatus()
    :
    master_time{YType::uint32, "master-time"},
    start_time{YType::uint32, "start-time"},
    triggered_time{YType::uint32, "triggered-time"}
{

    yang_name = "failover-status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::~FailoverStatus()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::has_data() const
{
    return master_time.is_set
	|| start_time.is_set
	|| triggered_time.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master_time.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(triggered_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failover-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_time.is_set || is_set(master_time.yfilter)) leaf_name_data.push_back(master_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (triggered_time.is_set || is_set(triggered_time.yfilter)) leaf_name_data.push_back(triggered_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master-time")
    {
        master_time = value;
        master_time.value_namespace = name_space;
        master_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-time")
    {
        triggered_time = value;
        triggered_time.value_namespace = name_space;
        triggered_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master-time")
    {
        master_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "triggered-time")
    {
        triggered_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "master-time" || name == "start-time" || name == "triggered-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IssuStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus>())
	,previ_ous_idt_status(std::make_shared<L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    previ_ous_idt_status->parent = this;

    yang_name = "issu-status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::IssuStatus::~IssuStatus()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Nsr::IssuStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::IssuStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::IssuStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::IssuStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::IssuStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previ-ous-idt-status" || name == "role")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::~IdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previ-ous-idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::NsrStatus::NsrStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus>())
	,previ_ous_idt_status(std::make_shared<L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    previ_ous_idt_status->parent = this;

    yang_name = "nsr-status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::NsrStatus::~NsrStatus()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Nsr::NsrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::NsrStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::NsrStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::NsrStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::NsrStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previ-ous-idt-status" || name == "role")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::~IdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previ-ous-idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::ReportCard::ReportCard()
    :
    collaborator_idt_done{YType::boolean, "collaborator-idt-done"},
    collaborator_is_connected{YType::boolean, "collaborator-is-connected"},
    collaborator_skipped{YType::boolean, "collaborator-skipped"},
    connection_change_time{YType::uint32, "connection-change-time"},
    idt_time{YType::uint32, "idt-time"}
{

    yang_name = "report-card"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::ReportCard::~ReportCard()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::ReportCard::has_data() const
{
    return collaborator_idt_done.is_set
	|| collaborator_is_connected.is_set
	|| collaborator_skipped.is_set
	|| connection_change_time.is_set
	|| idt_time.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::ReportCard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(collaborator_idt_done.yfilter)
	|| ydk::is_set(collaborator_is_connected.yfilter)
	|| ydk::is_set(collaborator_skipped.yfilter)
	|| ydk::is_set(connection_change_time.yfilter)
	|| ydk::is_set(idt_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::ReportCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "report-card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::ReportCard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collaborator_idt_done.is_set || is_set(collaborator_idt_done.yfilter)) leaf_name_data.push_back(collaborator_idt_done.get_name_leafdata());
    if (collaborator_is_connected.is_set || is_set(collaborator_is_connected.yfilter)) leaf_name_data.push_back(collaborator_is_connected.get_name_leafdata());
    if (collaborator_skipped.is_set || is_set(collaborator_skipped.yfilter)) leaf_name_data.push_back(collaborator_skipped.get_name_leafdata());
    if (connection_change_time.is_set || is_set(connection_change_time.yfilter)) leaf_name_data.push_back(connection_change_time.get_name_leafdata());
    if (idt_time.is_set || is_set(idt_time.yfilter)) leaf_name_data.push_back(idt_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::ReportCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::ReportCard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::ReportCard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done = value;
        collaborator_idt_done.value_namespace = name_space;
        collaborator_idt_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected = value;
        collaborator_is_connected.value_namespace = name_space;
        collaborator_is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped = value;
        collaborator_skipped.value_namespace = name_space;
        collaborator_skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time = value;
        connection_change_time.value_namespace = name_space;
        connection_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-time")
    {
        idt_time = value;
        idt_time.value_namespace = name_space;
        idt_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::ReportCard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done.yfilter = yfilter;
    }
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected.yfilter = yfilter;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped.yfilter = yfilter;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time.yfilter = yfilter;
    }
    if(value_path == "idt-time")
    {
        idt_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::ReportCard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-idt-done" || name == "collaborator-is-connected" || name == "collaborator-skipped" || name == "connection-change-time" || name == "idt-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::StateTransitionTime()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "state-transition-time"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::~StateTransitionTime()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-transition-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::XidInfo::XidInfo()
    :
    app_type{YType::enumeration, "app-type"},
    sent_ids{YType::uint32, "sent-ids"}
{

    yang_name = "xid-info"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::XidInfo::~XidInfo()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::XidInfo::has_data() const
{
    return app_type.is_set
	|| sent_ids.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::XidInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_type.yfilter)
	|| ydk::is_set(sent_ids.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::XidInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xid-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::XidInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_type.is_set || is_set(app_type.yfilter)) leaf_name_data.push_back(app_type.get_name_leafdata());
    if (sent_ids.is_set || is_set(sent_ids.yfilter)) leaf_name_data.push_back(sent_ids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::XidInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::XidInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::XidInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-type")
    {
        app_type = value;
        app_type.value_namespace = name_space;
        app_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-ids")
    {
        sent_ids = value;
        sent_ids.value_namespace = name_space;
        sent_ids.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::XidInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-type")
    {
        app_type.yfilter = yfilter;
    }
    if(value_path == "sent-ids")
    {
        sent_ids.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::XidInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-type" || name == "sent-ids")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPaths()
{

    yang_name = "preferred-paths"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::PreferredPaths::~PreferredPaths()
{
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::has_data() const
{
    for (std::size_t index=0; index<preferred_path.size(); index++)
    {
        if(preferred_path[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::has_operation() const
{
    for (std::size_t index=0; index<preferred_path.size(); index++)
    {
        if(preferred_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::PreferredPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::PreferredPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::PreferredPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "preferred-path")
    {
        for(auto const & c : preferred_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath>();
        c->parent = this;
        preferred_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::PreferredPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : preferred_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::PreferredPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::PreferredPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preferred-path")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::PreferredPath()
    :
    available_bandwidth{YType::uint32, "available-bandwidth"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    preferred_type{YType::enumeration, "preferred-type"},
    reserved_bandwidth{YType::uint32, "reserved-bandwidth"},
    total_bandwidth{YType::uint32, "total-bandwidth"},
    type{YType::enumeration, "type"}
{

    yang_name = "preferred-path"; yang_parent_name = "preferred-paths"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::~PreferredPath()
{
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::has_data() const
{
    for (std::size_t index=0; index<virtual_circuit.size(); index++)
    {
        if(virtual_circuit[index]->has_data())
            return true;
    }
    return available_bandwidth.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| preferred_type.is_set
	|| reserved_bandwidth.is_set
	|| total_bandwidth.is_set
	|| type.is_set;
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::has_operation() const
{
    for (std::size_t index=0; index<virtual_circuit.size(); index++)
    {
        if(virtual_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(preferred_type.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter)
	|| ydk::is_set(total_bandwidth.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (preferred_type.is_set || is_set(preferred_type.yfilter)) leaf_name_data.push_back(preferred_type.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());
    if (total_bandwidth.is_set || is_set(total_bandwidth.yfilter)) leaf_name_data.push_back(total_bandwidth.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-circuit")
    {
        for(auto const & c : virtual_circuit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit>();
        c->parent = this;
        virtual_circuit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_circuit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-type")
    {
        preferred_type = value;
        preferred_type.value_namespace = name_space;
        preferred_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth = value;
        total_bandwidth.value_namespace = name_space;
        total_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "preferred-type")
    {
        preferred_type.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-circuit" || name == "available-bandwidth" || name == "interface-name" || name == "interface-name-xr" || name == "preferred-type" || name == "reserved-bandwidth" || name == "total-bandwidth" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::VirtualCircuit()
    :
    fe_ctype{YType::enumeration, "fe-ctype"},
    peer_id{YType::str, "peer-id"},
    pwid{YType::uint64, "pwid"},
    pwid_type{YType::enumeration, "pwid-type"},
    source_address{YType::str, "source-address"}
{

    yang_name = "virtual-circuit"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::~VirtualCircuit()
{
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::has_data() const
{
    return fe_ctype.is_set
	|| peer_id.is_set
	|| pwid.is_set
	|| pwid_type.is_set
	|| source_address.is_set;
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fe_ctype.yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(pwid.yfilter)
	|| ydk::is_set(pwid_type.yfilter)
	|| ydk::is_set(source_address.yfilter);
}

std::string L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (pwid.is_set || is_set(pwid.yfilter)) leaf_name_data.push_back(pwid.get_name_leafdata());
    if (pwid_type.is_set || is_set(pwid_type.yfilter)) leaf_name_data.push_back(pwid_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwid")
    {
        pwid = value;
        pwid.value_namespace = name_space;
        pwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwid-type")
    {
        pwid_type = value;
        pwid_type.value_namespace = name_space;
        pwid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "pwid")
    {
        pwid.yfilter = yfilter;
    }
    if(value_path == "pwid-type")
    {
        pwid_type.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-ctype" || name == "peer-id" || name == "pwid" || name == "pwid-type" || name == "source-address")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::ProcFsm::ProcFsm()
    :
    process_role{YType::uint8, "process-role"},
    process_state{YType::uint8, "process-state"},
    sw_install_in_progress{YType::boolean, "sw-install-in-progress"},
    sync_flags{YType::uint32, "sync-flags"}
    	,
    failover_status(std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus>())
	,issu_status(std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus>())
	,nsr_status(std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus>())
{
    failover_status->parent = this;
    issu_status->parent = this;
    nsr_status->parent = this;

    yang_name = "proc-fsm"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::ProcFsm::~ProcFsm()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::has_data() const
{
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<report_card.size(); index++)
    {
        if(report_card[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<state_transition_time.size(); index++)
    {
        if(state_transition_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<xid_info.size(); index++)
    {
        if(xid_info[index]->has_data())
            return true;
    }
    return process_role.is_set
	|| process_state.is_set
	|| sw_install_in_progress.is_set
	|| sync_flags.is_set
	|| (failover_status !=  nullptr && failover_status->has_data())
	|| (issu_status !=  nullptr && issu_status->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data());
}

bool L2Vpnv2::Nodes::Node::ProcFsm::has_operation() const
{
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<report_card.size(); index++)
    {
        if(report_card[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<state_transition_time.size(); index++)
    {
        if(state_transition_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<xid_info.size(); index++)
    {
        if(xid_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_role.yfilter)
	|| ydk::is_set(process_state.yfilter)
	|| ydk::is_set(sw_install_in_progress.yfilter)
	|| ydk::is_set(sync_flags.yfilter)
	|| (failover_status !=  nullptr && failover_status->has_operation())
	|| (issu_status !=  nullptr && issu_status->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation());
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proc-fsm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::ProcFsm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_role.is_set || is_set(process_role.yfilter)) leaf_name_data.push_back(process_role.get_name_leafdata());
    if (process_state.is_set || is_set(process_state.yfilter)) leaf_name_data.push_back(process_state.get_name_leafdata());
    if (sw_install_in_progress.is_set || is_set(sw_install_in_progress.yfilter)) leaf_name_data.push_back(sw_install_in_progress.get_name_leafdata());
    if (sync_flags.is_set || is_set(sync_flags.yfilter)) leaf_name_data.push_back(sync_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-history")
    {
        for(auto const & c : event_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::EventHistory>();
        c->parent = this;
        event_history.push_back(c);
        return c;
    }

    if(child_yang_name == "failover-status")
    {
        if(failover_status == nullptr)
        {
            failover_status = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus>();
        }
        return failover_status;
    }

    if(child_yang_name == "issu-status")
    {
        if(issu_status == nullptr)
        {
            issu_status = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus>();
        }
        return issu_status;
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status == nullptr)
        {
            nsr_status = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus>();
        }
        return nsr_status;
    }

    if(child_yang_name == "report-card")
    {
        for(auto const & c : report_card)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::ReportCard>();
        c->parent = this;
        report_card.push_back(c);
        return c;
    }

    if(child_yang_name == "state-transition-time")
    {
        for(auto const & c : state_transition_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime>();
        c->parent = this;
        state_transition_time.push_back(c);
        return c;
    }

    if(child_yang_name == "xid-info")
    {
        for(auto const & c : xid_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::XidInfo>();
        c->parent = this;
        xid_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : event_history)
    {
        children[c->get_segment_path()] = c;
    }

    if(failover_status != nullptr)
    {
        children["failover-status"] = failover_status;
    }

    if(issu_status != nullptr)
    {
        children["issu-status"] = issu_status;
    }

    if(nsr_status != nullptr)
    {
        children["nsr-status"] = nsr_status;
    }

    for (auto const & c : report_card)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : state_transition_time)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : xid_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-role")
    {
        process_role = value;
        process_role.value_namespace = name_space;
        process_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-state")
    {
        process_state = value;
        process_state.value_namespace = name_space;
        process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress = value;
        sw_install_in_progress.value_namespace = name_space;
        sw_install_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-flags")
    {
        sync_flags = value;
        sync_flags.value_namespace = name_space;
        sync_flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::ProcFsm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-role")
    {
        process_role.yfilter = yfilter;
    }
    if(value_path == "process-state")
    {
        process_state.yfilter = yfilter;
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress.yfilter = yfilter;
    }
    if(value_path == "sync-flags")
    {
        sync_flags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::ProcFsm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-history" || name == "failover-status" || name == "issu-status" || name == "nsr-status" || name == "report-card" || name == "state-transition-time" || name == "xid-info" || name == "process-role" || name == "process-state" || name == "sw-install-in-progress" || name == "sync-flags")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::EventHistory()
    :
    event_timestamp{YType::uint32, "event-timestamp"},
    new_state{YType::uint8, "new-state"},
    previous_state{YType::uint8, "previous-state"},
    process_collaborator{YType::uint16, "process-collaborator"},
    process_event{YType::uint16, "process-event"}
{

    yang_name = "event-history"; yang_parent_name = "proc-fsm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::~EventHistory()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::has_data() const
{
    return event_timestamp.is_set
	|| new_state.is_set
	|| previous_state.is_set
	|| process_collaborator.is_set
	|| process_event.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_timestamp.yfilter)
	|| ydk::is_set(new_state.yfilter)
	|| ydk::is_set(previous_state.yfilter)
	|| ydk::is_set(process_collaborator.yfilter)
	|| ydk::is_set(process_event.yfilter);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_timestamp.is_set || is_set(event_timestamp.yfilter)) leaf_name_data.push_back(event_timestamp.get_name_leafdata());
    if (new_state.is_set || is_set(new_state.yfilter)) leaf_name_data.push_back(new_state.get_name_leafdata());
    if (previous_state.is_set || is_set(previous_state.yfilter)) leaf_name_data.push_back(previous_state.get_name_leafdata());
    if (process_collaborator.is_set || is_set(process_collaborator.yfilter)) leaf_name_data.push_back(process_collaborator.get_name_leafdata());
    if (process_event.is_set || is_set(process_event.yfilter)) leaf_name_data.push_back(process_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-timestamp")
    {
        event_timestamp = value;
        event_timestamp.value_namespace = name_space;
        event_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-state")
    {
        new_state = value;
        new_state.value_namespace = name_space;
        new_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-state")
    {
        previous_state = value;
        previous_state.value_namespace = name_space;
        previous_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-collaborator")
    {
        process_collaborator = value;
        process_collaborator.value_namespace = name_space;
        process_collaborator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-event")
    {
        process_event = value;
        process_event.value_namespace = name_space;
        process_event.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-timestamp")
    {
        event_timestamp.yfilter = yfilter;
    }
    if(value_path == "new-state")
    {
        new_state.yfilter = yfilter;
    }
    if(value_path == "previous-state")
    {
        previous_state.yfilter = yfilter;
    }
    if(value_path == "process-collaborator")
    {
        process_collaborator.yfilter = yfilter;
    }
    if(value_path == "process-event")
    {
        process_event.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::ProcFsm::EventHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-timestamp" || name == "new-state" || name == "previous-state" || name == "process-collaborator" || name == "process-event")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::FailoverStatus()
    :
    master_time{YType::uint32, "master-time"},
    start_time{YType::uint32, "start-time"},
    triggered_time{YType::uint32, "triggered-time"}
{

    yang_name = "failover-status"; yang_parent_name = "proc-fsm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::~FailoverStatus()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::has_data() const
{
    return master_time.is_set
	|| start_time.is_set
	|| triggered_time.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master_time.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(triggered_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failover-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_time.is_set || is_set(master_time.yfilter)) leaf_name_data.push_back(master_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (triggered_time.is_set || is_set(triggered_time.yfilter)) leaf_name_data.push_back(triggered_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master-time")
    {
        master_time = value;
        master_time.value_namespace = name_space;
        master_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-time")
    {
        triggered_time = value;
        triggered_time.value_namespace = name_space;
        triggered_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master-time")
    {
        master_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "triggered-time")
    {
        triggered_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::ProcFsm::FailoverStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "master-time" || name == "start-time" || name == "triggered-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IssuStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus>())
	,previ_ous_idt_status(std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    previ_ous_idt_status->parent = this;

    yang_name = "issu-status"; yang_parent_name = "proc-fsm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::~IssuStatus()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previ-ous-idt-status" || name == "role")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::~IdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previ-ous-idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::ProcFsm::IssuStatus::PreviOusIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::NsrStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus>())
	,previ_ous_idt_status(std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    previ_ous_idt_status->parent = this;

    yang_name = "nsr-status"; yang_parent_name = "proc-fsm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::~NsrStatus()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previ-ous-idt-status" || name == "role")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::~IdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previ-ous-idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::ProcFsm::NsrStatus::PreviOusIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::ReportCard()
    :
    collaborator_idt_done{YType::boolean, "collaborator-idt-done"},
    collaborator_is_connected{YType::boolean, "collaborator-is-connected"},
    collaborator_skipped{YType::boolean, "collaborator-skipped"},
    connection_change_time{YType::uint32, "connection-change-time"},
    idt_time{YType::uint32, "idt-time"}
{

    yang_name = "report-card"; yang_parent_name = "proc-fsm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::~ReportCard()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::has_data() const
{
    return collaborator_idt_done.is_set
	|| collaborator_is_connected.is_set
	|| collaborator_skipped.is_set
	|| connection_change_time.is_set
	|| idt_time.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(collaborator_idt_done.yfilter)
	|| ydk::is_set(collaborator_is_connected.yfilter)
	|| ydk::is_set(collaborator_skipped.yfilter)
	|| ydk::is_set(connection_change_time.yfilter)
	|| ydk::is_set(idt_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "report-card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collaborator_idt_done.is_set || is_set(collaborator_idt_done.yfilter)) leaf_name_data.push_back(collaborator_idt_done.get_name_leafdata());
    if (collaborator_is_connected.is_set || is_set(collaborator_is_connected.yfilter)) leaf_name_data.push_back(collaborator_is_connected.get_name_leafdata());
    if (collaborator_skipped.is_set || is_set(collaborator_skipped.yfilter)) leaf_name_data.push_back(collaborator_skipped.get_name_leafdata());
    if (connection_change_time.is_set || is_set(connection_change_time.yfilter)) leaf_name_data.push_back(connection_change_time.get_name_leafdata());
    if (idt_time.is_set || is_set(idt_time.yfilter)) leaf_name_data.push_back(idt_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done = value;
        collaborator_idt_done.value_namespace = name_space;
        collaborator_idt_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected = value;
        collaborator_is_connected.value_namespace = name_space;
        collaborator_is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped = value;
        collaborator_skipped.value_namespace = name_space;
        collaborator_skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time = value;
        connection_change_time.value_namespace = name_space;
        connection_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-time")
    {
        idt_time = value;
        idt_time.value_namespace = name_space;
        idt_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done.yfilter = yfilter;
    }
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected.yfilter = yfilter;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped.yfilter = yfilter;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time.yfilter = yfilter;
    }
    if(value_path == "idt-time")
    {
        idt_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::ProcFsm::ReportCard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-idt-done" || name == "collaborator-is-connected" || name == "collaborator-skipped" || name == "connection-change-time" || name == "idt-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime::StateTransitionTime()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "state-transition-time"; yang_parent_name = "proc-fsm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime::~StateTransitionTime()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-transition-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::ProcFsm::StateTransitionTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::XidInfo()
    :
    app_type{YType::enumeration, "app-type"},
    sent_ids{YType::uint32, "sent-ids"}
{

    yang_name = "xid-info"; yang_parent_name = "proc-fsm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::~XidInfo()
{
}

bool L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::has_data() const
{
    return app_type.is_set
	|| sent_ids.is_set;
}

bool L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_type.yfilter)
	|| ydk::is_set(sent_ids.yfilter);
}

std::string L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xid-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_type.is_set || is_set(app_type.yfilter)) leaf_name_data.push_back(app_type.get_name_leafdata());
    if (sent_ids.is_set || is_set(sent_ids.yfilter)) leaf_name_data.push_back(sent_ids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-type")
    {
        app_type = value;
        app_type.value_namespace = name_space;
        app_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-ids")
    {
        sent_ids = value;
        sent_ids.value_namespace = name_space;
        sent_ids.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-type")
    {
        app_type.yfilter = yfilter;
    }
    if(value_path == "sent-ids")
    {
        sent_ids.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::ProcFsm::XidInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-type" || name == "sent-ids")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClasses()
{

    yang_name = "pseudowire-classes"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::PseudowireClasses::~PseudowireClasses()
{
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::has_data() const
{
    for (std::size_t index=0; index<pseudowire_class.size(); index++)
    {
        if(pseudowire_class[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_class.size(); index++)
    {
        if(pseudowire_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::PseudowireClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::PseudowireClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::PseudowireClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-class")
    {
        for(auto const & c : pseudowire_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass>();
        c->parent = this;
        pseudowire_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::PseudowireClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pseudowire_class)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::PseudowireClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::PseudowireClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-class")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PseudowireClass()
    :
    pseudowire_class_name{YType::str, "pseudowire-class-name"},
    backup_mac_withdraw{YType::boolean, "backup-mac-withdraw"},
    control_word{YType::enumeration, "control-word"},
    disable_delay{YType::uint8, "disable-delay"},
    disable_never{YType::boolean, "disable-never"},
    is_flow_label_static{YType::boolean, "is-flow-label-static"},
    load_balance{YType::enumeration, "load-balance"},
    preferred_path_disable_fallback{YType::boolean, "preferred-path-disable-fallback"},
    protocol{YType::enumeration, "protocol"},
    pw_class_name{YType::str, "pw-class-name"},
    pw_flow_label_code17_disabled{YType::boolean, "pw-flow-label-code17-disabled"},
    pw_flow_label_type_cfg{YType::enumeration, "pw-flow-label-type-cfg"},
    resync_enabled{YType::boolean, "resync-enabled"},
    resync_threshold{YType::uint32, "resync-threshold"},
    sequencing_type{YType::enumeration, "sequencing-type"},
    tag_rewrite{YType::uint16, "tag-rewrite"},
    transport_mode{YType::enumeration, "transport-mode"}
    	,
    encapsulation_info(std::make_shared<L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo>())
	,local_source_address(std::make_shared<L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress>())
	,preferred_path(std::make_shared<L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath>())
{
    encapsulation_info->parent = this;
    local_source_address->parent = this;
    preferred_path->parent = this;

    yang_name = "pseudowire-class"; yang_parent_name = "pseudowire-classes"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::~PseudowireClass()
{
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::has_data() const
{
    return pseudowire_class_name.is_set
	|| backup_mac_withdraw.is_set
	|| control_word.is_set
	|| disable_delay.is_set
	|| disable_never.is_set
	|| is_flow_label_static.is_set
	|| load_balance.is_set
	|| preferred_path_disable_fallback.is_set
	|| protocol.is_set
	|| pw_class_name.is_set
	|| pw_flow_label_code17_disabled.is_set
	|| pw_flow_label_type_cfg.is_set
	|| resync_enabled.is_set
	|| resync_threshold.is_set
	|| sequencing_type.is_set
	|| tag_rewrite.is_set
	|| transport_mode.is_set
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_data())
	|| (local_source_address !=  nullptr && local_source_address->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data());
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_class_name.yfilter)
	|| ydk::is_set(backup_mac_withdraw.yfilter)
	|| ydk::is_set(control_word.yfilter)
	|| ydk::is_set(disable_delay.yfilter)
	|| ydk::is_set(disable_never.yfilter)
	|| ydk::is_set(is_flow_label_static.yfilter)
	|| ydk::is_set(load_balance.yfilter)
	|| ydk::is_set(preferred_path_disable_fallback.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(pw_class_name.yfilter)
	|| ydk::is_set(pw_flow_label_code17_disabled.yfilter)
	|| ydk::is_set(pw_flow_label_type_cfg.yfilter)
	|| ydk::is_set(resync_enabled.yfilter)
	|| ydk::is_set(resync_threshold.yfilter)
	|| ydk::is_set(sequencing_type.yfilter)
	|| ydk::is_set(tag_rewrite.yfilter)
	|| ydk::is_set(transport_mode.yfilter)
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_operation())
	|| (local_source_address !=  nullptr && local_source_address->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation());
}

std::string L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-class" <<"[pseudowire-class-name='" <<pseudowire_class_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_class_name.is_set || is_set(pseudowire_class_name.yfilter)) leaf_name_data.push_back(pseudowire_class_name.get_name_leafdata());
    if (backup_mac_withdraw.is_set || is_set(backup_mac_withdraw.yfilter)) leaf_name_data.push_back(backup_mac_withdraw.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (disable_delay.is_set || is_set(disable_delay.yfilter)) leaf_name_data.push_back(disable_delay.get_name_leafdata());
    if (disable_never.is_set || is_set(disable_never.yfilter)) leaf_name_data.push_back(disable_never.get_name_leafdata());
    if (is_flow_label_static.is_set || is_set(is_flow_label_static.yfilter)) leaf_name_data.push_back(is_flow_label_static.get_name_leafdata());
    if (load_balance.is_set || is_set(load_balance.yfilter)) leaf_name_data.push_back(load_balance.get_name_leafdata());
    if (preferred_path_disable_fallback.is_set || is_set(preferred_path_disable_fallback.yfilter)) leaf_name_data.push_back(preferred_path_disable_fallback.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pw_class_name.is_set || is_set(pw_class_name.yfilter)) leaf_name_data.push_back(pw_class_name.get_name_leafdata());
    if (pw_flow_label_code17_disabled.is_set || is_set(pw_flow_label_code17_disabled.yfilter)) leaf_name_data.push_back(pw_flow_label_code17_disabled.get_name_leafdata());
    if (pw_flow_label_type_cfg.is_set || is_set(pw_flow_label_type_cfg.yfilter)) leaf_name_data.push_back(pw_flow_label_type_cfg.get_name_leafdata());
    if (resync_enabled.is_set || is_set(resync_enabled.yfilter)) leaf_name_data.push_back(resync_enabled.get_name_leafdata());
    if (resync_threshold.is_set || is_set(resync_threshold.yfilter)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());
    if (sequencing_type.is_set || is_set(sequencing_type.yfilter)) leaf_name_data.push_back(sequencing_type.get_name_leafdata());
    if (tag_rewrite.is_set || is_set(tag_rewrite.yfilter)) leaf_name_data.push_back(tag_rewrite.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.yfilter)) leaf_name_data.push_back(transport_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation-info")
    {
        if(encapsulation_info == nullptr)
        {
            encapsulation_info = std::make_shared<L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo>();
        }
        return encapsulation_info;
    }

    if(child_yang_name == "local-source-address")
    {
        if(local_source_address == nullptr)
        {
            local_source_address = std::make_shared<L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress>();
        }
        return local_source_address;
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path == nullptr)
        {
            preferred_path = std::make_shared<L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath>();
        }
        return preferred_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation_info != nullptr)
    {
        children["encapsulation-info"] = encapsulation_info;
    }

    if(local_source_address != nullptr)
    {
        children["local-source-address"] = local_source_address;
    }

    if(preferred_path != nullptr)
    {
        children["preferred-path"] = preferred_path;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-class-name")
    {
        pseudowire_class_name = value;
        pseudowire_class_name.value_namespace = name_space;
        pseudowire_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-mac-withdraw")
    {
        backup_mac_withdraw = value;
        backup_mac_withdraw.value_namespace = name_space;
        backup_mac_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-delay")
    {
        disable_delay = value;
        disable_delay.value_namespace = name_space;
        disable_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-never")
    {
        disable_never = value;
        disable_never.value_namespace = name_space;
        disable_never.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static = value;
        is_flow_label_static.value_namespace = name_space;
        is_flow_label_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance")
    {
        load_balance = value;
        load_balance.value_namespace = name_space;
        load_balance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback = value;
        preferred_path_disable_fallback.value_namespace = name_space;
        preferred_path_disable_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name = value;
        pw_class_name.value_namespace = name_space;
        pw_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled = value;
        pw_flow_label_code17_disabled.value_namespace = name_space;
        pw_flow_label_code17_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg = value;
        pw_flow_label_type_cfg.value_namespace = name_space;
        pw_flow_label_type_cfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled = value;
        resync_enabled.value_namespace = name_space;
        resync_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
        resync_threshold.value_namespace = name_space;
        resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type = value;
        sequencing_type.value_namespace = name_space;
        sequencing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite = value;
        tag_rewrite.value_namespace = name_space;
        tag_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
        transport_mode.value_namespace = name_space;
        transport_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-class-name")
    {
        pseudowire_class_name.yfilter = yfilter;
    }
    if(value_path == "backup-mac-withdraw")
    {
        backup_mac_withdraw.yfilter = yfilter;
    }
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
    if(value_path == "disable-delay")
    {
        disable_delay.yfilter = yfilter;
    }
    if(value_path == "disable-never")
    {
        disable_never.yfilter = yfilter;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static.yfilter = yfilter;
    }
    if(value_path == "load-balance")
    {
        load_balance.yfilter = yfilter;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg.yfilter = yfilter;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled.yfilter = yfilter;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold.yfilter = yfilter;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type.yfilter = yfilter;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite.yfilter = yfilter;
    }
    if(value_path == "transport-mode")
    {
        transport_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation-info" || name == "local-source-address" || name == "preferred-path" || name == "pseudowire-class-name" || name == "backup-mac-withdraw" || name == "control-word" || name == "disable-delay" || name == "disable-never" || name == "is-flow-label-static" || name == "load-balance" || name == "preferred-path-disable-fallback" || name == "protocol" || name == "pw-class-name" || name == "pw-flow-label-code17-disabled" || name == "pw-flow-label-type-cfg" || name == "resync-enabled" || name == "resync-threshold" || name == "sequencing-type" || name == "tag-rewrite" || name == "transport-mode")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::EncapsulationInfo()
    :
    encapsulation{YType::enumeration, "encapsulation"}
    	,
    l2tpv3(std::make_shared<L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3>())
{
    l2tpv3->parent = this;

    yang_name = "encapsulation-info"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::~EncapsulationInfo()
{
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::has_data() const
{
    return encapsulation.is_set
	|| (l2tpv3 !=  nullptr && l2tpv3->has_data());
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| (l2tpv3 !=  nullptr && l2tpv3->has_operation());
}

std::string L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tpv3")
    {
        if(l2tpv3 == nullptr)
        {
            l2tpv3 = std::make_shared<L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3>();
        }
        return l2tpv3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2tpv3 != nullptr)
    {
        children["l2tpv3"] = l2tpv3;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tpv3" || name == "encapsulation")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::L2Tpv3()
    :
    cookie_size{YType::uint8, "cookie-size"},
    dont_fragment_bit{YType::boolean, "dont-fragment-bit"},
    ipv4_source_address{YType::str, "ipv4-source-address"},
    l2tp_class_name{YType::str, "l2tp-class-name"},
    path_mtu_enabled{YType::boolean, "path-mtu-enabled"},
    path_mtu_max_value{YType::uint16, "path-mtu-max-value"},
    tos{YType::uint8, "tos"},
    tos_mode{YType::enumeration, "tos-mode"},
    ttl{YType::uint8, "ttl"}
{

    yang_name = "l2tpv3"; yang_parent_name = "encapsulation-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::~L2Tpv3()
{
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::has_data() const
{
    return cookie_size.is_set
	|| dont_fragment_bit.is_set
	|| ipv4_source_address.is_set
	|| l2tp_class_name.is_set
	|| path_mtu_enabled.is_set
	|| path_mtu_max_value.is_set
	|| tos.is_set
	|| tos_mode.is_set
	|| ttl.is_set;
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(dont_fragment_bit.yfilter)
	|| ydk::is_set(ipv4_source_address.yfilter)
	|| ydk::is_set(l2tp_class_name.yfilter)
	|| ydk::is_set(path_mtu_enabled.yfilter)
	|| ydk::is_set(path_mtu_max_value.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(tos_mode.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (dont_fragment_bit.is_set || is_set(dont_fragment_bit.yfilter)) leaf_name_data.push_back(dont_fragment_bit.get_name_leafdata());
    if (ipv4_source_address.is_set || is_set(ipv4_source_address.yfilter)) leaf_name_data.push_back(ipv4_source_address.get_name_leafdata());
    if (l2tp_class_name.is_set || is_set(l2tp_class_name.yfilter)) leaf_name_data.push_back(l2tp_class_name.get_name_leafdata());
    if (path_mtu_enabled.is_set || is_set(path_mtu_enabled.yfilter)) leaf_name_data.push_back(path_mtu_enabled.get_name_leafdata());
    if (path_mtu_max_value.is_set || is_set(path_mtu_max_value.yfilter)) leaf_name_data.push_back(path_mtu_max_value.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (tos_mode.is_set || is_set(tos_mode.yfilter)) leaf_name_data.push_back(tos_mode.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dont-fragment-bit")
    {
        dont_fragment_bit = value;
        dont_fragment_bit.value_namespace = name_space;
        dont_fragment_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address = value;
        ipv4_source_address.value_namespace = name_space;
        ipv4_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-class-name")
    {
        l2tp_class_name = value;
        l2tp_class_name.value_namespace = name_space;
        l2tp_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-enabled")
    {
        path_mtu_enabled = value;
        path_mtu_enabled.value_namespace = name_space;
        path_mtu_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-max-value")
    {
        path_mtu_max_value = value;
        path_mtu_max_value.value_namespace = name_space;
        path_mtu_max_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-mode")
    {
        tos_mode = value;
        tos_mode.value_namespace = name_space;
        tos_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "dont-fragment-bit")
    {
        dont_fragment_bit.yfilter = yfilter;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address.yfilter = yfilter;
    }
    if(value_path == "l2tp-class-name")
    {
        l2tp_class_name.yfilter = yfilter;
    }
    if(value_path == "path-mtu-enabled")
    {
        path_mtu_enabled.yfilter = yfilter;
    }
    if(value_path == "path-mtu-max-value")
    {
        path_mtu_max_value.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "tos-mode")
    {
        tos_mode.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-size" || name == "dont-fragment-bit" || name == "ipv4-source-address" || name == "l2tp-class-name" || name == "path-mtu-enabled" || name == "path-mtu-max-value" || name == "tos" || name == "tos-mode" || name == "ttl")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress::LocalSourceAddress()
    :
    address{YType::str, "address"},
    configuration{YType::enumeration, "configuration"}
{

    yang_name = "local-source-address"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress::~LocalSourceAddress()
{
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress::has_data() const
{
    return address.is_set
	|| configuration.is_set;
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(configuration.yfilter);
}

std::string L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (configuration.is_set || is_set(configuration.yfilter)) leaf_name_data.push_back(configuration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration")
    {
        configuration = value;
        configuration.value_namespace = name_space;
        configuration.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "configuration")
    {
        configuration.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::LocalSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "configuration")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::PreferredPath()
    :
    ip_tunnel_interface_number{YType::uint32, "ip-tunnel-interface-number"},
    next_hop_ip{YType::uint32, "next-hop-ip"},
    option{YType::enumeration, "option"},
    te_tunnel_interface_number{YType::uint32, "te-tunnel-interface-number"},
    tp_tunnel_interface_number{YType::uint32, "tp-tunnel-interface-number"}
    	,
    srte_policy(std::make_shared<L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy>())
{
    srte_policy->parent = this;

    yang_name = "preferred-path"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::~PreferredPath()
{
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::has_data() const
{
    return ip_tunnel_interface_number.is_set
	|| next_hop_ip.is_set
	|| option.is_set
	|| te_tunnel_interface_number.is_set
	|| tp_tunnel_interface_number.is_set
	|| (srte_policy !=  nullptr && srte_policy->has_data());
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_tunnel_interface_number.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(te_tunnel_interface_number.yfilter)
	|| ydk::is_set(tp_tunnel_interface_number.yfilter)
	|| (srte_policy !=  nullptr && srte_policy->has_operation());
}

std::string L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_tunnel_interface_number.is_set || is_set(ip_tunnel_interface_number.yfilter)) leaf_name_data.push_back(ip_tunnel_interface_number.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (te_tunnel_interface_number.is_set || is_set(te_tunnel_interface_number.yfilter)) leaf_name_data.push_back(te_tunnel_interface_number.get_name_leafdata());
    if (tp_tunnel_interface_number.is_set || is_set(tp_tunnel_interface_number.yfilter)) leaf_name_data.push_back(tp_tunnel_interface_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srte-policy")
    {
        if(srte_policy == nullptr)
        {
            srte_policy = std::make_shared<L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy>();
        }
        return srte_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(srte_policy != nullptr)
    {
        children["srte-policy"] = srte_policy;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number = value;
        ip_tunnel_interface_number.value_namespace = name_space;
        ip_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number = value;
        te_tunnel_interface_number.value_namespace = name_space;
        te_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number = value;
        tp_tunnel_interface_number.value_namespace = name_space;
        tp_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number.yfilter = yfilter;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srte-policy" || name == "ip-tunnel-interface-number" || name == "next-hop-ip" || name == "option" || name == "te-tunnel-interface-number" || name == "tp-tunnel-interface-number")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::SrtePolicy()
    :
    policy_name{YType::str, "policy-name"}
{

    yang_name = "srte-policy"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::~SrtePolicy()
{
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::has_data() const
{
    return policy_name.is_set;
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Pwr()
    :
    summary(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary>())
{
    summary->parent = this;

    yang_name = "pwr"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::~Pwr()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool L2Vpnv2::Nodes::Node::Pwr::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Pwr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::Pwr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::Pwr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::Summary()
    :
    bgp_as{YType::uint32, "bgp-as"},
    bgp_router_id{YType::str, "bgp-router-id"},
    cfg_global_id{YType::uint32, "cfg-global-id"},
    cfg_router_id{YType::str, "cfg-router-id"},
    l2vpn_has_bgp_eod{YType::boolean, "l2vpn-has-bgp-eod"}
    	,
    rd_auto(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto>())
	,rd_configured(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured>())
{
    rd_auto->parent = this;
    rd_configured->parent = this;

    yang_name = "summary"; yang_parent_name = "pwr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::~Summary()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::has_data() const
{
    return bgp_as.is_set
	|| bgp_router_id.is_set
	|| cfg_global_id.is_set
	|| cfg_router_id.is_set
	|| l2vpn_has_bgp_eod.is_set
	|| (rd_auto !=  nullptr && rd_auto->has_data())
	|| (rd_configured !=  nullptr && rd_configured->has_data());
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_as.yfilter)
	|| ydk::is_set(bgp_router_id.yfilter)
	|| ydk::is_set(cfg_global_id.yfilter)
	|| ydk::is_set(cfg_router_id.yfilter)
	|| ydk::is_set(l2vpn_has_bgp_eod.yfilter)
	|| (rd_auto !=  nullptr && rd_auto->has_operation())
	|| (rd_configured !=  nullptr && rd_configured->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_as.is_set || is_set(bgp_as.yfilter)) leaf_name_data.push_back(bgp_as.get_name_leafdata());
    if (bgp_router_id.is_set || is_set(bgp_router_id.yfilter)) leaf_name_data.push_back(bgp_router_id.get_name_leafdata());
    if (cfg_global_id.is_set || is_set(cfg_global_id.yfilter)) leaf_name_data.push_back(cfg_global_id.get_name_leafdata());
    if (cfg_router_id.is_set || is_set(cfg_router_id.yfilter)) leaf_name_data.push_back(cfg_router_id.get_name_leafdata());
    if (l2vpn_has_bgp_eod.is_set || is_set(l2vpn_has_bgp_eod.yfilter)) leaf_name_data.push_back(l2vpn_has_bgp_eod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rd-auto")
    {
        if(rd_auto == nullptr)
        {
            rd_auto = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto>();
        }
        return rd_auto;
    }

    if(child_yang_name == "rd-configured")
    {
        if(rd_configured == nullptr)
        {
            rd_configured = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured>();
        }
        return rd_configured;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rd_auto != nullptr)
    {
        children["rd-auto"] = rd_auto;
    }

    if(rd_configured != nullptr)
    {
        children["rd-configured"] = rd_configured;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-as")
    {
        bgp_as = value;
        bgp_as.value_namespace = name_space;
        bgp_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-router-id")
    {
        bgp_router_id = value;
        bgp_router_id.value_namespace = name_space;
        bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-global-id")
    {
        cfg_global_id = value;
        cfg_global_id.value_namespace = name_space;
        cfg_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-router-id")
    {
        cfg_router_id = value;
        cfg_router_id.value_namespace = name_space;
        cfg_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-has-bgp-eod")
    {
        l2vpn_has_bgp_eod = value;
        l2vpn_has_bgp_eod.value_namespace = name_space;
        l2vpn_has_bgp_eod.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-as")
    {
        bgp_as.yfilter = yfilter;
    }
    if(value_path == "bgp-router-id")
    {
        bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "cfg-global-id")
    {
        cfg_global_id.yfilter = yfilter;
    }
    if(value_path == "cfg-router-id")
    {
        cfg_router_id.yfilter = yfilter;
    }
    if(value_path == "l2vpn-has-bgp-eod")
    {
        l2vpn_has_bgp_eod.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rd-auto" || name == "rd-configured" || name == "bgp-as" || name == "bgp-router-id" || name == "cfg-global-id" || name == "cfg-router-id" || name == "l2vpn-has-bgp-eod")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::RdAuto()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_>())
	,four_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr>())
{
    auto_->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-auto"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::~RdAuto()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{

    yang_name = "auto"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::~Auto_()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_index.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-index" || name == "router-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::RdConfigured()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_>())
	,four_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr>())
{
    auto_->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-configured"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::~RdConfigured()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-configured";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{

    yang_name = "auto"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::~Auto_()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_index.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-index" || name == "router-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::XconnectBrief()
    :
    main_total_down{YType::uint32, "main-total-down"},
    main_total_unresolved{YType::uint32, "main-total-unresolved"},
    main_total_up{YType::uint32, "main-total-up"},
    memory_state{YType::enumeration, "memory-state"},
    undefined_xc{YType::uint32, "undefined-xc"}
{

    yang_name = "xconnect-brief"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::~XconnectBrief()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::has_data() const
{
    for (std::size_t index=0; index<encapsulation_report_matrix.size(); index++)
    {
        if(encapsulation_report_matrix[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<encapsulation_total.size(); index++)
    {
        if(encapsulation_total[index]->has_data())
            return true;
    }
    return main_total_down.is_set
	|| main_total_unresolved.is_set
	|| main_total_up.is_set
	|| memory_state.is_set
	|| undefined_xc.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::has_operation() const
{
    for (std::size_t index=0; index<encapsulation_report_matrix.size(); index++)
    {
        if(encapsulation_report_matrix[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<encapsulation_total.size(); index++)
    {
        if(encapsulation_total[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(main_total_down.yfilter)
	|| ydk::is_set(main_total_unresolved.yfilter)
	|| ydk::is_set(main_total_up.yfilter)
	|| ydk::is_set(memory_state.yfilter)
	|| ydk::is_set(undefined_xc.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_total_down.is_set || is_set(main_total_down.yfilter)) leaf_name_data.push_back(main_total_down.get_name_leafdata());
    if (main_total_unresolved.is_set || is_set(main_total_unresolved.yfilter)) leaf_name_data.push_back(main_total_unresolved.get_name_leafdata());
    if (main_total_up.is_set || is_set(main_total_up.yfilter)) leaf_name_data.push_back(main_total_up.get_name_leafdata());
    if (memory_state.is_set || is_set(memory_state.yfilter)) leaf_name_data.push_back(memory_state.get_name_leafdata());
    if (undefined_xc.is_set || is_set(undefined_xc.yfilter)) leaf_name_data.push_back(undefined_xc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation-report-matrix")
    {
        for(auto const & c : encapsulation_report_matrix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix>();
        c->parent = this;
        encapsulation_report_matrix.push_back(c);
        return c;
    }

    if(child_yang_name == "encapsulation-total")
    {
        for(auto const & c : encapsulation_total)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal>();
        c->parent = this;
        encapsulation_total.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : encapsulation_report_matrix)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : encapsulation_total)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-total-down")
    {
        main_total_down = value;
        main_total_down.value_namespace = name_space;
        main_total_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-total-unresolved")
    {
        main_total_unresolved = value;
        main_total_unresolved.value_namespace = name_space;
        main_total_unresolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-total-up")
    {
        main_total_up = value;
        main_total_up.value_namespace = name_space;
        main_total_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-state")
    {
        memory_state = value;
        memory_state.value_namespace = name_space;
        memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "undefined-xc")
    {
        undefined_xc = value;
        undefined_xc.value_namespace = name_space;
        undefined_xc.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-total-down")
    {
        main_total_down.yfilter = yfilter;
    }
    if(value_path == "main-total-unresolved")
    {
        main_total_unresolved.yfilter = yfilter;
    }
    if(value_path == "main-total-up")
    {
        main_total_up.yfilter = yfilter;
    }
    if(value_path == "memory-state")
    {
        memory_state.yfilter = yfilter;
    }
    if(value_path == "undefined-xc")
    {
        undefined_xc.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation-report-matrix" || name == "encapsulation-total" || name == "main-total-down" || name == "main-total-unresolved" || name == "main-total-up" || name == "memory-state" || name == "undefined-xc")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::EncapsulationReportMatrix()
{

    yang_name = "encapsulation-report-matrix"; yang_parent_name = "xconnect-brief"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::~EncapsulationReportMatrix()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::has_data() const
{
    for (std::size_t index=0; index<ac1.size(); index++)
    {
        if(ac1[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::has_operation() const
{
    for (std::size_t index=0; index<ac1.size(); index++)
    {
        if(ac1[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-report-matrix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac1")
    {
        for(auto const & c : ac1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1>();
        c->parent = this;
        ac1.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ac1)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac1")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac1()
{

    yang_name = "ac1"; yang_parent_name = "encapsulation-report-matrix"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::~Ac1()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::has_data() const
{
    for (std::size_t index=0; index<ac2.size(); index++)
    {
        if(ac2[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::has_operation() const
{
    for (std::size_t index=0; index<ac2.size(); index++)
    {
        if(ac2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac2")
    {
        for(auto const & c : ac2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2>();
        c->parent = this;
        ac2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ac2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac2")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::Ac2()
    :
    ac1_encapsulation{YType::enumeration, "ac1-encapsulation"},
    ac2_encapsulation{YType::enumeration, "ac2-encapsulation"},
    psn_type{YType::enumeration, "psn-type"}
{

    yang_name = "ac2"; yang_parent_name = "ac1"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::~Ac2()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::has_data() const
{
    for (std::size_t index=0; index<down_count.size(); index++)
    {
        if(down_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unresolved_count.size(); index++)
    {
        if(unresolved_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<up_count.size(); index++)
    {
        if(up_count[index]->has_data())
            return true;
    }
    return ac1_encapsulation.is_set
	|| ac2_encapsulation.is_set
	|| psn_type.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::has_operation() const
{
    for (std::size_t index=0; index<down_count.size(); index++)
    {
        if(down_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unresolved_count.size(); index++)
    {
        if(unresolved_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<up_count.size(); index++)
    {
        if(up_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ac1_encapsulation.yfilter)
	|| ydk::is_set(ac2_encapsulation.yfilter)
	|| ydk::is_set(psn_type.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac1_encapsulation.is_set || is_set(ac1_encapsulation.yfilter)) leaf_name_data.push_back(ac1_encapsulation.get_name_leafdata());
    if (ac2_encapsulation.is_set || is_set(ac2_encapsulation.yfilter)) leaf_name_data.push_back(ac2_encapsulation.get_name_leafdata());
    if (psn_type.is_set || is_set(psn_type.yfilter)) leaf_name_data.push_back(psn_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "down-count")
    {
        for(auto const & c : down_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount>();
        c->parent = this;
        down_count.push_back(c);
        return c;
    }

    if(child_yang_name == "unresolved-count")
    {
        for(auto const & c : unresolved_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount>();
        c->parent = this;
        unresolved_count.push_back(c);
        return c;
    }

    if(child_yang_name == "up-count")
    {
        for(auto const & c : up_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount>();
        c->parent = this;
        up_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : down_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : unresolved_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : up_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation = value;
        ac1_encapsulation.value_namespace = name_space;
        ac1_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation = value;
        ac2_encapsulation.value_namespace = name_space;
        ac2_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psn-type")
    {
        psn_type = value;
        psn_type.value_namespace = name_space;
        psn_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation.yfilter = yfilter;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation.yfilter = yfilter;
    }
    if(value_path == "psn-type")
    {
        psn_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-count" || name == "unresolved-count" || name == "up-count" || name == "ac1-encapsulation" || name == "ac2-encapsulation" || name == "psn-type")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::DownCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "down-count"; yang_parent_name = "ac2"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::~DownCount()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::UnresolvedCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "unresolved-count"; yang_parent_name = "ac2"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::~UnresolvedCount()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unresolved-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::UpCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "up-count"; yang_parent_name = "ac2"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::~UpCount()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::EncapsulationTotal()
    :
    ac1_encapsulation{YType::enumeration, "ac1-encapsulation"},
    ac2_encapsulation{YType::enumeration, "ac2-encapsulation"},
    psn_type{YType::enumeration, "psn-type"}
{

    yang_name = "encapsulation-total"; yang_parent_name = "xconnect-brief"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::~EncapsulationTotal()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::has_data() const
{
    for (std::size_t index=0; index<down_count.size(); index++)
    {
        if(down_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unresolved_count.size(); index++)
    {
        if(unresolved_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<up_count.size(); index++)
    {
        if(up_count[index]->has_data())
            return true;
    }
    return ac1_encapsulation.is_set
	|| ac2_encapsulation.is_set
	|| psn_type.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::has_operation() const
{
    for (std::size_t index=0; index<down_count.size(); index++)
    {
        if(down_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unresolved_count.size(); index++)
    {
        if(unresolved_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<up_count.size(); index++)
    {
        if(up_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ac1_encapsulation.yfilter)
	|| ydk::is_set(ac2_encapsulation.yfilter)
	|| ydk::is_set(psn_type.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac1_encapsulation.is_set || is_set(ac1_encapsulation.yfilter)) leaf_name_data.push_back(ac1_encapsulation.get_name_leafdata());
    if (ac2_encapsulation.is_set || is_set(ac2_encapsulation.yfilter)) leaf_name_data.push_back(ac2_encapsulation.get_name_leafdata());
    if (psn_type.is_set || is_set(psn_type.yfilter)) leaf_name_data.push_back(psn_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "down-count")
    {
        for(auto const & c : down_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount>();
        c->parent = this;
        down_count.push_back(c);
        return c;
    }

    if(child_yang_name == "unresolved-count")
    {
        for(auto const & c : unresolved_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount>();
        c->parent = this;
        unresolved_count.push_back(c);
        return c;
    }

    if(child_yang_name == "up-count")
    {
        for(auto const & c : up_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount>();
        c->parent = this;
        up_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : down_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : unresolved_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : up_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation = value;
        ac1_encapsulation.value_namespace = name_space;
        ac1_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation = value;
        ac2_encapsulation.value_namespace = name_space;
        ac2_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psn-type")
    {
        psn_type = value;
        psn_type.value_namespace = name_space;
        psn_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation.yfilter = yfilter;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation.yfilter = yfilter;
    }
    if(value_path == "psn-type")
    {
        psn_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-count" || name == "unresolved-count" || name == "up-count" || name == "ac1-encapsulation" || name == "ac2-encapsulation" || name == "psn-type")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::DownCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "down-count"; yang_parent_name = "encapsulation-total"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::~DownCount()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::UnresolvedCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "unresolved-count"; yang_parent_name = "encapsulation-total"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::~UnresolvedCount()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unresolved-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::UpCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "up-count"; yang_parent_name = "encapsulation-total"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::~UpCount()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroups()
{

    yang_name = "xconnect-groups"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectGroups::~XconnectGroups()
{
}

bool L2Vpnv2::Nodes::Node::XconnectGroups::has_data() const
{
    for (std::size_t index=0; index<xconnect_group.size(); index++)
    {
        if(xconnect_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::XconnectGroups::has_operation() const
{
    for (std::size_t index=0; index<xconnect_group.size(); index++)
    {
        if(xconnect_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect-group")
    {
        for(auto const & c : xconnect_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup>();
        c->parent = this;
        xconnect_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xconnect_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::XconnectGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::XconnectGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-group")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::XconnectGroup()
    :
    group_name{YType::str, "group-name"},
    group_name_xr{YType::str, "group-name-xr"},
    number_xconnects{YType::uint32, "number-xconnects"}
{

    yang_name = "xconnect-group"; yang_parent_name = "xconnect-groups"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::~XconnectGroup()
{
}

bool L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::has_data() const
{
    return group_name.is_set
	|| group_name_xr.is_set
	|| number_xconnects.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(group_name_xr.yfilter)
	|| ydk::is_set(number_xconnects.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-group" <<"[group-name='" <<group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.yfilter)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (number_xconnects.is_set || is_set(number_xconnects.yfilter)) leaf_name_data.push_back(number_xconnects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
        group_name_xr.value_namespace = name_space;
        group_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xconnects")
    {
        number_xconnects = value;
        number_xconnects.value_namespace = name_space;
        number_xconnects.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr.yfilter = yfilter;
    }
    if(value_path == "number-xconnects")
    {
        number_xconnects.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectGroups::XconnectGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name" || name == "group-name-xr" || name == "number-xconnects")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ces()
{

    yang_name = "xconnect-mp2mp-ce2ces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::~XconnectMp2MpCe2Ces()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::has_data() const
{
    for (std::size_t index=0; index<xconnect_mp2mp_ce2ce.size(); index++)
    {
        if(xconnect_mp2mp_ce2ce[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::has_operation() const
{
    for (std::size_t index=0; index<xconnect_mp2mp_ce2ce.size(); index++)
    {
        if(xconnect_mp2mp_ce2ce[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-mp2mp-ce2ces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect-mp2mp-ce2ce")
    {
        for(auto const & c : xconnect_mp2mp_ce2ce)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce>();
        c->parent = this;
        xconnect_mp2mp_ce2ce.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xconnect_mp2mp_ce2ce)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-mp2mp-ce2ce")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::XconnectMp2MpCe2Ce()
    :
    ce_added{YType::boolean, "ce-added"},
    group_name{YType::str, "group-name"},
    local_ceid{YType::uint32, "local-ceid"},
    local_customer_edge_id{YType::uint16, "local-customer-edge-id"},
    mp2_mp_name{YType::str, "mp2-mp-name"},
    remote_ceid{YType::uint32, "remote-ceid"},
    remote_customer_edge_id{YType::uint16, "remote-customer-edge-id"}
{

    yang_name = "xconnect-mp2mp-ce2ce"; yang_parent_name = "xconnect-mp2mp-ce2ces"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::~XconnectMp2MpCe2Ce()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::has_data() const
{
    return ce_added.is_set
	|| group_name.is_set
	|| local_ceid.is_set
	|| local_customer_edge_id.is_set
	|| mp2_mp_name.is_set
	|| remote_ceid.is_set
	|| remote_customer_edge_id.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ce_added.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(local_ceid.yfilter)
	|| ydk::is_set(local_customer_edge_id.yfilter)
	|| ydk::is_set(mp2_mp_name.yfilter)
	|| ydk::is_set(remote_ceid.yfilter)
	|| ydk::is_set(remote_customer_edge_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-mp2mp-ce2ce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ce_added.is_set || is_set(ce_added.yfilter)) leaf_name_data.push_back(ce_added.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (local_ceid.is_set || is_set(local_ceid.yfilter)) leaf_name_data.push_back(local_ceid.get_name_leafdata());
    if (local_customer_edge_id.is_set || is_set(local_customer_edge_id.yfilter)) leaf_name_data.push_back(local_customer_edge_id.get_name_leafdata());
    if (mp2_mp_name.is_set || is_set(mp2_mp_name.yfilter)) leaf_name_data.push_back(mp2_mp_name.get_name_leafdata());
    if (remote_ceid.is_set || is_set(remote_ceid.yfilter)) leaf_name_data.push_back(remote_ceid.get_name_leafdata());
    if (remote_customer_edge_id.is_set || is_set(remote_customer_edge_id.yfilter)) leaf_name_data.push_back(remote_customer_edge_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ce-added")
    {
        ce_added = value;
        ce_added.value_namespace = name_space;
        ce_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ceid")
    {
        local_ceid = value;
        local_ceid.value_namespace = name_space;
        local_ceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-customer-edge-id")
    {
        local_customer_edge_id = value;
        local_customer_edge_id.value_namespace = name_space;
        local_customer_edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2-mp-name")
    {
        mp2_mp_name = value;
        mp2_mp_name.value_namespace = name_space;
        mp2_mp_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid = value;
        remote_ceid.value_namespace = name_space;
        remote_ceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-customer-edge-id")
    {
        remote_customer_edge_id = value;
        remote_customer_edge_id.value_namespace = name_space;
        remote_customer_edge_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ce-added")
    {
        ce_added.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "local-ceid")
    {
        local_ceid.yfilter = yfilter;
    }
    if(value_path == "local-customer-edge-id")
    {
        local_customer_edge_id.yfilter = yfilter;
    }
    if(value_path == "mp2-mp-name")
    {
        mp2_mp_name.yfilter = yfilter;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid.yfilter = yfilter;
    }
    if(value_path == "remote-customer-edge-id")
    {
        remote_customer_edge_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ce-added" || name == "group-name" || name == "local-ceid" || name == "local-customer-edge-id" || name == "mp2-mp-name" || name == "remote-ceid" || name == "remote-customer-edge-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mps()
{

    yang_name = "xconnect-mp2mps"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::~XconnectMp2Mps()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::has_data() const
{
    for (std::size_t index=0; index<xconnect_mp2mp.size(); index++)
    {
        if(xconnect_mp2mp[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::has_operation() const
{
    for (std::size_t index=0; index<xconnect_mp2mp.size(); index++)
    {
        if(xconnect_mp2mp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-mp2mps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect-mp2mp")
    {
        for(auto const & c : xconnect_mp2mp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp>();
        c->parent = this;
        xconnect_mp2mp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xconnect_mp2mp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-mp2mp")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::XconnectMp2Mp()
    :
    group_name{YType::str, "group-name"},
    group_name_xr{YType::str, "group-name-xr"},
    l2_encapsulation{YType::enumeration, "l2-encapsulation"},
    mp2_mp_name{YType::str, "mp2-mp-name"},
    mp2mp_name{YType::str, "mp2mp-name"},
    mp2mpid{YType::uint32, "mp2mpid"},
    vpn_id{YType::uint32, "vpn-id"},
    vpn_mtu{YType::uint32, "vpn-mtu"},
    xconnect_shutdown{YType::boolean, "xconnect-shutdown"}
    	,
    discovery(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery>())
{
    discovery->parent = this;

    yang_name = "xconnect-mp2mp"; yang_parent_name = "xconnect-mp2mps"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::~XconnectMp2Mp()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::has_data() const
{
    return group_name.is_set
	|| group_name_xr.is_set
	|| l2_encapsulation.is_set
	|| mp2_mp_name.is_set
	|| mp2mp_name.is_set
	|| mp2mpid.is_set
	|| vpn_id.is_set
	|| vpn_mtu.is_set
	|| xconnect_shutdown.is_set
	|| (discovery !=  nullptr && discovery->has_data());
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(group_name_xr.yfilter)
	|| ydk::is_set(l2_encapsulation.yfilter)
	|| ydk::is_set(mp2_mp_name.yfilter)
	|| ydk::is_set(mp2mp_name.yfilter)
	|| ydk::is_set(mp2mpid.yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| ydk::is_set(vpn_mtu.yfilter)
	|| ydk::is_set(xconnect_shutdown.yfilter)
	|| (discovery !=  nullptr && discovery->has_operation());
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-mp2mp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.yfilter)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (l2_encapsulation.is_set || is_set(l2_encapsulation.yfilter)) leaf_name_data.push_back(l2_encapsulation.get_name_leafdata());
    if (mp2_mp_name.is_set || is_set(mp2_mp_name.yfilter)) leaf_name_data.push_back(mp2_mp_name.get_name_leafdata());
    if (mp2mp_name.is_set || is_set(mp2mp_name.yfilter)) leaf_name_data.push_back(mp2mp_name.get_name_leafdata());
    if (mp2mpid.is_set || is_set(mp2mpid.yfilter)) leaf_name_data.push_back(mp2mpid.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (vpn_mtu.is_set || is_set(vpn_mtu.yfilter)) leaf_name_data.push_back(vpn_mtu.get_name_leafdata());
    if (xconnect_shutdown.is_set || is_set(xconnect_shutdown.yfilter)) leaf_name_data.push_back(xconnect_shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery>();
        }
        return discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
        group_name_xr.value_namespace = name_space;
        group_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-encapsulation")
    {
        l2_encapsulation = value;
        l2_encapsulation.value_namespace = name_space;
        l2_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2-mp-name")
    {
        mp2_mp_name = value;
        mp2_mp_name.value_namespace = name_space;
        mp2_mp_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mp-name")
    {
        mp2mp_name = value;
        mp2mp_name.value_namespace = name_space;
        mp2mp_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mpid")
    {
        mp2mpid = value;
        mp2mpid.value_namespace = name_space;
        mp2mpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-mtu")
    {
        vpn_mtu = value;
        vpn_mtu.value_namespace = name_space;
        vpn_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-shutdown")
    {
        xconnect_shutdown = value;
        xconnect_shutdown.value_namespace = name_space;
        xconnect_shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr.yfilter = yfilter;
    }
    if(value_path == "l2-encapsulation")
    {
        l2_encapsulation.yfilter = yfilter;
    }
    if(value_path == "mp2-mp-name")
    {
        mp2_mp_name.yfilter = yfilter;
    }
    if(value_path == "mp2mp-name")
    {
        mp2mp_name.yfilter = yfilter;
    }
    if(value_path == "mp2mpid")
    {
        mp2mpid.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
    if(value_path == "vpn-mtu")
    {
        vpn_mtu.yfilter = yfilter;
    }
    if(value_path == "xconnect-shutdown")
    {
        xconnect_shutdown.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery" || name == "group-name" || name == "group-name-xr" || name == "l2-encapsulation" || name == "mp2-mp-name" || name == "mp2mp-name" || name == "mp2mpid" || name == "vpn-id" || name == "vpn-mtu" || name == "xconnect-shutdown")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::Discovery()
    :
    ad_method{YType::uint32, "ad-method"},
    ad_service_connected{YType::boolean, "ad-service-connected"},
    ad_signalling_method{YType::uint32, "ad-signalling-method"},
    ce_range{YType::uint16, "ce-range"},
    export_route_policy{YType::str, "export-route-policy"},
    number_a_cs{YType::uint32, "number-a-cs"},
    number_a_cs_up{YType::uint32, "number-a-cs-up"},
    number_ce2c_es{YType::uint32, "number-ce2c-es"},
    number_ce2ce_advertised{YType::uint32, "number-ce2ce-advertised"},
    number_p_ws_up{YType::uint32, "number-p-ws-up"},
    number_pseudowires{YType::uint32, "number-pseudowires"},
    vpn_added{YType::boolean, "vpn-added"}
    	,
    rd_value(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue>())
{
    rd_value->parent = this;

    yang_name = "discovery"; yang_parent_name = "xconnect-mp2mp"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::~Discovery()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::has_data() const
{
    for (std::size_t index=0; index<export_rt.size(); index++)
    {
        if(export_rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import_rt.size(); index++)
    {
        if(import_rt[index]->has_data())
            return true;
    }
    return ad_method.is_set
	|| ad_service_connected.is_set
	|| ad_signalling_method.is_set
	|| ce_range.is_set
	|| export_route_policy.is_set
	|| number_a_cs.is_set
	|| number_a_cs_up.is_set
	|| number_ce2c_es.is_set
	|| number_ce2ce_advertised.is_set
	|| number_p_ws_up.is_set
	|| number_pseudowires.is_set
	|| vpn_added.is_set
	|| (rd_value !=  nullptr && rd_value->has_data());
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::has_operation() const
{
    for (std::size_t index=0; index<export_rt.size(); index++)
    {
        if(export_rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import_rt.size(); index++)
    {
        if(import_rt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ad_method.yfilter)
	|| ydk::is_set(ad_service_connected.yfilter)
	|| ydk::is_set(ad_signalling_method.yfilter)
	|| ydk::is_set(ce_range.yfilter)
	|| ydk::is_set(export_route_policy.yfilter)
	|| ydk::is_set(number_a_cs.yfilter)
	|| ydk::is_set(number_a_cs_up.yfilter)
	|| ydk::is_set(number_ce2c_es.yfilter)
	|| ydk::is_set(number_ce2ce_advertised.yfilter)
	|| ydk::is_set(number_p_ws_up.yfilter)
	|| ydk::is_set(number_pseudowires.yfilter)
	|| ydk::is_set(vpn_added.yfilter)
	|| (rd_value !=  nullptr && rd_value->has_operation());
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_method.is_set || is_set(ad_method.yfilter)) leaf_name_data.push_back(ad_method.get_name_leafdata());
    if (ad_service_connected.is_set || is_set(ad_service_connected.yfilter)) leaf_name_data.push_back(ad_service_connected.get_name_leafdata());
    if (ad_signalling_method.is_set || is_set(ad_signalling_method.yfilter)) leaf_name_data.push_back(ad_signalling_method.get_name_leafdata());
    if (ce_range.is_set || is_set(ce_range.yfilter)) leaf_name_data.push_back(ce_range.get_name_leafdata());
    if (export_route_policy.is_set || is_set(export_route_policy.yfilter)) leaf_name_data.push_back(export_route_policy.get_name_leafdata());
    if (number_a_cs.is_set || is_set(number_a_cs.yfilter)) leaf_name_data.push_back(number_a_cs.get_name_leafdata());
    if (number_a_cs_up.is_set || is_set(number_a_cs_up.yfilter)) leaf_name_data.push_back(number_a_cs_up.get_name_leafdata());
    if (number_ce2c_es.is_set || is_set(number_ce2c_es.yfilter)) leaf_name_data.push_back(number_ce2c_es.get_name_leafdata());
    if (number_ce2ce_advertised.is_set || is_set(number_ce2ce_advertised.yfilter)) leaf_name_data.push_back(number_ce2ce_advertised.get_name_leafdata());
    if (number_p_ws_up.is_set || is_set(number_p_ws_up.yfilter)) leaf_name_data.push_back(number_p_ws_up.get_name_leafdata());
    if (number_pseudowires.is_set || is_set(number_pseudowires.yfilter)) leaf_name_data.push_back(number_pseudowires.get_name_leafdata());
    if (vpn_added.is_set || is_set(vpn_added.yfilter)) leaf_name_data.push_back(vpn_added.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "export-rt")
    {
        for(auto const & c : export_rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt>();
        c->parent = this;
        export_rt.push_back(c);
        return c;
    }

    if(child_yang_name == "import-rt")
    {
        for(auto const & c : import_rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt>();
        c->parent = this;
        import_rt.push_back(c);
        return c;
    }

    if(child_yang_name == "rd-value")
    {
        if(rd_value == nullptr)
        {
            rd_value = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue>();
        }
        return rd_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : export_rt)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import_rt)
    {
        children[c->get_segment_path()] = c;
    }

    if(rd_value != nullptr)
    {
        children["rd-value"] = rd_value;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ad-method")
    {
        ad_method = value;
        ad_method.value_namespace = name_space;
        ad_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ad-service-connected")
    {
        ad_service_connected = value;
        ad_service_connected.value_namespace = name_space;
        ad_service_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method = value;
        ad_signalling_method.value_namespace = name_space;
        ad_signalling_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ce-range")
    {
        ce_range = value;
        ce_range.value_namespace = name_space;
        ce_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy = value;
        export_route_policy.value_namespace = name_space;
        export_route_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs")
    {
        number_a_cs = value;
        number_a_cs.value_namespace = name_space;
        number_a_cs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs-up")
    {
        number_a_cs_up = value;
        number_a_cs_up.value_namespace = name_space;
        number_a_cs_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-ce2c-es")
    {
        number_ce2c_es = value;
        number_ce2c_es.value_namespace = name_space;
        number_ce2c_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-ce2ce-advertised")
    {
        number_ce2ce_advertised = value;
        number_ce2ce_advertised.value_namespace = name_space;
        number_ce2ce_advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p-ws-up")
    {
        number_p_ws_up = value;
        number_p_ws_up.value_namespace = name_space;
        number_p_ws_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires = value;
        number_pseudowires.value_namespace = name_space;
        number_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-added")
    {
        vpn_added = value;
        vpn_added.value_namespace = name_space;
        vpn_added.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ad-method")
    {
        ad_method.yfilter = yfilter;
    }
    if(value_path == "ad-service-connected")
    {
        ad_service_connected.yfilter = yfilter;
    }
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method.yfilter = yfilter;
    }
    if(value_path == "ce-range")
    {
        ce_range.yfilter = yfilter;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy.yfilter = yfilter;
    }
    if(value_path == "number-a-cs")
    {
        number_a_cs.yfilter = yfilter;
    }
    if(value_path == "number-a-cs-up")
    {
        number_a_cs_up.yfilter = yfilter;
    }
    if(value_path == "number-ce2c-es")
    {
        number_ce2c_es.yfilter = yfilter;
    }
    if(value_path == "number-ce2ce-advertised")
    {
        number_ce2ce_advertised.yfilter = yfilter;
    }
    if(value_path == "number-p-ws-up")
    {
        number_p_ws_up.yfilter = yfilter;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires.yfilter = yfilter;
    }
    if(value_path == "vpn-added")
    {
        vpn_added.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export-rt" || name == "import-rt" || name == "rd-value" || name == "ad-method" || name == "ad-service-connected" || name == "ad-signalling-method" || name == "ce-range" || name == "export-route-policy" || name == "number-a-cs" || name == "number-a-cs-up" || name == "number-ce2c-es" || name == "number-ce2ce-advertised" || name == "number-p-ws-up" || name == "number-pseudowires" || name == "vpn-added")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::ExportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport>())
	,four_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr>())
{
    es_import->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "export-rt"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::~ExportRt()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport>();
        }
        return es_import;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "es-import" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rt")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::~EsImport()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::ImportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport>())
	,four_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr>())
{
    es_import->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "import-rt"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::~ImportRt()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport>();
        }
        return es_import;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "es-import" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rt")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::~EsImport()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::RdValue()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_>())
	,four_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr>())
{
    auto_->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-value"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::~RdValue()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{

    yang_name = "auto"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::~Auto_()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_index.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-index" || name == "router-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectSummary::XconnectSummary()
    :
    admin_down_backup_interface_xconnects{YType::uint32, "admin-down-backup-interface-xconnects"},
    admin_down_backup_xconnects{YType::uint32, "admin-down-backup-xconnects"},
    down_backup_interface_xconnects{YType::uint32, "down-backup-interface-xconnects"},
    down_backup_xconnects{YType::uint32, "down-backup-xconnects"},
    number_ce2_ceconnections{YType::uint32, "number-ce2-ceconnections"},
    number_ce2ce_advertized{YType::uint32, "number-ce2ce-advertized"},
    number_ce2ce_not_advertized{YType::uint32, "number-ce2ce-not-advertized"},
    number_groups{YType::uint32, "number-groups"},
    number_mp2mp_xconnects{YType::uint32, "number-mp2mp-xconnects"},
    number_mp2mp_xconnects_advertised{YType::uint32, "number-mp2mp-xconnects-advertised"},
    number_mp2mp_xconnects_down{YType::uint32, "number-mp2mp-xconnects-down"},
    number_mp2mp_xconnects_up{YType::uint32, "number-mp2mp-xconnects-up"},
    number_mp2mp_xconnectss_not_advertised{YType::uint32, "number-mp2mp-xconnectss-not-advertised"},
    number_xconnects{YType::uint32, "number-xconnects"},
    number_xconnects_administratively_down{YType::uint32, "number-xconnects-administratively-down"},
    number_xconnects_currently_using_backup{YType::uint32, "number-xconnects-currently-using-backup"},
    number_xconnects_currently_using_backup_interface{YType::uint32, "number-xconnects-currently-using-backup-interface"},
    number_xconnects_down{YType::uint32, "number-xconnects-down"},
    number_xconnects_locally_switched{YType::uint32, "number-xconnects-locally-switched"},
    number_xconnects_type_attachment_circuit_to_pseudo_wire{YType::uint32, "number-xconnects-type-attachment-circuit-to-pseudo-wire"},
    number_xconnects_type_monitor_session_to_pseudo_wire{YType::uint32, "number-xconnects-type-monitor-session-to-pseudo-wire"},
    number_xconnects_type_pseudo_wire_to_pseudo_wire{YType::uint32, "number-xconnects-type-pseudo-wire-to-pseudo-wire"},
    number_xconnects_unresolved{YType::uint32, "number-xconnects-unresolved"},
    number_xconnects_up{YType::uint32, "number-xconnects-up"},
    number_xconnects_with_backup_interface{YType::uint32, "number-xconnects-with-backup-interface"},
    number_xconnects_with_backup_pw{YType::uint32, "number-xconnects-with-backup-pw"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    partially_programmed_xconnects{YType::uint32, "partially-programmed-xconnects"},
    standby_backup_interface_xconnects{YType::uint32, "standby-backup-interface-xconnects"},
    standby_backup_xconnects{YType::uint32, "standby-backup-xconnects"},
    standby_ready_backup_xconnects{YType::uint32, "standby-ready-backup-xconnects"},
    unresolved_backup_interface_xconnects{YType::uint32, "unresolved-backup-interface-xconnects"},
    unresolved_backup_xconnects{YType::uint32, "unresolved-backup-xconnects"}
{

    yang_name = "xconnect-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectSummary::~XconnectSummary()
{
}

bool L2Vpnv2::Nodes::Node::XconnectSummary::has_data() const
{
    return admin_down_backup_interface_xconnects.is_set
	|| admin_down_backup_xconnects.is_set
	|| down_backup_interface_xconnects.is_set
	|| down_backup_xconnects.is_set
	|| number_ce2_ceconnections.is_set
	|| number_ce2ce_advertized.is_set
	|| number_ce2ce_not_advertized.is_set
	|| number_groups.is_set
	|| number_mp2mp_xconnects.is_set
	|| number_mp2mp_xconnects_advertised.is_set
	|| number_mp2mp_xconnects_down.is_set
	|| number_mp2mp_xconnects_up.is_set
	|| number_mp2mp_xconnectss_not_advertised.is_set
	|| number_xconnects.is_set
	|| number_xconnects_administratively_down.is_set
	|| number_xconnects_currently_using_backup.is_set
	|| number_xconnects_currently_using_backup_interface.is_set
	|| number_xconnects_down.is_set
	|| number_xconnects_locally_switched.is_set
	|| number_xconnects_type_attachment_circuit_to_pseudo_wire.is_set
	|| number_xconnects_type_monitor_session_to_pseudo_wire.is_set
	|| number_xconnects_type_pseudo_wire_to_pseudo_wire.is_set
	|| number_xconnects_unresolved.is_set
	|| number_xconnects_up.is_set
	|| number_xconnects_with_backup_interface.is_set
	|| number_xconnects_with_backup_pw.is_set
	|| out_of_memory_state.is_set
	|| partially_programmed_xconnects.is_set
	|| standby_backup_interface_xconnects.is_set
	|| standby_backup_xconnects.is_set
	|| standby_ready_backup_xconnects.is_set
	|| unresolved_backup_interface_xconnects.is_set
	|| unresolved_backup_xconnects.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_down_backup_interface_xconnects.yfilter)
	|| ydk::is_set(admin_down_backup_xconnects.yfilter)
	|| ydk::is_set(down_backup_interface_xconnects.yfilter)
	|| ydk::is_set(down_backup_xconnects.yfilter)
	|| ydk::is_set(number_ce2_ceconnections.yfilter)
	|| ydk::is_set(number_ce2ce_advertized.yfilter)
	|| ydk::is_set(number_ce2ce_not_advertized.yfilter)
	|| ydk::is_set(number_groups.yfilter)
	|| ydk::is_set(number_mp2mp_xconnects.yfilter)
	|| ydk::is_set(number_mp2mp_xconnects_advertised.yfilter)
	|| ydk::is_set(number_mp2mp_xconnects_down.yfilter)
	|| ydk::is_set(number_mp2mp_xconnects_up.yfilter)
	|| ydk::is_set(number_mp2mp_xconnectss_not_advertised.yfilter)
	|| ydk::is_set(number_xconnects.yfilter)
	|| ydk::is_set(number_xconnects_administratively_down.yfilter)
	|| ydk::is_set(number_xconnects_currently_using_backup.yfilter)
	|| ydk::is_set(number_xconnects_currently_using_backup_interface.yfilter)
	|| ydk::is_set(number_xconnects_down.yfilter)
	|| ydk::is_set(number_xconnects_locally_switched.yfilter)
	|| ydk::is_set(number_xconnects_type_attachment_circuit_to_pseudo_wire.yfilter)
	|| ydk::is_set(number_xconnects_type_monitor_session_to_pseudo_wire.yfilter)
	|| ydk::is_set(number_xconnects_type_pseudo_wire_to_pseudo_wire.yfilter)
	|| ydk::is_set(number_xconnects_unresolved.yfilter)
	|| ydk::is_set(number_xconnects_up.yfilter)
	|| ydk::is_set(number_xconnects_with_backup_interface.yfilter)
	|| ydk::is_set(number_xconnects_with_backup_pw.yfilter)
	|| ydk::is_set(out_of_memory_state.yfilter)
	|| ydk::is_set(partially_programmed_xconnects.yfilter)
	|| ydk::is_set(standby_backup_interface_xconnects.yfilter)
	|| ydk::is_set(standby_backup_xconnects.yfilter)
	|| ydk::is_set(standby_ready_backup_xconnects.yfilter)
	|| ydk::is_set(unresolved_backup_interface_xconnects.yfilter)
	|| ydk::is_set(unresolved_backup_xconnects.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_down_backup_interface_xconnects.is_set || is_set(admin_down_backup_interface_xconnects.yfilter)) leaf_name_data.push_back(admin_down_backup_interface_xconnects.get_name_leafdata());
    if (admin_down_backup_xconnects.is_set || is_set(admin_down_backup_xconnects.yfilter)) leaf_name_data.push_back(admin_down_backup_xconnects.get_name_leafdata());
    if (down_backup_interface_xconnects.is_set || is_set(down_backup_interface_xconnects.yfilter)) leaf_name_data.push_back(down_backup_interface_xconnects.get_name_leafdata());
    if (down_backup_xconnects.is_set || is_set(down_backup_xconnects.yfilter)) leaf_name_data.push_back(down_backup_xconnects.get_name_leafdata());
    if (number_ce2_ceconnections.is_set || is_set(number_ce2_ceconnections.yfilter)) leaf_name_data.push_back(number_ce2_ceconnections.get_name_leafdata());
    if (number_ce2ce_advertized.is_set || is_set(number_ce2ce_advertized.yfilter)) leaf_name_data.push_back(number_ce2ce_advertized.get_name_leafdata());
    if (number_ce2ce_not_advertized.is_set || is_set(number_ce2ce_not_advertized.yfilter)) leaf_name_data.push_back(number_ce2ce_not_advertized.get_name_leafdata());
    if (number_groups.is_set || is_set(number_groups.yfilter)) leaf_name_data.push_back(number_groups.get_name_leafdata());
    if (number_mp2mp_xconnects.is_set || is_set(number_mp2mp_xconnects.yfilter)) leaf_name_data.push_back(number_mp2mp_xconnects.get_name_leafdata());
    if (number_mp2mp_xconnects_advertised.is_set || is_set(number_mp2mp_xconnects_advertised.yfilter)) leaf_name_data.push_back(number_mp2mp_xconnects_advertised.get_name_leafdata());
    if (number_mp2mp_xconnects_down.is_set || is_set(number_mp2mp_xconnects_down.yfilter)) leaf_name_data.push_back(number_mp2mp_xconnects_down.get_name_leafdata());
    if (number_mp2mp_xconnects_up.is_set || is_set(number_mp2mp_xconnects_up.yfilter)) leaf_name_data.push_back(number_mp2mp_xconnects_up.get_name_leafdata());
    if (number_mp2mp_xconnectss_not_advertised.is_set || is_set(number_mp2mp_xconnectss_not_advertised.yfilter)) leaf_name_data.push_back(number_mp2mp_xconnectss_not_advertised.get_name_leafdata());
    if (number_xconnects.is_set || is_set(number_xconnects.yfilter)) leaf_name_data.push_back(number_xconnects.get_name_leafdata());
    if (number_xconnects_administratively_down.is_set || is_set(number_xconnects_administratively_down.yfilter)) leaf_name_data.push_back(number_xconnects_administratively_down.get_name_leafdata());
    if (number_xconnects_currently_using_backup.is_set || is_set(number_xconnects_currently_using_backup.yfilter)) leaf_name_data.push_back(number_xconnects_currently_using_backup.get_name_leafdata());
    if (number_xconnects_currently_using_backup_interface.is_set || is_set(number_xconnects_currently_using_backup_interface.yfilter)) leaf_name_data.push_back(number_xconnects_currently_using_backup_interface.get_name_leafdata());
    if (number_xconnects_down.is_set || is_set(number_xconnects_down.yfilter)) leaf_name_data.push_back(number_xconnects_down.get_name_leafdata());
    if (number_xconnects_locally_switched.is_set || is_set(number_xconnects_locally_switched.yfilter)) leaf_name_data.push_back(number_xconnects_locally_switched.get_name_leafdata());
    if (number_xconnects_type_attachment_circuit_to_pseudo_wire.is_set || is_set(number_xconnects_type_attachment_circuit_to_pseudo_wire.yfilter)) leaf_name_data.push_back(number_xconnects_type_attachment_circuit_to_pseudo_wire.get_name_leafdata());
    if (number_xconnects_type_monitor_session_to_pseudo_wire.is_set || is_set(number_xconnects_type_monitor_session_to_pseudo_wire.yfilter)) leaf_name_data.push_back(number_xconnects_type_monitor_session_to_pseudo_wire.get_name_leafdata());
    if (number_xconnects_type_pseudo_wire_to_pseudo_wire.is_set || is_set(number_xconnects_type_pseudo_wire_to_pseudo_wire.yfilter)) leaf_name_data.push_back(number_xconnects_type_pseudo_wire_to_pseudo_wire.get_name_leafdata());
    if (number_xconnects_unresolved.is_set || is_set(number_xconnects_unresolved.yfilter)) leaf_name_data.push_back(number_xconnects_unresolved.get_name_leafdata());
    if (number_xconnects_up.is_set || is_set(number_xconnects_up.yfilter)) leaf_name_data.push_back(number_xconnects_up.get_name_leafdata());
    if (number_xconnects_with_backup_interface.is_set || is_set(number_xconnects_with_backup_interface.yfilter)) leaf_name_data.push_back(number_xconnects_with_backup_interface.get_name_leafdata());
    if (number_xconnects_with_backup_pw.is_set || is_set(number_xconnects_with_backup_pw.yfilter)) leaf_name_data.push_back(number_xconnects_with_backup_pw.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.yfilter)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (partially_programmed_xconnects.is_set || is_set(partially_programmed_xconnects.yfilter)) leaf_name_data.push_back(partially_programmed_xconnects.get_name_leafdata());
    if (standby_backup_interface_xconnects.is_set || is_set(standby_backup_interface_xconnects.yfilter)) leaf_name_data.push_back(standby_backup_interface_xconnects.get_name_leafdata());
    if (standby_backup_xconnects.is_set || is_set(standby_backup_xconnects.yfilter)) leaf_name_data.push_back(standby_backup_xconnects.get_name_leafdata());
    if (standby_ready_backup_xconnects.is_set || is_set(standby_ready_backup_xconnects.yfilter)) leaf_name_data.push_back(standby_ready_backup_xconnects.get_name_leafdata());
    if (unresolved_backup_interface_xconnects.is_set || is_set(unresolved_backup_interface_xconnects.yfilter)) leaf_name_data.push_back(unresolved_backup_interface_xconnects.get_name_leafdata());
    if (unresolved_backup_xconnects.is_set || is_set(unresolved_backup_xconnects.yfilter)) leaf_name_data.push_back(unresolved_backup_xconnects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-down-backup-interface-xconnects")
    {
        admin_down_backup_interface_xconnects = value;
        admin_down_backup_interface_xconnects.value_namespace = name_space;
        admin_down_backup_interface_xconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-down-backup-xconnects")
    {
        admin_down_backup_xconnects = value;
        admin_down_backup_xconnects.value_namespace = name_space;
        admin_down_backup_xconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-backup-interface-xconnects")
    {
        down_backup_interface_xconnects = value;
        down_backup_interface_xconnects.value_namespace = name_space;
        down_backup_interface_xconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-backup-xconnects")
    {
        down_backup_xconnects = value;
        down_backup_xconnects.value_namespace = name_space;
        down_backup_xconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-ce2-ceconnections")
    {
        number_ce2_ceconnections = value;
        number_ce2_ceconnections.value_namespace = name_space;
        number_ce2_ceconnections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-ce2ce-advertized")
    {
        number_ce2ce_advertized = value;
        number_ce2ce_advertized.value_namespace = name_space;
        number_ce2ce_advertized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-ce2ce-not-advertized")
    {
        number_ce2ce_not_advertized = value;
        number_ce2ce_not_advertized.value_namespace = name_space;
        number_ce2ce_not_advertized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-groups")
    {
        number_groups = value;
        number_groups.value_namespace = name_space;
        number_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mp2mp-xconnects")
    {
        number_mp2mp_xconnects = value;
        number_mp2mp_xconnects.value_namespace = name_space;
        number_mp2mp_xconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mp2mp-xconnects-advertised")
    {
        number_mp2mp_xconnects_advertised = value;
        number_mp2mp_xconnects_advertised.value_namespace = name_space;
        number_mp2mp_xconnects_advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mp2mp-xconnects-down")
    {
        number_mp2mp_xconnects_down = value;
        number_mp2mp_xconnects_down.value_namespace = name_space;
        number_mp2mp_xconnects_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mp2mp-xconnects-up")
    {
        number_mp2mp_xconnects_up = value;
        number_mp2mp_xconnects_up.value_namespace = name_space;
        number_mp2mp_xconnects_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mp2mp-xconnectss-not-advertised")
    {
        number_mp2mp_xconnectss_not_advertised = value;
        number_mp2mp_xconnectss_not_advertised.value_namespace = name_space;
        number_mp2mp_xconnectss_not_advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xconnects")
    {
        number_xconnects = value;
        number_xconnects.value_namespace = name_space;
        number_xconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xconnects-administratively-down")
    {
        number_xconnects_administratively_down = value;
        number_xconnects_administratively_down.value_namespace = name_space;
        number_xconnects_administratively_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xconnects-currently-using-backup")
    {
        number_xconnects_currently_using_backup = value;
        number_xconnects_currently_using_backup.value_namespace = name_space;
        number_xconnects_currently_using_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xconnects-currently-using-backup-interface")
    {
        number_xconnects_currently_using_backup_interface = value;
        number_xconnects_currently_using_backup_interface.value_namespace = name_space;
        number_xconnects_currently_using_backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xconnects-down")
    {
        number_xconnects_down = value;
        number_xconnects_down.value_namespace = name_space;
        number_xconnects_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xconnects-locally-switched")
    {
        number_xconnects_locally_switched = value;
        number_xconnects_locally_switched.value_namespace = name_space;
        number_xconnects_locally_switched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xconnects-type-attachment-circuit-to-pseudo-wire")
    {
        number_xconnects_type_attachment_circuit_to_pseudo_wire = value;
        number_xconnects_type_attachment_circuit_to_pseudo_wire.value_namespace = name_space;
        number_xconnects_type_attachment_circuit_to_pseudo_wire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xconnects-type-monitor-session-to-pseudo-wire")
    {
        number_xconnects_type_monitor_session_to_pseudo_wire = value;
        number_xconnects_type_monitor_session_to_pseudo_wire.value_namespace = name_space;
        number_xconnects_type_monitor_session_to_pseudo_wire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xconnects-type-pseudo-wire-to-pseudo-wire")
    {
        number_xconnects_type_pseudo_wire_to_pseudo_wire = value;
        number_xconnects_type_pseudo_wire_to_pseudo_wire.value_namespace = name_space;
        number_xconnects_type_pseudo_wire_to_pseudo_wire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xconnects-unresolved")
    {
        number_xconnects_unresolved = value;
        number_xconnects_unresolved.value_namespace = name_space;
        number_xconnects_unresolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xconnects-up")
    {
        number_xconnects_up = value;
        number_xconnects_up.value_namespace = name_space;
        number_xconnects_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xconnects-with-backup-interface")
    {
        number_xconnects_with_backup_interface = value;
        number_xconnects_with_backup_interface.value_namespace = name_space;
        number_xconnects_with_backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xconnects-with-backup-pw")
    {
        number_xconnects_with_backup_pw = value;
        number_xconnects_with_backup_pw.value_namespace = name_space;
        number_xconnects_with_backup_pw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
        out_of_memory_state.value_namespace = name_space;
        out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-programmed-xconnects")
    {
        partially_programmed_xconnects = value;
        partially_programmed_xconnects.value_namespace = name_space;
        partially_programmed_xconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-backup-interface-xconnects")
    {
        standby_backup_interface_xconnects = value;
        standby_backup_interface_xconnects.value_namespace = name_space;
        standby_backup_interface_xconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-backup-xconnects")
    {
        standby_backup_xconnects = value;
        standby_backup_xconnects.value_namespace = name_space;
        standby_backup_xconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-ready-backup-xconnects")
    {
        standby_ready_backup_xconnects = value;
        standby_ready_backup_xconnects.value_namespace = name_space;
        standby_ready_backup_xconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unresolved-backup-interface-xconnects")
    {
        unresolved_backup_interface_xconnects = value;
        unresolved_backup_interface_xconnects.value_namespace = name_space;
        unresolved_backup_interface_xconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unresolved-backup-xconnects")
    {
        unresolved_backup_xconnects = value;
        unresolved_backup_xconnects.value_namespace = name_space;
        unresolved_backup_xconnects.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-down-backup-interface-xconnects")
    {
        admin_down_backup_interface_xconnects.yfilter = yfilter;
    }
    if(value_path == "admin-down-backup-xconnects")
    {
        admin_down_backup_xconnects.yfilter = yfilter;
    }
    if(value_path == "down-backup-interface-xconnects")
    {
        down_backup_interface_xconnects.yfilter = yfilter;
    }
    if(value_path == "down-backup-xconnects")
    {
        down_backup_xconnects.yfilter = yfilter;
    }
    if(value_path == "number-ce2-ceconnections")
    {
        number_ce2_ceconnections.yfilter = yfilter;
    }
    if(value_path == "number-ce2ce-advertized")
    {
        number_ce2ce_advertized.yfilter = yfilter;
    }
    if(value_path == "number-ce2ce-not-advertized")
    {
        number_ce2ce_not_advertized.yfilter = yfilter;
    }
    if(value_path == "number-groups")
    {
        number_groups.yfilter = yfilter;
    }
    if(value_path == "number-mp2mp-xconnects")
    {
        number_mp2mp_xconnects.yfilter = yfilter;
    }
    if(value_path == "number-mp2mp-xconnects-advertised")
    {
        number_mp2mp_xconnects_advertised.yfilter = yfilter;
    }
    if(value_path == "number-mp2mp-xconnects-down")
    {
        number_mp2mp_xconnects_down.yfilter = yfilter;
    }
    if(value_path == "number-mp2mp-xconnects-up")
    {
        number_mp2mp_xconnects_up.yfilter = yfilter;
    }
    if(value_path == "number-mp2mp-xconnectss-not-advertised")
    {
        number_mp2mp_xconnectss_not_advertised.yfilter = yfilter;
    }
    if(value_path == "number-xconnects")
    {
        number_xconnects.yfilter = yfilter;
    }
    if(value_path == "number-xconnects-administratively-down")
    {
        number_xconnects_administratively_down.yfilter = yfilter;
    }
    if(value_path == "number-xconnects-currently-using-backup")
    {
        number_xconnects_currently_using_backup.yfilter = yfilter;
    }
    if(value_path == "number-xconnects-currently-using-backup-interface")
    {
        number_xconnects_currently_using_backup_interface.yfilter = yfilter;
    }
    if(value_path == "number-xconnects-down")
    {
        number_xconnects_down.yfilter = yfilter;
    }
    if(value_path == "number-xconnects-locally-switched")
    {
        number_xconnects_locally_switched.yfilter = yfilter;
    }
    if(value_path == "number-xconnects-type-attachment-circuit-to-pseudo-wire")
    {
        number_xconnects_type_attachment_circuit_to_pseudo_wire.yfilter = yfilter;
    }
    if(value_path == "number-xconnects-type-monitor-session-to-pseudo-wire")
    {
        number_xconnects_type_monitor_session_to_pseudo_wire.yfilter = yfilter;
    }
    if(value_path == "number-xconnects-type-pseudo-wire-to-pseudo-wire")
    {
        number_xconnects_type_pseudo_wire_to_pseudo_wire.yfilter = yfilter;
    }
    if(value_path == "number-xconnects-unresolved")
    {
        number_xconnects_unresolved.yfilter = yfilter;
    }
    if(value_path == "number-xconnects-up")
    {
        number_xconnects_up.yfilter = yfilter;
    }
    if(value_path == "number-xconnects-with-backup-interface")
    {
        number_xconnects_with_backup_interface.yfilter = yfilter;
    }
    if(value_path == "number-xconnects-with-backup-pw")
    {
        number_xconnects_with_backup_pw.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state.yfilter = yfilter;
    }
    if(value_path == "partially-programmed-xconnects")
    {
        partially_programmed_xconnects.yfilter = yfilter;
    }
    if(value_path == "standby-backup-interface-xconnects")
    {
        standby_backup_interface_xconnects.yfilter = yfilter;
    }
    if(value_path == "standby-backup-xconnects")
    {
        standby_backup_xconnects.yfilter = yfilter;
    }
    if(value_path == "standby-ready-backup-xconnects")
    {
        standby_ready_backup_xconnects.yfilter = yfilter;
    }
    if(value_path == "unresolved-backup-interface-xconnects")
    {
        unresolved_backup_interface_xconnects.yfilter = yfilter;
    }
    if(value_path == "unresolved-backup-xconnects")
    {
        unresolved_backup_xconnects.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-down-backup-interface-xconnects" || name == "admin-down-backup-xconnects" || name == "down-backup-interface-xconnects" || name == "down-backup-xconnects" || name == "number-ce2-ceconnections" || name == "number-ce2ce-advertized" || name == "number-ce2ce-not-advertized" || name == "number-groups" || name == "number-mp2mp-xconnects" || name == "number-mp2mp-xconnects-advertised" || name == "number-mp2mp-xconnects-down" || name == "number-mp2mp-xconnects-up" || name == "number-mp2mp-xconnectss-not-advertised" || name == "number-xconnects" || name == "number-xconnects-administratively-down" || name == "number-xconnects-currently-using-backup" || name == "number-xconnects-currently-using-backup-interface" || name == "number-xconnects-down" || name == "number-xconnects-locally-switched" || name == "number-xconnects-type-attachment-circuit-to-pseudo-wire" || name == "number-xconnects-type-monitor-session-to-pseudo-wire" || name == "number-xconnects-type-pseudo-wire-to-pseudo-wire" || name == "number-xconnects-unresolved" || name == "number-xconnects-up" || name == "number-xconnects-with-backup-interface" || name == "number-xconnects-with-backup-pw" || name == "out-of-memory-state" || name == "partially-programmed-xconnects" || name == "standby-backup-interface-xconnects" || name == "standby-backup-xconnects" || name == "standby-ready-backup-xconnects" || name == "unresolved-backup-interface-xconnects" || name == "unresolved-backup-xconnects")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnects()
{

    yang_name = "xconnects"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::~Xconnects()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::has_data() const
{
    for (std::size_t index=0; index<xconnect.size(); index++)
    {
        if(xconnect[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::Xconnects::has_operation() const
{
    for (std::size_t index=0; index<xconnect.size(); index++)
    {
        if(xconnect[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        for(auto const & c : xconnect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect>();
        c->parent = this;
        xconnect.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xconnect)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::Xconnects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Xconnect()
    :
    description{YType::str, "description"},
    diag_mask{YType::uint32, "diag-mask"},
    group_name{YType::str, "group-name"},
    group_name_xr{YType::str, "group-name-xr"},
    interworking{YType::enumeration, "interworking"},
    is_mp2mp{YType::boolean, "is-mp2mp"},
    number_of_backup_p_ws{YType::uint32, "number-of-backup-p-ws"},
    state{YType::enumeration, "state"},
    xconnect_name{YType::str, "xconnect-name"},
    xconnect_name_xr{YType::str, "xconnect-name-xr"}
    	,
    backup(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup>())
	,ce2ce(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Ce2Ce>())
	,segment1(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Segment1>())
	,segment2(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Segment2>())
{
    backup->parent = this;
    ce2ce->parent = this;
    segment1->parent = this;
    segment2->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnects"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::~Xconnect()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::has_data() const
{
    for (std::size_t index=0; index<backup_segment.size(); index++)
    {
        if(backup_segment[index]->has_data())
            return true;
    }
    return description.is_set
	|| diag_mask.is_set
	|| group_name.is_set
	|| group_name_xr.is_set
	|| interworking.is_set
	|| is_mp2mp.is_set
	|| number_of_backup_p_ws.is_set
	|| state.is_set
	|| xconnect_name.is_set
	|| xconnect_name_xr.is_set
	|| (backup !=  nullptr && backup->has_data())
	|| (ce2ce !=  nullptr && ce2ce->has_data())
	|| (segment1 !=  nullptr && segment1->has_data())
	|| (segment2 !=  nullptr && segment2->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::has_operation() const
{
    for (std::size_t index=0; index<backup_segment.size(); index++)
    {
        if(backup_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(diag_mask.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(group_name_xr.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(is_mp2mp.yfilter)
	|| ydk::is_set(number_of_backup_p_ws.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(xconnect_name.yfilter)
	|| ydk::is_set(xconnect_name_xr.yfilter)
	|| (backup !=  nullptr && backup->has_operation())
	|| (ce2ce !=  nullptr && ce2ce->has_operation())
	|| (segment1 !=  nullptr && segment1->has_operation())
	|| (segment2 !=  nullptr && segment2->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (diag_mask.is_set || is_set(diag_mask.yfilter)) leaf_name_data.push_back(diag_mask.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.yfilter)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (is_mp2mp.is_set || is_set(is_mp2mp.yfilter)) leaf_name_data.push_back(is_mp2mp.get_name_leafdata());
    if (number_of_backup_p_ws.is_set || is_set(number_of_backup_p_ws.yfilter)) leaf_name_data.push_back(number_of_backup_p_ws.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (xconnect_name.is_set || is_set(xconnect_name.yfilter)) leaf_name_data.push_back(xconnect_name.get_name_leafdata());
    if (xconnect_name_xr.is_set || is_set(xconnect_name_xr.yfilter)) leaf_name_data.push_back(xconnect_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "backup-segment")
    {
        for(auto const & c : backup_segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment>();
        c->parent = this;
        backup_segment.push_back(c);
        return c;
    }

    if(child_yang_name == "ce2ce")
    {
        if(ce2ce == nullptr)
        {
            ce2ce = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Ce2Ce>();
        }
        return ce2ce;
    }

    if(child_yang_name == "segment1")
    {
        if(segment1 == nullptr)
        {
            segment1 = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Segment1>();
        }
        return segment1;
    }

    if(child_yang_name == "segment2")
    {
        if(segment2 == nullptr)
        {
            segment2 = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Segment2>();
        }
        return segment2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    for (auto const & c : backup_segment)
    {
        children[c->get_segment_path()] = c;
    }

    if(ce2ce != nullptr)
    {
        children["ce2ce"] = ce2ce;
    }

    if(segment1 != nullptr)
    {
        children["segment1"] = segment1;
    }

    if(segment2 != nullptr)
    {
        children["segment2"] = segment2;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag-mask")
    {
        diag_mask = value;
        diag_mask.value_namespace = name_space;
        diag_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
        group_name_xr.value_namespace = name_space;
        group_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mp2mp")
    {
        is_mp2mp = value;
        is_mp2mp.value_namespace = name_space;
        is_mp2mp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-backup-p-ws")
    {
        number_of_backup_p_ws = value;
        number_of_backup_p_ws.value_namespace = name_space;
        number_of_backup_p_ws.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-name")
    {
        xconnect_name = value;
        xconnect_name.value_namespace = name_space;
        xconnect_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-name-xr")
    {
        xconnect_name_xr = value;
        xconnect_name_xr.value_namespace = name_space;
        xconnect_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "diag-mask")
    {
        diag_mask.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "is-mp2mp")
    {
        is_mp2mp.yfilter = yfilter;
    }
    if(value_path == "number-of-backup-p-ws")
    {
        number_of_backup_p_ws.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "xconnect-name")
    {
        xconnect_name.yfilter = yfilter;
    }
    if(value_path == "xconnect-name-xr")
    {
        xconnect_name_xr.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "backup-segment" || name == "ce2ce" || name == "segment1" || name == "segment2" || name == "description" || name == "diag-mask" || name == "group-name" || name == "group-name-xr" || name == "interworking" || name == "is-mp2mp" || name == "number-of-backup-p-ws" || name == "state" || name == "xconnect-name" || name == "xconnect-name-xr")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::Backup()
    :
    segment_type{YType::enumeration, "segment-type"}
    	,
    attachment_circuit(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit>())
	,pseudo_wire(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire>())
{
    attachment_circuit->parent = this;
    pseudo_wire->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::~Backup()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::has_data() const
{
    return segment_type.is_set
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_data())
	|| (pseudo_wire !=  nullptr && pseudo_wire->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_type.yfilter)
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_operation())
	|| (pseudo_wire !=  nullptr && pseudo_wire->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_type.is_set || is_set(segment_type.yfilter)) leaf_name_data.push_back(segment_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment-circuit")
    {
        if(attachment_circuit == nullptr)
        {
            attachment_circuit = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit>();
        }
        return attachment_circuit;
    }

    if(child_yang_name == "pseudo-wire")
    {
        if(pseudo_wire == nullptr)
        {
            pseudo_wire = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire>();
        }
        return pseudo_wire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attachment_circuit != nullptr)
    {
        children["attachment-circuit"] = attachment_circuit;
    }

    if(pseudo_wire != nullptr)
    {
        children["pseudo-wire"] = pseudo_wire;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-type")
    {
        segment_type = value;
        segment_type.value_namespace = name_space;
        segment_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-type")
    {
        segment_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment-circuit" || name == "pseudo-wire" || name == "segment-type")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::AttachmentCircuit()
    :
    bvi_mac_conflict{YType::boolean, "bvi-mac-conflict"},
    bvi_no_port_up{YType::boolean, "bvi-no-port-up"},
    control_word_mismatched{YType::boolean, "control-word-mismatched"},
    encapsulation_error{YType::str, "encapsulation-error"},
    encapsulation_mismatched{YType::boolean, "encapsulation-mismatched"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"},
    interface_handle{YType::str, "interface-handle"},
    internal_ms_ti{YType::str, "internal-ms-ti"},
    interworking{YType::enumeration, "interworking"},
    is_ac_partially_programmed{YType::boolean, "is-ac-partially-programmed"},
    mac_limit_oper_down{YType::boolean, "mac-limit-oper-down"},
    ms_ti_mismatch{YType::boolean, "ms-ti-mismatch"},
    msti{YType::str, "msti"},
    msti_mismatch_down{YType::boolean, "msti-mismatch-down"},
    mtu_mismatched{YType::boolean, "mtu-mismatched"},
    node_id{YType::str, "node-id"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_group_state{YType::enumeration, "redundancy-group-state"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    state{YType::enumeration, "state"},
    tdm_media_mismatched{YType::boolean, "tdm-media-mismatched"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    interface(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface>())
	,l2vpn_protection(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection>())
	,statistics(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics>())
{
    interface->parent = this;
    l2vpn_protection->parent = this;
    statistics->parent = this;

    yang_name = "attachment-circuit"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::~AttachmentCircuit()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::has_data() const
{
    return bvi_mac_conflict.is_set
	|| bvi_no_port_up.is_set
	|| control_word_mismatched.is_set
	|| encapsulation_error.is_set
	|| encapsulation_mismatched.is_set
	|| evpn_internal_label.is_set
	|| interface_handle.is_set
	|| internal_ms_ti.is_set
	|| interworking.is_set
	|| is_ac_partially_programmed.is_set
	|| mac_limit_oper_down.is_set
	|| ms_ti_mismatch.is_set
	|| msti.is_set
	|| msti_mismatch_down.is_set
	|| mtu_mismatched.is_set
	|| node_id.is_set
	|| out_of_memory_state.is_set
	|| redundancy_group_id.is_set
	|| redundancy_group_state.is_set
	|| redundancy_object_id.is_set
	|| state.is_set
	|| tdm_media_mismatched.is_set
	|| xconnect_id.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (l2vpn_protection !=  nullptr && l2vpn_protection->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bvi_mac_conflict.yfilter)
	|| ydk::is_set(bvi_no_port_up.yfilter)
	|| ydk::is_set(control_word_mismatched.yfilter)
	|| ydk::is_set(encapsulation_error.yfilter)
	|| ydk::is_set(encapsulation_mismatched.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(internal_ms_ti.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(is_ac_partially_programmed.yfilter)
	|| ydk::is_set(mac_limit_oper_down.yfilter)
	|| ydk::is_set(ms_ti_mismatch.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(msti_mismatch_down.yfilter)
	|| ydk::is_set(mtu_mismatched.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(out_of_memory_state.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_group_state.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tdm_media_mismatched.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (l2vpn_protection !=  nullptr && l2vpn_protection->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bvi_mac_conflict.is_set || is_set(bvi_mac_conflict.yfilter)) leaf_name_data.push_back(bvi_mac_conflict.get_name_leafdata());
    if (bvi_no_port_up.is_set || is_set(bvi_no_port_up.yfilter)) leaf_name_data.push_back(bvi_no_port_up.get_name_leafdata());
    if (control_word_mismatched.is_set || is_set(control_word_mismatched.yfilter)) leaf_name_data.push_back(control_word_mismatched.get_name_leafdata());
    if (encapsulation_error.is_set || is_set(encapsulation_error.yfilter)) leaf_name_data.push_back(encapsulation_error.get_name_leafdata());
    if (encapsulation_mismatched.is_set || is_set(encapsulation_mismatched.yfilter)) leaf_name_data.push_back(encapsulation_mismatched.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (internal_ms_ti.is_set || is_set(internal_ms_ti.yfilter)) leaf_name_data.push_back(internal_ms_ti.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (is_ac_partially_programmed.is_set || is_set(is_ac_partially_programmed.yfilter)) leaf_name_data.push_back(is_ac_partially_programmed.get_name_leafdata());
    if (mac_limit_oper_down.is_set || is_set(mac_limit_oper_down.yfilter)) leaf_name_data.push_back(mac_limit_oper_down.get_name_leafdata());
    if (ms_ti_mismatch.is_set || is_set(ms_ti_mismatch.yfilter)) leaf_name_data.push_back(ms_ti_mismatch.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (msti_mismatch_down.is_set || is_set(msti_mismatch_down.yfilter)) leaf_name_data.push_back(msti_mismatch_down.get_name_leafdata());
    if (mtu_mismatched.is_set || is_set(mtu_mismatched.yfilter)) leaf_name_data.push_back(mtu_mismatched.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.yfilter)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_group_state.is_set || is_set(redundancy_group_state.yfilter)) leaf_name_data.push_back(redundancy_group_state.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tdm_media_mismatched.is_set || is_set(tdm_media_mismatched.yfilter)) leaf_name_data.push_back(tdm_media_mismatched.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "l2vpn-protection")
    {
        if(l2vpn_protection == nullptr)
        {
            l2vpn_protection = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection>();
        }
        return l2vpn_protection;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(l2vpn_protection != nullptr)
    {
        children["l2vpn-protection"] = l2vpn_protection;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bvi-mac-conflict")
    {
        bvi_mac_conflict = value;
        bvi_mac_conflict.value_namespace = name_space;
        bvi_mac_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-no-port-up")
    {
        bvi_no_port_up = value;
        bvi_no_port_up.value_namespace = name_space;
        bvi_no_port_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word-mismatched")
    {
        control_word_mismatched = value;
        control_word_mismatched.value_namespace = name_space;
        control_word_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-error")
    {
        encapsulation_error = value;
        encapsulation_error.value_namespace = name_space;
        encapsulation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-mismatched")
    {
        encapsulation_mismatched = value;
        encapsulation_mismatched.value_namespace = name_space;
        encapsulation_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-ms-ti")
    {
        internal_ms_ti = value;
        internal_ms_ti.value_namespace = name_space;
        internal_ms_ti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ac-partially-programmed")
    {
        is_ac_partially_programmed = value;
        is_ac_partially_programmed.value_namespace = name_space;
        is_ac_partially_programmed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down = value;
        mac_limit_oper_down.value_namespace = name_space;
        mac_limit_oper_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms-ti-mismatch")
    {
        ms_ti_mismatch = value;
        ms_ti_mismatch.value_namespace = name_space;
        ms_ti_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-mismatch-down")
    {
        msti_mismatch_down = value;
        msti_mismatch_down.value_namespace = name_space;
        msti_mismatch_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched = value;
        mtu_mismatched.value_namespace = name_space;
        mtu_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
        out_of_memory_state.value_namespace = name_space;
        out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-state")
    {
        redundancy_group_state = value;
        redundancy_group_state.value_namespace = name_space;
        redundancy_group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-media-mismatched")
    {
        tdm_media_mismatched = value;
        tdm_media_mismatched.value_namespace = name_space;
        tdm_media_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bvi-mac-conflict")
    {
        bvi_mac_conflict.yfilter = yfilter;
    }
    if(value_path == "bvi-no-port-up")
    {
        bvi_no_port_up.yfilter = yfilter;
    }
    if(value_path == "control-word-mismatched")
    {
        control_word_mismatched.yfilter = yfilter;
    }
    if(value_path == "encapsulation-error")
    {
        encapsulation_error.yfilter = yfilter;
    }
    if(value_path == "encapsulation-mismatched")
    {
        encapsulation_mismatched.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "internal-ms-ti")
    {
        internal_ms_ti.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "is-ac-partially-programmed")
    {
        is_ac_partially_programmed.yfilter = yfilter;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down.yfilter = yfilter;
    }
    if(value_path == "ms-ti-mismatch")
    {
        ms_ti_mismatch.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "msti-mismatch-down")
    {
        msti_mismatch_down.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-state")
    {
        redundancy_group_state.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tdm-media-mismatched")
    {
        tdm_media_mismatched.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "l2vpn-protection" || name == "statistics" || name == "bvi-mac-conflict" || name == "bvi-no-port-up" || name == "control-word-mismatched" || name == "encapsulation-error" || name == "encapsulation-mismatched" || name == "evpn-internal-label" || name == "interface-handle" || name == "internal-ms-ti" || name == "interworking" || name == "is-ac-partially-programmed" || name == "mac-limit-oper-down" || name == "ms-ti-mismatch" || name == "msti" || name == "msti-mismatch-down" || name == "mtu-mismatched" || name == "node-id" || name == "out-of-memory-state" || name == "redundancy-group-id" || name == "redundancy-group-state" || name == "redundancy-object-id" || name == "state" || name == "tdm-media-mismatched" || name == "xconnect-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Interface()
    :
    mtu{YType::uint32, "mtu"},
    name{YType::str, "name"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters>())
{
    parameters->parent = this;

    yang_name = "interface"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::has_data() const
{
    return mtu.is_set
	|| name.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters" || name == "mtu" || name == "name" || name == "payload-bytes")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    atm(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm>())
	,ethernet(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet>())
	,fr(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw>())
	,tdm(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm>())
	,vlan(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan>())
{
    atm->parent = this;
    ethernet->parent = this;
    fr->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;
    tdm->parent = this;
    vlan->parent = this;

    yang_name = "parameters"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::has_data() const
{
    return type.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(fr != nullptr)
    {
        children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    if(tdm != nullptr)
    {
        children["tdm"] = tdm;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm" || name == "ethernet" || name == "fr" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "tdm" || name == "vlan" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::Atm()
    :
    atm_mode{YType::enumeration, "atm-mode"},
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    vci{YType::uint16, "vci"},
    vpi{YType::uint16, "vpi"}
{

    yang_name = "atm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::has_data() const
{
    return atm_mode.is_set
	|| maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| vci.is_set
	|| vpi.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_mode.yfilter)
	|| ydk::is_set(maximum_number_cells_packed.yfilter)
	|| ydk::is_set(maximum_number_cells_un_packed.yfilter)
	|| ydk::is_set(vci.yfilter)
	|| ydk::is_set(vpi.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_mode.is_set || is_set(atm_mode.yfilter)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atm-mode")
    {
        atm_mode = value;
        atm_mode.value_namespace = name_space;
        atm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
        maximum_number_cells_packed.value_namespace = name_space;
        maximum_number_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
        maximum_number_cells_un_packed.value_namespace = name_space;
        maximum_number_cells_un_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atm-mode")
    {
        atm_mode.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm-mode" || name == "maximum-number-cells-packed" || name == "maximum-number-cells-un-packed" || name == "vci" || name == "vpi")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "ethernet"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::Fr()
    :
    dlci{YType::uint32, "dlci"},
    fr_mode{YType::enumeration, "fr-mode"}
{

    yang_name = "fr"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::has_data() const
{
    return dlci.is_set
	|| fr_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dlci.yfilter)
	|| ydk::is_set(fr_mode.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dlci.is_set || is_set(dlci.yfilter)) leaf_name_data.push_back(dlci.get_name_leafdata());
    if (fr_mode.is_set || is_set(fr_mode.yfilter)) leaf_name_data.push_back(fr_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dlci")
    {
        dlci = value;
        dlci.value_namespace = name_space;
        dlci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-mode")
    {
        fr_mode = value;
        fr_mode.value_namespace = name_space;
        fr_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dlci")
    {
        dlci.yfilter = yfilter;
    }
    if(value_path == "fr-mode")
    {
        fr_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dlci" || name == "fr-mode")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::PseudowireEther()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "internal-label" || name == "is-valid")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(interface_list_name.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-id" || name == "interface-list-name")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::Interface_()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::~Interface_()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::PseudowireIw()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "internal-label" || name == "is-valid")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(interface_list_name.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-id" || name == "interface-list-name")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::Interface_()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::~Interface_()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::Tdm()
    :
    tdm_mode{YType::enumeration, "tdm-mode"},
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::has_data() const
{
    return tdm_mode.is_set
	|| timeslot_group.is_set
	|| timeslot_rate.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdm_mode.yfilter)
	|| ydk::is_set(timeslot_group.yfilter)
	|| ydk::is_set(timeslot_rate.yfilter)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdm_mode.is_set || is_set(tdm_mode.yfilter)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());
    if (timeslot_group.is_set || is_set(timeslot_group.yfilter)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.yfilter)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tdm_options != nullptr)
    {
        children["tdm-options"] = tdm_options;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
        tdm_mode.value_namespace = name_space;
        tdm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
        timeslot_group.value_namespace = name_space;
        timeslot_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
        timeslot_rate.value_namespace = name_space;
        timeslot_rate.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode.yfilter = yfilter;
    }
    if(value_path == "timeslot-group")
    {
        timeslot_group.yfilter = yfilter;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tdm-options" || name == "tdm-mode" || name == "timeslot-group" || name == "timeslot-rate")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    bit_rate{YType::uint32, "bit-rate"},
    cas{YType::uint8, "cas"},
    payload_bytes{YType::uint16, "payload-bytes"},
    rtp{YType::enumeration, "rtp"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    signalling_packets{YType::uint8, "signalling-packets"},
    ssrc{YType::uint32, "ssrc"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    timestamp_mode{YType::enumeration, "timestamp-mode"}
{

    yang_name = "tdm-options"; yang_parent_name = "tdm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_data() const
{
    return bit_rate.is_set
	|| cas.is_set
	|| payload_bytes.is_set
	|| rtp.is_set
	|| rtp_header_payload_type.is_set
	|| signalling_packets.is_set
	|| ssrc.is_set
	|| timestamp_clock_freq.is_set
	|| timestamp_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(cas.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| ydk::is_set(rtp.yfilter)
	|| ydk::is_set(rtp_header_payload_type.yfilter)
	|| ydk::is_set(signalling_packets.yfilter)
	|| ydk::is_set(ssrc.yfilter)
	|| ydk::is_set(timestamp_clock_freq.yfilter)
	|| ydk::is_set(timestamp_mode.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.yfilter)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.yfilter)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.yfilter)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.yfilter)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.yfilter)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp")
    {
        rtp = value;
        rtp.value_namespace = name_space;
        rtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
        rtp_header_payload_type.value_namespace = name_space;
        rtp_header_payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
        signalling_packets.value_namespace = name_space;
        signalling_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
        timestamp_clock_freq.value_namespace = name_space;
        timestamp_clock_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
        timestamp_mode.value_namespace = name_space;
        timestamp_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
    if(value_path == "rtp")
    {
        rtp.yfilter = yfilter;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type.yfilter = yfilter;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets.yfilter = yfilter;
    }
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq.yfilter = yfilter;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate" || name == "cas" || name == "payload-bytes" || name == "rtp" || name == "rtp-header-payload-type" || name == "signalling-packets" || name == "ssrc" || name == "timestamp-clock-freq" || name == "timestamp-mode")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::Vlan()
    :
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return encapsulation_type.is_set
	|| outer_tag.is_set
	|| simple_efp.is_set
	|| vlan_rewrite_tag.is_set
	|| xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-tag")
    {
        for(auto const & c : rewrite_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag>();
        c->parent = this;
        rewrite_tag.push_back(c);
        return c;
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rewrite_tag)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "encapsulation-type" || name == "outer-tag" || name == "simple-efp" || name == "vlan-rewrite-tag" || name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::L2VpnProtection()
    :
    active{YType::boolean, "active"},
    protected_name{YType::str, "protected-name"},
    protection_configured{YType::enumeration, "protection-configured"},
    protection_name{YType::str, "protection-name"},
    protection_type{YType::enumeration, "protection-type"}
{

    yang_name = "l2vpn-protection"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::~L2VpnProtection()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::has_data() const
{
    return active.is_set
	|| protected_name.is_set
	|| protection_configured.is_set
	|| protection_name.is_set
	|| protection_type.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(protected_name.yfilter)
	|| ydk::is_set(protection_configured.yfilter)
	|| ydk::is_set(protection_name.yfilter)
	|| ydk::is_set(protection_type.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (protected_name.is_set || is_set(protected_name.yfilter)) leaf_name_data.push_back(protected_name.get_name_leafdata());
    if (protection_configured.is_set || is_set(protection_configured.yfilter)) leaf_name_data.push_back(protection_configured.get_name_leafdata());
    if (protection_name.is_set || is_set(protection_name.yfilter)) leaf_name_data.push_back(protection_name.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-name")
    {
        protected_name = value;
        protected_name.value_namespace = name_space;
        protected_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-configured")
    {
        protection_configured = value;
        protection_configured.value_namespace = name_space;
        protection_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-name")
    {
        protection_name = value;
        protection_name.value_namespace = name_space;
        protection_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "protected-name")
    {
        protected_name.yfilter = yfilter;
    }
    if(value_path == "protection-configured")
    {
        protection_configured.yfilter = yfilter;
    }
    if(value_path == "protection-name")
    {
        protection_name.yfilter = yfilter;
    }
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "protected-name" || name == "protection-configured" || name == "protection-name" || name == "protection-type")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::Statistics()
    :
    dispostion_stats(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats>())
	,impostion_stats(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber>())
{
    dispostion_stats->parent = this;
    impostion_stats->parent = this;
    sequence_number->parent = this;

    yang_name = "statistics"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::~Statistics()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::has_data() const
{
    return (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats == nullptr)
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats>();
        }
        return dispostion_stats;
    }

    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats == nullptr)
        {
            impostion_stats = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats>();
        }
        return impostion_stats;
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number == nullptr)
        {
            sequence_number = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber>();
        }
        return sequence_number;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dispostion_stats != nullptr)
    {
        children["dispostion-stats"] = dispostion_stats;
    }

    if(impostion_stats != nullptr)
    {
        children["impostion-stats"] = impostion_stats;
    }

    if(sequence_number != nullptr)
    {
        children["sequence-number"] = sequence_number;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dispostion-stats" || name == "impostion-stats" || name == "sequence-number")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispostionStats()
    :
    broadcast_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop>())
	,dai_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats>())
	,disposition_stat(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove>())
	,multicast_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops>())
	,unicast_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop>())
{
    broadcast_drop->parent = this;
    dai_drop->parent = this;
    disposition_mtu_drop->parent = this;
    disposition_oo_o_drops->parent = this;
    disposition_p2mp_stats->parent = this;
    disposition_stat->parent = this;
    disposition_tail_drop->parent = this;
    ipsg_drop->parent = this;
    known_unicast->parent = this;
    mac_move->parent = this;
    multicast_drop->parent = this;
    received_drops->parent = this;
    unicast_drop->parent = this;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::has_data() const
{
    return (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop == nullptr)
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop>();
        }
        return broadcast_drop;
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop == nullptr)
        {
            dai_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop>();
        }
        return dai_drop;
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop == nullptr)
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop>();
        }
        return disposition_mtu_drop;
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops == nullptr)
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops>();
        }
        return disposition_oo_o_drops;
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats == nullptr)
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats>();
        }
        return disposition_p2mp_stats;
    }

    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat == nullptr)
        {
            disposition_stat = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat>();
        }
        return disposition_stat;
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop == nullptr)
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop>();
        }
        return disposition_tail_drop;
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop == nullptr)
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop>();
        }
        return ipsg_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove>();
        }
        return mac_move;
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop == nullptr)
        {
            multicast_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop>();
        }
        return multicast_drop;
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops == nullptr)
        {
            received_drops = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops>();
        }
        return received_drops;
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop == nullptr)
        {
            unicast_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop>();
        }
        return unicast_drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_drop != nullptr)
    {
        children["broadcast-drop"] = broadcast_drop;
    }

    if(dai_drop != nullptr)
    {
        children["dai-drop"] = dai_drop;
    }

    if(disposition_mtu_drop != nullptr)
    {
        children["disposition-mtu-drop"] = disposition_mtu_drop;
    }

    if(disposition_oo_o_drops != nullptr)
    {
        children["disposition-oo-o-drops"] = disposition_oo_o_drops;
    }

    if(disposition_p2mp_stats != nullptr)
    {
        children["disposition-p2mp-stats"] = disposition_p2mp_stats;
    }

    if(disposition_stat != nullptr)
    {
        children["disposition-stat"] = disposition_stat;
    }

    if(disposition_tail_drop != nullptr)
    {
        children["disposition-tail-drop"] = disposition_tail_drop;
    }

    if(ipsg_drop != nullptr)
    {
        children["ipsg-drop"] = ipsg_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    if(multicast_drop != nullptr)
    {
        children["multicast-drop"] = multicast_drop;
    }

    if(received_drops != nullptr)
    {
        children["received-drops"] = received_drops;
    }

    if(unicast_drop != nullptr)
    {
        children["unicast-drop"] = unicast_drop;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-drop" || name == "dai-drop" || name == "disposition-mtu-drop" || name == "disposition-oo-o-drops" || name == "disposition-p2mp-stats" || name == "disposition-stat" || name == "disposition-tail-drop" || name == "ipsg-drop" || name == "known-unicast" || name == "mac-move" || name == "multicast-drop" || name == "received-drops" || name == "unicast-drop")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}


}
}

