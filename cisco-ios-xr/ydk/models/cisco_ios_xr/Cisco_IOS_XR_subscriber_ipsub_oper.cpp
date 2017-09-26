
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_ipsub_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_ipsub_oper {

IpSubscriber::IpSubscriber()
    :
    nodes(std::make_shared<IpSubscriber::Nodes>())
{
    nodes->parent = this;

    yang_name = "ip-subscriber"; yang_parent_name = "Cisco-IOS-XR-subscriber-ipsub-oper"; is_top_level_class = true; has_list_ancestor = false;
}

IpSubscriber::~IpSubscriber()
{
}

bool IpSubscriber::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool IpSubscriber::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string IpSubscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-ipsub-oper:ip-subscriber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<IpSubscriber::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void IpSubscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSubscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> IpSubscriber::clone_ptr() const
{
    return std::make_shared<IpSubscriber>();
}

std::string IpSubscriber::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string IpSubscriber::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function IpSubscriber::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IpSubscriber::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool IpSubscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

IpSubscriber::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = false;
}

IpSubscriber::Nodes::~Nodes()
{
}

bool IpSubscriber::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool IpSubscriber::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IpSubscriber::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-ipsub-oper:ip-subscriber/" << get_segment_path();
    return path_buffer.str();
}

std::string IpSubscriber::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<IpSubscriber::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpSubscriber::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSubscriber::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpSubscriber::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    access_interfaces(std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces>())
	,interfaces(std::make_shared<IpSubscriber::Nodes::Node::Interfaces>())
	,summary(std::make_shared<IpSubscriber::Nodes::Node::Summary>())
{
    access_interfaces->parent = this;
    interfaces->parent = this;
    summary->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

IpSubscriber::Nodes::Node::~Node()
{
}

bool IpSubscriber::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (access_interfaces !=  nullptr && access_interfaces->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool IpSubscriber::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (access_interfaces !=  nullptr && access_interfaces->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string IpSubscriber::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-ipsub-oper:ip-subscriber/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string IpSubscriber::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interfaces")
    {
        if(access_interfaces == nullptr)
        {
            access_interfaces = std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces>();
        }
        return access_interfaces;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<IpSubscriber::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<IpSubscriber::Nodes::Node::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_interfaces != nullptr)
    {
        children["access-interfaces"] = access_interfaces;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void IpSubscriber::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interfaces" || name == "interfaces" || name == "summary" || name == "node-name")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterfaces()
{

    yang_name = "access-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::AccessInterfaces::~AccessInterfaces()
{
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::has_data() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_data())
            return true;
    }
    return false;
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::has_operation() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IpSubscriber::Nodes::Node::AccessInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::AccessInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::AccessInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface")
    {
        for(auto const & c : access_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface>();
        c->parent = this;
        access_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::AccessInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpSubscriber::Nodes::Node::AccessInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSubscriber::Nodes::Node::AccessInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::AccessInterface()
    :
    interface_name{YType::str, "interface-name"},
    age{YType::str, "age"},
    interface_creation_time{YType::str, "interface-creation-time"},
    interface_type{YType::str, "interface-type"},
    ipv6_state{YType::enumeration, "ipv6-state"},
    state{YType::enumeration, "state"},
    vlan_type{YType::enumeration, "vlan-type"}
    	,
    initiators(std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators>())
	,ipv6_initiators(std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators>())
	,session_limit(std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit>())
{
    initiators->parent = this;
    ipv6_initiators->parent = this;
    session_limit->parent = this;

    yang_name = "access-interface"; yang_parent_name = "access-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::~AccessInterface()
{
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::has_data() const
{
    return interface_name.is_set
	|| age.is_set
	|| interface_creation_time.is_set
	|| interface_type.is_set
	|| ipv6_state.is_set
	|| state.is_set
	|| vlan_type.is_set
	|| (initiators !=  nullptr && initiators->has_data())
	|| (ipv6_initiators !=  nullptr && ipv6_initiators->has_data())
	|| (session_limit !=  nullptr && session_limit->has_data());
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(interface_creation_time.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(ipv6_state.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(vlan_type.yfilter)
	|| (initiators !=  nullptr && initiators->has_operation())
	|| (ipv6_initiators !=  nullptr && ipv6_initiators->has_operation())
	|| (session_limit !=  nullptr && session_limit->has_operation());
}

std::string IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (interface_creation_time.is_set || is_set(interface_creation_time.yfilter)) leaf_name_data.push_back(interface_creation_time.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (ipv6_state.is_set || is_set(ipv6_state.yfilter)) leaf_name_data.push_back(ipv6_state.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vlan_type.is_set || is_set(vlan_type.yfilter)) leaf_name_data.push_back(vlan_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "initiators")
    {
        if(initiators == nullptr)
        {
            initiators = std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators>();
        }
        return initiators;
    }

    if(child_yang_name == "ipv6-initiators")
    {
        if(ipv6_initiators == nullptr)
        {
            ipv6_initiators = std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators>();
        }
        return ipv6_initiators;
    }

    if(child_yang_name == "session-limit")
    {
        if(session_limit == nullptr)
        {
            session_limit = std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit>();
        }
        return session_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(initiators != nullptr)
    {
        children["initiators"] = initiators;
    }

    if(ipv6_initiators != nullptr)
    {
        children["ipv6-initiators"] = ipv6_initiators;
    }

    if(session_limit != nullptr)
    {
        children["session-limit"] = session_limit;
    }

    return children;
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-creation-time")
    {
        interface_creation_time = value;
        interface_creation_time.value_namespace = name_space;
        interface_creation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-state")
    {
        ipv6_state = value;
        ipv6_state.value_namespace = name_space;
        ipv6_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-type")
    {
        vlan_type = value;
        vlan_type.value_namespace = name_space;
        vlan_type.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "interface-creation-time")
    {
        interface_creation_time.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "ipv6-state")
    {
        ipv6_state.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "vlan-type")
    {
        vlan_type.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initiators" || name == "ipv6-initiators" || name == "session-limit" || name == "interface-name" || name == "age" || name == "interface-creation-time" || name == "interface-type" || name == "ipv6-state" || name == "state" || name == "vlan-type")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Initiators()
    :
    dhcp(std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp>())
	,packet_trigger(std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger>())
{
    dhcp->parent = this;
    packet_trigger->parent = this;

    yang_name = "initiators"; yang_parent_name = "access-interface"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::~Initiators()
{
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data())
	|| (packet_trigger !=  nullptr && packet_trigger->has_data());
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (packet_trigger !=  nullptr && packet_trigger->has_operation());
}

std::string IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "packet-trigger")
    {
        if(packet_trigger == nullptr)
        {
            packet_trigger = std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger>();
        }
        return packet_trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(packet_trigger != nullptr)
    {
        children["packet-trigger"] = packet_trigger;
    }

    return children;
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "packet-trigger")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp::Dhcp()
    :
    fsol_bytes{YType::uint32, "fsol-bytes"},
    fsol_dropped_bytes{YType::uint32, "fsol-dropped-bytes"},
    fsol_dropped_packets{YType::uint32, "fsol-dropped-packets"},
    fsol_dropped_packets_dup_addr{YType::uint32, "fsol-dropped-packets-dup-addr"},
    fsol_dropped_packets_flow{YType::uint32, "fsol-dropped-packets-flow"},
    fsol_dropped_packets_session_limit{YType::uint32, "fsol-dropped-packets-session-limit"},
    fsol_packets{YType::uint32, "fsol-packets"},
    is_configured{YType::boolean, "is-configured"},
    sessions{YType::uint32, "sessions"},
    unique_ip_check{YType::boolean, "unique-ip-check"}
{

    yang_name = "dhcp"; yang_parent_name = "initiators"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp::~Dhcp()
{
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp::has_data() const
{
    return fsol_bytes.is_set
	|| fsol_dropped_bytes.is_set
	|| fsol_dropped_packets.is_set
	|| fsol_dropped_packets_dup_addr.is_set
	|| fsol_dropped_packets_flow.is_set
	|| fsol_dropped_packets_session_limit.is_set
	|| fsol_packets.is_set
	|| is_configured.is_set
	|| sessions.is_set
	|| unique_ip_check.is_set;
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsol_bytes.yfilter)
	|| ydk::is_set(fsol_dropped_bytes.yfilter)
	|| ydk::is_set(fsol_dropped_packets.yfilter)
	|| ydk::is_set(fsol_dropped_packets_dup_addr.yfilter)
	|| ydk::is_set(fsol_dropped_packets_flow.yfilter)
	|| ydk::is_set(fsol_dropped_packets_session_limit.yfilter)
	|| ydk::is_set(fsol_packets.yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(sessions.yfilter)
	|| ydk::is_set(unique_ip_check.yfilter);
}

std::string IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsol_bytes.is_set || is_set(fsol_bytes.yfilter)) leaf_name_data.push_back(fsol_bytes.get_name_leafdata());
    if (fsol_dropped_bytes.is_set || is_set(fsol_dropped_bytes.yfilter)) leaf_name_data.push_back(fsol_dropped_bytes.get_name_leafdata());
    if (fsol_dropped_packets.is_set || is_set(fsol_dropped_packets.yfilter)) leaf_name_data.push_back(fsol_dropped_packets.get_name_leafdata());
    if (fsol_dropped_packets_dup_addr.is_set || is_set(fsol_dropped_packets_dup_addr.yfilter)) leaf_name_data.push_back(fsol_dropped_packets_dup_addr.get_name_leafdata());
    if (fsol_dropped_packets_flow.is_set || is_set(fsol_dropped_packets_flow.yfilter)) leaf_name_data.push_back(fsol_dropped_packets_flow.get_name_leafdata());
    if (fsol_dropped_packets_session_limit.is_set || is_set(fsol_dropped_packets_session_limit.yfilter)) leaf_name_data.push_back(fsol_dropped_packets_session_limit.get_name_leafdata());
    if (fsol_packets.is_set || is_set(fsol_packets.yfilter)) leaf_name_data.push_back(fsol_packets.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (sessions.is_set || is_set(sessions.yfilter)) leaf_name_data.push_back(sessions.get_name_leafdata());
    if (unique_ip_check.is_set || is_set(unique_ip_check.yfilter)) leaf_name_data.push_back(unique_ip_check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes = value;
        fsol_bytes.value_namespace = name_space;
        fsol_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-bytes")
    {
        fsol_dropped_bytes = value;
        fsol_dropped_bytes.value_namespace = name_space;
        fsol_dropped_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets")
    {
        fsol_dropped_packets = value;
        fsol_dropped_packets.value_namespace = name_space;
        fsol_dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets-dup-addr")
    {
        fsol_dropped_packets_dup_addr = value;
        fsol_dropped_packets_dup_addr.value_namespace = name_space;
        fsol_dropped_packets_dup_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets-flow")
    {
        fsol_dropped_packets_flow = value;
        fsol_dropped_packets_flow.value_namespace = name_space;
        fsol_dropped_packets_flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets-session-limit")
    {
        fsol_dropped_packets_session_limit = value;
        fsol_dropped_packets_session_limit.value_namespace = name_space;
        fsol_dropped_packets_session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets = value;
        fsol_packets.value_namespace = name_space;
        fsol_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessions")
    {
        sessions = value;
        sessions.value_namespace = name_space;
        sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-ip-check")
    {
        unique_ip_check = value;
        unique_ip_check.value_namespace = name_space;
        unique_ip_check.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-bytes")
    {
        fsol_dropped_bytes.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets")
    {
        fsol_dropped_packets.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets-dup-addr")
    {
        fsol_dropped_packets_dup_addr.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets-flow")
    {
        fsol_dropped_packets_flow.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets-session-limit")
    {
        fsol_dropped_packets_session_limit.yfilter = yfilter;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets.yfilter = yfilter;
    }
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "sessions")
    {
        sessions.yfilter = yfilter;
    }
    if(value_path == "unique-ip-check")
    {
        unique_ip_check.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsol-bytes" || name == "fsol-dropped-bytes" || name == "fsol-dropped-packets" || name == "fsol-dropped-packets-dup-addr" || name == "fsol-dropped-packets-flow" || name == "fsol-dropped-packets-session-limit" || name == "fsol-packets" || name == "is-configured" || name == "sessions" || name == "unique-ip-check")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger::PacketTrigger()
    :
    fsol_bytes{YType::uint32, "fsol-bytes"},
    fsol_dropped_bytes{YType::uint32, "fsol-dropped-bytes"},
    fsol_dropped_packets{YType::uint32, "fsol-dropped-packets"},
    fsol_dropped_packets_dup_addr{YType::uint32, "fsol-dropped-packets-dup-addr"},
    fsol_dropped_packets_flow{YType::uint32, "fsol-dropped-packets-flow"},
    fsol_dropped_packets_session_limit{YType::uint32, "fsol-dropped-packets-session-limit"},
    fsol_packets{YType::uint32, "fsol-packets"},
    is_configured{YType::boolean, "is-configured"},
    sessions{YType::uint32, "sessions"},
    unique_ip_check{YType::boolean, "unique-ip-check"}
{

    yang_name = "packet-trigger"; yang_parent_name = "initiators"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger::~PacketTrigger()
{
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger::has_data() const
{
    return fsol_bytes.is_set
	|| fsol_dropped_bytes.is_set
	|| fsol_dropped_packets.is_set
	|| fsol_dropped_packets_dup_addr.is_set
	|| fsol_dropped_packets_flow.is_set
	|| fsol_dropped_packets_session_limit.is_set
	|| fsol_packets.is_set
	|| is_configured.is_set
	|| sessions.is_set
	|| unique_ip_check.is_set;
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsol_bytes.yfilter)
	|| ydk::is_set(fsol_dropped_bytes.yfilter)
	|| ydk::is_set(fsol_dropped_packets.yfilter)
	|| ydk::is_set(fsol_dropped_packets_dup_addr.yfilter)
	|| ydk::is_set(fsol_dropped_packets_flow.yfilter)
	|| ydk::is_set(fsol_dropped_packets_session_limit.yfilter)
	|| ydk::is_set(fsol_packets.yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(sessions.yfilter)
	|| ydk::is_set(unique_ip_check.yfilter);
}

std::string IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsol_bytes.is_set || is_set(fsol_bytes.yfilter)) leaf_name_data.push_back(fsol_bytes.get_name_leafdata());
    if (fsol_dropped_bytes.is_set || is_set(fsol_dropped_bytes.yfilter)) leaf_name_data.push_back(fsol_dropped_bytes.get_name_leafdata());
    if (fsol_dropped_packets.is_set || is_set(fsol_dropped_packets.yfilter)) leaf_name_data.push_back(fsol_dropped_packets.get_name_leafdata());
    if (fsol_dropped_packets_dup_addr.is_set || is_set(fsol_dropped_packets_dup_addr.yfilter)) leaf_name_data.push_back(fsol_dropped_packets_dup_addr.get_name_leafdata());
    if (fsol_dropped_packets_flow.is_set || is_set(fsol_dropped_packets_flow.yfilter)) leaf_name_data.push_back(fsol_dropped_packets_flow.get_name_leafdata());
    if (fsol_dropped_packets_session_limit.is_set || is_set(fsol_dropped_packets_session_limit.yfilter)) leaf_name_data.push_back(fsol_dropped_packets_session_limit.get_name_leafdata());
    if (fsol_packets.is_set || is_set(fsol_packets.yfilter)) leaf_name_data.push_back(fsol_packets.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (sessions.is_set || is_set(sessions.yfilter)) leaf_name_data.push_back(sessions.get_name_leafdata());
    if (unique_ip_check.is_set || is_set(unique_ip_check.yfilter)) leaf_name_data.push_back(unique_ip_check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes = value;
        fsol_bytes.value_namespace = name_space;
        fsol_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-bytes")
    {
        fsol_dropped_bytes = value;
        fsol_dropped_bytes.value_namespace = name_space;
        fsol_dropped_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets")
    {
        fsol_dropped_packets = value;
        fsol_dropped_packets.value_namespace = name_space;
        fsol_dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets-dup-addr")
    {
        fsol_dropped_packets_dup_addr = value;
        fsol_dropped_packets_dup_addr.value_namespace = name_space;
        fsol_dropped_packets_dup_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets-flow")
    {
        fsol_dropped_packets_flow = value;
        fsol_dropped_packets_flow.value_namespace = name_space;
        fsol_dropped_packets_flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets-session-limit")
    {
        fsol_dropped_packets_session_limit = value;
        fsol_dropped_packets_session_limit.value_namespace = name_space;
        fsol_dropped_packets_session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets = value;
        fsol_packets.value_namespace = name_space;
        fsol_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessions")
    {
        sessions = value;
        sessions.value_namespace = name_space;
        sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-ip-check")
    {
        unique_ip_check = value;
        unique_ip_check.value_namespace = name_space;
        unique_ip_check.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-bytes")
    {
        fsol_dropped_bytes.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets")
    {
        fsol_dropped_packets.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets-dup-addr")
    {
        fsol_dropped_packets_dup_addr.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets-flow")
    {
        fsol_dropped_packets_flow.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets-session-limit")
    {
        fsol_dropped_packets_session_limit.yfilter = yfilter;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets.yfilter = yfilter;
    }
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "sessions")
    {
        sessions.yfilter = yfilter;
    }
    if(value_path == "unique-ip-check")
    {
        unique_ip_check.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsol-bytes" || name == "fsol-dropped-bytes" || name == "fsol-dropped-packets" || name == "fsol-dropped-packets-dup-addr" || name == "fsol-dropped-packets-flow" || name == "fsol-dropped-packets-session-limit" || name == "fsol-packets" || name == "is-configured" || name == "sessions" || name == "unique-ip-check")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Ipv6Initiators()
    :
    dhcp(std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp>())
	,packet_trigger(std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger>())
{
    dhcp->parent = this;
    packet_trigger->parent = this;

    yang_name = "ipv6-initiators"; yang_parent_name = "access-interface"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::~Ipv6Initiators()
{
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data())
	|| (packet_trigger !=  nullptr && packet_trigger->has_data());
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (packet_trigger !=  nullptr && packet_trigger->has_operation());
}

std::string IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-initiators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "packet-trigger")
    {
        if(packet_trigger == nullptr)
        {
            packet_trigger = std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger>();
        }
        return packet_trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(packet_trigger != nullptr)
    {
        children["packet-trigger"] = packet_trigger;
    }

    return children;
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "packet-trigger")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp::Dhcp()
    :
    fsol_bytes{YType::uint32, "fsol-bytes"},
    fsol_dropped_bytes{YType::uint32, "fsol-dropped-bytes"},
    fsol_dropped_packets{YType::uint32, "fsol-dropped-packets"},
    fsol_dropped_packets_dup_addr{YType::uint32, "fsol-dropped-packets-dup-addr"},
    fsol_dropped_packets_flow{YType::uint32, "fsol-dropped-packets-flow"},
    fsol_dropped_packets_session_limit{YType::uint32, "fsol-dropped-packets-session-limit"},
    fsol_packets{YType::uint32, "fsol-packets"},
    is_configured{YType::boolean, "is-configured"},
    sessions{YType::uint32, "sessions"},
    unique_ip_check{YType::boolean, "unique-ip-check"}
{

    yang_name = "dhcp"; yang_parent_name = "ipv6-initiators"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp::~Dhcp()
{
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp::has_data() const
{
    return fsol_bytes.is_set
	|| fsol_dropped_bytes.is_set
	|| fsol_dropped_packets.is_set
	|| fsol_dropped_packets_dup_addr.is_set
	|| fsol_dropped_packets_flow.is_set
	|| fsol_dropped_packets_session_limit.is_set
	|| fsol_packets.is_set
	|| is_configured.is_set
	|| sessions.is_set
	|| unique_ip_check.is_set;
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsol_bytes.yfilter)
	|| ydk::is_set(fsol_dropped_bytes.yfilter)
	|| ydk::is_set(fsol_dropped_packets.yfilter)
	|| ydk::is_set(fsol_dropped_packets_dup_addr.yfilter)
	|| ydk::is_set(fsol_dropped_packets_flow.yfilter)
	|| ydk::is_set(fsol_dropped_packets_session_limit.yfilter)
	|| ydk::is_set(fsol_packets.yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(sessions.yfilter)
	|| ydk::is_set(unique_ip_check.yfilter);
}

std::string IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsol_bytes.is_set || is_set(fsol_bytes.yfilter)) leaf_name_data.push_back(fsol_bytes.get_name_leafdata());
    if (fsol_dropped_bytes.is_set || is_set(fsol_dropped_bytes.yfilter)) leaf_name_data.push_back(fsol_dropped_bytes.get_name_leafdata());
    if (fsol_dropped_packets.is_set || is_set(fsol_dropped_packets.yfilter)) leaf_name_data.push_back(fsol_dropped_packets.get_name_leafdata());
    if (fsol_dropped_packets_dup_addr.is_set || is_set(fsol_dropped_packets_dup_addr.yfilter)) leaf_name_data.push_back(fsol_dropped_packets_dup_addr.get_name_leafdata());
    if (fsol_dropped_packets_flow.is_set || is_set(fsol_dropped_packets_flow.yfilter)) leaf_name_data.push_back(fsol_dropped_packets_flow.get_name_leafdata());
    if (fsol_dropped_packets_session_limit.is_set || is_set(fsol_dropped_packets_session_limit.yfilter)) leaf_name_data.push_back(fsol_dropped_packets_session_limit.get_name_leafdata());
    if (fsol_packets.is_set || is_set(fsol_packets.yfilter)) leaf_name_data.push_back(fsol_packets.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (sessions.is_set || is_set(sessions.yfilter)) leaf_name_data.push_back(sessions.get_name_leafdata());
    if (unique_ip_check.is_set || is_set(unique_ip_check.yfilter)) leaf_name_data.push_back(unique_ip_check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes = value;
        fsol_bytes.value_namespace = name_space;
        fsol_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-bytes")
    {
        fsol_dropped_bytes = value;
        fsol_dropped_bytes.value_namespace = name_space;
        fsol_dropped_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets")
    {
        fsol_dropped_packets = value;
        fsol_dropped_packets.value_namespace = name_space;
        fsol_dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets-dup-addr")
    {
        fsol_dropped_packets_dup_addr = value;
        fsol_dropped_packets_dup_addr.value_namespace = name_space;
        fsol_dropped_packets_dup_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets-flow")
    {
        fsol_dropped_packets_flow = value;
        fsol_dropped_packets_flow.value_namespace = name_space;
        fsol_dropped_packets_flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets-session-limit")
    {
        fsol_dropped_packets_session_limit = value;
        fsol_dropped_packets_session_limit.value_namespace = name_space;
        fsol_dropped_packets_session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets = value;
        fsol_packets.value_namespace = name_space;
        fsol_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessions")
    {
        sessions = value;
        sessions.value_namespace = name_space;
        sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-ip-check")
    {
        unique_ip_check = value;
        unique_ip_check.value_namespace = name_space;
        unique_ip_check.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-bytes")
    {
        fsol_dropped_bytes.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets")
    {
        fsol_dropped_packets.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets-dup-addr")
    {
        fsol_dropped_packets_dup_addr.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets-flow")
    {
        fsol_dropped_packets_flow.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets-session-limit")
    {
        fsol_dropped_packets_session_limit.yfilter = yfilter;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets.yfilter = yfilter;
    }
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "sessions")
    {
        sessions.yfilter = yfilter;
    }
    if(value_path == "unique-ip-check")
    {
        unique_ip_check.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsol-bytes" || name == "fsol-dropped-bytes" || name == "fsol-dropped-packets" || name == "fsol-dropped-packets-dup-addr" || name == "fsol-dropped-packets-flow" || name == "fsol-dropped-packets-session-limit" || name == "fsol-packets" || name == "is-configured" || name == "sessions" || name == "unique-ip-check")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger::PacketTrigger()
    :
    fsol_bytes{YType::uint32, "fsol-bytes"},
    fsol_dropped_bytes{YType::uint32, "fsol-dropped-bytes"},
    fsol_dropped_packets{YType::uint32, "fsol-dropped-packets"},
    fsol_dropped_packets_dup_addr{YType::uint32, "fsol-dropped-packets-dup-addr"},
    fsol_dropped_packets_flow{YType::uint32, "fsol-dropped-packets-flow"},
    fsol_dropped_packets_session_limit{YType::uint32, "fsol-dropped-packets-session-limit"},
    fsol_packets{YType::uint32, "fsol-packets"},
    is_configured{YType::boolean, "is-configured"},
    sessions{YType::uint32, "sessions"},
    unique_ip_check{YType::boolean, "unique-ip-check"}
{

    yang_name = "packet-trigger"; yang_parent_name = "ipv6-initiators"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger::~PacketTrigger()
{
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger::has_data() const
{
    return fsol_bytes.is_set
	|| fsol_dropped_bytes.is_set
	|| fsol_dropped_packets.is_set
	|| fsol_dropped_packets_dup_addr.is_set
	|| fsol_dropped_packets_flow.is_set
	|| fsol_dropped_packets_session_limit.is_set
	|| fsol_packets.is_set
	|| is_configured.is_set
	|| sessions.is_set
	|| unique_ip_check.is_set;
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsol_bytes.yfilter)
	|| ydk::is_set(fsol_dropped_bytes.yfilter)
	|| ydk::is_set(fsol_dropped_packets.yfilter)
	|| ydk::is_set(fsol_dropped_packets_dup_addr.yfilter)
	|| ydk::is_set(fsol_dropped_packets_flow.yfilter)
	|| ydk::is_set(fsol_dropped_packets_session_limit.yfilter)
	|| ydk::is_set(fsol_packets.yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(sessions.yfilter)
	|| ydk::is_set(unique_ip_check.yfilter);
}

std::string IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsol_bytes.is_set || is_set(fsol_bytes.yfilter)) leaf_name_data.push_back(fsol_bytes.get_name_leafdata());
    if (fsol_dropped_bytes.is_set || is_set(fsol_dropped_bytes.yfilter)) leaf_name_data.push_back(fsol_dropped_bytes.get_name_leafdata());
    if (fsol_dropped_packets.is_set || is_set(fsol_dropped_packets.yfilter)) leaf_name_data.push_back(fsol_dropped_packets.get_name_leafdata());
    if (fsol_dropped_packets_dup_addr.is_set || is_set(fsol_dropped_packets_dup_addr.yfilter)) leaf_name_data.push_back(fsol_dropped_packets_dup_addr.get_name_leafdata());
    if (fsol_dropped_packets_flow.is_set || is_set(fsol_dropped_packets_flow.yfilter)) leaf_name_data.push_back(fsol_dropped_packets_flow.get_name_leafdata());
    if (fsol_dropped_packets_session_limit.is_set || is_set(fsol_dropped_packets_session_limit.yfilter)) leaf_name_data.push_back(fsol_dropped_packets_session_limit.get_name_leafdata());
    if (fsol_packets.is_set || is_set(fsol_packets.yfilter)) leaf_name_data.push_back(fsol_packets.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (sessions.is_set || is_set(sessions.yfilter)) leaf_name_data.push_back(sessions.get_name_leafdata());
    if (unique_ip_check.is_set || is_set(unique_ip_check.yfilter)) leaf_name_data.push_back(unique_ip_check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes = value;
        fsol_bytes.value_namespace = name_space;
        fsol_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-bytes")
    {
        fsol_dropped_bytes = value;
        fsol_dropped_bytes.value_namespace = name_space;
        fsol_dropped_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets")
    {
        fsol_dropped_packets = value;
        fsol_dropped_packets.value_namespace = name_space;
        fsol_dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets-dup-addr")
    {
        fsol_dropped_packets_dup_addr = value;
        fsol_dropped_packets_dup_addr.value_namespace = name_space;
        fsol_dropped_packets_dup_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets-flow")
    {
        fsol_dropped_packets_flow = value;
        fsol_dropped_packets_flow.value_namespace = name_space;
        fsol_dropped_packets_flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-dropped-packets-session-limit")
    {
        fsol_dropped_packets_session_limit = value;
        fsol_dropped_packets_session_limit.value_namespace = name_space;
        fsol_dropped_packets_session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets = value;
        fsol_packets.value_namespace = name_space;
        fsol_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessions")
    {
        sessions = value;
        sessions.value_namespace = name_space;
        sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-ip-check")
    {
        unique_ip_check = value;
        unique_ip_check.value_namespace = name_space;
        unique_ip_check.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-bytes")
    {
        fsol_dropped_bytes.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets")
    {
        fsol_dropped_packets.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets-dup-addr")
    {
        fsol_dropped_packets_dup_addr.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets-flow")
    {
        fsol_dropped_packets_flow.yfilter = yfilter;
    }
    if(value_path == "fsol-dropped-packets-session-limit")
    {
        fsol_dropped_packets_session_limit.yfilter = yfilter;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets.yfilter = yfilter;
    }
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "sessions")
    {
        sessions.yfilter = yfilter;
    }
    if(value_path == "unique-ip-check")
    {
        unique_ip_check.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsol-bytes" || name == "fsol-dropped-bytes" || name == "fsol-dropped-packets" || name == "fsol-dropped-packets-dup-addr" || name == "fsol-dropped-packets-flow" || name == "fsol-dropped-packets-session-limit" || name == "fsol-packets" || name == "is-configured" || name == "sessions" || name == "unique-ip-check")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::SessionLimit()
    :
    total(std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total>())
	,unclassified_source(std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource>())
{
    total->parent = this;
    unclassified_source->parent = this;

    yang_name = "session-limit"; yang_parent_name = "access-interface"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::~SessionLimit()
{
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::has_data() const
{
    return (total !=  nullptr && total->has_data())
	|| (unclassified_source !=  nullptr && unclassified_source->has_data());
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::has_operation() const
{
    return is_set(yfilter)
	|| (total !=  nullptr && total->has_operation())
	|| (unclassified_source !=  nullptr && unclassified_source->has_operation());
}

std::string IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total>();
        }
        return total;
    }

    if(child_yang_name == "unclassified-source")
    {
        if(unclassified_source == nullptr)
        {
            unclassified_source = std::make_shared<IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource>();
        }
        return unclassified_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(total != nullptr)
    {
        children["total"] = total;
    }

    if(unclassified_source != nullptr)
    {
        children["unclassified-source"] = unclassified_source;
    }

    return children;
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "unclassified-source")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total::Total()
    :
    per_vlan{YType::uint32, "per-vlan"}
{

    yang_name = "total"; yang_parent_name = "session-limit"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total::~Total()
{
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total::has_data() const
{
    return per_vlan.is_set;
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_vlan.yfilter);
}

std::string IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_vlan.is_set || is_set(per_vlan.yfilter)) leaf_name_data.push_back(per_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-vlan")
    {
        per_vlan = value;
        per_vlan.value_namespace = name_space;
        per_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-vlan")
    {
        per_vlan.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-vlan")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource::UnclassifiedSource()
    :
    per_vlan{YType::uint32, "per-vlan"}
{

    yang_name = "unclassified-source"; yang_parent_name = "session-limit"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource::~UnclassifiedSource()
{
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource::has_data() const
{
    return per_vlan.is_set;
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_vlan.yfilter);
}

std::string IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unclassified-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_vlan.is_set || is_set(per_vlan.yfilter)) leaf_name_data.push_back(per_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-vlan")
    {
        per_vlan = value;
        per_vlan.value_namespace = name_space;
        per_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-vlan")
    {
        per_vlan.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-vlan")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Interfaces::~Interfaces()
{
}

bool IpSubscriber::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool IpSubscriber::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IpSubscriber::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<IpSubscriber::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpSubscriber::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSubscriber::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpSubscriber::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    access_interface{YType::str, "access-interface"},
    age{YType::str, "age"},
    current_change_age{YType::str, "current-change-age"},
    initiator{YType::enumeration, "initiator"},
    interface_creation_time{YType::str, "interface-creation-time"},
    ipv6_current_change_age{YType::str, "ipv6-current-change-age"},
    ipv6_initiator{YType::enumeration, "ipv6-initiator"},
    ipv6_last_state_change_time{YType::str, "ipv6-last-state-change-time"},
    ipv6_old_state{YType::enumeration, "ipv6-old-state"},
    ipv6_state{YType::enumeration, "ipv6-state"},
    is_l2_connected{YType::boolean, "is-l2-connected"},
    last_state_change_time{YType::str, "last-state-change-time"},
    old_state{YType::enumeration, "old-state"},
    session_type{YType::str, "session-type"},
    state{YType::enumeration, "state"},
    subscriber_ipv4_address{YType::str, "subscriber-ipv4-address"},
    subscriber_ipv6_address{YType::str, "subscriber-ipv6-address"},
    subscriber_label{YType::uint32, "subscriber-label"},
    subscriber_mac_addres{YType::str, "subscriber-mac-addres"}
    	,
    ipv6vrf(std::make_shared<IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf>())
	,vrf(std::make_shared<IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf>())
{
    ipv6vrf->parent = this;
    vrf->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool IpSubscriber::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| access_interface.is_set
	|| age.is_set
	|| current_change_age.is_set
	|| initiator.is_set
	|| interface_creation_time.is_set
	|| ipv6_current_change_age.is_set
	|| ipv6_initiator.is_set
	|| ipv6_last_state_change_time.is_set
	|| ipv6_old_state.is_set
	|| ipv6_state.is_set
	|| is_l2_connected.is_set
	|| last_state_change_time.is_set
	|| old_state.is_set
	|| session_type.is_set
	|| state.is_set
	|| subscriber_ipv4_address.is_set
	|| subscriber_ipv6_address.is_set
	|| subscriber_label.is_set
	|| subscriber_mac_addres.is_set
	|| (ipv6vrf !=  nullptr && ipv6vrf->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool IpSubscriber::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(access_interface.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(current_change_age.yfilter)
	|| ydk::is_set(initiator.yfilter)
	|| ydk::is_set(interface_creation_time.yfilter)
	|| ydk::is_set(ipv6_current_change_age.yfilter)
	|| ydk::is_set(ipv6_initiator.yfilter)
	|| ydk::is_set(ipv6_last_state_change_time.yfilter)
	|| ydk::is_set(ipv6_old_state.yfilter)
	|| ydk::is_set(ipv6_state.yfilter)
	|| ydk::is_set(is_l2_connected.yfilter)
	|| ydk::is_set(last_state_change_time.yfilter)
	|| ydk::is_set(old_state.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(subscriber_ipv4_address.yfilter)
	|| ydk::is_set(subscriber_ipv6_address.yfilter)
	|| ydk::is_set(subscriber_label.yfilter)
	|| ydk::is_set(subscriber_mac_addres.yfilter)
	|| (ipv6vrf !=  nullptr && ipv6vrf->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string IpSubscriber::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (access_interface.is_set || is_set(access_interface.yfilter)) leaf_name_data.push_back(access_interface.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (current_change_age.is_set || is_set(current_change_age.yfilter)) leaf_name_data.push_back(current_change_age.get_name_leafdata());
    if (initiator.is_set || is_set(initiator.yfilter)) leaf_name_data.push_back(initiator.get_name_leafdata());
    if (interface_creation_time.is_set || is_set(interface_creation_time.yfilter)) leaf_name_data.push_back(interface_creation_time.get_name_leafdata());
    if (ipv6_current_change_age.is_set || is_set(ipv6_current_change_age.yfilter)) leaf_name_data.push_back(ipv6_current_change_age.get_name_leafdata());
    if (ipv6_initiator.is_set || is_set(ipv6_initiator.yfilter)) leaf_name_data.push_back(ipv6_initiator.get_name_leafdata());
    if (ipv6_last_state_change_time.is_set || is_set(ipv6_last_state_change_time.yfilter)) leaf_name_data.push_back(ipv6_last_state_change_time.get_name_leafdata());
    if (ipv6_old_state.is_set || is_set(ipv6_old_state.yfilter)) leaf_name_data.push_back(ipv6_old_state.get_name_leafdata());
    if (ipv6_state.is_set || is_set(ipv6_state.yfilter)) leaf_name_data.push_back(ipv6_state.get_name_leafdata());
    if (is_l2_connected.is_set || is_set(is_l2_connected.yfilter)) leaf_name_data.push_back(is_l2_connected.get_name_leafdata());
    if (last_state_change_time.is_set || is_set(last_state_change_time.yfilter)) leaf_name_data.push_back(last_state_change_time.get_name_leafdata());
    if (old_state.is_set || is_set(old_state.yfilter)) leaf_name_data.push_back(old_state.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_ipv4_address.is_set || is_set(subscriber_ipv4_address.yfilter)) leaf_name_data.push_back(subscriber_ipv4_address.get_name_leafdata());
    if (subscriber_ipv6_address.is_set || is_set(subscriber_ipv6_address.yfilter)) leaf_name_data.push_back(subscriber_ipv6_address.get_name_leafdata());
    if (subscriber_label.is_set || is_set(subscriber_label.yfilter)) leaf_name_data.push_back(subscriber_label.get_name_leafdata());
    if (subscriber_mac_addres.is_set || is_set(subscriber_mac_addres.yfilter)) leaf_name_data.push_back(subscriber_mac_addres.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6vrf")
    {
        if(ipv6vrf == nullptr)
        {
            ipv6vrf = std::make_shared<IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf>();
        }
        return ipv6vrf;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6vrf != nullptr)
    {
        children["ipv6vrf"] = ipv6vrf;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void IpSubscriber::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-interface")
    {
        access_interface = value;
        access_interface.value_namespace = name_space;
        access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-change-age")
    {
        current_change_age = value;
        current_change_age.value_namespace = name_space;
        current_change_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initiator")
    {
        initiator = value;
        initiator.value_namespace = name_space;
        initiator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-creation-time")
    {
        interface_creation_time = value;
        interface_creation_time.value_namespace = name_space;
        interface_creation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-current-change-age")
    {
        ipv6_current_change_age = value;
        ipv6_current_change_age.value_namespace = name_space;
        ipv6_current_change_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-initiator")
    {
        ipv6_initiator = value;
        ipv6_initiator.value_namespace = name_space;
        ipv6_initiator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-last-state-change-time")
    {
        ipv6_last_state_change_time = value;
        ipv6_last_state_change_time.value_namespace = name_space;
        ipv6_last_state_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-old-state")
    {
        ipv6_old_state = value;
        ipv6_old_state.value_namespace = name_space;
        ipv6_old_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-state")
    {
        ipv6_state = value;
        ipv6_state.value_namespace = name_space;
        ipv6_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-l2-connected")
    {
        is_l2_connected = value;
        is_l2_connected.value_namespace = name_space;
        is_l2_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-state-change-time")
    {
        last_state_change_time = value;
        last_state_change_time.value_namespace = name_space;
        last_state_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-state")
    {
        old_state = value;
        old_state.value_namespace = name_space;
        old_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-ipv4-address")
    {
        subscriber_ipv4_address = value;
        subscriber_ipv4_address.value_namespace = name_space;
        subscriber_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-ipv6-address")
    {
        subscriber_ipv6_address = value;
        subscriber_ipv6_address.value_namespace = name_space;
        subscriber_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-label")
    {
        subscriber_label = value;
        subscriber_label.value_namespace = name_space;
        subscriber_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-mac-addres")
    {
        subscriber_mac_addres = value;
        subscriber_mac_addres.value_namespace = name_space;
        subscriber_mac_addres.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "access-interface")
    {
        access_interface.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "current-change-age")
    {
        current_change_age.yfilter = yfilter;
    }
    if(value_path == "initiator")
    {
        initiator.yfilter = yfilter;
    }
    if(value_path == "interface-creation-time")
    {
        interface_creation_time.yfilter = yfilter;
    }
    if(value_path == "ipv6-current-change-age")
    {
        ipv6_current_change_age.yfilter = yfilter;
    }
    if(value_path == "ipv6-initiator")
    {
        ipv6_initiator.yfilter = yfilter;
    }
    if(value_path == "ipv6-last-state-change-time")
    {
        ipv6_last_state_change_time.yfilter = yfilter;
    }
    if(value_path == "ipv6-old-state")
    {
        ipv6_old_state.yfilter = yfilter;
    }
    if(value_path == "ipv6-state")
    {
        ipv6_state.yfilter = yfilter;
    }
    if(value_path == "is-l2-connected")
    {
        is_l2_connected.yfilter = yfilter;
    }
    if(value_path == "last-state-change-time")
    {
        last_state_change_time.yfilter = yfilter;
    }
    if(value_path == "old-state")
    {
        old_state.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "subscriber-ipv4-address")
    {
        subscriber_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "subscriber-ipv6-address")
    {
        subscriber_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "subscriber-label")
    {
        subscriber_label.yfilter = yfilter;
    }
    if(value_path == "subscriber-mac-addres")
    {
        subscriber_mac_addres.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6vrf" || name == "vrf" || name == "interface-name" || name == "access-interface" || name == "age" || name == "current-change-age" || name == "initiator" || name == "interface-creation-time" || name == "ipv6-current-change-age" || name == "ipv6-initiator" || name == "ipv6-last-state-change-time" || name == "ipv6-old-state" || name == "ipv6-state" || name == "is-l2-connected" || name == "last-state-change-time" || name == "old-state" || name == "session-type" || name == "state" || name == "subscriber-ipv4-address" || name == "subscriber-ipv6-address" || name == "subscriber-label" || name == "subscriber-mac-addres")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf::Ipv6Vrf()
    :
    table_name{YType::str, "table-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ipv6vrf"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf::~Ipv6Vrf()
{
}

bool IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf::has_data() const
{
    return table_name.is_set
	|| vrf_name.is_set;
}

bool IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-name" || name == "vrf-name")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf::Vrf()
    :
    table_name{YType::str, "table-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "vrf"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf::~Vrf()
{
}

bool IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf::has_data() const
{
    return table_name.is_set
	|| vrf_name.is_set;
}

bool IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-name" || name == "vrf-name")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::Summary()
    :
    access_interface_summary(std::make_shared<IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary>())
	,interface_counts(std::make_shared<IpSubscriber::Nodes::Node::Summary::InterfaceCounts>())
{
    access_interface_summary->parent = this;
    interface_counts->parent = this;

    yang_name = "summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::~Summary()
{
}

bool IpSubscriber::Nodes::Node::Summary::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return (access_interface_summary !=  nullptr && access_interface_summary->has_data())
	|| (interface_counts !=  nullptr && interface_counts->has_data());
}

bool IpSubscriber::Nodes::Node::Summary::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (access_interface_summary !=  nullptr && access_interface_summary->has_operation())
	|| (interface_counts !=  nullptr && interface_counts->has_operation());
}

std::string IpSubscriber::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface-summary")
    {
        if(access_interface_summary == nullptr)
        {
            access_interface_summary = std::make_shared<IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary>();
        }
        return access_interface_summary;
    }

    if(child_yang_name == "interface-counts")
    {
        if(interface_counts == nullptr)
        {
            interface_counts = std::make_shared<IpSubscriber::Nodes::Node::Summary::InterfaceCounts>();
        }
        return interface_counts;
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpSubscriber::Nodes::Node::Summary::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_interface_summary != nullptr)
    {
        children["access-interface-summary"] = access_interface_summary;
    }

    if(interface_counts != nullptr)
    {
        children["interface-counts"] = interface_counts;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpSubscriber::Nodes::Node::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSubscriber::Nodes::Node::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpSubscriber::Nodes::Node::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface-summary" || name == "interface-counts" || name == "vrf")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::AccessInterfaceSummary()
    :
    interfaces{YType::uint32, "interfaces"}
    	,
    initiators(std::make_shared<IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators>())
	,ipv6_initiators(std::make_shared<IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators>())
{
    initiators->parent = this;
    ipv6_initiators->parent = this;

    yang_name = "access-interface-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::~AccessInterfaceSummary()
{
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::has_data() const
{
    return interfaces.is_set
	|| (initiators !=  nullptr && initiators->has_data())
	|| (ipv6_initiators !=  nullptr && ipv6_initiators->has_data());
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces.yfilter)
	|| (initiators !=  nullptr && initiators->has_operation())
	|| (ipv6_initiators !=  nullptr && ipv6_initiators->has_operation());
}

std::string IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "initiators")
    {
        if(initiators == nullptr)
        {
            initiators = std::make_shared<IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators>();
        }
        return initiators;
    }

    if(child_yang_name == "ipv6-initiators")
    {
        if(ipv6_initiators == nullptr)
        {
            ipv6_initiators = std::make_shared<IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators>();
        }
        return ipv6_initiators;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(initiators != nullptr)
    {
        children["initiators"] = initiators;
    }

    if(ipv6_initiators != nullptr)
    {
        children["ipv6-initiators"] = ipv6_initiators;
    }

    return children;
}

void IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interfaces")
    {
        interfaces = value;
        interfaces.value_namespace = name_space;
        interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces")
    {
        interfaces.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initiators" || name == "ipv6-initiators" || name == "interfaces")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Initiators()
    :
    dhcp(std::make_shared<IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp>())
	,packet_trigger(std::make_shared<IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger>())
{
    dhcp->parent = this;
    packet_trigger->parent = this;

    yang_name = "initiators"; yang_parent_name = "access-interface-summary"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::~Initiators()
{
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data())
	|| (packet_trigger !=  nullptr && packet_trigger->has_data());
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (packet_trigger !=  nullptr && packet_trigger->has_operation());
}

std::string IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "packet-trigger")
    {
        if(packet_trigger == nullptr)
        {
            packet_trigger = std::make_shared<IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger>();
        }
        return packet_trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(packet_trigger != nullptr)
    {
        children["packet-trigger"] = packet_trigger;
    }

    return children;
}

void IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "packet-trigger")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp::Dhcp()
    :
    fsol_bytes{YType::uint32, "fsol-bytes"},
    fsol_packets{YType::uint32, "fsol-packets"}
{

    yang_name = "dhcp"; yang_parent_name = "initiators"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp::~Dhcp()
{
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp::has_data() const
{
    return fsol_bytes.is_set
	|| fsol_packets.is_set;
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsol_bytes.yfilter)
	|| ydk::is_set(fsol_packets.yfilter);
}

std::string IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsol_bytes.is_set || is_set(fsol_bytes.yfilter)) leaf_name_data.push_back(fsol_bytes.get_name_leafdata());
    if (fsol_packets.is_set || is_set(fsol_packets.yfilter)) leaf_name_data.push_back(fsol_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes = value;
        fsol_bytes.value_namespace = name_space;
        fsol_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets = value;
        fsol_packets.value_namespace = name_space;
        fsol_packets.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes.yfilter = yfilter;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsol-bytes" || name == "fsol-packets")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger::PacketTrigger()
    :
    fsol_bytes{YType::uint32, "fsol-bytes"},
    fsol_packets{YType::uint32, "fsol-packets"}
{

    yang_name = "packet-trigger"; yang_parent_name = "initiators"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger::~PacketTrigger()
{
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger::has_data() const
{
    return fsol_bytes.is_set
	|| fsol_packets.is_set;
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsol_bytes.yfilter)
	|| ydk::is_set(fsol_packets.yfilter);
}

std::string IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsol_bytes.is_set || is_set(fsol_bytes.yfilter)) leaf_name_data.push_back(fsol_bytes.get_name_leafdata());
    if (fsol_packets.is_set || is_set(fsol_packets.yfilter)) leaf_name_data.push_back(fsol_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes = value;
        fsol_bytes.value_namespace = name_space;
        fsol_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets = value;
        fsol_packets.value_namespace = name_space;
        fsol_packets.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes.yfilter = yfilter;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsol-bytes" || name == "fsol-packets")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Ipv6Initiators()
    :
    dhcp(std::make_shared<IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp>())
	,packet_trigger(std::make_shared<IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger>())
{
    dhcp->parent = this;
    packet_trigger->parent = this;

    yang_name = "ipv6-initiators"; yang_parent_name = "access-interface-summary"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::~Ipv6Initiators()
{
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data())
	|| (packet_trigger !=  nullptr && packet_trigger->has_data());
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (packet_trigger !=  nullptr && packet_trigger->has_operation());
}

std::string IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-initiators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "packet-trigger")
    {
        if(packet_trigger == nullptr)
        {
            packet_trigger = std::make_shared<IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger>();
        }
        return packet_trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(packet_trigger != nullptr)
    {
        children["packet-trigger"] = packet_trigger;
    }

    return children;
}

void IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "packet-trigger")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp::Dhcp()
    :
    fsol_bytes{YType::uint32, "fsol-bytes"},
    fsol_packets{YType::uint32, "fsol-packets"}
{

    yang_name = "dhcp"; yang_parent_name = "ipv6-initiators"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp::~Dhcp()
{
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp::has_data() const
{
    return fsol_bytes.is_set
	|| fsol_packets.is_set;
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsol_bytes.yfilter)
	|| ydk::is_set(fsol_packets.yfilter);
}

std::string IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsol_bytes.is_set || is_set(fsol_bytes.yfilter)) leaf_name_data.push_back(fsol_bytes.get_name_leafdata());
    if (fsol_packets.is_set || is_set(fsol_packets.yfilter)) leaf_name_data.push_back(fsol_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes = value;
        fsol_bytes.value_namespace = name_space;
        fsol_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets = value;
        fsol_packets.value_namespace = name_space;
        fsol_packets.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes.yfilter = yfilter;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsol-bytes" || name == "fsol-packets")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger::PacketTrigger()
    :
    fsol_bytes{YType::uint32, "fsol-bytes"},
    fsol_packets{YType::uint32, "fsol-packets"}
{

    yang_name = "packet-trigger"; yang_parent_name = "ipv6-initiators"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger::~PacketTrigger()
{
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger::has_data() const
{
    return fsol_bytes.is_set
	|| fsol_packets.is_set;
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsol_bytes.yfilter)
	|| ydk::is_set(fsol_packets.yfilter);
}

std::string IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsol_bytes.is_set || is_set(fsol_bytes.yfilter)) leaf_name_data.push_back(fsol_bytes.get_name_leafdata());
    if (fsol_packets.is_set || is_set(fsol_packets.yfilter)) leaf_name_data.push_back(fsol_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes = value;
        fsol_bytes.value_namespace = name_space;
        fsol_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets = value;
        fsol_packets.value_namespace = name_space;
        fsol_packets.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsol-bytes")
    {
        fsol_bytes.yfilter = yfilter;
    }
    if(value_path == "fsol-packets")
    {
        fsol_packets.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsol-bytes" || name == "fsol-packets")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::InterfaceCounts::InterfaceCounts()
    :
    initiators(std::make_shared<IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators>())
	,ipv6_initiators(std::make_shared<IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators>())
{
    initiators->parent = this;
    ipv6_initiators->parent = this;

    yang_name = "interface-counts"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::InterfaceCounts::~InterfaceCounts()
{
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::has_data() const
{
    return (initiators !=  nullptr && initiators->has_data())
	|| (ipv6_initiators !=  nullptr && ipv6_initiators->has_data());
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::has_operation() const
{
    return is_set(yfilter)
	|| (initiators !=  nullptr && initiators->has_operation())
	|| (ipv6_initiators !=  nullptr && ipv6_initiators->has_operation());
}

std::string IpSubscriber::Nodes::Node::Summary::InterfaceCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::InterfaceCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::InterfaceCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "initiators")
    {
        if(initiators == nullptr)
        {
            initiators = std::make_shared<IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators>();
        }
        return initiators;
    }

    if(child_yang_name == "ipv6-initiators")
    {
        if(ipv6_initiators == nullptr)
        {
            ipv6_initiators = std::make_shared<IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators>();
        }
        return ipv6_initiators;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::InterfaceCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(initiators != nullptr)
    {
        children["initiators"] = initiators;
    }

    if(ipv6_initiators != nullptr)
    {
        children["ipv6-initiators"] = ipv6_initiators;
    }

    return children;
}

void IpSubscriber::Nodes::Node::Summary::InterfaceCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSubscriber::Nodes::Node::Summary::InterfaceCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initiators" || name == "ipv6-initiators")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Initiators()
    :
    dhcp(std::make_shared<IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp>())
	,packet_trigger(std::make_shared<IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger>())
{
    dhcp->parent = this;
    packet_trigger->parent = this;

    yang_name = "initiators"; yang_parent_name = "interface-counts"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::~Initiators()
{
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data())
	|| (packet_trigger !=  nullptr && packet_trigger->has_data());
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (packet_trigger !=  nullptr && packet_trigger->has_operation());
}

std::string IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "packet-trigger")
    {
        if(packet_trigger == nullptr)
        {
            packet_trigger = std::make_shared<IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger>();
        }
        return packet_trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(packet_trigger != nullptr)
    {
        children["packet-trigger"] = packet_trigger;
    }

    return children;
}

void IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "packet-trigger")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp::Dhcp()
    :
    adding_adjacency{YType::uint32, "adding-adjacency"},
    adjacency_added{YType::uint32, "adjacency-added"},
    control_policy_executed{YType::uint32, "control-policy-executed"},
    control_policy_executing{YType::uint32, "control-policy-executing"},
    disconnected{YType::uint32, "disconnected"},
    disconnecting{YType::uint32, "disconnecting"},
    down{YType::uint32, "down"},
    error{YType::uint32, "error"},
    initialized{YType::uint32, "initialized"},
    invalid{YType::uint32, "invalid"},
    session_creation_started{YType::uint32, "session-creation-started"},
    session_features_applied{YType::uint32, "session-features-applied"},
    total_interfaces{YType::uint32, "total-interfaces"},
    up{YType::uint32, "up"},
    vrf_configured{YType::uint32, "vrf-configured"}
{

    yang_name = "dhcp"; yang_parent_name = "initiators"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp::~Dhcp()
{
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp::has_data() const
{
    return adding_adjacency.is_set
	|| adjacency_added.is_set
	|| control_policy_executed.is_set
	|| control_policy_executing.is_set
	|| disconnected.is_set
	|| disconnecting.is_set
	|| down.is_set
	|| error.is_set
	|| initialized.is_set
	|| invalid.is_set
	|| session_creation_started.is_set
	|| session_features_applied.is_set
	|| total_interfaces.is_set
	|| up.is_set
	|| vrf_configured.is_set;
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adding_adjacency.yfilter)
	|| ydk::is_set(adjacency_added.yfilter)
	|| ydk::is_set(control_policy_executed.yfilter)
	|| ydk::is_set(control_policy_executing.yfilter)
	|| ydk::is_set(disconnected.yfilter)
	|| ydk::is_set(disconnecting.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(initialized.yfilter)
	|| ydk::is_set(invalid.yfilter)
	|| ydk::is_set(session_creation_started.yfilter)
	|| ydk::is_set(session_features_applied.yfilter)
	|| ydk::is_set(total_interfaces.yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(vrf_configured.yfilter);
}

std::string IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adding_adjacency.is_set || is_set(adding_adjacency.yfilter)) leaf_name_data.push_back(adding_adjacency.get_name_leafdata());
    if (adjacency_added.is_set || is_set(adjacency_added.yfilter)) leaf_name_data.push_back(adjacency_added.get_name_leafdata());
    if (control_policy_executed.is_set || is_set(control_policy_executed.yfilter)) leaf_name_data.push_back(control_policy_executed.get_name_leafdata());
    if (control_policy_executing.is_set || is_set(control_policy_executing.yfilter)) leaf_name_data.push_back(control_policy_executing.get_name_leafdata());
    if (disconnected.is_set || is_set(disconnected.yfilter)) leaf_name_data.push_back(disconnected.get_name_leafdata());
    if (disconnecting.is_set || is_set(disconnecting.yfilter)) leaf_name_data.push_back(disconnecting.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (initialized.is_set || is_set(initialized.yfilter)) leaf_name_data.push_back(initialized.get_name_leafdata());
    if (invalid.is_set || is_set(invalid.yfilter)) leaf_name_data.push_back(invalid.get_name_leafdata());
    if (session_creation_started.is_set || is_set(session_creation_started.yfilter)) leaf_name_data.push_back(session_creation_started.get_name_leafdata());
    if (session_features_applied.is_set || is_set(session_features_applied.yfilter)) leaf_name_data.push_back(session_features_applied.get_name_leafdata());
    if (total_interfaces.is_set || is_set(total_interfaces.yfilter)) leaf_name_data.push_back(total_interfaces.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (vrf_configured.is_set || is_set(vrf_configured.yfilter)) leaf_name_data.push_back(vrf_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adding-adjacency")
    {
        adding_adjacency = value;
        adding_adjacency.value_namespace = name_space;
        adding_adjacency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-added")
    {
        adjacency_added = value;
        adjacency_added.value_namespace = name_space;
        adjacency_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-policy-executed")
    {
        control_policy_executed = value;
        control_policy_executed.value_namespace = name_space;
        control_policy_executed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-policy-executing")
    {
        control_policy_executing = value;
        control_policy_executing.value_namespace = name_space;
        control_policy_executing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnected")
    {
        disconnected = value;
        disconnected.value_namespace = name_space;
        disconnected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting")
    {
        disconnecting = value;
        disconnecting.value_namespace = name_space;
        disconnecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized")
    {
        initialized = value;
        initialized.value_namespace = name_space;
        initialized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid")
    {
        invalid = value;
        invalid.value_namespace = name_space;
        invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-started")
    {
        session_creation_started = value;
        session_creation_started.value_namespace = name_space;
        session_creation_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-features-applied")
    {
        session_features_applied = value;
        session_features_applied.value_namespace = name_space;
        session_features_applied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-interfaces")
    {
        total_interfaces = value;
        total_interfaces.value_namespace = name_space;
        total_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-configured")
    {
        vrf_configured = value;
        vrf_configured.value_namespace = name_space;
        vrf_configured.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adding-adjacency")
    {
        adding_adjacency.yfilter = yfilter;
    }
    if(value_path == "adjacency-added")
    {
        adjacency_added.yfilter = yfilter;
    }
    if(value_path == "control-policy-executed")
    {
        control_policy_executed.yfilter = yfilter;
    }
    if(value_path == "control-policy-executing")
    {
        control_policy_executing.yfilter = yfilter;
    }
    if(value_path == "disconnected")
    {
        disconnected.yfilter = yfilter;
    }
    if(value_path == "disconnecting")
    {
        disconnecting.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "initialized")
    {
        initialized.yfilter = yfilter;
    }
    if(value_path == "invalid")
    {
        invalid.yfilter = yfilter;
    }
    if(value_path == "session-creation-started")
    {
        session_creation_started.yfilter = yfilter;
    }
    if(value_path == "session-features-applied")
    {
        session_features_applied.yfilter = yfilter;
    }
    if(value_path == "total-interfaces")
    {
        total_interfaces.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "vrf-configured")
    {
        vrf_configured.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adding-adjacency" || name == "adjacency-added" || name == "control-policy-executed" || name == "control-policy-executing" || name == "disconnected" || name == "disconnecting" || name == "down" || name == "error" || name == "initialized" || name == "invalid" || name == "session-creation-started" || name == "session-features-applied" || name == "total-interfaces" || name == "up" || name == "vrf-configured")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger::PacketTrigger()
    :
    adding_adjacency{YType::uint32, "adding-adjacency"},
    adjacency_added{YType::uint32, "adjacency-added"},
    control_policy_executed{YType::uint32, "control-policy-executed"},
    control_policy_executing{YType::uint32, "control-policy-executing"},
    disconnected{YType::uint32, "disconnected"},
    disconnecting{YType::uint32, "disconnecting"},
    down{YType::uint32, "down"},
    error{YType::uint32, "error"},
    initialized{YType::uint32, "initialized"},
    invalid{YType::uint32, "invalid"},
    session_creation_started{YType::uint32, "session-creation-started"},
    session_features_applied{YType::uint32, "session-features-applied"},
    total_interfaces{YType::uint32, "total-interfaces"},
    up{YType::uint32, "up"},
    vrf_configured{YType::uint32, "vrf-configured"}
{

    yang_name = "packet-trigger"; yang_parent_name = "initiators"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger::~PacketTrigger()
{
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger::has_data() const
{
    return adding_adjacency.is_set
	|| adjacency_added.is_set
	|| control_policy_executed.is_set
	|| control_policy_executing.is_set
	|| disconnected.is_set
	|| disconnecting.is_set
	|| down.is_set
	|| error.is_set
	|| initialized.is_set
	|| invalid.is_set
	|| session_creation_started.is_set
	|| session_features_applied.is_set
	|| total_interfaces.is_set
	|| up.is_set
	|| vrf_configured.is_set;
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adding_adjacency.yfilter)
	|| ydk::is_set(adjacency_added.yfilter)
	|| ydk::is_set(control_policy_executed.yfilter)
	|| ydk::is_set(control_policy_executing.yfilter)
	|| ydk::is_set(disconnected.yfilter)
	|| ydk::is_set(disconnecting.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(initialized.yfilter)
	|| ydk::is_set(invalid.yfilter)
	|| ydk::is_set(session_creation_started.yfilter)
	|| ydk::is_set(session_features_applied.yfilter)
	|| ydk::is_set(total_interfaces.yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(vrf_configured.yfilter);
}

std::string IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adding_adjacency.is_set || is_set(adding_adjacency.yfilter)) leaf_name_data.push_back(adding_adjacency.get_name_leafdata());
    if (adjacency_added.is_set || is_set(adjacency_added.yfilter)) leaf_name_data.push_back(adjacency_added.get_name_leafdata());
    if (control_policy_executed.is_set || is_set(control_policy_executed.yfilter)) leaf_name_data.push_back(control_policy_executed.get_name_leafdata());
    if (control_policy_executing.is_set || is_set(control_policy_executing.yfilter)) leaf_name_data.push_back(control_policy_executing.get_name_leafdata());
    if (disconnected.is_set || is_set(disconnected.yfilter)) leaf_name_data.push_back(disconnected.get_name_leafdata());
    if (disconnecting.is_set || is_set(disconnecting.yfilter)) leaf_name_data.push_back(disconnecting.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (initialized.is_set || is_set(initialized.yfilter)) leaf_name_data.push_back(initialized.get_name_leafdata());
    if (invalid.is_set || is_set(invalid.yfilter)) leaf_name_data.push_back(invalid.get_name_leafdata());
    if (session_creation_started.is_set || is_set(session_creation_started.yfilter)) leaf_name_data.push_back(session_creation_started.get_name_leafdata());
    if (session_features_applied.is_set || is_set(session_features_applied.yfilter)) leaf_name_data.push_back(session_features_applied.get_name_leafdata());
    if (total_interfaces.is_set || is_set(total_interfaces.yfilter)) leaf_name_data.push_back(total_interfaces.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (vrf_configured.is_set || is_set(vrf_configured.yfilter)) leaf_name_data.push_back(vrf_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adding-adjacency")
    {
        adding_adjacency = value;
        adding_adjacency.value_namespace = name_space;
        adding_adjacency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-added")
    {
        adjacency_added = value;
        adjacency_added.value_namespace = name_space;
        adjacency_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-policy-executed")
    {
        control_policy_executed = value;
        control_policy_executed.value_namespace = name_space;
        control_policy_executed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-policy-executing")
    {
        control_policy_executing = value;
        control_policy_executing.value_namespace = name_space;
        control_policy_executing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnected")
    {
        disconnected = value;
        disconnected.value_namespace = name_space;
        disconnected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting")
    {
        disconnecting = value;
        disconnecting.value_namespace = name_space;
        disconnecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized")
    {
        initialized = value;
        initialized.value_namespace = name_space;
        initialized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid")
    {
        invalid = value;
        invalid.value_namespace = name_space;
        invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-started")
    {
        session_creation_started = value;
        session_creation_started.value_namespace = name_space;
        session_creation_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-features-applied")
    {
        session_features_applied = value;
        session_features_applied.value_namespace = name_space;
        session_features_applied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-interfaces")
    {
        total_interfaces = value;
        total_interfaces.value_namespace = name_space;
        total_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-configured")
    {
        vrf_configured = value;
        vrf_configured.value_namespace = name_space;
        vrf_configured.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adding-adjacency")
    {
        adding_adjacency.yfilter = yfilter;
    }
    if(value_path == "adjacency-added")
    {
        adjacency_added.yfilter = yfilter;
    }
    if(value_path == "control-policy-executed")
    {
        control_policy_executed.yfilter = yfilter;
    }
    if(value_path == "control-policy-executing")
    {
        control_policy_executing.yfilter = yfilter;
    }
    if(value_path == "disconnected")
    {
        disconnected.yfilter = yfilter;
    }
    if(value_path == "disconnecting")
    {
        disconnecting.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "initialized")
    {
        initialized.yfilter = yfilter;
    }
    if(value_path == "invalid")
    {
        invalid.yfilter = yfilter;
    }
    if(value_path == "session-creation-started")
    {
        session_creation_started.yfilter = yfilter;
    }
    if(value_path == "session-features-applied")
    {
        session_features_applied.yfilter = yfilter;
    }
    if(value_path == "total-interfaces")
    {
        total_interfaces.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "vrf-configured")
    {
        vrf_configured.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adding-adjacency" || name == "adjacency-added" || name == "control-policy-executed" || name == "control-policy-executing" || name == "disconnected" || name == "disconnecting" || name == "down" || name == "error" || name == "initialized" || name == "invalid" || name == "session-creation-started" || name == "session-features-applied" || name == "total-interfaces" || name == "up" || name == "vrf-configured")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Ipv6Initiators()
    :
    dhcp(std::make_shared<IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp>())
	,packet_trigger(std::make_shared<IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger>())
{
    dhcp->parent = this;
    packet_trigger->parent = this;

    yang_name = "ipv6-initiators"; yang_parent_name = "interface-counts"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::~Ipv6Initiators()
{
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data())
	|| (packet_trigger !=  nullptr && packet_trigger->has_data());
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (packet_trigger !=  nullptr && packet_trigger->has_operation());
}

std::string IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-initiators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "packet-trigger")
    {
        if(packet_trigger == nullptr)
        {
            packet_trigger = std::make_shared<IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger>();
        }
        return packet_trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(packet_trigger != nullptr)
    {
        children["packet-trigger"] = packet_trigger;
    }

    return children;
}

void IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "packet-trigger")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp::Dhcp()
    :
    adding_adjacency{YType::uint32, "adding-adjacency"},
    adjacency_added{YType::uint32, "adjacency-added"},
    control_policy_executed{YType::uint32, "control-policy-executed"},
    control_policy_executing{YType::uint32, "control-policy-executing"},
    disconnected{YType::uint32, "disconnected"},
    disconnecting{YType::uint32, "disconnecting"},
    down{YType::uint32, "down"},
    error{YType::uint32, "error"},
    initialized{YType::uint32, "initialized"},
    invalid{YType::uint32, "invalid"},
    session_creation_started{YType::uint32, "session-creation-started"},
    session_features_applied{YType::uint32, "session-features-applied"},
    total_interfaces{YType::uint32, "total-interfaces"},
    up{YType::uint32, "up"},
    vrf_configured{YType::uint32, "vrf-configured"}
{

    yang_name = "dhcp"; yang_parent_name = "ipv6-initiators"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp::~Dhcp()
{
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp::has_data() const
{
    return adding_adjacency.is_set
	|| adjacency_added.is_set
	|| control_policy_executed.is_set
	|| control_policy_executing.is_set
	|| disconnected.is_set
	|| disconnecting.is_set
	|| down.is_set
	|| error.is_set
	|| initialized.is_set
	|| invalid.is_set
	|| session_creation_started.is_set
	|| session_features_applied.is_set
	|| total_interfaces.is_set
	|| up.is_set
	|| vrf_configured.is_set;
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adding_adjacency.yfilter)
	|| ydk::is_set(adjacency_added.yfilter)
	|| ydk::is_set(control_policy_executed.yfilter)
	|| ydk::is_set(control_policy_executing.yfilter)
	|| ydk::is_set(disconnected.yfilter)
	|| ydk::is_set(disconnecting.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(initialized.yfilter)
	|| ydk::is_set(invalid.yfilter)
	|| ydk::is_set(session_creation_started.yfilter)
	|| ydk::is_set(session_features_applied.yfilter)
	|| ydk::is_set(total_interfaces.yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(vrf_configured.yfilter);
}

std::string IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adding_adjacency.is_set || is_set(adding_adjacency.yfilter)) leaf_name_data.push_back(adding_adjacency.get_name_leafdata());
    if (adjacency_added.is_set || is_set(adjacency_added.yfilter)) leaf_name_data.push_back(adjacency_added.get_name_leafdata());
    if (control_policy_executed.is_set || is_set(control_policy_executed.yfilter)) leaf_name_data.push_back(control_policy_executed.get_name_leafdata());
    if (control_policy_executing.is_set || is_set(control_policy_executing.yfilter)) leaf_name_data.push_back(control_policy_executing.get_name_leafdata());
    if (disconnected.is_set || is_set(disconnected.yfilter)) leaf_name_data.push_back(disconnected.get_name_leafdata());
    if (disconnecting.is_set || is_set(disconnecting.yfilter)) leaf_name_data.push_back(disconnecting.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (initialized.is_set || is_set(initialized.yfilter)) leaf_name_data.push_back(initialized.get_name_leafdata());
    if (invalid.is_set || is_set(invalid.yfilter)) leaf_name_data.push_back(invalid.get_name_leafdata());
    if (session_creation_started.is_set || is_set(session_creation_started.yfilter)) leaf_name_data.push_back(session_creation_started.get_name_leafdata());
    if (session_features_applied.is_set || is_set(session_features_applied.yfilter)) leaf_name_data.push_back(session_features_applied.get_name_leafdata());
    if (total_interfaces.is_set || is_set(total_interfaces.yfilter)) leaf_name_data.push_back(total_interfaces.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (vrf_configured.is_set || is_set(vrf_configured.yfilter)) leaf_name_data.push_back(vrf_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adding-adjacency")
    {
        adding_adjacency = value;
        adding_adjacency.value_namespace = name_space;
        adding_adjacency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-added")
    {
        adjacency_added = value;
        adjacency_added.value_namespace = name_space;
        adjacency_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-policy-executed")
    {
        control_policy_executed = value;
        control_policy_executed.value_namespace = name_space;
        control_policy_executed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-policy-executing")
    {
        control_policy_executing = value;
        control_policy_executing.value_namespace = name_space;
        control_policy_executing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnected")
    {
        disconnected = value;
        disconnected.value_namespace = name_space;
        disconnected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting")
    {
        disconnecting = value;
        disconnecting.value_namespace = name_space;
        disconnecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized")
    {
        initialized = value;
        initialized.value_namespace = name_space;
        initialized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid")
    {
        invalid = value;
        invalid.value_namespace = name_space;
        invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-started")
    {
        session_creation_started = value;
        session_creation_started.value_namespace = name_space;
        session_creation_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-features-applied")
    {
        session_features_applied = value;
        session_features_applied.value_namespace = name_space;
        session_features_applied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-interfaces")
    {
        total_interfaces = value;
        total_interfaces.value_namespace = name_space;
        total_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-configured")
    {
        vrf_configured = value;
        vrf_configured.value_namespace = name_space;
        vrf_configured.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adding-adjacency")
    {
        adding_adjacency.yfilter = yfilter;
    }
    if(value_path == "adjacency-added")
    {
        adjacency_added.yfilter = yfilter;
    }
    if(value_path == "control-policy-executed")
    {
        control_policy_executed.yfilter = yfilter;
    }
    if(value_path == "control-policy-executing")
    {
        control_policy_executing.yfilter = yfilter;
    }
    if(value_path == "disconnected")
    {
        disconnected.yfilter = yfilter;
    }
    if(value_path == "disconnecting")
    {
        disconnecting.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "initialized")
    {
        initialized.yfilter = yfilter;
    }
    if(value_path == "invalid")
    {
        invalid.yfilter = yfilter;
    }
    if(value_path == "session-creation-started")
    {
        session_creation_started.yfilter = yfilter;
    }
    if(value_path == "session-features-applied")
    {
        session_features_applied.yfilter = yfilter;
    }
    if(value_path == "total-interfaces")
    {
        total_interfaces.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "vrf-configured")
    {
        vrf_configured.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adding-adjacency" || name == "adjacency-added" || name == "control-policy-executed" || name == "control-policy-executing" || name == "disconnected" || name == "disconnecting" || name == "down" || name == "error" || name == "initialized" || name == "invalid" || name == "session-creation-started" || name == "session-features-applied" || name == "total-interfaces" || name == "up" || name == "vrf-configured")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger::PacketTrigger()
    :
    adding_adjacency{YType::uint32, "adding-adjacency"},
    adjacency_added{YType::uint32, "adjacency-added"},
    control_policy_executed{YType::uint32, "control-policy-executed"},
    control_policy_executing{YType::uint32, "control-policy-executing"},
    disconnected{YType::uint32, "disconnected"},
    disconnecting{YType::uint32, "disconnecting"},
    down{YType::uint32, "down"},
    error{YType::uint32, "error"},
    initialized{YType::uint32, "initialized"},
    invalid{YType::uint32, "invalid"},
    session_creation_started{YType::uint32, "session-creation-started"},
    session_features_applied{YType::uint32, "session-features-applied"},
    total_interfaces{YType::uint32, "total-interfaces"},
    up{YType::uint32, "up"},
    vrf_configured{YType::uint32, "vrf-configured"}
{

    yang_name = "packet-trigger"; yang_parent_name = "ipv6-initiators"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger::~PacketTrigger()
{
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger::has_data() const
{
    return adding_adjacency.is_set
	|| adjacency_added.is_set
	|| control_policy_executed.is_set
	|| control_policy_executing.is_set
	|| disconnected.is_set
	|| disconnecting.is_set
	|| down.is_set
	|| error.is_set
	|| initialized.is_set
	|| invalid.is_set
	|| session_creation_started.is_set
	|| session_features_applied.is_set
	|| total_interfaces.is_set
	|| up.is_set
	|| vrf_configured.is_set;
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adding_adjacency.yfilter)
	|| ydk::is_set(adjacency_added.yfilter)
	|| ydk::is_set(control_policy_executed.yfilter)
	|| ydk::is_set(control_policy_executing.yfilter)
	|| ydk::is_set(disconnected.yfilter)
	|| ydk::is_set(disconnecting.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(initialized.yfilter)
	|| ydk::is_set(invalid.yfilter)
	|| ydk::is_set(session_creation_started.yfilter)
	|| ydk::is_set(session_features_applied.yfilter)
	|| ydk::is_set(total_interfaces.yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(vrf_configured.yfilter);
}

std::string IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adding_adjacency.is_set || is_set(adding_adjacency.yfilter)) leaf_name_data.push_back(adding_adjacency.get_name_leafdata());
    if (adjacency_added.is_set || is_set(adjacency_added.yfilter)) leaf_name_data.push_back(adjacency_added.get_name_leafdata());
    if (control_policy_executed.is_set || is_set(control_policy_executed.yfilter)) leaf_name_data.push_back(control_policy_executed.get_name_leafdata());
    if (control_policy_executing.is_set || is_set(control_policy_executing.yfilter)) leaf_name_data.push_back(control_policy_executing.get_name_leafdata());
    if (disconnected.is_set || is_set(disconnected.yfilter)) leaf_name_data.push_back(disconnected.get_name_leafdata());
    if (disconnecting.is_set || is_set(disconnecting.yfilter)) leaf_name_data.push_back(disconnecting.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (initialized.is_set || is_set(initialized.yfilter)) leaf_name_data.push_back(initialized.get_name_leafdata());
    if (invalid.is_set || is_set(invalid.yfilter)) leaf_name_data.push_back(invalid.get_name_leafdata());
    if (session_creation_started.is_set || is_set(session_creation_started.yfilter)) leaf_name_data.push_back(session_creation_started.get_name_leafdata());
    if (session_features_applied.is_set || is_set(session_features_applied.yfilter)) leaf_name_data.push_back(session_features_applied.get_name_leafdata());
    if (total_interfaces.is_set || is_set(total_interfaces.yfilter)) leaf_name_data.push_back(total_interfaces.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (vrf_configured.is_set || is_set(vrf_configured.yfilter)) leaf_name_data.push_back(vrf_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adding-adjacency")
    {
        adding_adjacency = value;
        adding_adjacency.value_namespace = name_space;
        adding_adjacency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-added")
    {
        adjacency_added = value;
        adjacency_added.value_namespace = name_space;
        adjacency_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-policy-executed")
    {
        control_policy_executed = value;
        control_policy_executed.value_namespace = name_space;
        control_policy_executed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-policy-executing")
    {
        control_policy_executing = value;
        control_policy_executing.value_namespace = name_space;
        control_policy_executing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnected")
    {
        disconnected = value;
        disconnected.value_namespace = name_space;
        disconnected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting")
    {
        disconnecting = value;
        disconnecting.value_namespace = name_space;
        disconnecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized")
    {
        initialized = value;
        initialized.value_namespace = name_space;
        initialized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid")
    {
        invalid = value;
        invalid.value_namespace = name_space;
        invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-started")
    {
        session_creation_started = value;
        session_creation_started.value_namespace = name_space;
        session_creation_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-features-applied")
    {
        session_features_applied = value;
        session_features_applied.value_namespace = name_space;
        session_features_applied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-interfaces")
    {
        total_interfaces = value;
        total_interfaces.value_namespace = name_space;
        total_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-configured")
    {
        vrf_configured = value;
        vrf_configured.value_namespace = name_space;
        vrf_configured.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adding-adjacency")
    {
        adding_adjacency.yfilter = yfilter;
    }
    if(value_path == "adjacency-added")
    {
        adjacency_added.yfilter = yfilter;
    }
    if(value_path == "control-policy-executed")
    {
        control_policy_executed.yfilter = yfilter;
    }
    if(value_path == "control-policy-executing")
    {
        control_policy_executing.yfilter = yfilter;
    }
    if(value_path == "disconnected")
    {
        disconnected.yfilter = yfilter;
    }
    if(value_path == "disconnecting")
    {
        disconnecting.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "initialized")
    {
        initialized.yfilter = yfilter;
    }
    if(value_path == "invalid")
    {
        invalid.yfilter = yfilter;
    }
    if(value_path == "session-creation-started")
    {
        session_creation_started.yfilter = yfilter;
    }
    if(value_path == "session-features-applied")
    {
        session_features_applied.yfilter = yfilter;
    }
    if(value_path == "total-interfaces")
    {
        total_interfaces.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "vrf-configured")
    {
        vrf_configured.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adding-adjacency" || name == "adjacency-added" || name == "control-policy-executed" || name == "control-policy-executing" || name == "disconnected" || name == "disconnecting" || name == "down" || name == "error" || name == "initialized" || name == "invalid" || name == "session-creation-started" || name == "session-features-applied" || name == "total-interfaces" || name == "up" || name == "vrf-configured")
        return true;
    return false;
}

IpSubscriber::Nodes::Node::Summary::Vrf::Vrf()
    :
    interfaces{YType::uint64, "interfaces"},
    ipv6_interfaces{YType::uint64, "ipv6-interfaces"},
    ipv6vrf_name{YType::str, "ipv6vrf-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "vrf"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

IpSubscriber::Nodes::Node::Summary::Vrf::~Vrf()
{
}

bool IpSubscriber::Nodes::Node::Summary::Vrf::has_data() const
{
    return interfaces.is_set
	|| ipv6_interfaces.is_set
	|| ipv6vrf_name.is_set
	|| vrf_name.is_set;
}

bool IpSubscriber::Nodes::Node::Summary::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces.yfilter)
	|| ydk::is_set(ipv6_interfaces.yfilter)
	|| ydk::is_set(ipv6vrf_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string IpSubscriber::Nodes::Node::Summary::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpSubscriber::Nodes::Node::Summary::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (ipv6_interfaces.is_set || is_set(ipv6_interfaces.yfilter)) leaf_name_data.push_back(ipv6_interfaces.get_name_leafdata());
    if (ipv6vrf_name.is_set || is_set(ipv6vrf_name.yfilter)) leaf_name_data.push_back(ipv6vrf_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpSubscriber::Nodes::Node::Summary::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpSubscriber::Nodes::Node::Summary::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpSubscriber::Nodes::Node::Summary::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interfaces")
    {
        interfaces = value;
        interfaces.value_namespace = name_space;
        interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-interfaces")
    {
        ipv6_interfaces = value;
        ipv6_interfaces.value_namespace = name_space;
        ipv6_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vrf-name")
    {
        ipv6vrf_name = value;
        ipv6vrf_name.value_namespace = name_space;
        ipv6vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void IpSubscriber::Nodes::Node::Summary::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces")
    {
        interfaces.yfilter = yfilter;
    }
    if(value_path == "ipv6-interfaces")
    {
        ipv6_interfaces.yfilter = yfilter;
    }
    if(value_path == "ipv6vrf-name")
    {
        ipv6vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool IpSubscriber::Nodes::Node::Summary::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "ipv6-interfaces" || name == "ipv6vrf-name" || name == "vrf-name")
        return true;
    return false;
}

const Enum::YLeaf IpsubMaIntfStateData::invalid {0, "invalid"};
const Enum::YLeaf IpsubMaIntfStateData::initialized {1, "initialized"};
const Enum::YLeaf IpsubMaIntfStateData::session_creation_started {2, "session-creation-started"};
const Enum::YLeaf IpsubMaIntfStateData::control_policy_executing {3, "control-policy-executing"};
const Enum::YLeaf IpsubMaIntfStateData::control_policy_executed {4, "control-policy-executed"};
const Enum::YLeaf IpsubMaIntfStateData::session_features_applied {5, "session-features-applied"};
const Enum::YLeaf IpsubMaIntfStateData::vrf_configured {6, "vrf-configured"};
const Enum::YLeaf IpsubMaIntfStateData::adding_adjacency {7, "adding-adjacency"};
const Enum::YLeaf IpsubMaIntfStateData::adjacency_added {8, "adjacency-added"};
const Enum::YLeaf IpsubMaIntfStateData::up {9, "up"};
const Enum::YLeaf IpsubMaIntfStateData::down {10, "down"};
const Enum::YLeaf IpsubMaIntfStateData::address_family_down {11, "address-family-down"};
const Enum::YLeaf IpsubMaIntfStateData::address_family_down_complete {12, "address-family-down-complete"};
const Enum::YLeaf IpsubMaIntfStateData::disconnecting {13, "disconnecting"};
const Enum::YLeaf IpsubMaIntfStateData::disconnected {14, "disconnected"};
const Enum::YLeaf IpsubMaIntfStateData::error {15, "error"};

const Enum::YLeaf IpsubMaParentIntfStateData::deleted {0, "deleted"};
const Enum::YLeaf IpsubMaParentIntfStateData::down {1, "down"};
const Enum::YLeaf IpsubMaParentIntfStateData::up {2, "up"};

const Enum::YLeaf IpsubMaIntfInitiatorData::dhcp {0, "dhcp"};
const Enum::YLeaf IpsubMaIntfInitiatorData::packet_trigger {1, "packet-trigger"};
const Enum::YLeaf IpsubMaIntfInitiatorData::invalid_trigger {2, "invalid-trigger"};

const Enum::YLeaf IpsubMaParentIntfVlan::plain {0, "plain"};
const Enum::YLeaf IpsubMaParentIntfVlan::ambiguous {1, "ambiguous"};


}
}

