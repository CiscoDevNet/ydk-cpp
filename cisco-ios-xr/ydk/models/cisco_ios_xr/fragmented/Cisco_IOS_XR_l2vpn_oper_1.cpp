
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_1.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::EvpnShgRemoteInfo()
    :
    remote_split_horizon_group_label(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel>())
{
    remote_split_horizon_group_label->parent = this;

    yang_name = "evpn-shg-remote-info"; yang_parent_name = "l2fib-main-interface-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::~EvpnShgRemoteInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::has_data() const
{
    return (remote_split_horizon_group_label !=  nullptr && remote_split_horizon_group_label->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::has_operation() const
{
    return is_set(yfilter)
	|| (remote_split_horizon_group_label !=  nullptr && remote_split_horizon_group_label->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-shg-remote-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-split-horizon-group-label")
    {
        if(remote_split_horizon_group_label == nullptr)
        {
            remote_split_horizon_group_label = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel>();
        }
        return remote_split_horizon_group_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_split_horizon_group_label != nullptr)
    {
        children["remote-split-horizon-group-label"] = remote_split_horizon_group_label;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-split-horizon-group-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::RemoteSplitHorizonGroupLabel()
    :
    label{YType::uint32, "label"},
    next_hop{YType::str, "next-hop"}
{

    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "evpn-shg-remote-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::~RemoteSplitHorizonGroupLabel()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::has_data() const
{
    return label.is_set
	|| next_hop.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-split-horizon-group-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "next-hop")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId::InstanceId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "instance-id"; yang_parent_name = "l2fib-main-interface-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId::~InstanceId()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned::InstancesProvisioned()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "instances-provisioned"; yang_parent_name = "l2fib-main-interface-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned::~InstancesProvisioned()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances-provisioned";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState::InstancesState()
    :
    entry{YType::enumeration, "entry"}
{

    yang_name = "instances-state"; yang_parent_name = "l2fib-main-interface-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState::~InstancesState()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::L2FibMainInterfaceHardwareEgressDetailInfo()
    :
    esi_id{YType::uint16, "esi-id"},
    evpn_shg_local_label{YType::uint32, "evpn-shg-local-label"},
    mac{YType::str, "mac"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    virtual_if_name{YType::str, "virtual-if-name"}
{

    yang_name = "l2fib-main-interface-hardware-egress-detail-info"; yang_parent_name = "l2fib-main-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::~L2FibMainInterfaceHardwareEgressDetailInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::has_data() const
{
    for (std::size_t index=0; index<bridge_port_count_instance.size(); index++)
    {
        if(bridge_port_count_instance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ethernet_segment_identifier.size(); index++)
    {
        if(ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evpn_shg_remote_info.size(); index++)
    {
        if(evpn_shg_remote_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_data())
            return true;
    }
    return esi_id.is_set
	|| evpn_shg_local_label.is_set
	|| mac.is_set
	|| main_if_type.is_set
	|| main_interface.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::has_operation() const
{
    for (std::size_t index=0; index<bridge_port_count_instance.size(); index++)
    {
        if(bridge_port_count_instance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ethernet_segment_identifier.size(); index++)
    {
        if(ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evpn_shg_remote_info.size(); index++)
    {
        if(evpn_shg_remote_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(esi_id.yfilter)
	|| ydk::is_set(evpn_shg_local_label.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-hardware-egress-detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esi_id.is_set || is_set(esi_id.yfilter)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (evpn_shg_local_label.is_set || is_set(evpn_shg_local_label.yfilter)) leaf_name_data.push_back(evpn_shg_local_label.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-port-count-instance")
    {
        for(auto const & c : bridge_port_count_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance>();
        c->parent = this;
        bridge_port_count_instance.push_back(c);
        return c;
    }

    if(child_yang_name == "ethernet-segment-identifier")
    {
        for(auto const & c : ethernet_segment_identifier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier>();
        c->parent = this;
        ethernet_segment_identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "evpn-shg-remote-info")
    {
        for(auto const & c : evpn_shg_remote_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo>();
        c->parent = this;
        evpn_shg_remote_info.push_back(c);
        return c;
    }

    if(child_yang_name == "instance-id")
    {
        for(auto const & c : instance_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-provisioned")
    {
        for(auto const & c : instances_provisioned)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned>();
        c->parent = this;
        instances_provisioned.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-state")
    {
        for(auto const & c : instances_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState>();
        c->parent = this;
        instances_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bridge_port_count_instance)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ethernet_segment_identifier)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : evpn_shg_remote_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : instance_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : instances_provisioned)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : instances_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esi-id")
    {
        esi_id = value;
        esi_id.value_namespace = name_space;
        esi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-shg-local-label")
    {
        evpn_shg_local_label = value;
        evpn_shg_local_label.value_namespace = name_space;
        evpn_shg_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esi-id")
    {
        esi_id.yfilter = yfilter;
    }
    if(value_path == "evpn-shg-local-label")
    {
        evpn_shg_local_label.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-port-count-instance" || name == "ethernet-segment-identifier" || name == "evpn-shg-remote-info" || name == "instance-id" || name == "instances-provisioned" || name == "instances-state" || name == "esi-id" || name == "evpn-shg-local-label" || name == "mac" || name == "main-if-type" || name == "main-interface" || name == "virtual-if-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance::BridgePortCountInstance()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "bridge-port-count-instance"; yang_parent_name = "l2fib-main-interface-hardware-egress-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance::~BridgePortCountInstance()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-port-count-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::BridgePortCountInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier::EthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ethernet-segment-identifier"; yang_parent_name = "l2fib-main-interface-hardware-egress-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier::~EthernetSegmentIdentifier()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::EvpnShgRemoteInfo()
    :
    remote_split_horizon_group_label(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel>())
{
    remote_split_horizon_group_label->parent = this;

    yang_name = "evpn-shg-remote-info"; yang_parent_name = "l2fib-main-interface-hardware-egress-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::~EvpnShgRemoteInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::has_data() const
{
    return (remote_split_horizon_group_label !=  nullptr && remote_split_horizon_group_label->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::has_operation() const
{
    return is_set(yfilter)
	|| (remote_split_horizon_group_label !=  nullptr && remote_split_horizon_group_label->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-shg-remote-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-split-horizon-group-label")
    {
        if(remote_split_horizon_group_label == nullptr)
        {
            remote_split_horizon_group_label = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel>();
        }
        return remote_split_horizon_group_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_split_horizon_group_label != nullptr)
    {
        children["remote-split-horizon-group-label"] = remote_split_horizon_group_label;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-split-horizon-group-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::RemoteSplitHorizonGroupLabel()
    :
    label{YType::uint32, "label"},
    next_hop{YType::str, "next-hop"}
{

    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "evpn-shg-remote-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::~RemoteSplitHorizonGroupLabel()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::has_data() const
{
    return label.is_set
	|| next_hop.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-split-horizon-group-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "next-hop")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId::InstanceId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "instance-id"; yang_parent_name = "l2fib-main-interface-hardware-egress-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId::~InstanceId()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned::InstancesProvisioned()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "instances-provisioned"; yang_parent_name = "l2fib-main-interface-hardware-egress-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned::~InstancesProvisioned()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances-provisioned";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesProvisioned::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState::InstancesState()
    :
    entry{YType::enumeration, "entry"}
{

    yang_name = "instances-state"; yang_parent_name = "l2fib-main-interface-hardware-egress-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState::~InstancesState()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::InstancesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::L2FibMainInterfaceHardwareEgressInfo()
    :
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    virtual_if_name{YType::str, "virtual-if-name"}
{

    yang_name = "l2fib-main-interface-hardware-egress-info"; yang_parent_name = "l2fib-main-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::~L2FibMainInterfaceHardwareEgressInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::has_data() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_data())
            return true;
    }
    return main_if_type.is_set
	|| main_interface.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::has_operation() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-hardware-egress-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-id")
    {
        for(auto const & c : instance_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-provisioned")
    {
        for(auto const & c : instances_provisioned)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned>();
        c->parent = this;
        instances_provisioned.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-state")
    {
        for(auto const & c : instances_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState>();
        c->parent = this;
        instances_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : instances_provisioned)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : instances_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id" || name == "instances-provisioned" || name == "instances-state" || name == "main-if-type" || name == "main-interface" || name == "virtual-if-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId::InstanceId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "instance-id"; yang_parent_name = "l2fib-main-interface-hardware-egress-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId::~InstanceId()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned::InstancesProvisioned()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "instances-provisioned"; yang_parent_name = "l2fib-main-interface-hardware-egress-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned::~InstancesProvisioned()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances-provisioned";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesProvisioned::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState::InstancesState()
    :
    entry{YType::enumeration, "entry"}
{

    yang_name = "instances-state"; yang_parent_name = "l2fib-main-interface-hardware-egress-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState::~InstancesState()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo::InstancesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::L2FibMainInterfaceHardwareIngressDetailInfo()
    :
    esi_id{YType::uint16, "esi-id"},
    evpn_shg_local_label{YType::uint32, "evpn-shg-local-label"},
    mac{YType::str, "mac"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    virtual_if_name{YType::str, "virtual-if-name"}
{

    yang_name = "l2fib-main-interface-hardware-ingress-detail-info"; yang_parent_name = "l2fib-main-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::~L2FibMainInterfaceHardwareIngressDetailInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::has_data() const
{
    for (std::size_t index=0; index<bridge_port_count_instance.size(); index++)
    {
        if(bridge_port_count_instance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ethernet_segment_identifier.size(); index++)
    {
        if(ethernet_segment_identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evpn_shg_remote_info.size(); index++)
    {
        if(evpn_shg_remote_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_data())
            return true;
    }
    return esi_id.is_set
	|| evpn_shg_local_label.is_set
	|| mac.is_set
	|| main_if_type.is_set
	|| main_interface.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::has_operation() const
{
    for (std::size_t index=0; index<bridge_port_count_instance.size(); index++)
    {
        if(bridge_port_count_instance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ethernet_segment_identifier.size(); index++)
    {
        if(ethernet_segment_identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evpn_shg_remote_info.size(); index++)
    {
        if(evpn_shg_remote_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(esi_id.yfilter)
	|| ydk::is_set(evpn_shg_local_label.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-hardware-ingress-detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esi_id.is_set || is_set(esi_id.yfilter)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (evpn_shg_local_label.is_set || is_set(evpn_shg_local_label.yfilter)) leaf_name_data.push_back(evpn_shg_local_label.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-port-count-instance")
    {
        for(auto const & c : bridge_port_count_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance>();
        c->parent = this;
        bridge_port_count_instance.push_back(c);
        return c;
    }

    if(child_yang_name == "ethernet-segment-identifier")
    {
        for(auto const & c : ethernet_segment_identifier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier>();
        c->parent = this;
        ethernet_segment_identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "evpn-shg-remote-info")
    {
        for(auto const & c : evpn_shg_remote_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo>();
        c->parent = this;
        evpn_shg_remote_info.push_back(c);
        return c;
    }

    if(child_yang_name == "instance-id")
    {
        for(auto const & c : instance_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-provisioned")
    {
        for(auto const & c : instances_provisioned)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned>();
        c->parent = this;
        instances_provisioned.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-state")
    {
        for(auto const & c : instances_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState>();
        c->parent = this;
        instances_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bridge_port_count_instance)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ethernet_segment_identifier)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : evpn_shg_remote_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : instance_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : instances_provisioned)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : instances_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esi-id")
    {
        esi_id = value;
        esi_id.value_namespace = name_space;
        esi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-shg-local-label")
    {
        evpn_shg_local_label = value;
        evpn_shg_local_label.value_namespace = name_space;
        evpn_shg_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esi-id")
    {
        esi_id.yfilter = yfilter;
    }
    if(value_path == "evpn-shg-local-label")
    {
        evpn_shg_local_label.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-port-count-instance" || name == "ethernet-segment-identifier" || name == "evpn-shg-remote-info" || name == "instance-id" || name == "instances-provisioned" || name == "instances-state" || name == "esi-id" || name == "evpn-shg-local-label" || name == "mac" || name == "main-if-type" || name == "main-interface" || name == "virtual-if-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance::BridgePortCountInstance()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "bridge-port-count-instance"; yang_parent_name = "l2fib-main-interface-hardware-ingress-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance::~BridgePortCountInstance()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-port-count-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier::EthernetSegmentIdentifier()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ethernet-segment-identifier"; yang_parent_name = "l2fib-main-interface-hardware-ingress-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier::~EthernetSegmentIdentifier()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::EvpnShgRemoteInfo()
    :
    remote_split_horizon_group_label(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel>())
{
    remote_split_horizon_group_label->parent = this;

    yang_name = "evpn-shg-remote-info"; yang_parent_name = "l2fib-main-interface-hardware-ingress-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::~EvpnShgRemoteInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::has_data() const
{
    return (remote_split_horizon_group_label !=  nullptr && remote_split_horizon_group_label->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::has_operation() const
{
    return is_set(yfilter)
	|| (remote_split_horizon_group_label !=  nullptr && remote_split_horizon_group_label->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-shg-remote-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-split-horizon-group-label")
    {
        if(remote_split_horizon_group_label == nullptr)
        {
            remote_split_horizon_group_label = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel>();
        }
        return remote_split_horizon_group_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_split_horizon_group_label != nullptr)
    {
        children["remote-split-horizon-group-label"] = remote_split_horizon_group_label;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-split-horizon-group-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::RemoteSplitHorizonGroupLabel()
    :
    label{YType::uint32, "label"},
    next_hop{YType::str, "next-hop"}
{

    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "evpn-shg-remote-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::~RemoteSplitHorizonGroupLabel()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::has_data() const
{
    return label.is_set
	|| next_hop.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-split-horizon-group-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "next-hop")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId::InstanceId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "instance-id"; yang_parent_name = "l2fib-main-interface-hardware-ingress-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId::~InstanceId()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned::InstancesProvisioned()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "instances-provisioned"; yang_parent_name = "l2fib-main-interface-hardware-ingress-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned::~InstancesProvisioned()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances-provisioned";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState::InstancesState()
    :
    entry{YType::enumeration, "entry"}
{

    yang_name = "instances-state"; yang_parent_name = "l2fib-main-interface-hardware-ingress-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState::~InstancesState()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::L2FibMainInterfaceHardwareIngressInfo()
    :
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    virtual_if_name{YType::str, "virtual-if-name"}
{

    yang_name = "l2fib-main-interface-hardware-ingress-info"; yang_parent_name = "l2fib-main-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::~L2FibMainInterfaceHardwareIngressInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::has_data() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_data())
            return true;
    }
    return main_if_type.is_set
	|| main_interface.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::has_operation() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-hardware-ingress-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-id")
    {
        for(auto const & c : instance_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-provisioned")
    {
        for(auto const & c : instances_provisioned)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned>();
        c->parent = this;
        instances_provisioned.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-state")
    {
        for(auto const & c : instances_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState>();
        c->parent = this;
        instances_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : instances_provisioned)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : instances_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id" || name == "instances-provisioned" || name == "instances-state" || name == "main-if-type" || name == "main-interface" || name == "virtual-if-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId::InstanceId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "instance-id"; yang_parent_name = "l2fib-main-interface-hardware-ingress-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId::~InstanceId()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned::InstancesProvisioned()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "instances-provisioned"; yang_parent_name = "l2fib-main-interface-hardware-ingress-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned::~InstancesProvisioned()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances-provisioned";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState::InstancesState()
    :
    entry{YType::enumeration, "entry"}
{

    yang_name = "instances-state"; yang_parent_name = "l2fib-main-interface-hardware-ingress-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState::~InstancesState()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::L2FibMainInterfaceInfo()
    :
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    virtual_if_name{YType::str, "virtual-if-name"}
{

    yang_name = "l2fib-main-interface-info"; yang_parent_name = "l2fib-main-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::~L2FibMainInterfaceInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::has_data() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_data())
            return true;
    }
    return main_if_type.is_set
	|| main_interface.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::has_operation() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_provisioned.size(); index++)
    {
        if(instances_provisioned[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instances_state.size(); index++)
    {
        if(instances_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-id")
    {
        for(auto const & c : instance_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-provisioned")
    {
        for(auto const & c : instances_provisioned)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned>();
        c->parent = this;
        instances_provisioned.push_back(c);
        return c;
    }

    if(child_yang_name == "instances-state")
    {
        for(auto const & c : instances_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState>();
        c->parent = this;
        instances_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : instances_provisioned)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : instances_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id" || name == "instances-provisioned" || name == "instances-state" || name == "main-if-type" || name == "main-interface" || name == "virtual-if-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId::InstanceId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "instance-id"; yang_parent_name = "l2fib-main-interface-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId::~InstanceId()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned::InstancesProvisioned()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "instances-provisioned"; yang_parent_name = "l2fib-main-interface-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned::~InstancesProvisioned()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances-provisioned";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState::InstancesState()
    :
    entry{YType::enumeration, "entry"}
{

    yang_name = "instances-state"; yang_parent_name = "l2fib-main-interface-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState::~InstancesState()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstances()
{

    yang_name = "l2fib-main-interface-instances"; yang_parent_name = "l2fib-main-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::~L2FibMainInterfaceInstances()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::has_data() const
{
    for (std::size_t index=0; index<l2fib_main_interface_instance.size(); index++)
    {
        if(l2fib_main_interface_instance[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::has_operation() const
{
    for (std::size_t index=0; index<l2fib_main_interface_instance.size(); index++)
    {
        if(l2fib_main_interface_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-main-interface-instance")
    {
        for(auto const & c : l2fib_main_interface_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance>();
        c->parent = this;
        l2fib_main_interface_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_main_interface_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-main-interface-instance")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstance()
    :
    instance{YType::int32, "instance"}
    	,
    l2fib_main_interface_instance_bridge_port_details(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails>())
	,l2fib_main_interface_instance_bridge_ports(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts>())
	,l2fib_main_interface_instance_detail_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo>())
	,l2fib_main_interface_instance_hardware_egress_detail_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo>())
	,l2fib_main_interface_instance_hardware_egress_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo>())
	,l2fib_main_interface_instance_hardware_ingress_detail_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo>())
	,l2fib_main_interface_instance_hardware_ingress_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo>())
	,l2fib_main_interface_instance_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo>())
{
    l2fib_main_interface_instance_bridge_port_details->parent = this;
    l2fib_main_interface_instance_bridge_ports->parent = this;
    l2fib_main_interface_instance_detail_info->parent = this;
    l2fib_main_interface_instance_hardware_egress_detail_info->parent = this;
    l2fib_main_interface_instance_hardware_egress_info->parent = this;
    l2fib_main_interface_instance_hardware_ingress_detail_info->parent = this;
    l2fib_main_interface_instance_hardware_ingress_info->parent = this;
    l2fib_main_interface_instance_info->parent = this;

    yang_name = "l2fib-main-interface-instance"; yang_parent_name = "l2fib-main-interface-instances"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::~L2FibMainInterfaceInstance()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::has_data() const
{
    return instance.is_set
	|| (l2fib_main_interface_instance_bridge_port_details !=  nullptr && l2fib_main_interface_instance_bridge_port_details->has_data())
	|| (l2fib_main_interface_instance_bridge_ports !=  nullptr && l2fib_main_interface_instance_bridge_ports->has_data())
	|| (l2fib_main_interface_instance_detail_info !=  nullptr && l2fib_main_interface_instance_detail_info->has_data())
	|| (l2fib_main_interface_instance_hardware_egress_detail_info !=  nullptr && l2fib_main_interface_instance_hardware_egress_detail_info->has_data())
	|| (l2fib_main_interface_instance_hardware_egress_info !=  nullptr && l2fib_main_interface_instance_hardware_egress_info->has_data())
	|| (l2fib_main_interface_instance_hardware_ingress_detail_info !=  nullptr && l2fib_main_interface_instance_hardware_ingress_detail_info->has_data())
	|| (l2fib_main_interface_instance_hardware_ingress_info !=  nullptr && l2fib_main_interface_instance_hardware_ingress_info->has_data())
	|| (l2fib_main_interface_instance_info !=  nullptr && l2fib_main_interface_instance_info->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| (l2fib_main_interface_instance_bridge_port_details !=  nullptr && l2fib_main_interface_instance_bridge_port_details->has_operation())
	|| (l2fib_main_interface_instance_bridge_ports !=  nullptr && l2fib_main_interface_instance_bridge_ports->has_operation())
	|| (l2fib_main_interface_instance_detail_info !=  nullptr && l2fib_main_interface_instance_detail_info->has_operation())
	|| (l2fib_main_interface_instance_hardware_egress_detail_info !=  nullptr && l2fib_main_interface_instance_hardware_egress_detail_info->has_operation())
	|| (l2fib_main_interface_instance_hardware_egress_info !=  nullptr && l2fib_main_interface_instance_hardware_egress_info->has_operation())
	|| (l2fib_main_interface_instance_hardware_ingress_detail_info !=  nullptr && l2fib_main_interface_instance_hardware_ingress_detail_info->has_operation())
	|| (l2fib_main_interface_instance_hardware_ingress_info !=  nullptr && l2fib_main_interface_instance_hardware_ingress_info->has_operation())
	|| (l2fib_main_interface_instance_info !=  nullptr && l2fib_main_interface_instance_info->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-main-interface-instance-bridge-port-details")
    {
        if(l2fib_main_interface_instance_bridge_port_details == nullptr)
        {
            l2fib_main_interface_instance_bridge_port_details = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails>();
        }
        return l2fib_main_interface_instance_bridge_port_details;
    }

    if(child_yang_name == "l2fib-main-interface-instance-bridge-ports")
    {
        if(l2fib_main_interface_instance_bridge_ports == nullptr)
        {
            l2fib_main_interface_instance_bridge_ports = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts>();
        }
        return l2fib_main_interface_instance_bridge_ports;
    }

    if(child_yang_name == "l2fib-main-interface-instance-detail-info")
    {
        if(l2fib_main_interface_instance_detail_info == nullptr)
        {
            l2fib_main_interface_instance_detail_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo>();
        }
        return l2fib_main_interface_instance_detail_info;
    }

    if(child_yang_name == "l2fib-main-interface-instance-hardware-egress-detail-info")
    {
        if(l2fib_main_interface_instance_hardware_egress_detail_info == nullptr)
        {
            l2fib_main_interface_instance_hardware_egress_detail_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo>();
        }
        return l2fib_main_interface_instance_hardware_egress_detail_info;
    }

    if(child_yang_name == "l2fib-main-interface-instance-hardware-egress-info")
    {
        if(l2fib_main_interface_instance_hardware_egress_info == nullptr)
        {
            l2fib_main_interface_instance_hardware_egress_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo>();
        }
        return l2fib_main_interface_instance_hardware_egress_info;
    }

    if(child_yang_name == "l2fib-main-interface-instance-hardware-ingress-detail-info")
    {
        if(l2fib_main_interface_instance_hardware_ingress_detail_info == nullptr)
        {
            l2fib_main_interface_instance_hardware_ingress_detail_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo>();
        }
        return l2fib_main_interface_instance_hardware_ingress_detail_info;
    }

    if(child_yang_name == "l2fib-main-interface-instance-hardware-ingress-info")
    {
        if(l2fib_main_interface_instance_hardware_ingress_info == nullptr)
        {
            l2fib_main_interface_instance_hardware_ingress_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo>();
        }
        return l2fib_main_interface_instance_hardware_ingress_info;
    }

    if(child_yang_name == "l2fib-main-interface-instance-info")
    {
        if(l2fib_main_interface_instance_info == nullptr)
        {
            l2fib_main_interface_instance_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo>();
        }
        return l2fib_main_interface_instance_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2fib_main_interface_instance_bridge_port_details != nullptr)
    {
        children["l2fib-main-interface-instance-bridge-port-details"] = l2fib_main_interface_instance_bridge_port_details;
    }

    if(l2fib_main_interface_instance_bridge_ports != nullptr)
    {
        children["l2fib-main-interface-instance-bridge-ports"] = l2fib_main_interface_instance_bridge_ports;
    }

    if(l2fib_main_interface_instance_detail_info != nullptr)
    {
        children["l2fib-main-interface-instance-detail-info"] = l2fib_main_interface_instance_detail_info;
    }

    if(l2fib_main_interface_instance_hardware_egress_detail_info != nullptr)
    {
        children["l2fib-main-interface-instance-hardware-egress-detail-info"] = l2fib_main_interface_instance_hardware_egress_detail_info;
    }

    if(l2fib_main_interface_instance_hardware_egress_info != nullptr)
    {
        children["l2fib-main-interface-instance-hardware-egress-info"] = l2fib_main_interface_instance_hardware_egress_info;
    }

    if(l2fib_main_interface_instance_hardware_ingress_detail_info != nullptr)
    {
        children["l2fib-main-interface-instance-hardware-ingress-detail-info"] = l2fib_main_interface_instance_hardware_ingress_detail_info;
    }

    if(l2fib_main_interface_instance_hardware_ingress_info != nullptr)
    {
        children["l2fib-main-interface-instance-hardware-ingress-info"] = l2fib_main_interface_instance_hardware_ingress_info;
    }

    if(l2fib_main_interface_instance_info != nullptr)
    {
        children["l2fib-main-interface-instance-info"] = l2fib_main_interface_instance_info;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-main-interface-instance-bridge-port-details" || name == "l2fib-main-interface-instance-bridge-ports" || name == "l2fib-main-interface-instance-detail-info" || name == "l2fib-main-interface-instance-hardware-egress-detail-info" || name == "l2fib-main-interface-instance-hardware-egress-info" || name == "l2fib-main-interface-instance-hardware-ingress-detail-info" || name == "l2fib-main-interface-instance-hardware-ingress-info" || name == "l2fib-main-interface-instance-info" || name == "instance")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetails()
{

    yang_name = "l2fib-main-interface-instance-bridge-port-details"; yang_parent_name = "l2fib-main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::~L2FibMainInterfaceInstanceBridgePortDetails()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::has_data() const
{
    for (std::size_t index=0; index<l2fib_main_interface_instance_bridge_port_detail.size(); index++)
    {
        if(l2fib_main_interface_instance_bridge_port_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::has_operation() const
{
    for (std::size_t index=0; index<l2fib_main_interface_instance_bridge_port_detail.size(); index++)
    {
        if(l2fib_main_interface_instance_bridge_port_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-bridge-port-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-main-interface-instance-bridge-port-detail")
    {
        for(auto const & c : l2fib_main_interface_instance_bridge_port_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail>();
        c->parent = this;
        l2fib_main_interface_instance_bridge_port_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_main_interface_instance_bridge_port_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-main-interface-instance-bridge-port-detail")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::L2FibMainInterfaceInstanceBridgePortDetail()
    :
    xcid{YType::str, "xcid"},
    bp_type{YType::uint8, "bp-type"},
    bridge_id{YType::uint32, "bridge-id"},
    bridge_port_id{YType::str, "bridge-port-id"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    state{YType::enumeration, "state"},
    virtual_if_name{YType::str, "virtual-if-name"}
    	,
    oper(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper>())
{
    oper->parent = this;

    yang_name = "l2fib-main-interface-instance-bridge-port-detail"; yang_parent_name = "l2fib-main-interface-instance-bridge-port-details"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::~L2FibMainInterfaceInstanceBridgePortDetail()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::has_data() const
{
    return xcid.is_set
	|| bp_type.is_set
	|| bridge_id.is_set
	|| bridge_port_id.is_set
	|| main_if_type.is_set
	|| main_interface.is_set
	|| state.is_set
	|| virtual_if_name.is_set
	|| (oper !=  nullptr && oper->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(bp_type.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(bridge_port_id.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter)
	|| (oper !=  nullptr && oper->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-bridge-port-detail" <<"[xcid='" <<xcid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (bp_type.is_set || is_set(bp_type.yfilter)) leaf_name_data.push_back(bp_type.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (bridge_port_id.is_set || is_set(bridge_port_id.yfilter)) leaf_name_data.push_back(bridge_port_id.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper>();
        }
        return oper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oper != nullptr)
    {
        children["oper"] = oper;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bp-type")
    {
        bp_type = value;
        bp_type.value_namespace = name_space;
        bp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-id")
    {
        bridge_port_id = value;
        bridge_port_id.value_namespace = name_space;
        bridge_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "bp-type")
    {
        bp_type.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "bridge-port-id")
    {
        bridge_port_id.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oper" || name == "xcid" || name == "bp-type" || name == "bridge-id" || name == "bridge-port-id" || name == "main-if-type" || name == "main-interface" || name == "state" || name == "virtual-if-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::Oper()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"}
    	,
    operational_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation>())
{
    operational_information->parent = this;

    yang_name = "oper"; yang_parent_name = "l2fib-main-interface-instance-bridge-port-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::~Oper()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| (operational_information !=  nullptr && operational_information->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| (operational_information !=  nullptr && operational_information->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operational-information")
    {
        if(operational_information == nullptr)
        {
            operational_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation>();
        }
        return operational_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(operational_information != nullptr)
    {
        children["operational-information"] = operational_information;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operational-information" || name == "broadcast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "multicast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "unicast-storm-control-kb-ps" || name == "unicast-storm-control-pps")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::OperationalInformation()
    :
    admin_disabled{YType::boolean, "admin-disabled"},
    bvi_configured{YType::boolean, "bvi-configured"},
    dhcp_enabled{YType::boolean, "dhcp-enabled"},
    dhcp_trusted{YType::boolean, "dhcp-trusted"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    igmp_flood_forward_enabled{YType::boolean, "igmp-flood-forward-enabled"},
    igmp_mroute_port_enabled{YType::boolean, "igmp-mroute-port-enabled"},
    igmp_route_guard_enabled{YType::boolean, "igmp-route-guard-enabled"},
    igmp_snoop_enabled{YType::boolean, "igmp-snoop-enabled"},
    igmp_snoop_profile_enabled{YType::boolean, "igmp-snoop-profile-enabled"},
    is_bvi_up{YType::boolean, "is-bvi-up"},
    is_dai_addr_validation_destination_mac_enabled{YType::boolean, "is-dai-addr-validation-destination-mac-enabled"},
    is_dai_addr_validation_ipv4_enabled{YType::boolean, "is-dai-addr-validation-ipv4-enabled"},
    is_dai_addr_validation_source_mac_enabled{YType::boolean, "is-dai-addr-validation-source-mac-enabled"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_evpn_cw_disable{YType::boolean, "is-evpn-cw-disable"},
    is_evpn_enabled{YType::boolean, "is-evpn-enabled"},
    is_evpn_flow_label{YType::boolean, "is-evpn-flow-label"},
    is_igmp_snoop_enabled{YType::boolean, "is-igmp-snoop-enabled"},
    is_ipsg_enabled{YType::boolean, "is-ipsg-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_mac_secure_accept_shutdown{YType::boolean, "is-mac-secure-accept-shutdown"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    is_mac_secure_threshold_enabled{YType::boolean, "is-mac-secure-threshold-enabled"},
    is_p2mp_pw_enabled{YType::boolean, "is-p2mp-pw-enabled"},
    is_pbbevpn_enabled{YType::boolean, "is-pbbevpn-enabled"},
    is_swmac_learning{YType::boolean, "is-swmac-learning"},
    is_vni_enabled{YType::boolean, "is-vni-enabled"},
    is_vpls_flood_optimization_enabled{YType::boolean, "is-vpls-flood-optimization-enabled"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_aging_type{YType::boolean, "mac-aging-type"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification_type{YType::enumeration, "mac-limit-notification-type"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    mld_flood_forward_enabled{YType::boolean, "mld-flood-forward-enabled"},
    mld_mroute_port_enabled{YType::boolean, "mld-mroute-port-enabled"},
    mld_route_guard_enabled{YType::boolean, "mld-route-guard-enabled"},
    mld_snoop_enabled{YType::boolean, "mld-snoop-enabled"},
    mld_snoop_profile_enabled{YType::boolean, "mld-snoop-profile-enabled"},
    msti{YType::uint32, "msti"},
    mtu{YType::uint32, "mtu"},
    number_of_macs{YType::uint32, "number-of-macs"},
    nv_satellite_offload_ipv4_multicast_disabled{YType::boolean, "nv-satellite-offload-ipv4-multicast-disabled"},
    storm_control_broadcast_enabled{YType::boolean, "storm-control-broadcast-enabled"},
    storm_control_broadcast_rate_unit{YType::enumeration, "storm-control-broadcast-rate-unit"},
    storm_control_multicast_enabled{YType::boolean, "storm-control-multicast-enabled"},
    storm_control_multicast_rate_unit{YType::enumeration, "storm-control-multicast-rate-unit"},
    storm_control_unicast_enabled{YType::boolean, "storm-control-unicast-enabled"},
    storm_control_unicast_rate_unit{YType::enumeration, "storm-control-unicast-rate-unit"},
    stp_participating{YType::boolean, "stp-participating"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"}
{

    yang_name = "operational-information"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::~OperationalInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::has_data() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_data())
            return true;
    }
    return admin_disabled.is_set
	|| bvi_configured.is_set
	|| dhcp_enabled.is_set
	|| dhcp_trusted.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| flooding_disabled.is_set
	|| igmp_flood_forward_enabled.is_set
	|| igmp_mroute_port_enabled.is_set
	|| igmp_route_guard_enabled.is_set
	|| igmp_snoop_enabled.is_set
	|| igmp_snoop_profile_enabled.is_set
	|| is_bvi_up.is_set
	|| is_dai_addr_validation_destination_mac_enabled.is_set
	|| is_dai_addr_validation_ipv4_enabled.is_set
	|| is_dai_addr_validation_source_mac_enabled.is_set
	|| is_dai_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_evpn_cw_disable.is_set
	|| is_evpn_enabled.is_set
	|| is_evpn_flow_label.is_set
	|| is_igmp_snoop_enabled.is_set
	|| is_ipsg_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_mac_secure_accept_shutdown.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| is_mac_secure_threshold_enabled.is_set
	|| is_p2mp_pw_enabled.is_set
	|| is_pbbevpn_enabled.is_set
	|| is_swmac_learning.is_set
	|| is_vni_enabled.is_set
	|| is_vpls_flood_optimization_enabled.is_set
	|| mac_aging_time.is_set
	|| mac_aging_type.is_set
	|| mac_learning_disabled.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification_type.is_set
	|| mac_limit_threshold.is_set
	|| mac_port_down_flush_disabled.is_set
	|| mac_secure_action.is_set
	|| mld_flood_forward_enabled.is_set
	|| mld_mroute_port_enabled.is_set
	|| mld_route_guard_enabled.is_set
	|| mld_snoop_enabled.is_set
	|| mld_snoop_profile_enabled.is_set
	|| msti.is_set
	|| mtu.is_set
	|| number_of_macs.is_set
	|| nv_satellite_offload_ipv4_multicast_disabled.is_set
	|| storm_control_broadcast_enabled.is_set
	|| storm_control_broadcast_rate_unit.is_set
	|| storm_control_multicast_enabled.is_set
	|| storm_control_multicast_rate_unit.is_set
	|| storm_control_unicast_enabled.is_set
	|| storm_control_unicast_rate_unit.is_set
	|| stp_participating.is_set
	|| unknown_unicast_flooding_disabled.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::has_operation() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admin_disabled.yfilter)
	|| ydk::is_set(bvi_configured.yfilter)
	|| ydk::is_set(dhcp_enabled.yfilter)
	|| ydk::is_set(dhcp_trusted.yfilter)
	|| ydk::is_set(flood_unknown_unicast_enabled.yfilter)
	|| ydk::is_set(flooding_disabled.yfilter)
	|| ydk::is_set(igmp_flood_forward_enabled.yfilter)
	|| ydk::is_set(igmp_mroute_port_enabled.yfilter)
	|| ydk::is_set(igmp_route_guard_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_profile_enabled.yfilter)
	|| ydk::is_set(is_bvi_up.yfilter)
	|| ydk::is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_ipv4_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_source_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_enabled.yfilter)
	|| ydk::is_set(is_dai_logging_enabled.yfilter)
	|| ydk::is_set(is_evpn_cw_disable.yfilter)
	|| ydk::is_set(is_evpn_enabled.yfilter)
	|| ydk::is_set(is_evpn_flow_label.yfilter)
	|| ydk::is_set(is_igmp_snoop_enabled.yfilter)
	|| ydk::is_set(is_ipsg_enabled.yfilter)
	|| ydk::is_set(is_ipsg_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_accept_shutdown.yfilter)
	|| ydk::is_set(is_mac_secure_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_threshold_enabled.yfilter)
	|| ydk::is_set(is_p2mp_pw_enabled.yfilter)
	|| ydk::is_set(is_pbbevpn_enabled.yfilter)
	|| ydk::is_set(is_swmac_learning.yfilter)
	|| ydk::is_set(is_vni_enabled.yfilter)
	|| ydk::is_set(is_vpls_flood_optimization_enabled.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(mac_aging_type.yfilter)
	|| ydk::is_set(mac_learning_disabled.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_limit_notification_type.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mac_port_down_flush_disabled.yfilter)
	|| ydk::is_set(mac_secure_action.yfilter)
	|| ydk::is_set(mld_flood_forward_enabled.yfilter)
	|| ydk::is_set(mld_mroute_port_enabled.yfilter)
	|| ydk::is_set(mld_route_guard_enabled.yfilter)
	|| ydk::is_set(mld_snoop_enabled.yfilter)
	|| ydk::is_set(mld_snoop_profile_enabled.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(number_of_macs.yfilter)
	|| ydk::is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter)
	|| ydk::is_set(storm_control_broadcast_enabled.yfilter)
	|| ydk::is_set(storm_control_broadcast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_multicast_enabled.yfilter)
	|| ydk::is_set(storm_control_multicast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_unicast_enabled.yfilter)
	|| ydk::is_set(storm_control_unicast_rate_unit.yfilter)
	|| ydk::is_set(stp_participating.yfilter)
	|| ydk::is_set(unknown_unicast_flooding_disabled.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_disabled.is_set || is_set(admin_disabled.yfilter)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (bvi_configured.is_set || is_set(bvi_configured.yfilter)) leaf_name_data.push_back(bvi_configured.get_name_leafdata());
    if (dhcp_enabled.is_set || is_set(dhcp_enabled.yfilter)) leaf_name_data.push_back(dhcp_enabled.get_name_leafdata());
    if (dhcp_trusted.is_set || is_set(dhcp_trusted.yfilter)) leaf_name_data.push_back(dhcp_trusted.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.yfilter)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.yfilter)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (igmp_flood_forward_enabled.is_set || is_set(igmp_flood_forward_enabled.yfilter)) leaf_name_data.push_back(igmp_flood_forward_enabled.get_name_leafdata());
    if (igmp_mroute_port_enabled.is_set || is_set(igmp_mroute_port_enabled.yfilter)) leaf_name_data.push_back(igmp_mroute_port_enabled.get_name_leafdata());
    if (igmp_route_guard_enabled.is_set || is_set(igmp_route_guard_enabled.yfilter)) leaf_name_data.push_back(igmp_route_guard_enabled.get_name_leafdata());
    if (igmp_snoop_enabled.is_set || is_set(igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_enabled.get_name_leafdata());
    if (igmp_snoop_profile_enabled.is_set || is_set(igmp_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_profile_enabled.get_name_leafdata());
    if (is_bvi_up.is_set || is_set(is_bvi_up.yfilter)) leaf_name_data.push_back(is_bvi_up.get_name_leafdata());
    if (is_dai_addr_validation_destination_mac_enabled.is_set || is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validation_ipv4_enabled.is_set || is_set(is_dai_addr_validation_ipv4_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validation_source_mac_enabled.is_set || is_set(is_dai_addr_validation_source_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.yfilter)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.yfilter)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_evpn_cw_disable.is_set || is_set(is_evpn_cw_disable.yfilter)) leaf_name_data.push_back(is_evpn_cw_disable.get_name_leafdata());
    if (is_evpn_enabled.is_set || is_set(is_evpn_enabled.yfilter)) leaf_name_data.push_back(is_evpn_enabled.get_name_leafdata());
    if (is_evpn_flow_label.is_set || is_set(is_evpn_flow_label.yfilter)) leaf_name_data.push_back(is_evpn_flow_label.get_name_leafdata());
    if (is_igmp_snoop_enabled.is_set || is_set(is_igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(is_igmp_snoop_enabled.get_name_leafdata());
    if (is_ipsg_enabled.is_set || is_set(is_ipsg_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown.is_set || is_set(is_mac_secure_accept_shutdown.yfilter)) leaf_name_data.push_back(is_mac_secure_accept_shutdown.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_mac_secure_threshold_enabled.is_set || is_set(is_mac_secure_threshold_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_threshold_enabled.get_name_leafdata());
    if (is_p2mp_pw_enabled.is_set || is_set(is_p2mp_pw_enabled.yfilter)) leaf_name_data.push_back(is_p2mp_pw_enabled.get_name_leafdata());
    if (is_pbbevpn_enabled.is_set || is_set(is_pbbevpn_enabled.yfilter)) leaf_name_data.push_back(is_pbbevpn_enabled.get_name_leafdata());
    if (is_swmac_learning.is_set || is_set(is_swmac_learning.yfilter)) leaf_name_data.push_back(is_swmac_learning.get_name_leafdata());
    if (is_vni_enabled.is_set || is_set(is_vni_enabled.yfilter)) leaf_name_data.push_back(is_vni_enabled.get_name_leafdata());
    if (is_vpls_flood_optimization_enabled.is_set || is_set(is_vpls_flood_optimization_enabled.yfilter)) leaf_name_data.push_back(is_vpls_flood_optimization_enabled.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_aging_type.is_set || is_set(mac_aging_type.yfilter)) leaf_name_data.push_back(mac_aging_type.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.yfilter)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification_type.is_set || is_set(mac_limit_notification_type.yfilter)) leaf_name_data.push_back(mac_limit_notification_type.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.yfilter)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_flood_forward_enabled.is_set || is_set(mld_flood_forward_enabled.yfilter)) leaf_name_data.push_back(mld_flood_forward_enabled.get_name_leafdata());
    if (mld_mroute_port_enabled.is_set || is_set(mld_mroute_port_enabled.yfilter)) leaf_name_data.push_back(mld_mroute_port_enabled.get_name_leafdata());
    if (mld_route_guard_enabled.is_set || is_set(mld_route_guard_enabled.yfilter)) leaf_name_data.push_back(mld_route_guard_enabled.get_name_leafdata());
    if (mld_snoop_enabled.is_set || is_set(mld_snoop_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_enabled.get_name_leafdata());
    if (mld_snoop_profile_enabled.is_set || is_set(mld_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_profile_enabled.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (number_of_macs.is_set || is_set(number_of_macs.yfilter)) leaf_name_data.push_back(number_of_macs.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());
    if (storm_control_broadcast_enabled.is_set || is_set(storm_control_broadcast_enabled.yfilter)) leaf_name_data.push_back(storm_control_broadcast_enabled.get_name_leafdata());
    if (storm_control_broadcast_rate_unit.is_set || is_set(storm_control_broadcast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_broadcast_rate_unit.get_name_leafdata());
    if (storm_control_multicast_enabled.is_set || is_set(storm_control_multicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_multicast_enabled.get_name_leafdata());
    if (storm_control_multicast_rate_unit.is_set || is_set(storm_control_multicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_multicast_rate_unit.get_name_leafdata());
    if (storm_control_unicast_enabled.is_set || is_set(storm_control_unicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_unicast_enabled.get_name_leafdata());
    if (storm_control_unicast_rate_unit.is_set || is_set(storm_control_unicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_unicast_rate_unit.get_name_leafdata());
    if (stp_participating.is_set || is_set(stp_participating.yfilter)) leaf_name_data.push_back(stp_participating.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.yfilter)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feature")
    {
        for(auto const & c : feature)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature>();
        c->parent = this;
        feature.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : feature)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
        admin_disabled.value_namespace = name_space;
        admin_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured = value;
        bvi_configured.value_namespace = name_space;
        bvi_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled = value;
        dhcp_enabled.value_namespace = name_space;
        dhcp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted = value;
        dhcp_trusted.value_namespace = name_space;
        dhcp_trusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
        flood_unknown_unicast_enabled.value_namespace = name_space;
        flood_unknown_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
        flooding_disabled.value_namespace = name_space;
        flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled = value;
        igmp_flood_forward_enabled.value_namespace = name_space;
        igmp_flood_forward_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled = value;
        igmp_mroute_port_enabled.value_namespace = name_space;
        igmp_mroute_port_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled = value;
        igmp_route_guard_enabled.value_namespace = name_space;
        igmp_route_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled = value;
        igmp_snoop_enabled.value_namespace = name_space;
        igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled = value;
        igmp_snoop_profile_enabled.value_namespace = name_space;
        igmp_snoop_profile_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up = value;
        is_bvi_up.value_namespace = name_space;
        is_bvi_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled = value;
        is_dai_addr_validation_destination_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_destination_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled = value;
        is_dai_addr_validation_ipv4_enabled.value_namespace = name_space;
        is_dai_addr_validation_ipv4_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled = value;
        is_dai_addr_validation_source_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_source_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
        is_dai_enabled.value_namespace = name_space;
        is_dai_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
        is_dai_logging_enabled.value_namespace = name_space;
        is_dai_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable = value;
        is_evpn_cw_disable.value_namespace = name_space;
        is_evpn_cw_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled = value;
        is_evpn_enabled.value_namespace = name_space;
        is_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label = value;
        is_evpn_flow_label.value_namespace = name_space;
        is_evpn_flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled = value;
        is_igmp_snoop_enabled.value_namespace = name_space;
        is_igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled = value;
        is_ipsg_enabled.value_namespace = name_space;
        is_ipsg_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
        is_ipsg_logging_enabled.value_namespace = name_space;
        is_ipsg_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown = value;
        is_mac_secure_accept_shutdown.value_namespace = name_space;
        is_mac_secure_accept_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
        is_mac_secure_enabled.value_namespace = name_space;
        is_mac_secure_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
        is_mac_secure_logging_enabled.value_namespace = name_space;
        is_mac_secure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled = value;
        is_mac_secure_threshold_enabled.value_namespace = name_space;
        is_mac_secure_threshold_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled = value;
        is_p2mp_pw_enabled.value_namespace = name_space;
        is_p2mp_pw_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled = value;
        is_pbbevpn_enabled.value_namespace = name_space;
        is_pbbevpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning = value;
        is_swmac_learning.value_namespace = name_space;
        is_swmac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled = value;
        is_vni_enabled.value_namespace = name_space;
        is_vni_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled = value;
        is_vpls_flood_optimization_enabled.value_namespace = name_space;
        is_vpls_flood_optimization_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type = value;
        mac_aging_type.value_namespace = name_space;
        mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
        mac_learning_disabled.value_namespace = name_space;
        mac_learning_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type = value;
        mac_limit_notification_type.value_namespace = name_space;
        mac_limit_notification_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
        mac_port_down_flush_disabled.value_namespace = name_space;
        mac_port_down_flush_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
        mac_secure_action.value_namespace = name_space;
        mac_secure_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled = value;
        mld_flood_forward_enabled.value_namespace = name_space;
        mld_flood_forward_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled = value;
        mld_mroute_port_enabled.value_namespace = name_space;
        mld_mroute_port_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled = value;
        mld_route_guard_enabled.value_namespace = name_space;
        mld_route_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled = value;
        mld_snoop_enabled.value_namespace = name_space;
        mld_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled = value;
        mld_snoop_profile_enabled.value_namespace = name_space;
        mld_snoop_profile_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs = value;
        number_of_macs.value_namespace = name_space;
        number_of_macs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace = name_space;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled = value;
        storm_control_broadcast_enabled.value_namespace = name_space;
        storm_control_broadcast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit = value;
        storm_control_broadcast_rate_unit.value_namespace = name_space;
        storm_control_broadcast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled = value;
        storm_control_multicast_enabled.value_namespace = name_space;
        storm_control_multicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit = value;
        storm_control_multicast_rate_unit.value_namespace = name_space;
        storm_control_multicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled = value;
        storm_control_unicast_enabled.value_namespace = name_space;
        storm_control_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit = value;
        storm_control_unicast_rate_unit.value_namespace = name_space;
        storm_control_unicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp-participating")
    {
        stp_participating = value;
        stp_participating.value_namespace = name_space;
        stp_participating.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
        unknown_unicast_flooding_disabled.value_namespace = name_space;
        unknown_unicast_flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled.yfilter = yfilter;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured.yfilter = yfilter;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled.yfilter = yfilter;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted.yfilter = yfilter;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable.yfilter = yfilter;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled.yfilter = yfilter;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label.yfilter = yfilter;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled.yfilter = yfilter;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled.yfilter = yfilter;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled.yfilter = yfilter;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning.yfilter = yfilter;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled.yfilter = yfilter;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action.yfilter = yfilter;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs.yfilter = yfilter;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "stp-participating")
    {
        stp_participating.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "feature" || name == "admin-disabled" || name == "bvi-configured" || name == "dhcp-enabled" || name == "dhcp-trusted" || name == "flood-unknown-unicast-enabled" || name == "flooding-disabled" || name == "igmp-flood-forward-enabled" || name == "igmp-mroute-port-enabled" || name == "igmp-route-guard-enabled" || name == "igmp-snoop-enabled" || name == "igmp-snoop-profile-enabled" || name == "is-bvi-up" || name == "is-dai-addr-validation-destination-mac-enabled" || name == "is-dai-addr-validation-ipv4-enabled" || name == "is-dai-addr-validation-source-mac-enabled" || name == "is-dai-enabled" || name == "is-dai-logging-enabled" || name == "is-evpn-cw-disable" || name == "is-evpn-enabled" || name == "is-evpn-flow-label" || name == "is-igmp-snoop-enabled" || name == "is-ipsg-enabled" || name == "is-ipsg-logging-enabled" || name == "is-mac-secure-accept-shutdown" || name == "is-mac-secure-enabled" || name == "is-mac-secure-logging-enabled" || name == "is-mac-secure-threshold-enabled" || name == "is-p2mp-pw-enabled" || name == "is-pbbevpn-enabled" || name == "is-swmac-learning" || name == "is-vni-enabled" || name == "is-vpls-flood-optimization-enabled" || name == "mac-aging-time" || name == "mac-aging-type" || name == "mac-learning-disabled" || name == "mac-limit" || name == "mac-limit-action" || name == "mac-limit-notification-type" || name == "mac-limit-threshold" || name == "mac-port-down-flush-disabled" || name == "mac-secure-action" || name == "mld-flood-forward-enabled" || name == "mld-mroute-port-enabled" || name == "mld-route-guard-enabled" || name == "mld-snoop-enabled" || name == "mld-snoop-profile-enabled" || name == "msti" || name == "mtu" || name == "number-of-macs" || name == "nv-satellite-offload-ipv4-multicast-disabled" || name == "storm-control-broadcast-enabled" || name == "storm-control-broadcast-rate-unit" || name == "storm-control-multicast-enabled" || name == "storm-control-multicast-rate-unit" || name == "storm-control-unicast-enabled" || name == "storm-control-unicast-rate-unit" || name == "stp-participating" || name == "unknown-unicast-flooding-disabled")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Feature()
    :
    feature_type{YType::enumeration, "feature-type"}
    	,
    dhcp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp>())
	,igmp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp>())
	,mld(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld>())
{
    dhcp->parent = this;
    igmp->parent = this;
    mld->parent = this;

    yang_name = "feature"; yang_parent_name = "operational-information"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::~Feature()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::has_data() const
{
    return feature_type.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (mld !=  nullptr && mld->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(feature_type.yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (mld !=  nullptr && mld->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_type.is_set || is_set(feature_type.yfilter)) leaf_name_data.push_back(feature_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "mld")
    {
        if(mld == nullptr)
        {
            mld = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld>();
        }
        return mld;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(mld != nullptr)
    {
        children["mld"] = mld;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "feature-type")
    {
        feature_type = value;
        feature_type.value_namespace = name_space;
        feature_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "feature-type")
    {
        feature_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "igmp" || name == "mld" || name == "feature-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::Dhcp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "dhcp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::~Dhcp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::Igmp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "igmp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::~Igmp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::Mld()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "mld"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::~Mld()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePorts()
{

    yang_name = "l2fib-main-interface-instance-bridge-ports"; yang_parent_name = "l2fib-main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::~L2FibMainInterfaceInstanceBridgePorts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::has_data() const
{
    for (std::size_t index=0; index<l2fib_main_interface_instance_bridge_port.size(); index++)
    {
        if(l2fib_main_interface_instance_bridge_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::has_operation() const
{
    for (std::size_t index=0; index<l2fib_main_interface_instance_bridge_port.size(); index++)
    {
        if(l2fib_main_interface_instance_bridge_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-bridge-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-main-interface-instance-bridge-port")
    {
        for(auto const & c : l2fib_main_interface_instance_bridge_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort>();
        c->parent = this;
        l2fib_main_interface_instance_bridge_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_main_interface_instance_bridge_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-main-interface-instance-bridge-port")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::L2FibMainInterfaceInstanceBridgePort()
    :
    xcid{YType::str, "xcid"},
    bp_type{YType::uint8, "bp-type"},
    bridge_id{YType::uint32, "bridge-id"},
    bridge_port_id{YType::str, "bridge-port-id"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    virtual_if_name{YType::str, "virtual-if-name"}
{

    yang_name = "l2fib-main-interface-instance-bridge-port"; yang_parent_name = "l2fib-main-interface-instance-bridge-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::~L2FibMainInterfaceInstanceBridgePort()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::has_data() const
{
    return xcid.is_set
	|| bp_type.is_set
	|| bridge_id.is_set
	|| bridge_port_id.is_set
	|| main_if_type.is_set
	|| main_interface.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(bp_type.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(bridge_port_id.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-bridge-port" <<"[xcid='" <<xcid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (bp_type.is_set || is_set(bp_type.yfilter)) leaf_name_data.push_back(bp_type.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (bridge_port_id.is_set || is_set(bridge_port_id.yfilter)) leaf_name_data.push_back(bridge_port_id.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bp-type")
    {
        bp_type = value;
        bp_type.value_namespace = name_space;
        bp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-id")
    {
        bridge_port_id = value;
        bridge_port_id.value_namespace = name_space;
        bridge_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "bp-type")
    {
        bp_type.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "bridge-port-id")
    {
        bridge_port_id.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid" || name == "bp-type" || name == "bridge-id" || name == "bridge-port-id" || name == "main-if-type" || name == "main-interface" || name == "virtual-if-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::L2FibMainInterfaceInstanceDetailInfo()
    :
    bridge_port_count{YType::uint32, "bridge-port-count"},
    instance{YType::uint32, "instance"},
    instance_provisioned{YType::boolean, "instance-provisioned"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    state{YType::enumeration, "state"},
    virtual_if_name{YType::str, "virtual-if-name"}
{

    yang_name = "l2fib-main-interface-instance-detail-info"; yang_parent_name = "l2fib-main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::~L2FibMainInterfaceInstanceDetailInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::has_data() const
{
    return bridge_port_count.is_set
	|| instance.is_set
	|| instance_provisioned.is_set
	|| main_if_type.is_set
	|| main_interface.is_set
	|| state.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(instance_provisioned.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.yfilter)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
        instance_provisioned.value_namespace = name_space;
        instance_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-port-count" || name == "instance" || name == "instance-provisioned" || name == "main-if-type" || name == "main-interface" || name == "state" || name == "virtual-if-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::L2FibMainInterfaceInstanceHardwareEgressDetailInfo()
    :
    bridge_port_count{YType::uint32, "bridge-port-count"},
    instance{YType::uint32, "instance"},
    instance_provisioned{YType::boolean, "instance-provisioned"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    state{YType::enumeration, "state"},
    virtual_if_name{YType::str, "virtual-if-name"}
{

    yang_name = "l2fib-main-interface-instance-hardware-egress-detail-info"; yang_parent_name = "l2fib-main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::~L2FibMainInterfaceInstanceHardwareEgressDetailInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::has_data() const
{
    return bridge_port_count.is_set
	|| instance.is_set
	|| instance_provisioned.is_set
	|| main_if_type.is_set
	|| main_interface.is_set
	|| state.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(instance_provisioned.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-hardware-egress-detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.yfilter)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
        instance_provisioned.value_namespace = name_space;
        instance_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-port-count" || name == "instance" || name == "instance-provisioned" || name == "main-if-type" || name == "main-interface" || name == "state" || name == "virtual-if-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::L2FibMainInterfaceInstanceHardwareEgressInfo()
    :
    bridge_port_count{YType::uint32, "bridge-port-count"},
    instance{YType::uint32, "instance"},
    instance_provisioned{YType::boolean, "instance-provisioned"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    state{YType::enumeration, "state"},
    virtual_if_name{YType::str, "virtual-if-name"}
{

    yang_name = "l2fib-main-interface-instance-hardware-egress-info"; yang_parent_name = "l2fib-main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::~L2FibMainInterfaceInstanceHardwareEgressInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::has_data() const
{
    return bridge_port_count.is_set
	|| instance.is_set
	|| instance_provisioned.is_set
	|| main_if_type.is_set
	|| main_interface.is_set
	|| state.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(instance_provisioned.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-hardware-egress-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.yfilter)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
        instance_provisioned.value_namespace = name_space;
        instance_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-port-count" || name == "instance" || name == "instance-provisioned" || name == "main-if-type" || name == "main-interface" || name == "state" || name == "virtual-if-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::L2FibMainInterfaceInstanceHardwareIngressDetailInfo()
    :
    bridge_port_count{YType::uint32, "bridge-port-count"},
    instance{YType::uint32, "instance"},
    instance_provisioned{YType::boolean, "instance-provisioned"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    state{YType::enumeration, "state"},
    virtual_if_name{YType::str, "virtual-if-name"}
{

    yang_name = "l2fib-main-interface-instance-hardware-ingress-detail-info"; yang_parent_name = "l2fib-main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::~L2FibMainInterfaceInstanceHardwareIngressDetailInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::has_data() const
{
    return bridge_port_count.is_set
	|| instance.is_set
	|| instance_provisioned.is_set
	|| main_if_type.is_set
	|| main_interface.is_set
	|| state.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(instance_provisioned.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-hardware-ingress-detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.yfilter)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
        instance_provisioned.value_namespace = name_space;
        instance_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-port-count" || name == "instance" || name == "instance-provisioned" || name == "main-if-type" || name == "main-interface" || name == "state" || name == "virtual-if-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::L2FibMainInterfaceInstanceHardwareIngressInfo()
    :
    bridge_port_count{YType::uint32, "bridge-port-count"},
    instance{YType::uint32, "instance"},
    instance_provisioned{YType::boolean, "instance-provisioned"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    state{YType::enumeration, "state"},
    virtual_if_name{YType::str, "virtual-if-name"}
{

    yang_name = "l2fib-main-interface-instance-hardware-ingress-info"; yang_parent_name = "l2fib-main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::~L2FibMainInterfaceInstanceHardwareIngressInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::has_data() const
{
    return bridge_port_count.is_set
	|| instance.is_set
	|| instance_provisioned.is_set
	|| main_if_type.is_set
	|| main_interface.is_set
	|| state.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(instance_provisioned.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-hardware-ingress-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.yfilter)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
        instance_provisioned.value_namespace = name_space;
        instance_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-port-count" || name == "instance" || name == "instance-provisioned" || name == "main-if-type" || name == "main-interface" || name == "state" || name == "virtual-if-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::L2FibMainInterfaceInstanceInfo()
    :
    bridge_port_count{YType::uint32, "bridge-port-count"},
    instance{YType::uint32, "instance"},
    instance_provisioned{YType::boolean, "instance-provisioned"},
    main_if_type{YType::uint8, "main-if-type"},
    main_interface{YType::str, "main-interface"},
    state{YType::enumeration, "state"},
    virtual_if_name{YType::str, "virtual-if-name"}
{

    yang_name = "l2fib-main-interface-instance-info"; yang_parent_name = "l2fib-main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::~L2FibMainInterfaceInstanceInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::has_data() const
{
    return bridge_port_count.is_set
	|| instance.is_set
	|| instance_provisioned.is_set
	|| main_if_type.is_set
	|| main_interface.is_set
	|| state.is_set
	|| virtual_if_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_port_count.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(instance_provisioned.yfilter)
	|| ydk::is_set(main_if_type.yfilter)
	|| ydk::is_set(main_interface.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(virtual_if_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-main-interface-instance-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_count.is_set || is_set(bridge_port_count.yfilter)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (instance_provisioned.is_set || is_set(instance_provisioned.yfilter)) leaf_name_data.push_back(instance_provisioned.get_name_leafdata());
    if (main_if_type.is_set || is_set(main_if_type.yfilter)) leaf_name_data.push_back(main_if_type.get_name_leafdata());
    if (main_interface.is_set || is_set(main_interface.yfilter)) leaf_name_data.push_back(main_interface.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (virtual_if_name.is_set || is_set(virtual_if_name.yfilter)) leaf_name_data.push_back(virtual_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
        bridge_port_count.value_namespace = name_space;
        bridge_port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned = value;
        instance_provisioned.value_namespace = name_space;
        instance_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-if-type")
    {
        main_if_type = value;
        main_if_type.value_namespace = name_space;
        main_if_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface")
    {
        main_interface = value;
        main_interface.value_namespace = name_space;
        main_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name = value;
        virtual_if_name.value_namespace = name_space;
        virtual_if_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-port-count")
    {
        bridge_port_count.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "instance-provisioned")
    {
        instance_provisioned.yfilter = yfilter;
    }
    if(value_path == "main-if-type")
    {
        main_if_type.yfilter = yfilter;
    }
    if(value_path == "main-interface")
    {
        main_interface.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "virtual-if-name")
    {
        virtual_if_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-port-count" || name == "instance" || name == "instance-provisioned" || name == "main-if-type" || name == "main-interface" || name == "state" || name == "virtual-if-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::L2FibMessageSummary()
    :
    event_history(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory>())
	,round_trip_delay(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay>())
{
    event_history->parent = this;
    round_trip_delay->parent = this;

    yang_name = "l2fib-message-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::~L2FibMessageSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::has_data() const
{
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_data())
            return true;
    }
    return (event_history !=  nullptr && event_history->has_data())
	|| (round_trip_delay !=  nullptr && round_trip_delay->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::has_operation() const
{
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (event_history !=  nullptr && event_history->has_operation())
	|| (round_trip_delay !=  nullptr && round_trip_delay->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-message-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-history")
    {
        if(event_history == nullptr)
        {
            event_history = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory>();
        }
        return event_history;
    }

    if(child_yang_name == "message")
    {
        for(auto const & c : message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message>();
        c->parent = this;
        message.push_back(c);
        return c;
    }

    if(child_yang_name == "round-trip-delay")
    {
        if(round_trip_delay == nullptr)
        {
            round_trip_delay = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay>();
        }
        return round_trip_delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event_history != nullptr)
    {
        children["event-history"] = event_history;
    }

    for (auto const & c : message)
    {
        children[c->get_segment_path()] = c;
    }

    if(round_trip_delay != nullptr)
    {
        children["round-trip-delay"] = round_trip_delay;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-history" || name == "message" || name == "round-trip-delay")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventHistory()
    :
    event_neighbor_entry{YType::uint16, "event-neighbor-entry"}
{

    yang_name = "event-history"; yang_parent_name = "l2fib-message-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::~EventHistory()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::has_data() const
{
    for (std::size_t index=0; index<event_entry.size(); index++)
    {
        if(event_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extra_information1.size(); index++)
    {
        if(extra_information1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extra_information2.size(); index++)
    {
        if(extra_information2[index]->has_data())
            return true;
    }
    return event_neighbor_entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::has_operation() const
{
    for (std::size_t index=0; index<event_entry.size(); index++)
    {
        if(event_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extra_information1.size(); index++)
    {
        if(extra_information1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extra_information2.size(); index++)
    {
        if(extra_information2[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_neighbor_entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_neighbor_entry.is_set || is_set(event_neighbor_entry.yfilter)) leaf_name_data.push_back(event_neighbor_entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-entry")
    {
        for(auto const & c : event_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry>();
        c->parent = this;
        event_entry.push_back(c);
        return c;
    }

    if(child_yang_name == "extra-information1")
    {
        for(auto const & c : extra_information1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation1>();
        c->parent = this;
        extra_information1.push_back(c);
        return c;
    }

    if(child_yang_name == "extra-information2")
    {
        for(auto const & c : extra_information2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation2>();
        c->parent = this;
        extra_information2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : event_entry)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extra_information1)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extra_information2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-neighbor-entry")
    {
        event_neighbor_entry = value;
        event_neighbor_entry.value_namespace = name_space;
        event_neighbor_entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-neighbor-entry")
    {
        event_neighbor_entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-entry" || name == "extra-information1" || name == "extra-information2" || name == "event-neighbor-entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::EventEntry()
    :
    event_flags{YType::uint32, "event-flags"},
    event_many{YType::boolean, "event-many"},
    event_sticky{YType::boolean, "event-sticky"},
    event_time{YType::str, "event-time"},
    event_type{YType::uint8, "event-type"}
{

    yang_name = "event-entry"; yang_parent_name = "event-history"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::~EventEntry()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::has_data() const
{
    return event_flags.is_set
	|| event_many.is_set
	|| event_sticky.is_set
	|| event_time.is_set
	|| event_type.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_flags.yfilter)
	|| ydk::is_set(event_many.yfilter)
	|| ydk::is_set(event_sticky.yfilter)
	|| ydk::is_set(event_time.yfilter)
	|| ydk::is_set(event_type.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_flags.is_set || is_set(event_flags.yfilter)) leaf_name_data.push_back(event_flags.get_name_leafdata());
    if (event_many.is_set || is_set(event_many.yfilter)) leaf_name_data.push_back(event_many.get_name_leafdata());
    if (event_sticky.is_set || is_set(event_sticky.yfilter)) leaf_name_data.push_back(event_sticky.get_name_leafdata());
    if (event_time.is_set || is_set(event_time.yfilter)) leaf_name_data.push_back(event_time.get_name_leafdata());
    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-flags")
    {
        event_flags = value;
        event_flags.value_namespace = name_space;
        event_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-many")
    {
        event_many = value;
        event_many.value_namespace = name_space;
        event_many.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-sticky")
    {
        event_sticky = value;
        event_sticky.value_namespace = name_space;
        event_sticky.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-time")
    {
        event_time = value;
        event_time.value_namespace = name_space;
        event_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-flags")
    {
        event_flags.yfilter = yfilter;
    }
    if(value_path == "event-many")
    {
        event_many.yfilter = yfilter;
    }
    if(value_path == "event-sticky")
    {
        event_sticky.yfilter = yfilter;
    }
    if(value_path == "event-time")
    {
        event_time.yfilter = yfilter;
    }
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-flags" || name == "event-many" || name == "event-sticky" || name == "event-time" || name == "event-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation1::ExtraInformation1()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extra-information1"; yang_parent_name = "event-history"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation1::~ExtraInformation1()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation1::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extra-information1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation2::ExtraInformation2()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extra-information2"; yang_parent_name = "event-history"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation2::~ExtraInformation2()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation2::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extra-information2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::ExtraInformation2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::Message()
    :
    information1{YType::uint32, "information1"},
    information2{YType::uint32, "information2"},
    messgae_count{YType::uint32, "messgae-count"},
    time{YType::str, "time"}
{

    yang_name = "message"; yang_parent_name = "l2fib-message-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::~Message()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::has_data() const
{
    return information1.is_set
	|| information2.is_set
	|| messgae_count.is_set
	|| time.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(information1.yfilter)
	|| ydk::is_set(information2.yfilter)
	|| ydk::is_set(messgae_count.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (information1.is_set || is_set(information1.yfilter)) leaf_name_data.push_back(information1.get_name_leafdata());
    if (information2.is_set || is_set(information2.yfilter)) leaf_name_data.push_back(information2.get_name_leafdata());
    if (messgae_count.is_set || is_set(messgae_count.yfilter)) leaf_name_data.push_back(messgae_count.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "information1")
    {
        information1 = value;
        information1.value_namespace = name_space;
        information1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information2")
    {
        information2 = value;
        information2.value_namespace = name_space;
        information2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messgae-count")
    {
        messgae_count = value;
        messgae_count.value_namespace = name_space;
        messgae_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "information1")
    {
        information1.yfilter = yfilter;
    }
    if(value_path == "information2")
    {
        information2.yfilter = yfilter;
    }
    if(value_path == "messgae-count")
    {
        messgae_count.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information1" || name == "information2" || name == "messgae-count" || name == "time")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::RoundTripDelay()
    :
    rtd_max_obj_type{YType::uint32, "rtd-max-obj-type"}
    	,
    aging_rtd(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd>())
	,bdxc_rtd(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd>())
	,lock_rtd(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd>())
	,platform_init_rtd(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd>())
	,punt_rtd(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd>())
{
    aging_rtd->parent = this;
    bdxc_rtd->parent = this;
    lock_rtd->parent = this;
    platform_init_rtd->parent = this;
    punt_rtd->parent = this;

    yang_name = "round-trip-delay"; yang_parent_name = "l2fib-message-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::~RoundTripDelay()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::has_data() const
{
    for (std::size_t index=0; index<bind.size(); index++)
    {
        if(bind[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<create.size(); index++)
    {
        if(create[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<delete_.size(); index++)
    {
        if(delete_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mac_flush.size(); index++)
    {
        if(mac_flush[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<modify.size(); index++)
    {
        if(modify[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pirtd.size(); index++)
    {
        if(pirtd[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unbind.size(); index++)
    {
        if(unbind[index]->has_data())
            return true;
    }
    return rtd_max_obj_type.is_set
	|| (aging_rtd !=  nullptr && aging_rtd->has_data())
	|| (bdxc_rtd !=  nullptr && bdxc_rtd->has_data())
	|| (lock_rtd !=  nullptr && lock_rtd->has_data())
	|| (platform_init_rtd !=  nullptr && platform_init_rtd->has_data())
	|| (punt_rtd !=  nullptr && punt_rtd->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::has_operation() const
{
    for (std::size_t index=0; index<bind.size(); index++)
    {
        if(bind[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<create.size(); index++)
    {
        if(create[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<delete_.size(); index++)
    {
        if(delete_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mac_flush.size(); index++)
    {
        if(mac_flush[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<modify.size(); index++)
    {
        if(modify[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pirtd.size(); index++)
    {
        if(pirtd[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unbind.size(); index++)
    {
        if(unbind[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rtd_max_obj_type.yfilter)
	|| (aging_rtd !=  nullptr && aging_rtd->has_operation())
	|| (bdxc_rtd !=  nullptr && bdxc_rtd->has_operation())
	|| (lock_rtd !=  nullptr && lock_rtd->has_operation())
	|| (platform_init_rtd !=  nullptr && platform_init_rtd->has_operation())
	|| (punt_rtd !=  nullptr && punt_rtd->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "round-trip-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtd_max_obj_type.is_set || is_set(rtd_max_obj_type.yfilter)) leaf_name_data.push_back(rtd_max_obj_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging-rtd")
    {
        if(aging_rtd == nullptr)
        {
            aging_rtd = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd>();
        }
        return aging_rtd;
    }

    if(child_yang_name == "bdxc-rtd")
    {
        if(bdxc_rtd == nullptr)
        {
            bdxc_rtd = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd>();
        }
        return bdxc_rtd;
    }

    if(child_yang_name == "bind")
    {
        for(auto const & c : bind)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind>();
        c->parent = this;
        bind.push_back(c);
        return c;
    }

    if(child_yang_name == "create")
    {
        for(auto const & c : create)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create>();
        c->parent = this;
        create.push_back(c);
        return c;
    }

    if(child_yang_name == "delete")
    {
        for(auto const & c : delete_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_>();
        c->parent = this;
        delete_.push_back(c);
        return c;
    }

    if(child_yang_name == "lock-rtd")
    {
        if(lock_rtd == nullptr)
        {
            lock_rtd = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd>();
        }
        return lock_rtd;
    }

    if(child_yang_name == "mac-flush")
    {
        for(auto const & c : mac_flush)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush>();
        c->parent = this;
        mac_flush.push_back(c);
        return c;
    }

    if(child_yang_name == "modify")
    {
        for(auto const & c : modify)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify>();
        c->parent = this;
        modify.push_back(c);
        return c;
    }

    if(child_yang_name == "pirtd")
    {
        for(auto const & c : pirtd)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd>();
        c->parent = this;
        pirtd.push_back(c);
        return c;
    }

    if(child_yang_name == "platform-init-rtd")
    {
        if(platform_init_rtd == nullptr)
        {
            platform_init_rtd = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd>();
        }
        return platform_init_rtd;
    }

    if(child_yang_name == "punt-rtd")
    {
        if(punt_rtd == nullptr)
        {
            punt_rtd = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd>();
        }
        return punt_rtd;
    }

    if(child_yang_name == "unbind")
    {
        for(auto const & c : unbind)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind>();
        c->parent = this;
        unbind.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging_rtd != nullptr)
    {
        children["aging-rtd"] = aging_rtd;
    }

    if(bdxc_rtd != nullptr)
    {
        children["bdxc-rtd"] = bdxc_rtd;
    }

    for (auto const & c : bind)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : create)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : delete_)
    {
        children[c->get_segment_path()] = c;
    }

    if(lock_rtd != nullptr)
    {
        children["lock-rtd"] = lock_rtd;
    }

    for (auto const & c : mac_flush)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : modify)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pirtd)
    {
        children[c->get_segment_path()] = c;
    }

    if(platform_init_rtd != nullptr)
    {
        children["platform-init-rtd"] = platform_init_rtd;
    }

    if(punt_rtd != nullptr)
    {
        children["punt-rtd"] = punt_rtd;
    }

    for (auto const & c : unbind)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtd-max-obj-type")
    {
        rtd_max_obj_type = value;
        rtd_max_obj_type.value_namespace = name_space;
        rtd_max_obj_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtd-max-obj-type")
    {
        rtd_max_obj_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging-rtd" || name == "bdxc-rtd" || name == "bind" || name == "create" || name == "delete" || name == "lock-rtd" || name == "mac-flush" || name == "modify" || name == "pirtd" || name == "platform-init-rtd" || name == "punt-rtd" || name == "unbind" || name == "rtd-max-obj-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::AgingRtd()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{

    yang_name = "aging-rtd"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::~AgingRtd()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging-rtd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-round-trip-delay" || name == "maximum-round-trip-delay" || name == "minimum-round-trip-delay" || name == "number-pd-update" || name == "number-pd-update-zero")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::BdxcRtd()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{

    yang_name = "bdxc-rtd"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::~BdxcRtd()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdxc-rtd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-round-trip-delay" || name == "maximum-round-trip-delay" || name == "minimum-round-trip-delay" || name == "number-pd-update" || name == "number-pd-update-zero")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::Bind()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{

    yang_name = "bind"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::~Bind()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-round-trip-delay" || name == "maximum-round-trip-delay" || name == "minimum-round-trip-delay" || name == "number-pd-update" || name == "number-pd-update-zero")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::Create()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{

    yang_name = "create"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::~Create()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "create";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-round-trip-delay" || name == "maximum-round-trip-delay" || name == "minimum-round-trip-delay" || name == "number-pd-update" || name == "number-pd-update-zero")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::Delete_()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{

    yang_name = "delete"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::~Delete_()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-round-trip-delay" || name == "maximum-round-trip-delay" || name == "minimum-round-trip-delay" || name == "number-pd-update" || name == "number-pd-update-zero")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::LockRtd()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{

    yang_name = "lock-rtd"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::~LockRtd()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lock-rtd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-round-trip-delay" || name == "maximum-round-trip-delay" || name == "minimum-round-trip-delay" || name == "number-pd-update" || name == "number-pd-update-zero")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::MacFlush()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{

    yang_name = "mac-flush"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::~MacFlush()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-flush";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-round-trip-delay" || name == "maximum-round-trip-delay" || name == "minimum-round-trip-delay" || name == "number-pd-update" || name == "number-pd-update-zero")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::Modify()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{

    yang_name = "modify"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::~Modify()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-round-trip-delay" || name == "maximum-round-trip-delay" || name == "minimum-round-trip-delay" || name == "number-pd-update" || name == "number-pd-update-zero")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::Pirtd()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{

    yang_name = "pirtd"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::~Pirtd()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pirtd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-round-trip-delay" || name == "maximum-round-trip-delay" || name == "minimum-round-trip-delay" || name == "number-pd-update" || name == "number-pd-update-zero")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::PlatformInitRtd()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{

    yang_name = "platform-init-rtd"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::~PlatformInitRtd()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform-init-rtd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-round-trip-delay" || name == "maximum-round-trip-delay" || name == "minimum-round-trip-delay" || name == "number-pd-update" || name == "number-pd-update-zero")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::PuntRtd()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{

    yang_name = "punt-rtd"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::~PuntRtd()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt-rtd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-round-trip-delay" || name == "maximum-round-trip-delay" || name == "minimum-round-trip-delay" || name == "number-pd-update" || name == "number-pd-update-zero")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::Unbind()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{

    yang_name = "unbind"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::~Unbind()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unbind";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-round-trip-delay" || name == "maximum-round-trip-delay" || name == "minimum-round-trip-delay" || name == "number-pd-update" || name == "number-pd-update-zero")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummaries()
{

    yang_name = "l2fib-mmrp-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::~L2FibMmrpSummaries()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::has_data() const
{
    for (std::size_t index=0; index<l2fib_mmrp_summary.size(); index++)
    {
        if(l2fib_mmrp_summary[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mmrp_summary.size(); index++)
    {
        if(l2fib_mmrp_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mmrp-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mmrp-summary")
    {
        for(auto const & c : l2fib_mmrp_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary>();
        c->parent = this;
        l2fib_mmrp_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_mmrp_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mmrp-summary")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::L2FibMmrpSummary()
    :
    bd_group_name{YType::str, "bd-group-name"},
    bd_name{YType::str, "bd-name"},
    bridge_domain_id{YType::uint32, "bridge-domain-id"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    multicast_update{YType::uint32, "multicast-update"},
    multicast_update_dropped{YType::uint32, "multicast-update-dropped"},
    number_mroute_all_delete_drop{YType::uint32, "number-mroute-all-delete-drop"},
    number_mroute_delete_drop{YType::uint32, "number-mroute-delete-drop"},
    number_mroute_deleted{YType::uint32, "number-mroute-deleted"},
    number_mroutes_deleted_all{YType::uint32, "number-mroutes-deleted-all"},
    number_of_mroute_add{YType::uint32, "number-of-mroute-add"},
    number_of_routes{YType::uint32, "number-of-routes"},
    number_of_routes_with_ole_offload{YType::uint32, "number-of-routes-with-ole-offload"},
    number_of_xid{YType::uint32, "number-of-xid"},
    number_xid_add{YType::uint32, "number-xid-add"},
    number_xid_deleted{YType::uint32, "number-xid-deleted"},
    stale_deleted{YType::uint32, "stale-deleted"},
    stale_xid_deleted{YType::uint32, "stale-xid-deleted"}
{

    yang_name = "l2fib-mmrp-summary"; yang_parent_name = "l2fib-mmrp-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::~L2FibMmrpSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::has_data() const
{
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_data())
            return true;
    }
    return bd_group_name.is_set
	|| bd_name.is_set
	|| bridge_domain_id.is_set
	|| bridge_domain_name.is_set
	|| multicast_update.is_set
	|| multicast_update_dropped.is_set
	|| number_mroute_all_delete_drop.is_set
	|| number_mroute_delete_drop.is_set
	|| number_mroute_deleted.is_set
	|| number_mroutes_deleted_all.is_set
	|| number_of_mroute_add.is_set
	|| number_of_routes.is_set
	|| number_of_routes_with_ole_offload.is_set
	|| number_of_xid.is_set
	|| number_xid_add.is_set
	|| number_xid_deleted.is_set
	|| stale_deleted.is_set
	|| stale_xid_deleted.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::has_operation() const
{
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bd_group_name.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(bridge_domain_id.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(multicast_update.yfilter)
	|| ydk::is_set(multicast_update_dropped.yfilter)
	|| ydk::is_set(number_mroute_all_delete_drop.yfilter)
	|| ydk::is_set(number_mroute_delete_drop.yfilter)
	|| ydk::is_set(number_mroute_deleted.yfilter)
	|| ydk::is_set(number_mroutes_deleted_all.yfilter)
	|| ydk::is_set(number_of_mroute_add.yfilter)
	|| ydk::is_set(number_of_routes.yfilter)
	|| ydk::is_set(number_of_routes_with_ole_offload.yfilter)
	|| ydk::is_set(number_of_xid.yfilter)
	|| ydk::is_set(number_xid_add.yfilter)
	|| ydk::is_set(number_xid_deleted.yfilter)
	|| ydk::is_set(stale_deleted.yfilter)
	|| ydk::is_set(stale_xid_deleted.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mmrp-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_name.is_set || is_set(bd_group_name.yfilter)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_domain_id.is_set || is_set(bridge_domain_id.yfilter)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (multicast_update.is_set || is_set(multicast_update.yfilter)) leaf_name_data.push_back(multicast_update.get_name_leafdata());
    if (multicast_update_dropped.is_set || is_set(multicast_update_dropped.yfilter)) leaf_name_data.push_back(multicast_update_dropped.get_name_leafdata());
    if (number_mroute_all_delete_drop.is_set || is_set(number_mroute_all_delete_drop.yfilter)) leaf_name_data.push_back(number_mroute_all_delete_drop.get_name_leafdata());
    if (number_mroute_delete_drop.is_set || is_set(number_mroute_delete_drop.yfilter)) leaf_name_data.push_back(number_mroute_delete_drop.get_name_leafdata());
    if (number_mroute_deleted.is_set || is_set(number_mroute_deleted.yfilter)) leaf_name_data.push_back(number_mroute_deleted.get_name_leafdata());
    if (number_mroutes_deleted_all.is_set || is_set(number_mroutes_deleted_all.yfilter)) leaf_name_data.push_back(number_mroutes_deleted_all.get_name_leafdata());
    if (number_of_mroute_add.is_set || is_set(number_of_mroute_add.yfilter)) leaf_name_data.push_back(number_of_mroute_add.get_name_leafdata());
    if (number_of_routes.is_set || is_set(number_of_routes.yfilter)) leaf_name_data.push_back(number_of_routes.get_name_leafdata());
    if (number_of_routes_with_ole_offload.is_set || is_set(number_of_routes_with_ole_offload.yfilter)) leaf_name_data.push_back(number_of_routes_with_ole_offload.get_name_leafdata());
    if (number_of_xid.is_set || is_set(number_of_xid.yfilter)) leaf_name_data.push_back(number_of_xid.get_name_leafdata());
    if (number_xid_add.is_set || is_set(number_xid_add.yfilter)) leaf_name_data.push_back(number_xid_add.get_name_leafdata());
    if (number_xid_deleted.is_set || is_set(number_xid_deleted.yfilter)) leaf_name_data.push_back(number_xid_deleted.get_name_leafdata());
    if (stale_deleted.is_set || is_set(stale_deleted.yfilter)) leaf_name_data.push_back(stale_deleted.get_name_leafdata());
    if (stale_xid_deleted.is_set || is_set(stale_xid_deleted.yfilter)) leaf_name_data.push_back(stale_xid_deleted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message")
    {
        for(auto const & c : message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message>();
        c->parent = this;
        message.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : message)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
        bd_group_name.value_namespace = name_space;
        bd_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
        bridge_domain_id.value_namespace = name_space;
        bridge_domain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-update")
    {
        multicast_update = value;
        multicast_update.value_namespace = name_space;
        multicast_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-update-dropped")
    {
        multicast_update_dropped = value;
        multicast_update_dropped.value_namespace = name_space;
        multicast_update_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mroute-all-delete-drop")
    {
        number_mroute_all_delete_drop = value;
        number_mroute_all_delete_drop.value_namespace = name_space;
        number_mroute_all_delete_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mroute-delete-drop")
    {
        number_mroute_delete_drop = value;
        number_mroute_delete_drop.value_namespace = name_space;
        number_mroute_delete_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mroute-deleted")
    {
        number_mroute_deleted = value;
        number_mroute_deleted.value_namespace = name_space;
        number_mroute_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mroutes-deleted-all")
    {
        number_mroutes_deleted_all = value;
        number_mroutes_deleted_all.value_namespace = name_space;
        number_mroutes_deleted_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-mroute-add")
    {
        number_of_mroute_add = value;
        number_of_mroute_add.value_namespace = name_space;
        number_of_mroute_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-routes")
    {
        number_of_routes = value;
        number_of_routes.value_namespace = name_space;
        number_of_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-routes-with-ole-offload")
    {
        number_of_routes_with_ole_offload = value;
        number_of_routes_with_ole_offload.value_namespace = name_space;
        number_of_routes_with_ole_offload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-xid")
    {
        number_of_xid = value;
        number_of_xid.value_namespace = name_space;
        number_of_xid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xid-add")
    {
        number_xid_add = value;
        number_xid_add.value_namespace = name_space;
        number_xid_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xid-deleted")
    {
        number_xid_deleted = value;
        number_xid_deleted.value_namespace = name_space;
        number_xid_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-deleted")
    {
        stale_deleted = value;
        stale_deleted.value_namespace = name_space;
        stale_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-xid-deleted")
    {
        stale_xid_deleted = value;
        stale_xid_deleted.value_namespace = name_space;
        stale_xid_deleted.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "multicast-update")
    {
        multicast_update.yfilter = yfilter;
    }
    if(value_path == "multicast-update-dropped")
    {
        multicast_update_dropped.yfilter = yfilter;
    }
    if(value_path == "number-mroute-all-delete-drop")
    {
        number_mroute_all_delete_drop.yfilter = yfilter;
    }
    if(value_path == "number-mroute-delete-drop")
    {
        number_mroute_delete_drop.yfilter = yfilter;
    }
    if(value_path == "number-mroute-deleted")
    {
        number_mroute_deleted.yfilter = yfilter;
    }
    if(value_path == "number-mroutes-deleted-all")
    {
        number_mroutes_deleted_all.yfilter = yfilter;
    }
    if(value_path == "number-of-mroute-add")
    {
        number_of_mroute_add.yfilter = yfilter;
    }
    if(value_path == "number-of-routes")
    {
        number_of_routes.yfilter = yfilter;
    }
    if(value_path == "number-of-routes-with-ole-offload")
    {
        number_of_routes_with_ole_offload.yfilter = yfilter;
    }
    if(value_path == "number-of-xid")
    {
        number_of_xid.yfilter = yfilter;
    }
    if(value_path == "number-xid-add")
    {
        number_xid_add.yfilter = yfilter;
    }
    if(value_path == "number-xid-deleted")
    {
        number_xid_deleted.yfilter = yfilter;
    }
    if(value_path == "stale-deleted")
    {
        stale_deleted.yfilter = yfilter;
    }
    if(value_path == "stale-xid-deleted")
    {
        stale_xid_deleted.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message" || name == "bd-group-name" || name == "bd-name" || name == "bridge-domain-id" || name == "bridge-domain-name" || name == "multicast-update" || name == "multicast-update-dropped" || name == "number-mroute-all-delete-drop" || name == "number-mroute-delete-drop" || name == "number-mroute-deleted" || name == "number-mroutes-deleted-all" || name == "number-of-mroute-add" || name == "number-of-routes" || name == "number-of-routes-with-ole-offload" || name == "number-of-xid" || name == "number-xid-add" || name == "number-xid-deleted" || name == "stale-deleted" || name == "stale-xid-deleted")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::Message()
    :
    information1{YType::uint32, "information1"},
    information2{YType::uint32, "information2"},
    messgae_count{YType::uint32, "messgae-count"},
    time{YType::str, "time"}
{

    yang_name = "message"; yang_parent_name = "l2fib-mmrp-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::~Message()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::has_data() const
{
    return information1.is_set
	|| information2.is_set
	|| messgae_count.is_set
	|| time.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(information1.yfilter)
	|| ydk::is_set(information2.yfilter)
	|| ydk::is_set(messgae_count.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (information1.is_set || is_set(information1.yfilter)) leaf_name_data.push_back(information1.get_name_leafdata());
    if (information2.is_set || is_set(information2.yfilter)) leaf_name_data.push_back(information2.get_name_leafdata());
    if (messgae_count.is_set || is_set(messgae_count.yfilter)) leaf_name_data.push_back(messgae_count.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "information1")
    {
        information1 = value;
        information1.value_namespace = name_space;
        information1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information2")
    {
        information2 = value;
        information2.value_namespace = name_space;
        information2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messgae-count")
    {
        messgae_count = value;
        messgae_count.value_namespace = name_space;
        messgae_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "information1")
    {
        information1.yfilter = yfilter;
    }
    if(value_path == "information2")
    {
        information2.yfilter = yfilter;
    }
    if(value_path == "messgae-count")
    {
        messgae_count.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information1" || name == "information2" || name == "messgae-count" || name == "time")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrps()
{

    yang_name = "l2fib-mmrps"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::~L2FibMmrps()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::has_data() const
{
    for (std::size_t index=0; index<l2fib_mmrp.size(); index++)
    {
        if(l2fib_mmrp[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mmrp.size(); index++)
    {
        if(l2fib_mmrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mmrps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mmrp")
    {
        for(auto const & c : l2fib_mmrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp>();
        c->parent = this;
        l2fib_mmrp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_mmrp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mmrp")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::L2FibMmrp()
    :
    bd_group_name{YType::str, "bd-group-name"},
    bd_name{YType::str, "bd-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    bridge_id{YType::uint32, "bridge-id"},
    group{YType::str, "group"},
    hardware_information{YType::str, "hardware-information"},
    platform_data{YType::str, "platform-data"},
    platform_data_length{YType::uint8, "platform-data-length"},
    source{YType::str, "source"},
    xid_count{YType::uint16, "xid-count"}
    	,
    destination_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix>())
	,forward_stats(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats>())
	,irb_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo>())
	,multicast_base_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation>())
	,source_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix>())
{
    destination_prefix->parent = this;
    forward_stats->parent = this;
    irb_info->parent = this;
    multicast_base_information->parent = this;
    source_prefix->parent = this;

    yang_name = "l2fib-mmrp"; yang_parent_name = "l2fib-mmrps"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::~L2FibMmrp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::has_data() const
{
    return bd_group_name.is_set
	|| bd_name.is_set
	|| bridge_domain_name.is_set
	|| bridge_id.is_set
	|| group.is_set
	|| hardware_information.is_set
	|| platform_data.is_set
	|| platform_data_length.is_set
	|| source.is_set
	|| xid_count.is_set
	|| (destination_prefix !=  nullptr && destination_prefix->has_data())
	|| (forward_stats !=  nullptr && forward_stats->has_data())
	|| (irb_info !=  nullptr && irb_info->has_data())
	|| (multicast_base_information !=  nullptr && multicast_base_information->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_group_name.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(platform_data.yfilter)
	|| ydk::is_set(platform_data_length.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(xid_count.yfilter)
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (forward_stats !=  nullptr && forward_stats->has_operation())
	|| (irb_info !=  nullptr && irb_info->has_operation())
	|| (multicast_base_information !=  nullptr && multicast_base_information->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mmrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_name.is_set || is_set(bd_group_name.yfilter)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (platform_data.is_set || is_set(platform_data.yfilter)) leaf_name_data.push_back(platform_data.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.yfilter)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (xid_count.is_set || is_set(xid_count.yfilter)) leaf_name_data.push_back(xid_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix>();
        }
        return destination_prefix;
    }

    if(child_yang_name == "forward-stats")
    {
        if(forward_stats == nullptr)
        {
            forward_stats = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats>();
        }
        return forward_stats;
    }

    if(child_yang_name == "irb-info")
    {
        if(irb_info == nullptr)
        {
            irb_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo>();
        }
        return irb_info;
    }

    if(child_yang_name == "multicast-base-information")
    {
        if(multicast_base_information == nullptr)
        {
            multicast_base_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation>();
        }
        return multicast_base_information;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix>();
        }
        return source_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_prefix != nullptr)
    {
        children["destination-prefix"] = destination_prefix;
    }

    if(forward_stats != nullptr)
    {
        children["forward-stats"] = forward_stats;
    }

    if(irb_info != nullptr)
    {
        children["irb-info"] = irb_info;
    }

    if(multicast_base_information != nullptr)
    {
        children["multicast-base-information"] = multicast_base_information;
    }

    if(source_prefix != nullptr)
    {
        children["source-prefix"] = source_prefix;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
        bd_group_name.value_namespace = name_space;
        bd_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-data")
    {
        platform_data = value;
        platform_data.value_namespace = name_space;
        platform_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
        platform_data_length.value_namespace = name_space;
        platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid-count")
    {
        xid_count = value;
        xid_count.value_namespace = name_space;
        xid_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "platform-data")
    {
        platform_data.yfilter = yfilter;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "xid-count")
    {
        xid_count.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-prefix" || name == "forward-stats" || name == "irb-info" || name == "multicast-base-information" || name == "source-prefix" || name == "bd-group-name" || name == "bd-name" || name == "bridge-domain-name" || name == "bridge-id" || name == "group" || name == "hardware-information" || name == "platform-data" || name == "platform-data-length" || name == "source" || name == "xid-count")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::DestinationPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint16, "prefix-length"},
    proto{YType::uint8, "proto"}
{

    yang_name = "destination-prefix"; yang_parent_name = "l2fib-mmrp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::~DestinationPrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| proto.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(proto.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "proto")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStats()
    :
    forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat>())
{
    forward_stat->parent = this;

    yang_name = "forward-stats"; yang_parent_name = "l2fib-mmrp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::~ForwardStats()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::has_data() const
{
    return (forward_stat !=  nullptr && forward_stat->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::has_operation() const
{
    return is_set(yfilter)
	|| (forward_stat !=  nullptr && forward_stat->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-stat")
    {
        if(forward_stat == nullptr)
        {
            forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat>();
        }
        return forward_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forward_stat != nullptr)
    {
        children["forward-stat"] = forward_stat;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-stat")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::ForwardStat()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    mulicast(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast>())
{
    mulicast->parent = this;

    yang_name = "forward-stat"; yang_parent_name = "forward-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::~ForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::has_data() const
{
    return data_type.is_set
	|| (mulicast !=  nullptr && mulicast->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (mulicast !=  nullptr && mulicast->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mulicast")
    {
        if(mulicast == nullptr)
        {
            mulicast = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast>();
        }
        return mulicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mulicast != nullptr)
    {
        children["mulicast"] = mulicast;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mulicast" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Mulicast()
    :
    core_received_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>())
	,drop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop>())
	,multicast_core_forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>())
	,multicast_forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>())
	,punt(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt>())
	,received_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat>())
{
    core_received_stat->parent = this;
    drop->parent = this;
    multicast_core_forward_stat->parent = this;
    multicast_forward_stat->parent = this;
    punt->parent = this;
    received_stat->parent = this;

    yang_name = "mulicast"; yang_parent_name = "forward-stat"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::~Mulicast()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::has_data() const
{
    return (core_received_stat !=  nullptr && core_received_stat->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_data())
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (received_stat !=  nullptr && received_stat->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::has_operation() const
{
    return is_set(yfilter)
	|| (core_received_stat !=  nullptr && core_received_stat->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_operation())
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (received_stat !=  nullptr && received_stat->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mulicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-received-stat")
    {
        if(core_received_stat == nullptr)
        {
            core_received_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>();
        }
        return core_received_stat;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "multicast-core-forward-stat")
    {
        if(multicast_core_forward_stat == nullptr)
        {
            multicast_core_forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>();
        }
        return multicast_core_forward_stat;
    }

    if(child_yang_name == "multicast-forward-stat")
    {
        if(multicast_forward_stat == nullptr)
        {
            multicast_forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>();
        }
        return multicast_forward_stat;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt>();
        }
        return punt;
    }

    if(child_yang_name == "received-stat")
    {
        if(received_stat == nullptr)
        {
            received_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat>();
        }
        return received_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(core_received_stat != nullptr)
    {
        children["core-received-stat"] = core_received_stat;
    }

    if(drop != nullptr)
    {
        children["drop"] = drop;
    }

    if(multicast_core_forward_stat != nullptr)
    {
        children["multicast-core-forward-stat"] = multicast_core_forward_stat;
    }

    if(multicast_forward_stat != nullptr)
    {
        children["multicast-forward-stat"] = multicast_forward_stat;
    }

    if(punt != nullptr)
    {
        children["punt"] = punt;
    }

    if(received_stat != nullptr)
    {
        children["received-stat"] = received_stat;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-received-stat" || name == "drop" || name == "multicast-core-forward-stat" || name == "multicast-forward-stat" || name == "punt" || name == "received-stat")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::CoreReceivedStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "core-received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::~CoreReceivedStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::Drop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "drop"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::~Drop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::MulticastCoreForwardStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "multicast-core-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::~MulticastCoreForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-core-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::MulticastForwardStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "multicast-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::~MulticastForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::Punt()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "punt"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::~Punt()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::ReceivedStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::~ReceivedStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::IrbInfo()
    :
    irb_plat_data_len{YType::uint16, "irb-plat-data-len"},
    mxid_ac_interface_handle{YType::str, "mxid-ac-interface-handle"},
    mxid_next_hop_address{YType::str, "mxid-next-hop-address"},
    mxid_pw_id{YType::uint32, "mxid-pw-id"}
{

    yang_name = "irb-info"; yang_parent_name = "l2fib-mmrp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::~IrbInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::has_data() const
{
    for (std::size_t index=0; index<irb_plat_data.size(); index++)
    {
        if(irb_plat_data[index]->has_data())
            return true;
    }
    return irb_plat_data_len.is_set
	|| mxid_ac_interface_handle.is_set
	|| mxid_next_hop_address.is_set
	|| mxid_pw_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::has_operation() const
{
    for (std::size_t index=0; index<irb_plat_data.size(); index++)
    {
        if(irb_plat_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(irb_plat_data_len.yfilter)
	|| ydk::is_set(mxid_ac_interface_handle.yfilter)
	|| ydk::is_set(mxid_next_hop_address.yfilter)
	|| ydk::is_set(mxid_pw_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "irb-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (irb_plat_data_len.is_set || is_set(irb_plat_data_len.yfilter)) leaf_name_data.push_back(irb_plat_data_len.get_name_leafdata());
    if (mxid_ac_interface_handle.is_set || is_set(mxid_ac_interface_handle.yfilter)) leaf_name_data.push_back(mxid_ac_interface_handle.get_name_leafdata());
    if (mxid_next_hop_address.is_set || is_set(mxid_next_hop_address.yfilter)) leaf_name_data.push_back(mxid_next_hop_address.get_name_leafdata());
    if (mxid_pw_id.is_set || is_set(mxid_pw_id.yfilter)) leaf_name_data.push_back(mxid_pw_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "irb-plat-data")
    {
        for(auto const & c : irb_plat_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::IrbPlatData>();
        c->parent = this;
        irb_plat_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : irb_plat_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len = value;
        irb_plat_data_len.value_namespace = name_space;
        irb_plat_data_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mxid-ac-interface-handle")
    {
        mxid_ac_interface_handle = value;
        mxid_ac_interface_handle.value_namespace = name_space;
        mxid_ac_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mxid-next-hop-address")
    {
        mxid_next_hop_address = value;
        mxid_next_hop_address.value_namespace = name_space;
        mxid_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mxid-pw-id")
    {
        mxid_pw_id = value;
        mxid_pw_id.value_namespace = name_space;
        mxid_pw_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len.yfilter = yfilter;
    }
    if(value_path == "mxid-ac-interface-handle")
    {
        mxid_ac_interface_handle.yfilter = yfilter;
    }
    if(value_path == "mxid-next-hop-address")
    {
        mxid_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "mxid-pw-id")
    {
        mxid_pw_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "irb-plat-data" || name == "irb-plat-data-len" || name == "mxid-ac-interface-handle" || name == "mxid-next-hop-address" || name == "mxid-pw-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::IrbPlatData::IrbPlatData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "irb-plat-data"; yang_parent_name = "irb-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::IrbPlatData::~IrbPlatData()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::IrbPlatData::has_data() const
{
    return entry.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::IrbPlatData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::IrbPlatData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "irb-plat-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::IrbPlatData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::IrbPlatData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::IrbPlatData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::IrbPlatData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::IrbPlatData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo::IrbPlatData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::MulticastBaseInformation()
{

    yang_name = "multicast-base-information"; yang_parent_name = "l2fib-mmrp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::~MulticastBaseInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-base-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::SourcePrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint16, "prefix-length"},
    proto{YType::uint8, "proto"}
{

    yang_name = "source-prefix"; yang_parent_name = "l2fib-mmrp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::~SourcePrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| proto.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(proto.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "proto")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCons()
{

    yang_name = "l2fib-mon-sess-x-cons"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::~L2FibMonSessXCons()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::has_data() const
{
    for (std::size_t index=0; index<l2fib_mon_sess_x_con.size(); index++)
    {
        if(l2fib_mon_sess_x_con[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mon_sess_x_con.size(); index++)
    {
        if(l2fib_mon_sess_x_con[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mon-sess-x-cons";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mon-sess-x-con")
    {
        for(auto const & c : l2fib_mon_sess_x_con)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon>();
        c->parent = this;
        l2fib_mon_sess_x_con.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_mon_sess_x_con)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mon-sess-x-con")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::L2FibMonSessXCon()
    :
    monitor_session_name{YType::str, "monitor-session-name"},
    bound{YType::boolean, "bound"},
    switching_type{YType::enumeration, "switching-type"},
    xcon_name{YType::str, "xcon-name"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base>())
	,segment1(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1>())
	,segment2(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2>())
{
    base->parent = this;
    segment1->parent = this;
    segment2->parent = this;

    yang_name = "l2fib-mon-sess-x-con"; yang_parent_name = "l2fib-mon-sess-x-cons"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::~L2FibMonSessXCon()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::has_data() const
{
    return monitor_session_name.is_set
	|| bound.is_set
	|| switching_type.is_set
	|| xcon_name.is_set
	|| (base !=  nullptr && base->has_data())
	|| (segment1 !=  nullptr && segment1->has_data())
	|| (segment2 !=  nullptr && segment2->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_session_name.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(switching_type.yfilter)
	|| ydk::is_set(xcon_name.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (segment1 !=  nullptr && segment1->has_operation())
	|| (segment2 !=  nullptr && segment2->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mon-sess-x-con" <<"[monitor-session-name='" <<monitor_session_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_session_name.is_set || is_set(monitor_session_name.yfilter)) leaf_name_data.push_back(monitor_session_name.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (switching_type.is_set || is_set(switching_type.yfilter)) leaf_name_data.push_back(switching_type.get_name_leafdata());
    if (xcon_name.is_set || is_set(xcon_name.yfilter)) leaf_name_data.push_back(xcon_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base>();
        }
        return base;
    }

    if(child_yang_name == "segment1")
    {
        if(segment1 == nullptr)
        {
            segment1 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1>();
        }
        return segment1;
    }

    if(child_yang_name == "segment2")
    {
        if(segment2 == nullptr)
        {
            segment2 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2>();
        }
        return segment2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
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

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-session-name")
    {
        monitor_session_name = value;
        monitor_session_name.value_namespace = name_space;
        monitor_session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-type")
    {
        switching_type = value;
        switching_type.value_namespace = name_space;
        switching_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcon-name")
    {
        xcon_name = value;
        xcon_name.value_namespace = name_space;
        xcon_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-session-name")
    {
        monitor_session_name.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "switching-type")
    {
        switching_type.yfilter = yfilter;
    }
    if(value_path == "xcon-name")
    {
        xcon_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "segment1" || name == "segment2" || name == "monitor-session-name" || name == "bound" || name == "switching-type" || name == "xcon-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fib-mon-sess-x-con"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Segment1()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac>())
	,evpn(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn>())
	,monitor_session(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession>())
	,pbb(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw>())
	,vni(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni>())
{
    ac->parent = this;
    evpn->parent = this;
    monitor_session->parent = this;
    pbb->parent = this;
    pw->parent = this;
    vni->parent = this;

    yang_name = "segment1"; yang_parent_name = "l2fib-mon-sess-x-con"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::~Segment1()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (monitor_session !=  nullptr && monitor_session->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (vni !=  nullptr && vni->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (monitor_session !=  nullptr && monitor_session->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (vni !=  nullptr && vni->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "monitor-session")
    {
        if(monitor_session == nullptr)
        {
            monitor_session = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession>();
        }
        return monitor_session;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni>();
        }
        return vni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ac != nullptr)
    {
        children["ac"] = ac;
    }

    if(evpn != nullptr)
    {
        children["evpn"] = evpn;
    }

    if(monitor_session != nullptr)
    {
        children["monitor-session"] = monitor_session;
    }

    if(pbb != nullptr)
    {
        children["pbb"] = pbb;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    if(vni != nullptr)
    {
        children["vni"] = vni;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "evpn" || name == "monitor-session" || name == "pbb" || name == "pw" || name == "vni" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Ac()
    :
    actype{YType::uint8, "actype"},
    adjacency_address{YType::str, "adjacency-address"},
    adjacency_valid{YType::boolean, "adjacency-valid"},
    attachment_circuit_id{YType::uint32, "attachment-circuit-id"},
    attachment_circuit_mtu{YType::uint16, "attachment-circuit-mtu"},
    bound{YType::boolean, "bound"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"},
    fxc_next_hop_valid{YType::boolean, "fxc-next-hop-valid"},
    inter_working_mode{YType::uint8, "inter-working-mode"},
    interface_handle{YType::str, "interface-handle"},
    ip_inter_working_mac{YType::str, "ip-inter-working-mac"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    sub_interface_handle{YType::str, "sub-interface-handle"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base>())
	,fxc_next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop>())
{
    base->parent = this;
    fxc_next_hop->parent = this;

    yang_name = "ac"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::has_data() const
{
    return actype.is_set
	|| adjacency_address.is_set
	|| adjacency_valid.is_set
	|| attachment_circuit_id.is_set
	|| attachment_circuit_mtu.is_set
	|| bound.is_set
	|| evpn_internal_label.is_set
	|| fxc_next_hop_valid.is_set
	|| inter_working_mode.is_set
	|| interface_handle.is_set
	|| ip_inter_working_mac.is_set
	|| redundancy_group_id.is_set
	|| redundancy_object_id.is_set
	|| sub_interface_handle.is_set
	|| (base !=  nullptr && base->has_data())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actype.yfilter)
	|| ydk::is_set(adjacency_address.yfilter)
	|| ydk::is_set(adjacency_valid.yfilter)
	|| ydk::is_set(attachment_circuit_id.yfilter)
	|| ydk::is_set(attachment_circuit_mtu.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| ydk::is_set(fxc_next_hop_valid.yfilter)
	|| ydk::is_set(inter_working_mode.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(ip_inter_working_mac.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(sub_interface_handle.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actype.is_set || is_set(actype.yfilter)) leaf_name_data.push_back(actype.get_name_leafdata());
    if (adjacency_address.is_set || is_set(adjacency_address.yfilter)) leaf_name_data.push_back(adjacency_address.get_name_leafdata());
    if (adjacency_valid.is_set || is_set(adjacency_valid.yfilter)) leaf_name_data.push_back(adjacency_valid.get_name_leafdata());
    if (attachment_circuit_id.is_set || is_set(attachment_circuit_id.yfilter)) leaf_name_data.push_back(attachment_circuit_id.get_name_leafdata());
    if (attachment_circuit_mtu.is_set || is_set(attachment_circuit_mtu.yfilter)) leaf_name_data.push_back(attachment_circuit_mtu.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (fxc_next_hop_valid.is_set || is_set(fxc_next_hop_valid.yfilter)) leaf_name_data.push_back(fxc_next_hop_valid.get_name_leafdata());
    if (inter_working_mode.is_set || is_set(inter_working_mode.yfilter)) leaf_name_data.push_back(inter_working_mode.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ip_inter_working_mac.is_set || is_set(ip_inter_working_mac.yfilter)) leaf_name_data.push_back(ip_inter_working_mac.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (sub_interface_handle.is_set || is_set(sub_interface_handle.yfilter)) leaf_name_data.push_back(sub_interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base>();
        }
        return base;
    }

    if(child_yang_name == "fxc-next-hop")
    {
        if(fxc_next_hop == nullptr)
        {
            fxc_next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop>();
        }
        return fxc_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(fxc_next_hop != nullptr)
    {
        children["fxc-next-hop"] = fxc_next_hop;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actype")
    {
        actype = value;
        actype.value_namespace = name_space;
        actype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address = value;
        adjacency_address.value_namespace = name_space;
        adjacency_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid = value;
        adjacency_valid.value_namespace = name_space;
        adjacency_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id = value;
        attachment_circuit_id.value_namespace = name_space;
        attachment_circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu = value;
        attachment_circuit_mtu.value_namespace = name_space;
        attachment_circuit_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid = value;
        fxc_next_hop_valid.value_namespace = name_space;
        fxc_next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode = value;
        inter_working_mode.value_namespace = name_space;
        inter_working_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac = value;
        ip_inter_working_mac.value_namespace = name_space;
        ip_inter_working_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle = value;
        sub_interface_handle.value_namespace = name_space;
        sub_interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actype")
    {
        actype.yfilter = yfilter;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address.yfilter = yfilter;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "fxc-next-hop" || name == "actype" || name == "adjacency-address" || name == "adjacency-valid" || name == "attachment-circuit-id" || name == "attachment-circuit-mtu" || name == "bound" || name == "evpn-internal-label" || name == "fxc-next-hop-valid" || name == "inter-working-mode" || name == "interface-handle" || name == "ip-inter-working-mac" || name == "redundancy-group-id" || name == "redundancy-object-id" || name == "sub-interface-handle")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base::Base()
{

    yang_name = "base"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::FxcNextHop()
    :
    children_count{YType::uint32, "children-count"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base>())
{
    base->parent = this;

    yang_name = "fxc-next-hop"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::~FxcNextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::has_data() const
{
    return children_count.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxc-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "children-count" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "fxc-next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Evpn()
    :
    bound{YType::boolean, "bound"},
    evi{YType::uint32, "evi"},
    forward_class{YType::uint8, "forward-class"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base>())
{
    base->parent = this;

    yang_name = "evpn"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::~Evpn()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::has_data() const
{
    return bound.is_set
	|| evi.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "bound" || name == "evi" || name == "forward-class")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base::Base()
{

    yang_name = "base"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::MonitorSession()
    :
    bound{YType::boolean, "bound"},
    hardware_information{YType::str, "hardware-information"},
    session_name{YType::str, "session-name"},
    xcid{YType::uint32, "xcid"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base>())
{
    base->parent = this;

    yang_name = "monitor-session"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::~MonitorSession()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::has_data() const
{
    return bound.is_set
	|| hardware_information.is_set
	|| session_name.is_set
	|| xcid.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "bound" || name == "hardware-information" || name == "session-name" || name == "xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base::Base()
{

    yang_name = "base"; yang_parent_name = "monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Pbb()
    :
    bound{YType::boolean, "bound"},
    core_pbb_evpn_enabled{YType::boolean, "core-pbb-evpn-enabled"},
    forward_class{YType::uint8, "forward-class"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base>())
	,pbb_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion>())
{
    base->parent = this;
    pbb_union->parent = this;

    yang_name = "pbb"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::~Pbb()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::has_data() const
{
    return bound.is_set
	|| core_pbb_evpn_enabled.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data())
	|| (pbb_union !=  nullptr && pbb_union->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(core_pbb_evpn_enabled.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (pbb_union !=  nullptr && pbb_union->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (core_pbb_evpn_enabled.is_set || is_set(core_pbb_evpn_enabled.yfilter)) leaf_name_data.push_back(core_pbb_evpn_enabled.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base>();
        }
        return base;
    }

    if(child_yang_name == "pbb-union")
    {
        if(pbb_union == nullptr)
        {
            pbb_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion>();
        }
        return pbb_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(pbb_union != nullptr)
    {
        children["pbb-union"] = pbb_union;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled = value;
        core_pbb_evpn_enabled.value_namespace = name_space;
        core_pbb_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "pbb-union" || name == "bound" || name == "core-pbb-evpn-enabled" || name == "forward-class")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pbb"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::PbbUnion()
    :
    pbb_type{YType::enumeration, "pbb-type"}
    	,
    core(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core>())
	,edge(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge>())
{
    core->parent = this;
    edge->parent = this;

    yang_name = "pbb-union"; yang_parent_name = "pbb"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::~PbbUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::has_data() const
{
    return pbb_type.is_set
	|| (core !=  nullptr && core->has_data())
	|| (edge !=  nullptr && edge->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_type.yfilter)
	|| (core !=  nullptr && core->has_operation())
	|| (edge !=  nullptr && edge->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_type.is_set || is_set(pbb_type.yfilter)) leaf_name_data.push_back(pbb_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core")
    {
        if(core == nullptr)
        {
            core = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core>();
        }
        return core;
    }

    if(child_yang_name == "edge")
    {
        if(edge == nullptr)
        {
            edge = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge>();
        }
        return edge;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(core != nullptr)
    {
        children["core"] = core;
    }

    if(edge != nullptr)
    {
        children["edge"] = edge;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-type")
    {
        pbb_type = value;
        pbb_type.value_namespace = name_space;
        pbb_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-type")
    {
        pbb_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core" || name == "edge" || name == "pbb-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core::Core()
    :
    vlan_id{YType::uint32, "vlan-id"}
{

    yang_name = "core"; yang_parent_name = "pbb-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core::~Core()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core::has_data() const
{
    return vlan_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::Edge()
    :
    mac{YType::str, "mac"},
    mac_configured{YType::boolean, "mac-configured"}
{

    yang_name = "edge"; yang_parent_name = "pbb-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::~Edge()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::has_data() const
{
    return mac.is_set
	|| mac_configured.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(mac_configured.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (mac_configured.is_set || is_set(mac_configured.yfilter)) leaf_name_data.push_back(mac_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-configured")
    {
        mac_configured = value;
        mac_configured.value_namespace = name_space;
        mac_configured.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "mac-configured")
    {
        mac_configured.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "mac-configured")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Pw()
    :
    ac_id{YType::uint32, "ac-id"},
    active{YType::boolean, "active"},
    backup_configured{YType::boolean, "backup-configured"},
    bound{YType::boolean, "bound"},
    context{YType::uint16, "context"},
    forward_class{YType::uint8, "forward-class"},
    global_id{YType::uint32, "global-id"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    grouping_supported{YType::boolean, "grouping-supported"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    pw_id{YType::uint64, "pw-id"},
    pw_load_balance_type{YType::enumeration, "pw-load-balance-type"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    sequence_resync_threshold{YType::uint16, "sequence-resync-threshold"},
    signal_capability_flags{YType::uint32, "signal-capability-flags"}
    	,
    backup_pseudo_wire(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire>())
	,base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop>())
	,pseudo_wire_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion>())
{
    backup_pseudo_wire->parent = this;
    base->parent = this;
    next_hop->parent = this;
    pseudo_wire_union->parent = this;

    yang_name = "pw"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::has_data() const
{
    return ac_id.is_set
	|| active.is_set
	|| backup_configured.is_set
	|| bound.is_set
	|| context.is_set
	|| forward_class.is_set
	|| global_id.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| grouping_supported.is_set
	|| next_hop_address.is_set
	|| next_hop_valid.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_flow_label_tx.is_set
	|| pw_id.is_set
	|| pw_load_balance_type.is_set
	|| redundancy_role.is_set
	|| sequence_resync_threshold.is_set
	|| signal_capability_flags.is_set
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_data())
	|| (base !=  nullptr && base->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(backup_configured.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(pw_load_balance_type.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| ydk::is_set(sequence_resync_threshold.yfilter)
	|| ydk::is_set(signal_capability_flags.yfilter)
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_operation())
	|| (base !=  nullptr && base->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_configured.is_set || is_set(backup_configured.yfilter)) leaf_name_data.push_back(backup_configured.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (pw_load_balance_type.is_set || is_set(pw_load_balance_type.yfilter)) leaf_name_data.push_back(pw_load_balance_type.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (sequence_resync_threshold.is_set || is_set(sequence_resync_threshold.yfilter)) leaf_name_data.push_back(sequence_resync_threshold.get_name_leafdata());
    if (signal_capability_flags.is_set || is_set(signal_capability_flags.yfilter)) leaf_name_data.push_back(signal_capability_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-pseudo-wire")
    {
        if(backup_pseudo_wire == nullptr)
        {
            backup_pseudo_wire = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire>();
        }
        return backup_pseudo_wire;
    }

    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base>();
        }
        return base;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pseudo-wire-union")
    {
        if(pseudo_wire_union == nullptr)
        {
            pseudo_wire_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion>();
        }
        return pseudo_wire_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_pseudo_wire != nullptr)
    {
        children["backup-pseudo-wire"] = backup_pseudo_wire;
    }

    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(pseudo_wire_union != nullptr)
    {
        children["pseudo-wire-union"] = pseudo_wire_union;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-configured")
    {
        backup_configured = value;
        backup_configured.value_namespace = name_space;
        backup_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type = value;
        pw_load_balance_type.value_namespace = name_space;
        pw_load_balance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold = value;
        sequence_resync_threshold.value_namespace = name_space;
        sequence_resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags = value;
        signal_capability_flags.value_namespace = name_space;
        signal_capability_flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "backup-configured")
    {
        backup_configured.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold.yfilter = yfilter;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-pseudo-wire" || name == "base" || name == "next-hop" || name == "pseudo-wire-union" || name == "ac-id" || name == "active" || name == "backup-configured" || name == "bound" || name == "context" || name == "forward-class" || name == "global-id" || name == "group-id" || name == "group-state" || name == "grouping-supported" || name == "next-hop-address" || name == "next-hop-valid" || name == "pseudo-wire-id-type" || name == "pw-flow-label-tx" || name == "pw-id" || name == "pw-load-balance-type" || name == "redundancy-role" || name == "sequence-resync-threshold" || name == "signal-capability-flags")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::BackupPseudoWire()
    :
    active{YType::boolean, "active"},
    backup_next_hop{YType::str, "backup-next-hop"},
    backup_pseudo_wire_id{YType::uint32, "backup-pseudo-wire-id"},
    backup_pseudo_wire_id_type{YType::enumeration, "backup-pseudo-wire-id-type"},
    bound{YType::boolean, "bound"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    grouping_supported{YType::boolean, "grouping-supported"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    redundancy_role{YType::enumeration, "redundancy-role"}
    	,
    atom(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom>())
{
    atom->parent = this;

    yang_name = "backup-pseudo-wire"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::~BackupPseudoWire()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::has_data() const
{
    return active.is_set
	|| backup_next_hop.is_set
	|| backup_pseudo_wire_id.is_set
	|| backup_pseudo_wire_id_type.is_set
	|| bound.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| grouping_supported.is_set
	|| pw_flow_label_tx.is_set
	|| redundancy_role.is_set
	|| (atom !=  nullptr && atom->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(backup_next_hop.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id_type.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| (atom !=  nullptr && atom->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudo-wire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_next_hop.is_set || is_set(backup_next_hop.yfilter)) leaf_name_data.push_back(backup_next_hop.get_name_leafdata());
    if (backup_pseudo_wire_id.is_set || is_set(backup_pseudo_wire_id.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id.get_name_leafdata());
    if (backup_pseudo_wire_id_type.is_set || is_set(backup_pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id_type.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom>();
        }
        return atom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atom != nullptr)
    {
        children["atom"] = atom;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-next-hop")
    {
        backup_next_hop = value;
        backup_next_hop.value_namespace = name_space;
        backup_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id = value;
        backup_pseudo_wire_id.value_namespace = name_space;
        backup_pseudo_wire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type = value;
        backup_pseudo_wire_id_type.value_namespace = name_space;
        backup_pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "backup-next-hop")
    {
        backup_next_hop.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atom" || name == "active" || name == "backup-next-hop" || name == "backup-pseudo-wire-id" || name == "backup-pseudo-wire-id-type" || name == "bound" || name == "group-id" || name == "group-state" || name == "grouping-supported" || name == "pw-flow-label-tx" || name == "redundancy-role")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom::Atom()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "atom"; yang_parent_name = "backup-pseudo-wire"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom::~Atom()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
        pw_label.value_namespace = name_space;
        pw_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
        pw_local_label.value_namespace = name_space;
        pw_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
        pw_tunnel_interface.value_namespace = name_space;
        pw_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
        pw_xcid.value_namespace = name_space;
        pw_xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-label")
    {
        pw_label.yfilter = yfilter;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label.yfilter = yfilter;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::has_data() const
{
    return children_count.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "children-count" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::PseudoWireUnion()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    l2tp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp>())
	,l2tp_ipv6_ts(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts>())
	,l2tpv2(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2>())
	,mpls(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls>())
{
    l2tp->parent = this;
    l2tp_ipv6_ts->parent = this;
    l2tpv2->parent = this;
    mpls->parent = this;

    yang_name = "pseudo-wire-union"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::~PseudoWireUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::has_data() const
{
    return data_type.is_set
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_data())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_operation())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "l2tp-ipv6-ts")
    {
        if(l2tp_ipv6_ts == nullptr)
        {
            l2tp_ipv6_ts = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts>();
        }
        return l2tp_ipv6_ts;
    }

    if(child_yang_name == "l2tpv2")
    {
        if(l2tpv2 == nullptr)
        {
            l2tpv2 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2>();
        }
        return l2tpv2;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2tp != nullptr)
    {
        children["l2tp"] = l2tp;
    }

    if(l2tp_ipv6_ts != nullptr)
    {
        children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
    }

    if(l2tpv2 != nullptr)
    {
        children["l2tpv2"] = l2tpv2;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tp" || name == "l2tp-ipv6-ts" || name == "l2tpv2" || name == "mpls" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::L2Tp()
    :
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::~L2Tp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::has_data() const
{
    return path_mtu.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "path-mtu" || name == "sequence-number-expected" || name == "sequence-number-sent" || name == "tos-val" || name == "ttl")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "local"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-high-value" || name == "cookie-low-value" || name == "cookie-size" || name == "session-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "remote"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-high-value" || name == "cookie-low-value" || name == "cookie-size" || name == "session-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::L2TpIpv6Ts()
    :
    local_address{YType::str, "local-address"},
    path_mtu{YType::uint16, "path-mtu"},
    remote_address{YType::str, "remote-address"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp-ipv6-ts"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::~L2TpIpv6Ts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::has_data() const
{
    return local_address.is_set
	|| path_mtu.is_set
	|| remote_address.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-ipv6-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "local-address" || name == "path-mtu" || name == "remote-address" || name == "sequence-number-expected" || name == "sequence-number-sent" || name == "tos-val" || name == "ttl")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    secondary_cookie_high_value{YType::uint32, "secondary-cookie-high-value"},
    secondary_cookie_low_value{YType::uint32, "secondary-cookie-low-value"},
    secondary_cookie_size{YType::uint8, "secondary-cookie-size"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "local"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| secondary_cookie_high_value.is_set
	|| secondary_cookie_low_value.is_set
	|| secondary_cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(secondary_cookie_high_value.yfilter)
	|| ydk::is_set(secondary_cookie_low_value.yfilter)
	|| ydk::is_set(secondary_cookie_size.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (secondary_cookie_high_value.is_set || is_set(secondary_cookie_high_value.yfilter)) leaf_name_data.push_back(secondary_cookie_high_value.get_name_leafdata());
    if (secondary_cookie_low_value.is_set || is_set(secondary_cookie_low_value.yfilter)) leaf_name_data.push_back(secondary_cookie_low_value.get_name_leafdata());
    if (secondary_cookie_size.is_set || is_set(secondary_cookie_size.yfilter)) leaf_name_data.push_back(secondary_cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value = value;
        secondary_cookie_high_value.value_namespace = name_space;
        secondary_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value = value;
        secondary_cookie_low_value.value_namespace = name_space;
        secondary_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size = value;
        secondary_cookie_size.value_namespace = name_space;
        secondary_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-high-value" || name == "cookie-low-value" || name == "cookie-size" || name == "secondary-cookie-high-value" || name == "secondary-cookie-low-value" || name == "secondary-cookie-size" || name == "session-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "remote"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-high-value" || name == "cookie-low-value" || name == "cookie-size" || name == "session-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::L2Tpv2()
    :
    next_hop_address{YType::str, "next-hop-address"},
    path_mtu{YType::uint16, "path-mtu"},
    protocol{YType::uint16, "protocol"},
    pw_flags{YType::uint8, "pw-flags"},
    rem_udp_port{YType::uint16, "rem-udp-port"},
    source_address{YType::str, "source-address"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tpv2"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::~L2Tpv2()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::has_data() const
{
    return next_hop_address.is_set
	|| path_mtu.is_set
	|| protocol.is_set
	|| pw_flags.is_set
	|| rem_udp_port.is_set
	|| source_address.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| xconnect_id.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(pw_flags.yfilter)
	|| ydk::is_set(rem_udp_port.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pw_flags.is_set || is_set(pw_flags.yfilter)) leaf_name_data.push_back(pw_flags.get_name_leafdata());
    if (rem_udp_port.is_set || is_set(rem_udp_port.yfilter)) leaf_name_data.push_back(rem_udp_port.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flags")
    {
        pw_flags = value;
        pw_flags.value_namespace = name_space;
        pw_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port = value;
        rem_udp_port.value_namespace = name_space;
        rem_udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "pw-flags")
    {
        pw_flags.yfilter = yfilter;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "next-hop-address" || name == "path-mtu" || name == "protocol" || name == "pw-flags" || name == "rem-udp-port" || name == "source-address" || name == "tos-val" || name == "ttl" || name == "xconnect-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "local"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "remote"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::Mpls()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "mpls"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::~Mpls()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
        pw_label.value_namespace = name_space;
        pw_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
        pw_local_label.value_namespace = name_space;
        pw_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
        pw_tunnel_interface.value_namespace = name_space;
        pw_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
        pw_xcid.value_namespace = name_space;
        pw_xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-label")
    {
        pw_label.yfilter = yfilter;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label.yfilter = yfilter;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Vni()
    :
    any_cast_ip{YType::str, "any-cast-ip"},
    anycast_mcast_ip{YType::str, "anycast-mcast-ip"},
    bound{YType::boolean, "bound"},
    encap{YType::uint32, "encap"},
    ingress_replication{YType::boolean, "ingress-replication"},
    mcastip{YType::str, "mcastip"},
    parent_if{YType::str, "parent-if"},
    source_vtep_if{YType::str, "source-vtep-if"},
    srcip{YType::str, "srcip"},
    udp_port{YType::uint32, "udp-port"},
    vx_lan_mode{YType::uint32, "vx-lan-mode"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base>())
{
    base->parent = this;

    yang_name = "vni"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::~Vni()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::has_data() const
{
    return any_cast_ip.is_set
	|| anycast_mcast_ip.is_set
	|| bound.is_set
	|| encap.is_set
	|| ingress_replication.is_set
	|| mcastip.is_set
	|| parent_if.is_set
	|| source_vtep_if.is_set
	|| srcip.is_set
	|| udp_port.is_set
	|| vx_lan_mode.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any_cast_ip.yfilter)
	|| ydk::is_set(anycast_mcast_ip.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(ingress_replication.yfilter)
	|| ydk::is_set(mcastip.yfilter)
	|| ydk::is_set(parent_if.yfilter)
	|| ydk::is_set(source_vtep_if.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| ydk::is_set(vx_lan_mode.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_cast_ip.is_set || is_set(any_cast_ip.yfilter)) leaf_name_data.push_back(any_cast_ip.get_name_leafdata());
    if (anycast_mcast_ip.is_set || is_set(anycast_mcast_ip.yfilter)) leaf_name_data.push_back(anycast_mcast_ip.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (ingress_replication.is_set || is_set(ingress_replication.yfilter)) leaf_name_data.push_back(ingress_replication.get_name_leafdata());
    if (mcastip.is_set || is_set(mcastip.yfilter)) leaf_name_data.push_back(mcastip.get_name_leafdata());
    if (parent_if.is_set || is_set(parent_if.yfilter)) leaf_name_data.push_back(parent_if.get_name_leafdata());
    if (source_vtep_if.is_set || is_set(source_vtep_if.yfilter)) leaf_name_data.push_back(source_vtep_if.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (vx_lan_mode.is_set || is_set(vx_lan_mode.yfilter)) leaf_name_data.push_back(vx_lan_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-cast-ip")
    {
        any_cast_ip = value;
        any_cast_ip.value_namespace = name_space;
        any_cast_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-mcast-ip")
    {
        anycast_mcast_ip = value;
        anycast_mcast_ip.value_namespace = name_space;
        anycast_mcast_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-replication")
    {
        ingress_replication = value;
        ingress_replication.value_namespace = name_space;
        ingress_replication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastip")
    {
        mcastip = value;
        mcastip.value_namespace = name_space;
        mcastip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-if")
    {
        parent_if = value;
        parent_if.value_namespace = name_space;
        parent_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-vtep-if")
    {
        source_vtep_if = value;
        source_vtep_if.value_namespace = name_space;
        source_vtep_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vx-lan-mode")
    {
        vx_lan_mode = value;
        vx_lan_mode.value_namespace = name_space;
        vx_lan_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-cast-ip")
    {
        any_cast_ip.yfilter = yfilter;
    }
    if(value_path == "anycast-mcast-ip")
    {
        anycast_mcast_ip.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "ingress-replication")
    {
        ingress_replication.yfilter = yfilter;
    }
    if(value_path == "mcastip")
    {
        mcastip.yfilter = yfilter;
    }
    if(value_path == "parent-if")
    {
        parent_if.yfilter = yfilter;
    }
    if(value_path == "source-vtep-if")
    {
        source_vtep_if.yfilter = yfilter;
    }
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
    if(value_path == "vx-lan-mode")
    {
        vx_lan_mode.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "any-cast-ip" || name == "anycast-mcast-ip" || name == "bound" || name == "encap" || name == "ingress-replication" || name == "mcastip" || name == "parent-if" || name == "source-vtep-if" || name == "srcip" || name == "udp-port" || name == "vx-lan-mode")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base::Base()
{

    yang_name = "base"; yang_parent_name = "vni"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Segment2()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac>())
	,bp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp>())
	,fxs(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw>())
{
    ac->parent = this;
    bp->parent = this;
    fxs->parent = this;
    pw->parent = this;

    yang_name = "segment2"; yang_parent_name = "l2fib-mon-sess-x-con"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::~Segment2()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (bp !=  nullptr && bp->has_data())
	|| (fxs !=  nullptr && fxs->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (bp !=  nullptr && bp->has_operation())
	|| (fxs !=  nullptr && fxs->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "bp")
    {
        if(bp == nullptr)
        {
            bp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp>();
        }
        return bp;
    }

    if(child_yang_name == "fxs")
    {
        if(fxs == nullptr)
        {
            fxs = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs>();
        }
        return fxs;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw>();
        }
        return pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ac != nullptr)
    {
        children["ac"] = ac;
    }

    if(bp != nullptr)
    {
        children["bp"] = bp;
    }

    if(fxs != nullptr)
    {
        children["fxs"] = fxs;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "bp" || name == "fxs" || name == "pw" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Ac()
    :
    actype{YType::uint8, "actype"},
    adjacency_address{YType::str, "adjacency-address"},
    adjacency_valid{YType::boolean, "adjacency-valid"},
    attachment_circuit_id{YType::uint32, "attachment-circuit-id"},
    attachment_circuit_mtu{YType::uint16, "attachment-circuit-mtu"},
    bound{YType::boolean, "bound"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"},
    fxc_next_hop_valid{YType::boolean, "fxc-next-hop-valid"},
    inter_working_mode{YType::uint8, "inter-working-mode"},
    interface_handle{YType::str, "interface-handle"},
    ip_inter_working_mac{YType::str, "ip-inter-working-mac"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    sub_interface_handle{YType::str, "sub-interface-handle"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base>())
	,fxc_next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop>())
{
    base->parent = this;
    fxc_next_hop->parent = this;

    yang_name = "ac"; yang_parent_name = "segment2"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::has_data() const
{
    return actype.is_set
	|| adjacency_address.is_set
	|| adjacency_valid.is_set
	|| attachment_circuit_id.is_set
	|| attachment_circuit_mtu.is_set
	|| bound.is_set
	|| evpn_internal_label.is_set
	|| fxc_next_hop_valid.is_set
	|| inter_working_mode.is_set
	|| interface_handle.is_set
	|| ip_inter_working_mac.is_set
	|| redundancy_group_id.is_set
	|| redundancy_object_id.is_set
	|| sub_interface_handle.is_set
	|| (base !=  nullptr && base->has_data())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actype.yfilter)
	|| ydk::is_set(adjacency_address.yfilter)
	|| ydk::is_set(adjacency_valid.yfilter)
	|| ydk::is_set(attachment_circuit_id.yfilter)
	|| ydk::is_set(attachment_circuit_mtu.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| ydk::is_set(fxc_next_hop_valid.yfilter)
	|| ydk::is_set(inter_working_mode.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(ip_inter_working_mac.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(sub_interface_handle.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actype.is_set || is_set(actype.yfilter)) leaf_name_data.push_back(actype.get_name_leafdata());
    if (adjacency_address.is_set || is_set(adjacency_address.yfilter)) leaf_name_data.push_back(adjacency_address.get_name_leafdata());
    if (adjacency_valid.is_set || is_set(adjacency_valid.yfilter)) leaf_name_data.push_back(adjacency_valid.get_name_leafdata());
    if (attachment_circuit_id.is_set || is_set(attachment_circuit_id.yfilter)) leaf_name_data.push_back(attachment_circuit_id.get_name_leafdata());
    if (attachment_circuit_mtu.is_set || is_set(attachment_circuit_mtu.yfilter)) leaf_name_data.push_back(attachment_circuit_mtu.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (fxc_next_hop_valid.is_set || is_set(fxc_next_hop_valid.yfilter)) leaf_name_data.push_back(fxc_next_hop_valid.get_name_leafdata());
    if (inter_working_mode.is_set || is_set(inter_working_mode.yfilter)) leaf_name_data.push_back(inter_working_mode.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ip_inter_working_mac.is_set || is_set(ip_inter_working_mac.yfilter)) leaf_name_data.push_back(ip_inter_working_mac.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (sub_interface_handle.is_set || is_set(sub_interface_handle.yfilter)) leaf_name_data.push_back(sub_interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base>();
        }
        return base;
    }

    if(child_yang_name == "fxc-next-hop")
    {
        if(fxc_next_hop == nullptr)
        {
            fxc_next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop>();
        }
        return fxc_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(fxc_next_hop != nullptr)
    {
        children["fxc-next-hop"] = fxc_next_hop;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actype")
    {
        actype = value;
        actype.value_namespace = name_space;
        actype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address = value;
        adjacency_address.value_namespace = name_space;
        adjacency_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid = value;
        adjacency_valid.value_namespace = name_space;
        adjacency_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id = value;
        attachment_circuit_id.value_namespace = name_space;
        attachment_circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu = value;
        attachment_circuit_mtu.value_namespace = name_space;
        attachment_circuit_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid = value;
        fxc_next_hop_valid.value_namespace = name_space;
        fxc_next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode = value;
        inter_working_mode.value_namespace = name_space;
        inter_working_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac = value;
        ip_inter_working_mac.value_namespace = name_space;
        ip_inter_working_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle = value;
        sub_interface_handle.value_namespace = name_space;
        sub_interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actype")
    {
        actype.yfilter = yfilter;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address.yfilter = yfilter;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "fxc-next-hop" || name == "actype" || name == "adjacency-address" || name == "adjacency-valid" || name == "attachment-circuit-id" || name == "attachment-circuit-mtu" || name == "bound" || name == "evpn-internal-label" || name == "fxc-next-hop-valid" || name == "inter-working-mode" || name == "interface-handle" || name == "ip-inter-working-mac" || name == "redundancy-group-id" || name == "redundancy-object-id" || name == "sub-interface-handle")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base::Base()
{

    yang_name = "base"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::FxcNextHop()
    :
    children_count{YType::uint32, "children-count"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base>())
{
    base->parent = this;

    yang_name = "fxc-next-hop"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::~FxcNextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::has_data() const
{
    return children_count.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxc-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "children-count" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "fxc-next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Bp()
    :
    bridge_id{YType::uint32, "bridge-id"},
    learn_key{YType::uint8, "learn-key"},
    msti_pointer{YType::uint32, "msti-pointer"},
    mvrp_sequence_number{YType::uint16, "mvrp-sequence-number"},
    segment_type{YType::uint8, "segment-type"},
    shg_id{YType::uint32, "shg-id"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base>())
	,oper(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper>())
	,p2mp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp>())
{
    base->parent = this;
    oper->parent = this;
    p2mp->parent = this;

    yang_name = "bp"; yang_parent_name = "segment2"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::~Bp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::has_data() const
{
    return bridge_id.is_set
	|| learn_key.is_set
	|| msti_pointer.is_set
	|| mvrp_sequence_number.is_set
	|| segment_type.is_set
	|| shg_id.is_set
	|| (base !=  nullptr && base->has_data())
	|| (oper !=  nullptr && oper->has_data())
	|| (p2mp !=  nullptr && p2mp->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(learn_key.yfilter)
	|| ydk::is_set(msti_pointer.yfilter)
	|| ydk::is_set(mvrp_sequence_number.yfilter)
	|| ydk::is_set(segment_type.yfilter)
	|| ydk::is_set(shg_id.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (oper !=  nullptr && oper->has_operation())
	|| (p2mp !=  nullptr && p2mp->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (learn_key.is_set || is_set(learn_key.yfilter)) leaf_name_data.push_back(learn_key.get_name_leafdata());
    if (msti_pointer.is_set || is_set(msti_pointer.yfilter)) leaf_name_data.push_back(msti_pointer.get_name_leafdata());
    if (mvrp_sequence_number.is_set || is_set(mvrp_sequence_number.yfilter)) leaf_name_data.push_back(mvrp_sequence_number.get_name_leafdata());
    if (segment_type.is_set || is_set(segment_type.yfilter)) leaf_name_data.push_back(segment_type.get_name_leafdata());
    if (shg_id.is_set || is_set(shg_id.yfilter)) leaf_name_data.push_back(shg_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base>();
        }
        return base;
    }

    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper>();
        }
        return oper;
    }

    if(child_yang_name == "p2mp")
    {
        if(p2mp == nullptr)
        {
            p2mp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp>();
        }
        return p2mp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(oper != nullptr)
    {
        children["oper"] = oper;
    }

    if(p2mp != nullptr)
    {
        children["p2mp"] = p2mp;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-key")
    {
        learn_key = value;
        learn_key.value_namespace = name_space;
        learn_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-pointer")
    {
        msti_pointer = value;
        msti_pointer.value_namespace = name_space;
        msti_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number = value;
        mvrp_sequence_number.value_namespace = name_space;
        mvrp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-type")
    {
        segment_type = value;
        segment_type.value_namespace = name_space;
        segment_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shg-id")
    {
        shg_id = value;
        shg_id.value_namespace = name_space;
        shg_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "learn-key")
    {
        learn_key.yfilter = yfilter;
    }
    if(value_path == "msti-pointer")
    {
        msti_pointer.yfilter = yfilter;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number.yfilter = yfilter;
    }
    if(value_path == "segment-type")
    {
        segment_type.yfilter = yfilter;
    }
    if(value_path == "shg-id")
    {
        shg_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "oper" || name == "p2mp" || name == "bridge-id" || name == "learn-key" || name == "msti-pointer" || name == "mvrp-sequence-number" || name == "segment-type" || name == "shg-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base::Base()
{

    yang_name = "base"; yang_parent_name = "bp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::Oper()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"}
    	,
    operational_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation>())
{
    operational_information->parent = this;

    yang_name = "oper"; yang_parent_name = "bp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::~Oper()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| (operational_information !=  nullptr && operational_information->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| (operational_information !=  nullptr && operational_information->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operational-information")
    {
        if(operational_information == nullptr)
        {
            operational_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation>();
        }
        return operational_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(operational_information != nullptr)
    {
        children["operational-information"] = operational_information;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operational-information" || name == "broadcast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "multicast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "unicast-storm-control-kb-ps" || name == "unicast-storm-control-pps")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::OperationalInformation()
    :
    admin_disabled{YType::boolean, "admin-disabled"},
    bvi_configured{YType::boolean, "bvi-configured"},
    dhcp_enabled{YType::boolean, "dhcp-enabled"},
    dhcp_trusted{YType::boolean, "dhcp-trusted"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    igmp_flood_forward_enabled{YType::boolean, "igmp-flood-forward-enabled"},
    igmp_mroute_port_enabled{YType::boolean, "igmp-mroute-port-enabled"},
    igmp_route_guard_enabled{YType::boolean, "igmp-route-guard-enabled"},
    igmp_snoop_enabled{YType::boolean, "igmp-snoop-enabled"},
    igmp_snoop_profile_enabled{YType::boolean, "igmp-snoop-profile-enabled"},
    is_bvi_up{YType::boolean, "is-bvi-up"},
    is_dai_addr_validation_destination_mac_enabled{YType::boolean, "is-dai-addr-validation-destination-mac-enabled"},
    is_dai_addr_validation_ipv4_enabled{YType::boolean, "is-dai-addr-validation-ipv4-enabled"},
    is_dai_addr_validation_source_mac_enabled{YType::boolean, "is-dai-addr-validation-source-mac-enabled"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_evpn_cw_disable{YType::boolean, "is-evpn-cw-disable"},
    is_evpn_enabled{YType::boolean, "is-evpn-enabled"},
    is_evpn_flow_label{YType::boolean, "is-evpn-flow-label"},
    is_igmp_snoop_enabled{YType::boolean, "is-igmp-snoop-enabled"},
    is_ipsg_enabled{YType::boolean, "is-ipsg-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_mac_secure_accept_shutdown{YType::boolean, "is-mac-secure-accept-shutdown"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    is_mac_secure_threshold_enabled{YType::boolean, "is-mac-secure-threshold-enabled"},
    is_p2mp_pw_enabled{YType::boolean, "is-p2mp-pw-enabled"},
    is_pbbevpn_enabled{YType::boolean, "is-pbbevpn-enabled"},
    is_swmac_learning{YType::boolean, "is-swmac-learning"},
    is_vni_enabled{YType::boolean, "is-vni-enabled"},
    is_vpls_flood_optimization_enabled{YType::boolean, "is-vpls-flood-optimization-enabled"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_aging_type{YType::boolean, "mac-aging-type"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification_type{YType::enumeration, "mac-limit-notification-type"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    mld_flood_forward_enabled{YType::boolean, "mld-flood-forward-enabled"},
    mld_mroute_port_enabled{YType::boolean, "mld-mroute-port-enabled"},
    mld_route_guard_enabled{YType::boolean, "mld-route-guard-enabled"},
    mld_snoop_enabled{YType::boolean, "mld-snoop-enabled"},
    mld_snoop_profile_enabled{YType::boolean, "mld-snoop-profile-enabled"},
    msti{YType::uint32, "msti"},
    mtu{YType::uint32, "mtu"},
    number_of_macs{YType::uint32, "number-of-macs"},
    nv_satellite_offload_ipv4_multicast_disabled{YType::boolean, "nv-satellite-offload-ipv4-multicast-disabled"},
    storm_control_broadcast_enabled{YType::boolean, "storm-control-broadcast-enabled"},
    storm_control_broadcast_rate_unit{YType::enumeration, "storm-control-broadcast-rate-unit"},
    storm_control_multicast_enabled{YType::boolean, "storm-control-multicast-enabled"},
    storm_control_multicast_rate_unit{YType::enumeration, "storm-control-multicast-rate-unit"},
    storm_control_unicast_enabled{YType::boolean, "storm-control-unicast-enabled"},
    storm_control_unicast_rate_unit{YType::enumeration, "storm-control-unicast-rate-unit"},
    stp_participating{YType::boolean, "stp-participating"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"}
{

    yang_name = "operational-information"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::~OperationalInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::has_data() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_data())
            return true;
    }
    return admin_disabled.is_set
	|| bvi_configured.is_set
	|| dhcp_enabled.is_set
	|| dhcp_trusted.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| flooding_disabled.is_set
	|| igmp_flood_forward_enabled.is_set
	|| igmp_mroute_port_enabled.is_set
	|| igmp_route_guard_enabled.is_set
	|| igmp_snoop_enabled.is_set
	|| igmp_snoop_profile_enabled.is_set
	|| is_bvi_up.is_set
	|| is_dai_addr_validation_destination_mac_enabled.is_set
	|| is_dai_addr_validation_ipv4_enabled.is_set
	|| is_dai_addr_validation_source_mac_enabled.is_set
	|| is_dai_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_evpn_cw_disable.is_set
	|| is_evpn_enabled.is_set
	|| is_evpn_flow_label.is_set
	|| is_igmp_snoop_enabled.is_set
	|| is_ipsg_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_mac_secure_accept_shutdown.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| is_mac_secure_threshold_enabled.is_set
	|| is_p2mp_pw_enabled.is_set
	|| is_pbbevpn_enabled.is_set
	|| is_swmac_learning.is_set
	|| is_vni_enabled.is_set
	|| is_vpls_flood_optimization_enabled.is_set
	|| mac_aging_time.is_set
	|| mac_aging_type.is_set
	|| mac_learning_disabled.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification_type.is_set
	|| mac_limit_threshold.is_set
	|| mac_port_down_flush_disabled.is_set
	|| mac_secure_action.is_set
	|| mld_flood_forward_enabled.is_set
	|| mld_mroute_port_enabled.is_set
	|| mld_route_guard_enabled.is_set
	|| mld_snoop_enabled.is_set
	|| mld_snoop_profile_enabled.is_set
	|| msti.is_set
	|| mtu.is_set
	|| number_of_macs.is_set
	|| nv_satellite_offload_ipv4_multicast_disabled.is_set
	|| storm_control_broadcast_enabled.is_set
	|| storm_control_broadcast_rate_unit.is_set
	|| storm_control_multicast_enabled.is_set
	|| storm_control_multicast_rate_unit.is_set
	|| storm_control_unicast_enabled.is_set
	|| storm_control_unicast_rate_unit.is_set
	|| stp_participating.is_set
	|| unknown_unicast_flooding_disabled.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::has_operation() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admin_disabled.yfilter)
	|| ydk::is_set(bvi_configured.yfilter)
	|| ydk::is_set(dhcp_enabled.yfilter)
	|| ydk::is_set(dhcp_trusted.yfilter)
	|| ydk::is_set(flood_unknown_unicast_enabled.yfilter)
	|| ydk::is_set(flooding_disabled.yfilter)
	|| ydk::is_set(igmp_flood_forward_enabled.yfilter)
	|| ydk::is_set(igmp_mroute_port_enabled.yfilter)
	|| ydk::is_set(igmp_route_guard_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_profile_enabled.yfilter)
	|| ydk::is_set(is_bvi_up.yfilter)
	|| ydk::is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_ipv4_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_source_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_enabled.yfilter)
	|| ydk::is_set(is_dai_logging_enabled.yfilter)
	|| ydk::is_set(is_evpn_cw_disable.yfilter)
	|| ydk::is_set(is_evpn_enabled.yfilter)
	|| ydk::is_set(is_evpn_flow_label.yfilter)
	|| ydk::is_set(is_igmp_snoop_enabled.yfilter)
	|| ydk::is_set(is_ipsg_enabled.yfilter)
	|| ydk::is_set(is_ipsg_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_accept_shutdown.yfilter)
	|| ydk::is_set(is_mac_secure_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_logging_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_threshold_enabled.yfilter)
	|| ydk::is_set(is_p2mp_pw_enabled.yfilter)
	|| ydk::is_set(is_pbbevpn_enabled.yfilter)
	|| ydk::is_set(is_swmac_learning.yfilter)
	|| ydk::is_set(is_vni_enabled.yfilter)
	|| ydk::is_set(is_vpls_flood_optimization_enabled.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(mac_aging_type.yfilter)
	|| ydk::is_set(mac_learning_disabled.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_limit_notification_type.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mac_port_down_flush_disabled.yfilter)
	|| ydk::is_set(mac_secure_action.yfilter)
	|| ydk::is_set(mld_flood_forward_enabled.yfilter)
	|| ydk::is_set(mld_mroute_port_enabled.yfilter)
	|| ydk::is_set(mld_route_guard_enabled.yfilter)
	|| ydk::is_set(mld_snoop_enabled.yfilter)
	|| ydk::is_set(mld_snoop_profile_enabled.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(number_of_macs.yfilter)
	|| ydk::is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter)
	|| ydk::is_set(storm_control_broadcast_enabled.yfilter)
	|| ydk::is_set(storm_control_broadcast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_multicast_enabled.yfilter)
	|| ydk::is_set(storm_control_multicast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_unicast_enabled.yfilter)
	|| ydk::is_set(storm_control_unicast_rate_unit.yfilter)
	|| ydk::is_set(stp_participating.yfilter)
	|| ydk::is_set(unknown_unicast_flooding_disabled.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_disabled.is_set || is_set(admin_disabled.yfilter)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (bvi_configured.is_set || is_set(bvi_configured.yfilter)) leaf_name_data.push_back(bvi_configured.get_name_leafdata());
    if (dhcp_enabled.is_set || is_set(dhcp_enabled.yfilter)) leaf_name_data.push_back(dhcp_enabled.get_name_leafdata());
    if (dhcp_trusted.is_set || is_set(dhcp_trusted.yfilter)) leaf_name_data.push_back(dhcp_trusted.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.yfilter)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.yfilter)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (igmp_flood_forward_enabled.is_set || is_set(igmp_flood_forward_enabled.yfilter)) leaf_name_data.push_back(igmp_flood_forward_enabled.get_name_leafdata());
    if (igmp_mroute_port_enabled.is_set || is_set(igmp_mroute_port_enabled.yfilter)) leaf_name_data.push_back(igmp_mroute_port_enabled.get_name_leafdata());
    if (igmp_route_guard_enabled.is_set || is_set(igmp_route_guard_enabled.yfilter)) leaf_name_data.push_back(igmp_route_guard_enabled.get_name_leafdata());
    if (igmp_snoop_enabled.is_set || is_set(igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_enabled.get_name_leafdata());
    if (igmp_snoop_profile_enabled.is_set || is_set(igmp_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_profile_enabled.get_name_leafdata());
    if (is_bvi_up.is_set || is_set(is_bvi_up.yfilter)) leaf_name_data.push_back(is_bvi_up.get_name_leafdata());
    if (is_dai_addr_validation_destination_mac_enabled.is_set || is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validation_ipv4_enabled.is_set || is_set(is_dai_addr_validation_ipv4_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validation_source_mac_enabled.is_set || is_set(is_dai_addr_validation_source_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.yfilter)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.yfilter)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_evpn_cw_disable.is_set || is_set(is_evpn_cw_disable.yfilter)) leaf_name_data.push_back(is_evpn_cw_disable.get_name_leafdata());
    if (is_evpn_enabled.is_set || is_set(is_evpn_enabled.yfilter)) leaf_name_data.push_back(is_evpn_enabled.get_name_leafdata());
    if (is_evpn_flow_label.is_set || is_set(is_evpn_flow_label.yfilter)) leaf_name_data.push_back(is_evpn_flow_label.get_name_leafdata());
    if (is_igmp_snoop_enabled.is_set || is_set(is_igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(is_igmp_snoop_enabled.get_name_leafdata());
    if (is_ipsg_enabled.is_set || is_set(is_ipsg_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown.is_set || is_set(is_mac_secure_accept_shutdown.yfilter)) leaf_name_data.push_back(is_mac_secure_accept_shutdown.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_mac_secure_threshold_enabled.is_set || is_set(is_mac_secure_threshold_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_threshold_enabled.get_name_leafdata());
    if (is_p2mp_pw_enabled.is_set || is_set(is_p2mp_pw_enabled.yfilter)) leaf_name_data.push_back(is_p2mp_pw_enabled.get_name_leafdata());
    if (is_pbbevpn_enabled.is_set || is_set(is_pbbevpn_enabled.yfilter)) leaf_name_data.push_back(is_pbbevpn_enabled.get_name_leafdata());
    if (is_swmac_learning.is_set || is_set(is_swmac_learning.yfilter)) leaf_name_data.push_back(is_swmac_learning.get_name_leafdata());
    if (is_vni_enabled.is_set || is_set(is_vni_enabled.yfilter)) leaf_name_data.push_back(is_vni_enabled.get_name_leafdata());
    if (is_vpls_flood_optimization_enabled.is_set || is_set(is_vpls_flood_optimization_enabled.yfilter)) leaf_name_data.push_back(is_vpls_flood_optimization_enabled.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_aging_type.is_set || is_set(mac_aging_type.yfilter)) leaf_name_data.push_back(mac_aging_type.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.yfilter)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification_type.is_set || is_set(mac_limit_notification_type.yfilter)) leaf_name_data.push_back(mac_limit_notification_type.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.yfilter)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_flood_forward_enabled.is_set || is_set(mld_flood_forward_enabled.yfilter)) leaf_name_data.push_back(mld_flood_forward_enabled.get_name_leafdata());
    if (mld_mroute_port_enabled.is_set || is_set(mld_mroute_port_enabled.yfilter)) leaf_name_data.push_back(mld_mroute_port_enabled.get_name_leafdata());
    if (mld_route_guard_enabled.is_set || is_set(mld_route_guard_enabled.yfilter)) leaf_name_data.push_back(mld_route_guard_enabled.get_name_leafdata());
    if (mld_snoop_enabled.is_set || is_set(mld_snoop_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_enabled.get_name_leafdata());
    if (mld_snoop_profile_enabled.is_set || is_set(mld_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_profile_enabled.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (number_of_macs.is_set || is_set(number_of_macs.yfilter)) leaf_name_data.push_back(number_of_macs.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());
    if (storm_control_broadcast_enabled.is_set || is_set(storm_control_broadcast_enabled.yfilter)) leaf_name_data.push_back(storm_control_broadcast_enabled.get_name_leafdata());
    if (storm_control_broadcast_rate_unit.is_set || is_set(storm_control_broadcast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_broadcast_rate_unit.get_name_leafdata());
    if (storm_control_multicast_enabled.is_set || is_set(storm_control_multicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_multicast_enabled.get_name_leafdata());
    if (storm_control_multicast_rate_unit.is_set || is_set(storm_control_multicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_multicast_rate_unit.get_name_leafdata());
    if (storm_control_unicast_enabled.is_set || is_set(storm_control_unicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_unicast_enabled.get_name_leafdata());
    if (storm_control_unicast_rate_unit.is_set || is_set(storm_control_unicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_unicast_rate_unit.get_name_leafdata());
    if (stp_participating.is_set || is_set(stp_participating.yfilter)) leaf_name_data.push_back(stp_participating.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.yfilter)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feature")
    {
        for(auto const & c : feature)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature>();
        c->parent = this;
        feature.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : feature)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
        admin_disabled.value_namespace = name_space;
        admin_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured = value;
        bvi_configured.value_namespace = name_space;
        bvi_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled = value;
        dhcp_enabled.value_namespace = name_space;
        dhcp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted = value;
        dhcp_trusted.value_namespace = name_space;
        dhcp_trusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
        flood_unknown_unicast_enabled.value_namespace = name_space;
        flood_unknown_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
        flooding_disabled.value_namespace = name_space;
        flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled = value;
        igmp_flood_forward_enabled.value_namespace = name_space;
        igmp_flood_forward_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled = value;
        igmp_mroute_port_enabled.value_namespace = name_space;
        igmp_mroute_port_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled = value;
        igmp_route_guard_enabled.value_namespace = name_space;
        igmp_route_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled = value;
        igmp_snoop_enabled.value_namespace = name_space;
        igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled = value;
        igmp_snoop_profile_enabled.value_namespace = name_space;
        igmp_snoop_profile_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up = value;
        is_bvi_up.value_namespace = name_space;
        is_bvi_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled = value;
        is_dai_addr_validation_destination_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_destination_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled = value;
        is_dai_addr_validation_ipv4_enabled.value_namespace = name_space;
        is_dai_addr_validation_ipv4_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled = value;
        is_dai_addr_validation_source_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_source_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
        is_dai_enabled.value_namespace = name_space;
        is_dai_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
        is_dai_logging_enabled.value_namespace = name_space;
        is_dai_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable = value;
        is_evpn_cw_disable.value_namespace = name_space;
        is_evpn_cw_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled = value;
        is_evpn_enabled.value_namespace = name_space;
        is_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label = value;
        is_evpn_flow_label.value_namespace = name_space;
        is_evpn_flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled = value;
        is_igmp_snoop_enabled.value_namespace = name_space;
        is_igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled = value;
        is_ipsg_enabled.value_namespace = name_space;
        is_ipsg_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
        is_ipsg_logging_enabled.value_namespace = name_space;
        is_ipsg_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown = value;
        is_mac_secure_accept_shutdown.value_namespace = name_space;
        is_mac_secure_accept_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
        is_mac_secure_enabled.value_namespace = name_space;
        is_mac_secure_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
        is_mac_secure_logging_enabled.value_namespace = name_space;
        is_mac_secure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled = value;
        is_mac_secure_threshold_enabled.value_namespace = name_space;
        is_mac_secure_threshold_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled = value;
        is_p2mp_pw_enabled.value_namespace = name_space;
        is_p2mp_pw_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled = value;
        is_pbbevpn_enabled.value_namespace = name_space;
        is_pbbevpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning = value;
        is_swmac_learning.value_namespace = name_space;
        is_swmac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled = value;
        is_vni_enabled.value_namespace = name_space;
        is_vni_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled = value;
        is_vpls_flood_optimization_enabled.value_namespace = name_space;
        is_vpls_flood_optimization_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type = value;
        mac_aging_type.value_namespace = name_space;
        mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
        mac_learning_disabled.value_namespace = name_space;
        mac_learning_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type = value;
        mac_limit_notification_type.value_namespace = name_space;
        mac_limit_notification_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
        mac_port_down_flush_disabled.value_namespace = name_space;
        mac_port_down_flush_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
        mac_secure_action.value_namespace = name_space;
        mac_secure_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled = value;
        mld_flood_forward_enabled.value_namespace = name_space;
        mld_flood_forward_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled = value;
        mld_mroute_port_enabled.value_namespace = name_space;
        mld_mroute_port_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled = value;
        mld_route_guard_enabled.value_namespace = name_space;
        mld_route_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled = value;
        mld_snoop_enabled.value_namespace = name_space;
        mld_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled = value;
        mld_snoop_profile_enabled.value_namespace = name_space;
        mld_snoop_profile_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs = value;
        number_of_macs.value_namespace = name_space;
        number_of_macs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace = name_space;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled = value;
        storm_control_broadcast_enabled.value_namespace = name_space;
        storm_control_broadcast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit = value;
        storm_control_broadcast_rate_unit.value_namespace = name_space;
        storm_control_broadcast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled = value;
        storm_control_multicast_enabled.value_namespace = name_space;
        storm_control_multicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit = value;
        storm_control_multicast_rate_unit.value_namespace = name_space;
        storm_control_multicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled = value;
        storm_control_unicast_enabled.value_namespace = name_space;
        storm_control_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit = value;
        storm_control_unicast_rate_unit.value_namespace = name_space;
        storm_control_unicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp-participating")
    {
        stp_participating = value;
        stp_participating.value_namespace = name_space;
        stp_participating.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
        unknown_unicast_flooding_disabled.value_namespace = name_space;
        unknown_unicast_flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled.yfilter = yfilter;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured.yfilter = yfilter;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled.yfilter = yfilter;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted.yfilter = yfilter;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable.yfilter = yfilter;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled.yfilter = yfilter;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label.yfilter = yfilter;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled.yfilter = yfilter;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled.yfilter = yfilter;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled.yfilter = yfilter;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning.yfilter = yfilter;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled.yfilter = yfilter;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action.yfilter = yfilter;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs.yfilter = yfilter;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "stp-participating")
    {
        stp_participating.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "feature" || name == "admin-disabled" || name == "bvi-configured" || name == "dhcp-enabled" || name == "dhcp-trusted" || name == "flood-unknown-unicast-enabled" || name == "flooding-disabled" || name == "igmp-flood-forward-enabled" || name == "igmp-mroute-port-enabled" || name == "igmp-route-guard-enabled" || name == "igmp-snoop-enabled" || name == "igmp-snoop-profile-enabled" || name == "is-bvi-up" || name == "is-dai-addr-validation-destination-mac-enabled" || name == "is-dai-addr-validation-ipv4-enabled" || name == "is-dai-addr-validation-source-mac-enabled" || name == "is-dai-enabled" || name == "is-dai-logging-enabled" || name == "is-evpn-cw-disable" || name == "is-evpn-enabled" || name == "is-evpn-flow-label" || name == "is-igmp-snoop-enabled" || name == "is-ipsg-enabled" || name == "is-ipsg-logging-enabled" || name == "is-mac-secure-accept-shutdown" || name == "is-mac-secure-enabled" || name == "is-mac-secure-logging-enabled" || name == "is-mac-secure-threshold-enabled" || name == "is-p2mp-pw-enabled" || name == "is-pbbevpn-enabled" || name == "is-swmac-learning" || name == "is-vni-enabled" || name == "is-vpls-flood-optimization-enabled" || name == "mac-aging-time" || name == "mac-aging-type" || name == "mac-learning-disabled" || name == "mac-limit" || name == "mac-limit-action" || name == "mac-limit-notification-type" || name == "mac-limit-threshold" || name == "mac-port-down-flush-disabled" || name == "mac-secure-action" || name == "mld-flood-forward-enabled" || name == "mld-mroute-port-enabled" || name == "mld-route-guard-enabled" || name == "mld-snoop-enabled" || name == "mld-snoop-profile-enabled" || name == "msti" || name == "mtu" || name == "number-of-macs" || name == "nv-satellite-offload-ipv4-multicast-disabled" || name == "storm-control-broadcast-enabled" || name == "storm-control-broadcast-rate-unit" || name == "storm-control-multicast-enabled" || name == "storm-control-multicast-rate-unit" || name == "storm-control-unicast-enabled" || name == "storm-control-unicast-rate-unit" || name == "stp-participating" || name == "unknown-unicast-flooding-disabled")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Feature()
    :
    feature_type{YType::enumeration, "feature-type"}
    	,
    dhcp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp>())
	,igmp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp>())
	,mld(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld>())
{
    dhcp->parent = this;
    igmp->parent = this;
    mld->parent = this;

    yang_name = "feature"; yang_parent_name = "operational-information"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::~Feature()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::has_data() const
{
    return feature_type.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (mld !=  nullptr && mld->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(feature_type.yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (mld !=  nullptr && mld->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_type.is_set || is_set(feature_type.yfilter)) leaf_name_data.push_back(feature_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "mld")
    {
        if(mld == nullptr)
        {
            mld = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld>();
        }
        return mld;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(mld != nullptr)
    {
        children["mld"] = mld;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "feature-type")
    {
        feature_type = value;
        feature_type.value_namespace = name_space;
        feature_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "feature-type")
    {
        feature_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "igmp" || name == "mld" || name == "feature-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::Dhcp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "dhcp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::~Dhcp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::Igmp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "igmp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::~Igmp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::Mld()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "mld"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::~Mld()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::P2Mp()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsm_id{YType::uint32, "lsm-id"},
    p2mp_id{YType::uint16, "p2mp-id"},
    ptree_owner_lmrib{YType::boolean, "ptree-owner-lmrib"},
    ptree_type{YType::enumeration, "ptree-type"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "p2mp"; yang_parent_name = "bp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::~P2Mp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::has_data() const
{
    return extended_tunnel_id.is_set
	|| lsm_id.is_set
	|| p2mp_id.is_set
	|| ptree_owner_lmrib.is_set
	|| ptree_type.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(lsm_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(ptree_owner_lmrib.yfilter)
	|| ydk::is_set(ptree_type.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsm_id.is_set || is_set(lsm_id.yfilter)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (ptree_owner_lmrib.is_set || is_set(ptree_owner_lmrib.yfilter)) leaf_name_data.push_back(ptree_owner_lmrib.get_name_leafdata());
    if (ptree_type.is_set || is_set(ptree_type.yfilter)) leaf_name_data.push_back(ptree_type.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsm-id")
    {
        lsm_id = value;
        lsm_id.value_namespace = name_space;
        lsm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptree-owner-lmrib")
    {
        ptree_owner_lmrib = value;
        ptree_owner_lmrib.value_namespace = name_space;
        ptree_owner_lmrib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptree-type")
    {
        ptree_type = value;
        ptree_type.value_namespace = name_space;
        ptree_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsm-id")
    {
        lsm_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "ptree-owner-lmrib")
    {
        ptree_owner_lmrib.yfilter = yfilter;
    }
    if(value_path == "ptree-type")
    {
        ptree_type.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-tunnel-id" || name == "lsm-id" || name == "p2mp-id" || name == "ptree-owner-lmrib" || name == "ptree-type" || name == "tunnel-id")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Fxs()
    :
    fxs_id{YType::uint32, "fxs-id"},
    segment_type{YType::uint8, "segment-type"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base>())
{
    base->parent = this;

    yang_name = "fxs"; yang_parent_name = "segment2"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::~Fxs()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::has_data() const
{
    return fxs_id.is_set
	|| segment_type.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fxs_id.yfilter)
	|| ydk::is_set(segment_type.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fxs_id.is_set || is_set(fxs_id.yfilter)) leaf_name_data.push_back(fxs_id.get_name_leafdata());
    if (segment_type.is_set || is_set(segment_type.yfilter)) leaf_name_data.push_back(segment_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fxs-id")
    {
        fxs_id = value;
        fxs_id.value_namespace = name_space;
        fxs_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-type")
    {
        segment_type = value;
        segment_type.value_namespace = name_space;
        segment_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fxs-id")
    {
        fxs_id.yfilter = yfilter;
    }
    if(value_path == "segment-type")
    {
        segment_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "fxs-id" || name == "segment-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::Base()
{

    yang_name = "base"; yang_parent_name = "fxs"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Pw()
    :
    ac_id{YType::uint32, "ac-id"},
    active{YType::boolean, "active"},
    backup_configured{YType::boolean, "backup-configured"},
    bound{YType::boolean, "bound"},
    context{YType::uint16, "context"},
    forward_class{YType::uint8, "forward-class"},
    global_id{YType::uint32, "global-id"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    grouping_supported{YType::boolean, "grouping-supported"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    pw_id{YType::uint64, "pw-id"},
    pw_load_balance_type{YType::enumeration, "pw-load-balance-type"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    sequence_resync_threshold{YType::uint16, "sequence-resync-threshold"},
    signal_capability_flags{YType::uint32, "signal-capability-flags"}
    	,
    backup_pseudo_wire(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire>())
	,base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop>())
	,pseudo_wire_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion>())
{
    backup_pseudo_wire->parent = this;
    base->parent = this;
    next_hop->parent = this;
    pseudo_wire_union->parent = this;

    yang_name = "pw"; yang_parent_name = "segment2"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::has_data() const
{
    return ac_id.is_set
	|| active.is_set
	|| backup_configured.is_set
	|| bound.is_set
	|| context.is_set
	|| forward_class.is_set
	|| global_id.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| grouping_supported.is_set
	|| next_hop_address.is_set
	|| next_hop_valid.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_flow_label_tx.is_set
	|| pw_id.is_set
	|| pw_load_balance_type.is_set
	|| redundancy_role.is_set
	|| sequence_resync_threshold.is_set
	|| signal_capability_flags.is_set
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_data())
	|| (base !=  nullptr && base->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(backup_configured.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(pw_load_balance_type.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| ydk::is_set(sequence_resync_threshold.yfilter)
	|| ydk::is_set(signal_capability_flags.yfilter)
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_operation())
	|| (base !=  nullptr && base->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_configured.is_set || is_set(backup_configured.yfilter)) leaf_name_data.push_back(backup_configured.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (pw_load_balance_type.is_set || is_set(pw_load_balance_type.yfilter)) leaf_name_data.push_back(pw_load_balance_type.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (sequence_resync_threshold.is_set || is_set(sequence_resync_threshold.yfilter)) leaf_name_data.push_back(sequence_resync_threshold.get_name_leafdata());
    if (signal_capability_flags.is_set || is_set(signal_capability_flags.yfilter)) leaf_name_data.push_back(signal_capability_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-pseudo-wire")
    {
        if(backup_pseudo_wire == nullptr)
        {
            backup_pseudo_wire = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire>();
        }
        return backup_pseudo_wire;
    }

    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base>();
        }
        return base;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pseudo-wire-union")
    {
        if(pseudo_wire_union == nullptr)
        {
            pseudo_wire_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion>();
        }
        return pseudo_wire_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_pseudo_wire != nullptr)
    {
        children["backup-pseudo-wire"] = backup_pseudo_wire;
    }

    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(pseudo_wire_union != nullptr)
    {
        children["pseudo-wire-union"] = pseudo_wire_union;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-configured")
    {
        backup_configured = value;
        backup_configured.value_namespace = name_space;
        backup_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type = value;
        pw_load_balance_type.value_namespace = name_space;
        pw_load_balance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold = value;
        sequence_resync_threshold.value_namespace = name_space;
        sequence_resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags = value;
        signal_capability_flags.value_namespace = name_space;
        signal_capability_flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "backup-configured")
    {
        backup_configured.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold.yfilter = yfilter;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-pseudo-wire" || name == "base" || name == "next-hop" || name == "pseudo-wire-union" || name == "ac-id" || name == "active" || name == "backup-configured" || name == "bound" || name == "context" || name == "forward-class" || name == "global-id" || name == "group-id" || name == "group-state" || name == "grouping-supported" || name == "next-hop-address" || name == "next-hop-valid" || name == "pseudo-wire-id-type" || name == "pw-flow-label-tx" || name == "pw-id" || name == "pw-load-balance-type" || name == "redundancy-role" || name == "sequence-resync-threshold" || name == "signal-capability-flags")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::BackupPseudoWire()
    :
    active{YType::boolean, "active"},
    backup_next_hop{YType::str, "backup-next-hop"},
    backup_pseudo_wire_id{YType::uint32, "backup-pseudo-wire-id"},
    backup_pseudo_wire_id_type{YType::enumeration, "backup-pseudo-wire-id-type"},
    bound{YType::boolean, "bound"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    grouping_supported{YType::boolean, "grouping-supported"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    redundancy_role{YType::enumeration, "redundancy-role"}
    	,
    atom(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom>())
{
    atom->parent = this;

    yang_name = "backup-pseudo-wire"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::~BackupPseudoWire()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::has_data() const
{
    return active.is_set
	|| backup_next_hop.is_set
	|| backup_pseudo_wire_id.is_set
	|| backup_pseudo_wire_id_type.is_set
	|| bound.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| grouping_supported.is_set
	|| pw_flow_label_tx.is_set
	|| redundancy_role.is_set
	|| (atom !=  nullptr && atom->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(backup_next_hop.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id_type.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| (atom !=  nullptr && atom->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudo-wire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_next_hop.is_set || is_set(backup_next_hop.yfilter)) leaf_name_data.push_back(backup_next_hop.get_name_leafdata());
    if (backup_pseudo_wire_id.is_set || is_set(backup_pseudo_wire_id.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id.get_name_leafdata());
    if (backup_pseudo_wire_id_type.is_set || is_set(backup_pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id_type.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom>();
        }
        return atom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atom != nullptr)
    {
        children["atom"] = atom;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-next-hop")
    {
        backup_next_hop = value;
        backup_next_hop.value_namespace = name_space;
        backup_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id = value;
        backup_pseudo_wire_id.value_namespace = name_space;
        backup_pseudo_wire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type = value;
        backup_pseudo_wire_id_type.value_namespace = name_space;
        backup_pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "backup-next-hop")
    {
        backup_next_hop.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atom" || name == "active" || name == "backup-next-hop" || name == "backup-pseudo-wire-id" || name == "backup-pseudo-wire-id-type" || name == "bound" || name == "group-id" || name == "group-state" || name == "grouping-supported" || name == "pw-flow-label-tx" || name == "redundancy-role")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::Atom()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "atom"; yang_parent_name = "backup-pseudo-wire"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::~Atom()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
        pw_label.value_namespace = name_space;
        pw_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
        pw_local_label.value_namespace = name_space;
        pw_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
        pw_tunnel_interface.value_namespace = name_space;
        pw_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
        pw_xcid.value_namespace = name_space;
        pw_xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-label")
    {
        pw_label.yfilter = yfilter;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label.yfilter = yfilter;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::has_data() const
{
    return children_count.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "children-count" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::PseudoWireUnion()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    l2tp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp>())
	,l2tp_ipv6_ts(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts>())
	,l2tpv2(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2>())
	,mpls(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls>())
{
    l2tp->parent = this;
    l2tp_ipv6_ts->parent = this;
    l2tpv2->parent = this;
    mpls->parent = this;

    yang_name = "pseudo-wire-union"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::~PseudoWireUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::has_data() const
{
    return data_type.is_set
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_data())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_operation())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "l2tp-ipv6-ts")
    {
        if(l2tp_ipv6_ts == nullptr)
        {
            l2tp_ipv6_ts = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts>();
        }
        return l2tp_ipv6_ts;
    }

    if(child_yang_name == "l2tpv2")
    {
        if(l2tpv2 == nullptr)
        {
            l2tpv2 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2>();
        }
        return l2tpv2;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2tp != nullptr)
    {
        children["l2tp"] = l2tp;
    }

    if(l2tp_ipv6_ts != nullptr)
    {
        children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
    }

    if(l2tpv2 != nullptr)
    {
        children["l2tpv2"] = l2tpv2;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tp" || name == "l2tp-ipv6-ts" || name == "l2tpv2" || name == "mpls" || name == "data-type")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::L2Tp()
    :
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::~L2Tp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::has_data() const
{
    return path_mtu.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "path-mtu" || name == "sequence-number-expected" || name == "sequence-number-sent" || name == "tos-val" || name == "ttl")
        return true;
    return false;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "local"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true;
}

L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-high-value" || name == "cookie-low-value" || name == "cookie-size" || name == "session-id")
        return true;
    return false;
}


}
}

