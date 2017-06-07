
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_dhcpd_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_dhcpd_oper {

DhcpClient::DhcpClient()
    :
    nodes(std::make_shared<DhcpClient::Nodes>())
{
    nodes->parent = this;

    yang_name = "dhcp-client"; yang_parent_name = "Cisco-IOS-XR-ipv4-dhcpd-oper";
}

DhcpClient::~DhcpClient()
{
}

bool DhcpClient::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool DhcpClient::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string DhcpClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-oper:dhcp-client";

    return path_buffer.str();

}

const EntityPath DhcpClient::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> DhcpClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<DhcpClient::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DhcpClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void DhcpClient::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> DhcpClient::clone_ptr() const
{
    return std::make_shared<DhcpClient>();
}

std::string DhcpClient::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string DhcpClient::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function DhcpClient::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

DhcpClient::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "dhcp-client";
}

DhcpClient::Nodes::~Nodes()
{
}

bool DhcpClient::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool DhcpClient::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DhcpClient::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath DhcpClient::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-oper:dhcp-client/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DhcpClient::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<DhcpClient::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DhcpClient::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DhcpClient::Nodes::set_value(const std::string & value_path, std::string value)
{
}

DhcpClient::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    client_stats(std::make_shared<DhcpClient::Nodes::Node::ClientStats>())
	,clients(std::make_shared<DhcpClient::Nodes::Node::Clients>())
{
    client_stats->parent = this;

    clients->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

DhcpClient::Nodes::Node::~Node()
{
}

bool DhcpClient::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (client_stats !=  nullptr && client_stats->has_data())
	|| (clients !=  nullptr && clients->has_data());
}

bool DhcpClient::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (client_stats !=  nullptr && client_stats->has_operation())
	|| (clients !=  nullptr && clients->has_operation());
}

std::string DhcpClient::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath DhcpClient::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-oper:dhcp-client/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DhcpClient::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-stats")
    {
        if(client_stats == nullptr)
        {
            client_stats = std::make_shared<DhcpClient::Nodes::Node::ClientStats>();
        }
        return client_stats;
    }

    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<DhcpClient::Nodes::Node::Clients>();
        }
        return clients;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DhcpClient::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_stats != nullptr)
    {
        children["client-stats"] = client_stats;
    }

    if(clients != nullptr)
    {
        children["clients"] = clients;
    }

    return children;
}

void DhcpClient::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

DhcpClient::Nodes::Node::ClientStats::ClientStats()
{
    yang_name = "client-stats"; yang_parent_name = "node";
}

DhcpClient::Nodes::Node::ClientStats::~ClientStats()
{
}

bool DhcpClient::Nodes::Node::ClientStats::has_data() const
{
    for (std::size_t index=0; index<client_stat.size(); index++)
    {
        if(client_stat[index]->has_data())
            return true;
    }
    return false;
}

bool DhcpClient::Nodes::Node::ClientStats::has_operation() const
{
    for (std::size_t index=0; index<client_stat.size(); index++)
    {
        if(client_stat[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DhcpClient::Nodes::Node::ClientStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-stats";

    return path_buffer.str();

}

const EntityPath DhcpClient::Nodes::Node::ClientStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientStats' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DhcpClient::Nodes::Node::ClientStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-stat")
    {
        for(auto const & c : client_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DhcpClient::Nodes::Node::ClientStats::ClientStat>();
        c->parent = this;
        client_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DhcpClient::Nodes::Node::ClientStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DhcpClient::Nodes::Node::ClientStats::set_value(const std::string & value_path, std::string value)
{
}

DhcpClient::Nodes::Node::ClientStats::ClientStat::ClientStat()
    :
    client_ifhandle{YType::str, "client-ifhandle"},
    interface_name{YType::str, "interface-name"},
    num_broadcast_failed{YType::uint32, "num-broadcast-failed"},
    num_broadcast_packet_sent_success{YType::uint32, "num-broadcast-packet-sent-success"},
    num_create_event_received{YType::uint32, "num-create-event-received"},
    num_declines_failed{YType::uint32, "num-declines-failed"},
    num_declines_sent_successfully{YType::uint32, "num-declines-sent-successfully"},
    num_delete_event_received{YType::uint32, "num-delete-event-received"},
    num_discovers_failed{YType::uint32, "num-discovers-failed"},
    num_discovers_sent_successfully{YType::uint32, "num-discovers-sent-successfully"},
    num_events_received{YType::uint32, "num-events-received"},
    num_init_timer_eventi{YType::uint32, "num-init-timer-eventi"},
    num_init_timer_start{YType::uint32, "num-init-timer-start"},
    num_init_timer_stop{YType::uint32, "num-init-timer-stop"},
    num_invalid_acks{YType::uint32, "num-invalid-acks"},
    num_invalid_events{YType::uint32, "num-invalid-events"},
    num_invalid_nacks{YType::uint32, "num-invalid-nacks"},
    num_invalid_offers{YType::uint32, "num-invalid-offers"},
    num_invalid_packets{YType::uint32, "num-invalid-packets"},
    num_lease_timer_event{YType::uint32, "num-lease-timer-event"},
    num_lease_timer_start{YType::uint32, "num-lease-timer-start"},
    num_lease_timer_stop{YType::uint32, "num-lease-timer-stop"},
    num_packet_event_received{YType::uint32, "num-packet-event-received"},
    num_rebinds_failed{YType::uint32, "num-rebinds-failed"},
    num_rebinds_sent_successfully{YType::uint32, "num-rebinds-sent-successfully"},
    num_reboot_event_received{YType::uint32, "num-reboot-event-received"},
    num_reinit_event_received{YType::uint32, "num-reinit-event-received"},
    num_releases_failed{YType::uint32, "num-releases-failed"},
    num_releases_sent_successfully{YType::uint32, "num-releases-sent-successfully"},
    num_renews_failed{YType::uint32, "num-renews-failed"},
    num_renews_sent_successfully{YType::uint32, "num-renews-sent-successfully"},
    num_request_after_reboot_failed{YType::uint32, "num-request-after-reboot-failed"},
    num_request_after_reboot_sent{YType::uint32, "num-request-after-reboot-sent"},
    num_requests_failed{YType::uint32, "num-requests-failed"},
    num_requests_sent_successfully{YType::uint32, "num-requests-sent-successfully"},
    num_t1_timer_event{YType::uint32, "num-t1-timer-event"},
    num_t1_timer_start{YType::uint32, "num-t1-timer-start"},
    num_t1_timer_stop{YType::uint32, "num-t1-timer-stop"},
    num_t2_timer_event{YType::uint32, "num-t2-timer-event"},
    num_t2_timer_start{YType::uint32, "num-t2-timer-start"},
    num_t2_timer_stop{YType::uint32, "num-t2-timer-stop"},
    num_unicast_failed{YType::uint32, "num-unicast-failed"},
    num_unicast_packet_sent_successfully{YType::uint32, "num-unicast-packet-sent-successfully"},
    num_valid_acks_received{YType::uint32, "num-valid-acks-received"},
    num_valid_nacks_received{YType::uint32, "num-valid-nacks-received"},
    num_valid_offers_received{YType::uint32, "num-valid-offers-received"},
    num_xid_mismatch{YType::uint32, "num-xid-mismatch"}
{
    yang_name = "client-stat"; yang_parent_name = "client-stats";
}

DhcpClient::Nodes::Node::ClientStats::ClientStat::~ClientStat()
{
}

bool DhcpClient::Nodes::Node::ClientStats::ClientStat::has_data() const
{
    return client_ifhandle.is_set
	|| interface_name.is_set
	|| num_broadcast_failed.is_set
	|| num_broadcast_packet_sent_success.is_set
	|| num_create_event_received.is_set
	|| num_declines_failed.is_set
	|| num_declines_sent_successfully.is_set
	|| num_delete_event_received.is_set
	|| num_discovers_failed.is_set
	|| num_discovers_sent_successfully.is_set
	|| num_events_received.is_set
	|| num_init_timer_eventi.is_set
	|| num_init_timer_start.is_set
	|| num_init_timer_stop.is_set
	|| num_invalid_acks.is_set
	|| num_invalid_events.is_set
	|| num_invalid_nacks.is_set
	|| num_invalid_offers.is_set
	|| num_invalid_packets.is_set
	|| num_lease_timer_event.is_set
	|| num_lease_timer_start.is_set
	|| num_lease_timer_stop.is_set
	|| num_packet_event_received.is_set
	|| num_rebinds_failed.is_set
	|| num_rebinds_sent_successfully.is_set
	|| num_reboot_event_received.is_set
	|| num_reinit_event_received.is_set
	|| num_releases_failed.is_set
	|| num_releases_sent_successfully.is_set
	|| num_renews_failed.is_set
	|| num_renews_sent_successfully.is_set
	|| num_request_after_reboot_failed.is_set
	|| num_request_after_reboot_sent.is_set
	|| num_requests_failed.is_set
	|| num_requests_sent_successfully.is_set
	|| num_t1_timer_event.is_set
	|| num_t1_timer_start.is_set
	|| num_t1_timer_stop.is_set
	|| num_t2_timer_event.is_set
	|| num_t2_timer_start.is_set
	|| num_t2_timer_stop.is_set
	|| num_unicast_failed.is_set
	|| num_unicast_packet_sent_successfully.is_set
	|| num_valid_acks_received.is_set
	|| num_valid_nacks_received.is_set
	|| num_valid_offers_received.is_set
	|| num_xid_mismatch.is_set;
}

bool DhcpClient::Nodes::Node::ClientStats::ClientStat::has_operation() const
{
    return is_set(operation)
	|| is_set(client_ifhandle.operation)
	|| is_set(interface_name.operation)
	|| is_set(num_broadcast_failed.operation)
	|| is_set(num_broadcast_packet_sent_success.operation)
	|| is_set(num_create_event_received.operation)
	|| is_set(num_declines_failed.operation)
	|| is_set(num_declines_sent_successfully.operation)
	|| is_set(num_delete_event_received.operation)
	|| is_set(num_discovers_failed.operation)
	|| is_set(num_discovers_sent_successfully.operation)
	|| is_set(num_events_received.operation)
	|| is_set(num_init_timer_eventi.operation)
	|| is_set(num_init_timer_start.operation)
	|| is_set(num_init_timer_stop.operation)
	|| is_set(num_invalid_acks.operation)
	|| is_set(num_invalid_events.operation)
	|| is_set(num_invalid_nacks.operation)
	|| is_set(num_invalid_offers.operation)
	|| is_set(num_invalid_packets.operation)
	|| is_set(num_lease_timer_event.operation)
	|| is_set(num_lease_timer_start.operation)
	|| is_set(num_lease_timer_stop.operation)
	|| is_set(num_packet_event_received.operation)
	|| is_set(num_rebinds_failed.operation)
	|| is_set(num_rebinds_sent_successfully.operation)
	|| is_set(num_reboot_event_received.operation)
	|| is_set(num_reinit_event_received.operation)
	|| is_set(num_releases_failed.operation)
	|| is_set(num_releases_sent_successfully.operation)
	|| is_set(num_renews_failed.operation)
	|| is_set(num_renews_sent_successfully.operation)
	|| is_set(num_request_after_reboot_failed.operation)
	|| is_set(num_request_after_reboot_sent.operation)
	|| is_set(num_requests_failed.operation)
	|| is_set(num_requests_sent_successfully.operation)
	|| is_set(num_t1_timer_event.operation)
	|| is_set(num_t1_timer_start.operation)
	|| is_set(num_t1_timer_stop.operation)
	|| is_set(num_t2_timer_event.operation)
	|| is_set(num_t2_timer_start.operation)
	|| is_set(num_t2_timer_stop.operation)
	|| is_set(num_unicast_failed.operation)
	|| is_set(num_unicast_packet_sent_successfully.operation)
	|| is_set(num_valid_acks_received.operation)
	|| is_set(num_valid_nacks_received.operation)
	|| is_set(num_valid_offers_received.operation)
	|| is_set(num_xid_mismatch.operation);
}

std::string DhcpClient::Nodes::Node::ClientStats::ClientStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-stat" <<"[client-ifhandle='" <<client_ifhandle <<"']";

    return path_buffer.str();

}

const EntityPath DhcpClient::Nodes::Node::ClientStats::ClientStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientStat' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_ifhandle.is_set || is_set(client_ifhandle.operation)) leaf_name_data.push_back(client_ifhandle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (num_broadcast_failed.is_set || is_set(num_broadcast_failed.operation)) leaf_name_data.push_back(num_broadcast_failed.get_name_leafdata());
    if (num_broadcast_packet_sent_success.is_set || is_set(num_broadcast_packet_sent_success.operation)) leaf_name_data.push_back(num_broadcast_packet_sent_success.get_name_leafdata());
    if (num_create_event_received.is_set || is_set(num_create_event_received.operation)) leaf_name_data.push_back(num_create_event_received.get_name_leafdata());
    if (num_declines_failed.is_set || is_set(num_declines_failed.operation)) leaf_name_data.push_back(num_declines_failed.get_name_leafdata());
    if (num_declines_sent_successfully.is_set || is_set(num_declines_sent_successfully.operation)) leaf_name_data.push_back(num_declines_sent_successfully.get_name_leafdata());
    if (num_delete_event_received.is_set || is_set(num_delete_event_received.operation)) leaf_name_data.push_back(num_delete_event_received.get_name_leafdata());
    if (num_discovers_failed.is_set || is_set(num_discovers_failed.operation)) leaf_name_data.push_back(num_discovers_failed.get_name_leafdata());
    if (num_discovers_sent_successfully.is_set || is_set(num_discovers_sent_successfully.operation)) leaf_name_data.push_back(num_discovers_sent_successfully.get_name_leafdata());
    if (num_events_received.is_set || is_set(num_events_received.operation)) leaf_name_data.push_back(num_events_received.get_name_leafdata());
    if (num_init_timer_eventi.is_set || is_set(num_init_timer_eventi.operation)) leaf_name_data.push_back(num_init_timer_eventi.get_name_leafdata());
    if (num_init_timer_start.is_set || is_set(num_init_timer_start.operation)) leaf_name_data.push_back(num_init_timer_start.get_name_leafdata());
    if (num_init_timer_stop.is_set || is_set(num_init_timer_stop.operation)) leaf_name_data.push_back(num_init_timer_stop.get_name_leafdata());
    if (num_invalid_acks.is_set || is_set(num_invalid_acks.operation)) leaf_name_data.push_back(num_invalid_acks.get_name_leafdata());
    if (num_invalid_events.is_set || is_set(num_invalid_events.operation)) leaf_name_data.push_back(num_invalid_events.get_name_leafdata());
    if (num_invalid_nacks.is_set || is_set(num_invalid_nacks.operation)) leaf_name_data.push_back(num_invalid_nacks.get_name_leafdata());
    if (num_invalid_offers.is_set || is_set(num_invalid_offers.operation)) leaf_name_data.push_back(num_invalid_offers.get_name_leafdata());
    if (num_invalid_packets.is_set || is_set(num_invalid_packets.operation)) leaf_name_data.push_back(num_invalid_packets.get_name_leafdata());
    if (num_lease_timer_event.is_set || is_set(num_lease_timer_event.operation)) leaf_name_data.push_back(num_lease_timer_event.get_name_leafdata());
    if (num_lease_timer_start.is_set || is_set(num_lease_timer_start.operation)) leaf_name_data.push_back(num_lease_timer_start.get_name_leafdata());
    if (num_lease_timer_stop.is_set || is_set(num_lease_timer_stop.operation)) leaf_name_data.push_back(num_lease_timer_stop.get_name_leafdata());
    if (num_packet_event_received.is_set || is_set(num_packet_event_received.operation)) leaf_name_data.push_back(num_packet_event_received.get_name_leafdata());
    if (num_rebinds_failed.is_set || is_set(num_rebinds_failed.operation)) leaf_name_data.push_back(num_rebinds_failed.get_name_leafdata());
    if (num_rebinds_sent_successfully.is_set || is_set(num_rebinds_sent_successfully.operation)) leaf_name_data.push_back(num_rebinds_sent_successfully.get_name_leafdata());
    if (num_reboot_event_received.is_set || is_set(num_reboot_event_received.operation)) leaf_name_data.push_back(num_reboot_event_received.get_name_leafdata());
    if (num_reinit_event_received.is_set || is_set(num_reinit_event_received.operation)) leaf_name_data.push_back(num_reinit_event_received.get_name_leafdata());
    if (num_releases_failed.is_set || is_set(num_releases_failed.operation)) leaf_name_data.push_back(num_releases_failed.get_name_leafdata());
    if (num_releases_sent_successfully.is_set || is_set(num_releases_sent_successfully.operation)) leaf_name_data.push_back(num_releases_sent_successfully.get_name_leafdata());
    if (num_renews_failed.is_set || is_set(num_renews_failed.operation)) leaf_name_data.push_back(num_renews_failed.get_name_leafdata());
    if (num_renews_sent_successfully.is_set || is_set(num_renews_sent_successfully.operation)) leaf_name_data.push_back(num_renews_sent_successfully.get_name_leafdata());
    if (num_request_after_reboot_failed.is_set || is_set(num_request_after_reboot_failed.operation)) leaf_name_data.push_back(num_request_after_reboot_failed.get_name_leafdata());
    if (num_request_after_reboot_sent.is_set || is_set(num_request_after_reboot_sent.operation)) leaf_name_data.push_back(num_request_after_reboot_sent.get_name_leafdata());
    if (num_requests_failed.is_set || is_set(num_requests_failed.operation)) leaf_name_data.push_back(num_requests_failed.get_name_leafdata());
    if (num_requests_sent_successfully.is_set || is_set(num_requests_sent_successfully.operation)) leaf_name_data.push_back(num_requests_sent_successfully.get_name_leafdata());
    if (num_t1_timer_event.is_set || is_set(num_t1_timer_event.operation)) leaf_name_data.push_back(num_t1_timer_event.get_name_leafdata());
    if (num_t1_timer_start.is_set || is_set(num_t1_timer_start.operation)) leaf_name_data.push_back(num_t1_timer_start.get_name_leafdata());
    if (num_t1_timer_stop.is_set || is_set(num_t1_timer_stop.operation)) leaf_name_data.push_back(num_t1_timer_stop.get_name_leafdata());
    if (num_t2_timer_event.is_set || is_set(num_t2_timer_event.operation)) leaf_name_data.push_back(num_t2_timer_event.get_name_leafdata());
    if (num_t2_timer_start.is_set || is_set(num_t2_timer_start.operation)) leaf_name_data.push_back(num_t2_timer_start.get_name_leafdata());
    if (num_t2_timer_stop.is_set || is_set(num_t2_timer_stop.operation)) leaf_name_data.push_back(num_t2_timer_stop.get_name_leafdata());
    if (num_unicast_failed.is_set || is_set(num_unicast_failed.operation)) leaf_name_data.push_back(num_unicast_failed.get_name_leafdata());
    if (num_unicast_packet_sent_successfully.is_set || is_set(num_unicast_packet_sent_successfully.operation)) leaf_name_data.push_back(num_unicast_packet_sent_successfully.get_name_leafdata());
    if (num_valid_acks_received.is_set || is_set(num_valid_acks_received.operation)) leaf_name_data.push_back(num_valid_acks_received.get_name_leafdata());
    if (num_valid_nacks_received.is_set || is_set(num_valid_nacks_received.operation)) leaf_name_data.push_back(num_valid_nacks_received.get_name_leafdata());
    if (num_valid_offers_received.is_set || is_set(num_valid_offers_received.operation)) leaf_name_data.push_back(num_valid_offers_received.get_name_leafdata());
    if (num_xid_mismatch.is_set || is_set(num_xid_mismatch.operation)) leaf_name_data.push_back(num_xid_mismatch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DhcpClient::Nodes::Node::ClientStats::ClientStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DhcpClient::Nodes::Node::ClientStats::ClientStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DhcpClient::Nodes::Node::ClientStats::ClientStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-ifhandle")
    {
        client_ifhandle = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "num-broadcast-failed")
    {
        num_broadcast_failed = value;
    }
    if(value_path == "num-broadcast-packet-sent-success")
    {
        num_broadcast_packet_sent_success = value;
    }
    if(value_path == "num-create-event-received")
    {
        num_create_event_received = value;
    }
    if(value_path == "num-declines-failed")
    {
        num_declines_failed = value;
    }
    if(value_path == "num-declines-sent-successfully")
    {
        num_declines_sent_successfully = value;
    }
    if(value_path == "num-delete-event-received")
    {
        num_delete_event_received = value;
    }
    if(value_path == "num-discovers-failed")
    {
        num_discovers_failed = value;
    }
    if(value_path == "num-discovers-sent-successfully")
    {
        num_discovers_sent_successfully = value;
    }
    if(value_path == "num-events-received")
    {
        num_events_received = value;
    }
    if(value_path == "num-init-timer-eventi")
    {
        num_init_timer_eventi = value;
    }
    if(value_path == "num-init-timer-start")
    {
        num_init_timer_start = value;
    }
    if(value_path == "num-init-timer-stop")
    {
        num_init_timer_stop = value;
    }
    if(value_path == "num-invalid-acks")
    {
        num_invalid_acks = value;
    }
    if(value_path == "num-invalid-events")
    {
        num_invalid_events = value;
    }
    if(value_path == "num-invalid-nacks")
    {
        num_invalid_nacks = value;
    }
    if(value_path == "num-invalid-offers")
    {
        num_invalid_offers = value;
    }
    if(value_path == "num-invalid-packets")
    {
        num_invalid_packets = value;
    }
    if(value_path == "num-lease-timer-event")
    {
        num_lease_timer_event = value;
    }
    if(value_path == "num-lease-timer-start")
    {
        num_lease_timer_start = value;
    }
    if(value_path == "num-lease-timer-stop")
    {
        num_lease_timer_stop = value;
    }
    if(value_path == "num-packet-event-received")
    {
        num_packet_event_received = value;
    }
    if(value_path == "num-rebinds-failed")
    {
        num_rebinds_failed = value;
    }
    if(value_path == "num-rebinds-sent-successfully")
    {
        num_rebinds_sent_successfully = value;
    }
    if(value_path == "num-reboot-event-received")
    {
        num_reboot_event_received = value;
    }
    if(value_path == "num-reinit-event-received")
    {
        num_reinit_event_received = value;
    }
    if(value_path == "num-releases-failed")
    {
        num_releases_failed = value;
    }
    if(value_path == "num-releases-sent-successfully")
    {
        num_releases_sent_successfully = value;
    }
    if(value_path == "num-renews-failed")
    {
        num_renews_failed = value;
    }
    if(value_path == "num-renews-sent-successfully")
    {
        num_renews_sent_successfully = value;
    }
    if(value_path == "num-request-after-reboot-failed")
    {
        num_request_after_reboot_failed = value;
    }
    if(value_path == "num-request-after-reboot-sent")
    {
        num_request_after_reboot_sent = value;
    }
    if(value_path == "num-requests-failed")
    {
        num_requests_failed = value;
    }
    if(value_path == "num-requests-sent-successfully")
    {
        num_requests_sent_successfully = value;
    }
    if(value_path == "num-t1-timer-event")
    {
        num_t1_timer_event = value;
    }
    if(value_path == "num-t1-timer-start")
    {
        num_t1_timer_start = value;
    }
    if(value_path == "num-t1-timer-stop")
    {
        num_t1_timer_stop = value;
    }
    if(value_path == "num-t2-timer-event")
    {
        num_t2_timer_event = value;
    }
    if(value_path == "num-t2-timer-start")
    {
        num_t2_timer_start = value;
    }
    if(value_path == "num-t2-timer-stop")
    {
        num_t2_timer_stop = value;
    }
    if(value_path == "num-unicast-failed")
    {
        num_unicast_failed = value;
    }
    if(value_path == "num-unicast-packet-sent-successfully")
    {
        num_unicast_packet_sent_successfully = value;
    }
    if(value_path == "num-valid-acks-received")
    {
        num_valid_acks_received = value;
    }
    if(value_path == "num-valid-nacks-received")
    {
        num_valid_nacks_received = value;
    }
    if(value_path == "num-valid-offers-received")
    {
        num_valid_offers_received = value;
    }
    if(value_path == "num-xid-mismatch")
    {
        num_xid_mismatch = value;
    }
}

DhcpClient::Nodes::Node::Clients::Clients()
{
    yang_name = "clients"; yang_parent_name = "node";
}

DhcpClient::Nodes::Node::Clients::~Clients()
{
}

bool DhcpClient::Nodes::Node::Clients::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool DhcpClient::Nodes::Node::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DhcpClient::Nodes::Node::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";

    return path_buffer.str();

}

const EntityPath DhcpClient::Nodes::Node::Clients::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clients' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DhcpClient::Nodes::Node::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DhcpClient::Nodes::Node::Clients::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DhcpClient::Nodes::Node::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DhcpClient::Nodes::Node::Clients::set_value(const std::string & value_path, std::string value)
{
}

DhcpClient::Nodes::Node::Clients::Client::Client()
    :
    client_ifhandle{YType::str, "client-ifhandle"},
    client_id{YType::str, "client-id"},
    client_mac_address{YType::str, "client-mac-address"},
    interface_name{YType::str, "interface-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_address_configured{YType::boolean, "ipv4-address-configured"},
    ipv4_client_state{YType::enumeration, "ipv4-client-state"},
    ipv4_lease_time{YType::uint32, "ipv4-lease-time"},
    ipv4_rebind_time{YType::uint32, "ipv4-rebind-time"},
    ipv4_renew_time{YType::uint32, "ipv4-renew-time"},
    ipv4_server_address{YType::str, "ipv4-server-address"},
    ipv4_subnet_mask{YType::str, "ipv4-subnet-mask"},
    next_hop_ipv4_address{YType::str, "next-hop-ipv4-address"}
{
    yang_name = "client"; yang_parent_name = "clients";
}

DhcpClient::Nodes::Node::Clients::Client::~Client()
{
}

bool DhcpClient::Nodes::Node::Clients::Client::has_data() const
{
    return client_ifhandle.is_set
	|| client_id.is_set
	|| client_mac_address.is_set
	|| interface_name.is_set
	|| ipv4_address.is_set
	|| ipv4_address_configured.is_set
	|| ipv4_client_state.is_set
	|| ipv4_lease_time.is_set
	|| ipv4_rebind_time.is_set
	|| ipv4_renew_time.is_set
	|| ipv4_server_address.is_set
	|| ipv4_subnet_mask.is_set
	|| next_hop_ipv4_address.is_set;
}

bool DhcpClient::Nodes::Node::Clients::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(client_ifhandle.operation)
	|| is_set(client_id.operation)
	|| is_set(client_mac_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_address_configured.operation)
	|| is_set(ipv4_client_state.operation)
	|| is_set(ipv4_lease_time.operation)
	|| is_set(ipv4_rebind_time.operation)
	|| is_set(ipv4_renew_time.operation)
	|| is_set(ipv4_server_address.operation)
	|| is_set(ipv4_subnet_mask.operation)
	|| is_set(next_hop_ipv4_address.operation);
}

std::string DhcpClient::Nodes::Node::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[client-ifhandle='" <<client_ifhandle <<"']";

    return path_buffer.str();

}

const EntityPath DhcpClient::Nodes::Node::Clients::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_ifhandle.is_set || is_set(client_ifhandle.operation)) leaf_name_data.push_back(client_ifhandle.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (client_mac_address.is_set || is_set(client_mac_address.operation)) leaf_name_data.push_back(client_mac_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_address_configured.is_set || is_set(ipv4_address_configured.operation)) leaf_name_data.push_back(ipv4_address_configured.get_name_leafdata());
    if (ipv4_client_state.is_set || is_set(ipv4_client_state.operation)) leaf_name_data.push_back(ipv4_client_state.get_name_leafdata());
    if (ipv4_lease_time.is_set || is_set(ipv4_lease_time.operation)) leaf_name_data.push_back(ipv4_lease_time.get_name_leafdata());
    if (ipv4_rebind_time.is_set || is_set(ipv4_rebind_time.operation)) leaf_name_data.push_back(ipv4_rebind_time.get_name_leafdata());
    if (ipv4_renew_time.is_set || is_set(ipv4_renew_time.operation)) leaf_name_data.push_back(ipv4_renew_time.get_name_leafdata());
    if (ipv4_server_address.is_set || is_set(ipv4_server_address.operation)) leaf_name_data.push_back(ipv4_server_address.get_name_leafdata());
    if (ipv4_subnet_mask.is_set || is_set(ipv4_subnet_mask.operation)) leaf_name_data.push_back(ipv4_subnet_mask.get_name_leafdata());
    if (next_hop_ipv4_address.is_set || is_set(next_hop_ipv4_address.operation)) leaf_name_data.push_back(next_hop_ipv4_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DhcpClient::Nodes::Node::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DhcpClient::Nodes::Node::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DhcpClient::Nodes::Node::Clients::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-ifhandle")
    {
        client_ifhandle = value;
    }
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "client-mac-address")
    {
        client_mac_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-address-configured")
    {
        ipv4_address_configured = value;
    }
    if(value_path == "ipv4-client-state")
    {
        ipv4_client_state = value;
    }
    if(value_path == "ipv4-lease-time")
    {
        ipv4_lease_time = value;
    }
    if(value_path == "ipv4-rebind-time")
    {
        ipv4_rebind_time = value;
    }
    if(value_path == "ipv4-renew-time")
    {
        ipv4_renew_time = value;
    }
    if(value_path == "ipv4-server-address")
    {
        ipv4_server_address = value;
    }
    if(value_path == "ipv4-subnet-mask")
    {
        ipv4_subnet_mask = value;
    }
    if(value_path == "next-hop-ipv4-address")
    {
        next_hop_ipv4_address = value;
    }
}

Ipv4Dhcpd::Ipv4Dhcpd()
    :
    nodes(std::make_shared<Ipv4Dhcpd::Nodes>())
	,snoop(std::make_shared<Ipv4Dhcpd::Snoop>())
{
    nodes->parent = this;

    snoop->parent = this;

    yang_name = "ipv4-dhcpd"; yang_parent_name = "Cisco-IOS-XR-ipv4-dhcpd-oper";
}

Ipv4Dhcpd::~Ipv4Dhcpd()
{
}

bool Ipv4Dhcpd::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data())
	|| (snoop !=  nullptr && snoop->has_data());
}

bool Ipv4Dhcpd::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (snoop !=  nullptr && snoop->has_operation());
}

std::string Ipv4Dhcpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-oper:ipv4-dhcpd";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv4Dhcpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Ipv4Dhcpd::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "snoop")
    {
        if(snoop == nullptr)
        {
            snoop = std::make_shared<Ipv4Dhcpd::Snoop>();
        }
        return snoop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(snoop != nullptr)
    {
        children["snoop"] = snoop;
    }

    return children;
}

void Ipv4Dhcpd::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Ipv4Dhcpd::clone_ptr() const
{
    return std::make_shared<Ipv4Dhcpd>();
}

std::string Ipv4Dhcpd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv4Dhcpd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv4Dhcpd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Ipv4Dhcpd::Snoop::Snoop()
    :
    binding_statistics(std::make_shared<Ipv4Dhcpd::Snoop::BindingStatistics>())
	,bindings(std::make_shared<Ipv4Dhcpd::Snoop::Bindings>())
	,profiles(std::make_shared<Ipv4Dhcpd::Snoop::Profiles>())
	,statistics(std::make_shared<Ipv4Dhcpd::Snoop::Statistics>())
	,statistics_info(std::make_shared<Ipv4Dhcpd::Snoop::StatisticsInfo>())
{
    binding_statistics->parent = this;

    bindings->parent = this;

    profiles->parent = this;

    statistics->parent = this;

    statistics_info->parent = this;

    yang_name = "snoop"; yang_parent_name = "ipv4-dhcpd";
}

Ipv4Dhcpd::Snoop::~Snoop()
{
}

bool Ipv4Dhcpd::Snoop::has_data() const
{
    return (binding_statistics !=  nullptr && binding_statistics->has_data())
	|| (bindings !=  nullptr && bindings->has_data())
	|| (profiles !=  nullptr && profiles->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (statistics_info !=  nullptr && statistics_info->has_data());
}

bool Ipv4Dhcpd::Snoop::has_operation() const
{
    return is_set(operation)
	|| (binding_statistics !=  nullptr && binding_statistics->has_operation())
	|| (bindings !=  nullptr && bindings->has_operation())
	|| (profiles !=  nullptr && profiles->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (statistics_info !=  nullptr && statistics_info->has_operation());
}

std::string Ipv4Dhcpd::Snoop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snoop";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Snoop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-oper:ipv4-dhcpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Snoop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-statistics")
    {
        if(binding_statistics == nullptr)
        {
            binding_statistics = std::make_shared<Ipv4Dhcpd::Snoop::BindingStatistics>();
        }
        return binding_statistics;
    }

    if(child_yang_name == "bindings")
    {
        if(bindings == nullptr)
        {
            bindings = std::make_shared<Ipv4Dhcpd::Snoop::Bindings>();
        }
        return bindings;
    }

    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<Ipv4Dhcpd::Snoop::Profiles>();
        }
        return profiles;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipv4Dhcpd::Snoop::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "statistics-info")
    {
        if(statistics_info == nullptr)
        {
            statistics_info = std::make_shared<Ipv4Dhcpd::Snoop::StatisticsInfo>();
        }
        return statistics_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Snoop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(binding_statistics != nullptr)
    {
        children["binding-statistics"] = binding_statistics;
    }

    if(bindings != nullptr)
    {
        children["bindings"] = bindings;
    }

    if(profiles != nullptr)
    {
        children["profiles"] = profiles;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(statistics_info != nullptr)
    {
        children["statistics-info"] = statistics_info;
    }

    return children;
}

void Ipv4Dhcpd::Snoop::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Snoop::Bindings::Bindings()
{
    yang_name = "bindings"; yang_parent_name = "snoop";
}

Ipv4Dhcpd::Snoop::Bindings::~Bindings()
{
}

bool Ipv4Dhcpd::Snoop::Bindings::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Snoop::Bindings::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Snoop::Bindings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Snoop::Bindings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-oper:ipv4-dhcpd/snoop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Snoop::Bindings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Snoop::Bindings::Binding>();
        c->parent = this;
        binding.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Snoop::Bindings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : binding)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Snoop::Bindings::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Snoop::Bindings::Binding::Binding()
    :
    client_uid{YType::str, "client-uid"},
    snoop_binding_bridge_name{YType::str, "snoop-binding-bridge-name"},
    snoop_binding_ch_addr{YType::str, "snoop-binding-ch-addr"},
    snoop_binding_ch_addr_len{YType::uint8, "snoop-binding-ch-addr-len"},
    snoop_binding_client_id{YType::str, "snoop-binding-client-id"},
    snoop_binding_client_id_len{YType::uint8, "snoop-binding-client-id-len"},
    snoop_binding_i_addr{YType::str, "snoop-binding-i-addr"},
    snoop_binding_lease{YType::uint32, "snoop-binding-lease"},
    snoop_binding_lease_start_time{YType::uint32, "snoop-binding-lease-start-time"},
    snoop_binding_profile_name{YType::str, "snoop-binding-profile-name"},
    snoop_binding_state{YType::uint8, "snoop-binding-state"},
    snoop_bindng_interface_name{YType::str, "snoop-bindng-interface-name"}
{
    yang_name = "binding"; yang_parent_name = "bindings";
}

Ipv4Dhcpd::Snoop::Bindings::Binding::~Binding()
{
}

bool Ipv4Dhcpd::Snoop::Bindings::Binding::has_data() const
{
    return client_uid.is_set
	|| snoop_binding_bridge_name.is_set
	|| snoop_binding_ch_addr.is_set
	|| snoop_binding_ch_addr_len.is_set
	|| snoop_binding_client_id.is_set
	|| snoop_binding_client_id_len.is_set
	|| snoop_binding_i_addr.is_set
	|| snoop_binding_lease.is_set
	|| snoop_binding_lease_start_time.is_set
	|| snoop_binding_profile_name.is_set
	|| snoop_binding_state.is_set
	|| snoop_bindng_interface_name.is_set;
}

bool Ipv4Dhcpd::Snoop::Bindings::Binding::has_operation() const
{
    return is_set(operation)
	|| is_set(client_uid.operation)
	|| is_set(snoop_binding_bridge_name.operation)
	|| is_set(snoop_binding_ch_addr.operation)
	|| is_set(snoop_binding_ch_addr_len.operation)
	|| is_set(snoop_binding_client_id.operation)
	|| is_set(snoop_binding_client_id_len.operation)
	|| is_set(snoop_binding_i_addr.operation)
	|| is_set(snoop_binding_lease.operation)
	|| is_set(snoop_binding_lease_start_time.operation)
	|| is_set(snoop_binding_profile_name.operation)
	|| is_set(snoop_binding_state.operation)
	|| is_set(snoop_bindng_interface_name.operation);
}

std::string Ipv4Dhcpd::Snoop::Bindings::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding" <<"[client-uid='" <<client_uid <<"']";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Snoop::Bindings::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-oper:ipv4-dhcpd/snoop/bindings/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_uid.is_set || is_set(client_uid.operation)) leaf_name_data.push_back(client_uid.get_name_leafdata());
    if (snoop_binding_bridge_name.is_set || is_set(snoop_binding_bridge_name.operation)) leaf_name_data.push_back(snoop_binding_bridge_name.get_name_leafdata());
    if (snoop_binding_ch_addr.is_set || is_set(snoop_binding_ch_addr.operation)) leaf_name_data.push_back(snoop_binding_ch_addr.get_name_leafdata());
    if (snoop_binding_ch_addr_len.is_set || is_set(snoop_binding_ch_addr_len.operation)) leaf_name_data.push_back(snoop_binding_ch_addr_len.get_name_leafdata());
    if (snoop_binding_client_id.is_set || is_set(snoop_binding_client_id.operation)) leaf_name_data.push_back(snoop_binding_client_id.get_name_leafdata());
    if (snoop_binding_client_id_len.is_set || is_set(snoop_binding_client_id_len.operation)) leaf_name_data.push_back(snoop_binding_client_id_len.get_name_leafdata());
    if (snoop_binding_i_addr.is_set || is_set(snoop_binding_i_addr.operation)) leaf_name_data.push_back(snoop_binding_i_addr.get_name_leafdata());
    if (snoop_binding_lease.is_set || is_set(snoop_binding_lease.operation)) leaf_name_data.push_back(snoop_binding_lease.get_name_leafdata());
    if (snoop_binding_lease_start_time.is_set || is_set(snoop_binding_lease_start_time.operation)) leaf_name_data.push_back(snoop_binding_lease_start_time.get_name_leafdata());
    if (snoop_binding_profile_name.is_set || is_set(snoop_binding_profile_name.operation)) leaf_name_data.push_back(snoop_binding_profile_name.get_name_leafdata());
    if (snoop_binding_state.is_set || is_set(snoop_binding_state.operation)) leaf_name_data.push_back(snoop_binding_state.get_name_leafdata());
    if (snoop_bindng_interface_name.is_set || is_set(snoop_bindng_interface_name.operation)) leaf_name_data.push_back(snoop_bindng_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Snoop::Bindings::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Snoop::Bindings::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Snoop::Bindings::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-uid")
    {
        client_uid = value;
    }
    if(value_path == "snoop-binding-bridge-name")
    {
        snoop_binding_bridge_name = value;
    }
    if(value_path == "snoop-binding-ch-addr")
    {
        snoop_binding_ch_addr = value;
    }
    if(value_path == "snoop-binding-ch-addr-len")
    {
        snoop_binding_ch_addr_len = value;
    }
    if(value_path == "snoop-binding-client-id")
    {
        snoop_binding_client_id = value;
    }
    if(value_path == "snoop-binding-client-id-len")
    {
        snoop_binding_client_id_len = value;
    }
    if(value_path == "snoop-binding-i-addr")
    {
        snoop_binding_i_addr = value;
    }
    if(value_path == "snoop-binding-lease")
    {
        snoop_binding_lease = value;
    }
    if(value_path == "snoop-binding-lease-start-time")
    {
        snoop_binding_lease_start_time = value;
    }
    if(value_path == "snoop-binding-profile-name")
    {
        snoop_binding_profile_name = value;
    }
    if(value_path == "snoop-binding-state")
    {
        snoop_binding_state = value;
    }
    if(value_path == "snoop-bindng-interface-name")
    {
        snoop_bindng_interface_name = value;
    }
}

Ipv4Dhcpd::Snoop::BindingStatistics::BindingStatistics()
    :
    snoop_binding_timestamp{YType::uint32, "snoop-binding-timestamp"},
    snoop_binding_total{YType::uint32, "snoop-binding-total"}
{
    yang_name = "binding-statistics"; yang_parent_name = "snoop";
}

Ipv4Dhcpd::Snoop::BindingStatistics::~BindingStatistics()
{
}

bool Ipv4Dhcpd::Snoop::BindingStatistics::has_data() const
{
    return snoop_binding_timestamp.is_set
	|| snoop_binding_total.is_set;
}

bool Ipv4Dhcpd::Snoop::BindingStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(snoop_binding_timestamp.operation)
	|| is_set(snoop_binding_total.operation);
}

std::string Ipv4Dhcpd::Snoop::BindingStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-statistics";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Snoop::BindingStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-oper:ipv4-dhcpd/snoop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snoop_binding_timestamp.is_set || is_set(snoop_binding_timestamp.operation)) leaf_name_data.push_back(snoop_binding_timestamp.get_name_leafdata());
    if (snoop_binding_total.is_set || is_set(snoop_binding_total.operation)) leaf_name_data.push_back(snoop_binding_total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Snoop::BindingStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Snoop::BindingStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Snoop::BindingStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snoop-binding-timestamp")
    {
        snoop_binding_timestamp = value;
    }
    if(value_path == "snoop-binding-total")
    {
        snoop_binding_total = value;
    }
}

Ipv4Dhcpd::Snoop::StatisticsInfo::StatisticsInfo()
    :
    snoop_stats_timestamp{YType::uint32, "snoop-stats-timestamp"}
{
    yang_name = "statistics-info"; yang_parent_name = "snoop";
}

Ipv4Dhcpd::Snoop::StatisticsInfo::~StatisticsInfo()
{
}

bool Ipv4Dhcpd::Snoop::StatisticsInfo::has_data() const
{
    return snoop_stats_timestamp.is_set;
}

bool Ipv4Dhcpd::Snoop::StatisticsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(snoop_stats_timestamp.operation);
}

std::string Ipv4Dhcpd::Snoop::StatisticsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-info";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Snoop::StatisticsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-oper:ipv4-dhcpd/snoop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snoop_stats_timestamp.is_set || is_set(snoop_stats_timestamp.operation)) leaf_name_data.push_back(snoop_stats_timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Snoop::StatisticsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Snoop::StatisticsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Snoop::StatisticsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snoop-stats-timestamp")
    {
        snoop_stats_timestamp = value;
    }
}

Ipv4Dhcpd::Snoop::Profiles::Profiles()
{
    yang_name = "profiles"; yang_parent_name = "snoop";
}

Ipv4Dhcpd::Snoop::Profiles::~Profiles()
{
}

bool Ipv4Dhcpd::Snoop::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Snoop::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Snoop::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Snoop::Profiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-oper:ipv4-dhcpd/snoop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Snoop::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Snoop::Profiles::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Snoop::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Snoop::Profiles::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Snoop::Profiles::Profile::Profile()
    :
    profile_name{YType::str, "profile-name"},
    snoop_profile_name{YType::str, "snoop-profile-name"},
    snoop_profile_relay_info_allow_untrusted{YType::uint8, "snoop-profile-relay-info-allow-untrusted"},
    snoop_profile_relay_info_option{YType::uint8, "snoop-profile-relay-info-option"},
    snoop_profile_relay_info_policy{YType::uint8, "snoop-profile-relay-info-policy"},
    snoop_profile_trusted{YType::uint8, "snoop-profile-trusted"},
    snoop_profile_uid{YType::uint32, "snoop-profile-uid"}
{
    yang_name = "profile"; yang_parent_name = "profiles";
}

Ipv4Dhcpd::Snoop::Profiles::Profile::~Profile()
{
}

bool Ipv4Dhcpd::Snoop::Profiles::Profile::has_data() const
{
    return profile_name.is_set
	|| snoop_profile_name.is_set
	|| snoop_profile_relay_info_allow_untrusted.is_set
	|| snoop_profile_relay_info_option.is_set
	|| snoop_profile_relay_info_policy.is_set
	|| snoop_profile_trusted.is_set
	|| snoop_profile_uid.is_set;
}

bool Ipv4Dhcpd::Snoop::Profiles::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation)
	|| is_set(snoop_profile_name.operation)
	|| is_set(snoop_profile_relay_info_allow_untrusted.operation)
	|| is_set(snoop_profile_relay_info_option.operation)
	|| is_set(snoop_profile_relay_info_policy.operation)
	|| is_set(snoop_profile_trusted.operation)
	|| is_set(snoop_profile_uid.operation);
}

std::string Ipv4Dhcpd::Snoop::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[profile-name='" <<profile_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Snoop::Profiles::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-oper:ipv4-dhcpd/snoop/profiles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (snoop_profile_name.is_set || is_set(snoop_profile_name.operation)) leaf_name_data.push_back(snoop_profile_name.get_name_leafdata());
    if (snoop_profile_relay_info_allow_untrusted.is_set || is_set(snoop_profile_relay_info_allow_untrusted.operation)) leaf_name_data.push_back(snoop_profile_relay_info_allow_untrusted.get_name_leafdata());
    if (snoop_profile_relay_info_option.is_set || is_set(snoop_profile_relay_info_option.operation)) leaf_name_data.push_back(snoop_profile_relay_info_option.get_name_leafdata());
    if (snoop_profile_relay_info_policy.is_set || is_set(snoop_profile_relay_info_policy.operation)) leaf_name_data.push_back(snoop_profile_relay_info_policy.get_name_leafdata());
    if (snoop_profile_trusted.is_set || is_set(snoop_profile_trusted.operation)) leaf_name_data.push_back(snoop_profile_trusted.get_name_leafdata());
    if (snoop_profile_uid.is_set || is_set(snoop_profile_uid.operation)) leaf_name_data.push_back(snoop_profile_uid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Snoop::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Snoop::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Snoop::Profiles::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
    if(value_path == "snoop-profile-name")
    {
        snoop_profile_name = value;
    }
    if(value_path == "snoop-profile-relay-info-allow-untrusted")
    {
        snoop_profile_relay_info_allow_untrusted = value;
    }
    if(value_path == "snoop-profile-relay-info-option")
    {
        snoop_profile_relay_info_option = value;
    }
    if(value_path == "snoop-profile-relay-info-policy")
    {
        snoop_profile_relay_info_policy = value;
    }
    if(value_path == "snoop-profile-trusted")
    {
        snoop_profile_trusted = value;
    }
    if(value_path == "snoop-profile-uid")
    {
        snoop_profile_uid = value;
    }
}

Ipv4Dhcpd::Snoop::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "snoop";
}

Ipv4Dhcpd::Snoop::Statistics::~Statistics()
{
}

bool Ipv4Dhcpd::Snoop::Statistics::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Snoop::Statistics::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Snoop::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Snoop::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-oper:ipv4-dhcpd/snoop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Snoop::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Snoop::Statistics::Statistic>();
        c->parent = this;
        statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Snoop::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Snoop::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Snoop::Statistics::Statistic::Statistic()
    :
    bridge_name{YType::str, "bridge-name"},
    snoop_statistic{YType::uint64, "snoop-statistic"},
    snoop_statistics_bridge_name{YType::str, "snoop-statistics-bridge-name"}
{
    yang_name = "statistic"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Snoop::Statistics::Statistic::~Statistic()
{
}

bool Ipv4Dhcpd::Snoop::Statistics::Statistic::has_data() const
{
    for (auto const & leaf : snoop_statistic.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bridge_name.is_set
	|| snoop_statistics_bridge_name.is_set;
}

bool Ipv4Dhcpd::Snoop::Statistics::Statistic::has_operation() const
{
    for (auto const & leaf : snoop_statistic.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bridge_name.operation)
	|| is_set(snoop_statistic.operation)
	|| is_set(snoop_statistics_bridge_name.operation);
}

std::string Ipv4Dhcpd::Snoop::Statistics::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic" <<"[bridge-name='" <<bridge_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Snoop::Statistics::Statistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-oper:ipv4-dhcpd/snoop/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_name.is_set || is_set(bridge_name.operation)) leaf_name_data.push_back(bridge_name.get_name_leafdata());
    if (snoop_statistics_bridge_name.is_set || is_set(snoop_statistics_bridge_name.operation)) leaf_name_data.push_back(snoop_statistics_bridge_name.get_name_leafdata());

    auto snoop_statistic_name_datas = snoop_statistic.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), snoop_statistic_name_datas.begin(), snoop_statistic_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Snoop::Statistics::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Snoop::Statistics::Statistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Snoop::Statistics::Statistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-name")
    {
        bridge_name = value;
    }
    if(value_path == "snoop-statistic")
    {
        snoop_statistic.append(value);
    }
    if(value_path == "snoop-statistics-bridge-name")
    {
        snoop_statistics_bridge_name = value;
    }
}

Ipv4Dhcpd::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "ipv4-dhcpd";
}

Ipv4Dhcpd::Nodes::~Nodes()
{
}

bool Ipv4Dhcpd::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-oper:ipv4-dhcpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Node()
    :
    nodeid{YType::str, "nodeid"}
    	,
    base(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base>())
	,interfaces(std::make_shared<Ipv4Dhcpd::Nodes::Node::Interfaces>())
	,proxy(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy>())
	,relay(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay>())
	,server(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server>())
{
    base->parent = this;

    interfaces->parent = this;

    proxy->parent = this;

    relay->parent = this;

    server->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

Ipv4Dhcpd::Nodes::Node::~Node()
{
}

bool Ipv4Dhcpd::Nodes::Node::has_data() const
{
    return nodeid.is_set
	|| (base !=  nullptr && base->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (proxy !=  nullptr && proxy->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(nodeid.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (proxy !=  nullptr && proxy->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[nodeid='" <<nodeid <<"']";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-oper:ipv4-dhcpd/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nodeid.is_set || is_set(nodeid.operation)) leaf_name_data.push_back(nodeid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base>();
        }
        return base;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ipv4Dhcpd::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "proxy")
    {
        if(proxy == nullptr)
        {
            proxy = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy>();
        }
        return proxy;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(proxy != nullptr)
    {
        children["proxy"] = proxy;
    }

    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nodeid")
    {
        nodeid = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Proxy()
    :
    binding(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Binding>())
	,profiles(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Profiles>())
	,statistics(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Statistics>())
	,statistics_info(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo>())
	,vrfs(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs>())
{
    binding->parent = this;

    profiles->parent = this;

    statistics->parent = this;

    statistics_info->parent = this;

    vrfs->parent = this;

    yang_name = "proxy"; yang_parent_name = "node";
}

Ipv4Dhcpd::Nodes::Node::Proxy::~Proxy()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::has_data() const
{
    return (binding !=  nullptr && binding->has_data())
	|| (profiles !=  nullptr && profiles->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (statistics_info !=  nullptr && statistics_info->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::has_operation() const
{
    return is_set(operation)
	|| (binding !=  nullptr && binding->has_operation())
	|| (profiles !=  nullptr && profiles->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (statistics_info !=  nullptr && statistics_info->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Proxy' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        if(binding == nullptr)
        {
            binding = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Binding>();
        }
        return binding;
    }

    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Profiles>();
        }
        return profiles;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "statistics-info")
    {
        if(statistics_info == nullptr)
        {
            statistics_info = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo>();
        }
        return statistics_info;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(binding != nullptr)
    {
        children["binding"] = binding;
    }

    if(profiles != nullptr)
    {
        children["profiles"] = profiles;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(statistics_info != nullptr)
    {
        children["statistics-info"] = statistics_info;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo::StatisticsInfo()
    :
    proxy_stats_timestamp{YType::uint32, "proxy-stats-timestamp"}
{
    yang_name = "statistics-info"; yang_parent_name = "proxy";
}

Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo::~StatisticsInfo()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo::has_data() const
{
    return proxy_stats_timestamp.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(proxy_stats_timestamp.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-info";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatisticsInfo' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_stats_timestamp.is_set || is_set(proxy_stats_timestamp.operation)) leaf_name_data.push_back(proxy_stats_timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::StatisticsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "proxy-stats-timestamp")
    {
        proxy_stats_timestamp = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "proxy";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::~Vrfs()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    statistics(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics>())
{
    statistics->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Statistics()
    :
    ack(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack>())
	,bootp_reply(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply>())
	,bootp_request(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest>())
	,decline(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline>())
	,discover(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover>())
	,inform(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform>())
	,lease_active(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive>())
	,lease_not_assigned(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned>())
	,lease_query(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery>())
	,lease_unknown(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown>())
	,nak(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak>())
	,offer(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer>())
	,release(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release>())
	,request(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request>())
{
    ack->parent = this;

    bootp_reply->parent = this;

    bootp_request->parent = this;

    decline->parent = this;

    discover->parent = this;

    inform->parent = this;

    lease_active->parent = this;

    lease_not_assigned->parent = this;

    lease_query->parent = this;

    lease_unknown->parent = this;

    nak->parent = this;

    offer->parent = this;

    release->parent = this;

    request->parent = this;

    yang_name = "statistics"; yang_parent_name = "vrf";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::~Statistics()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::has_data() const
{
    return (ack !=  nullptr && ack->has_data())
	|| (bootp_reply !=  nullptr && bootp_reply->has_data())
	|| (bootp_request !=  nullptr && bootp_request->has_data())
	|| (decline !=  nullptr && decline->has_data())
	|| (discover !=  nullptr && discover->has_data())
	|| (inform !=  nullptr && inform->has_data())
	|| (lease_active !=  nullptr && lease_active->has_data())
	|| (lease_not_assigned !=  nullptr && lease_not_assigned->has_data())
	|| (lease_query !=  nullptr && lease_query->has_data())
	|| (lease_unknown !=  nullptr && lease_unknown->has_data())
	|| (nak !=  nullptr && nak->has_data())
	|| (offer !=  nullptr && offer->has_data())
	|| (release !=  nullptr && release->has_data())
	|| (request !=  nullptr && request->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::has_operation() const
{
    return is_set(operation)
	|| (ack !=  nullptr && ack->has_operation())
	|| (bootp_reply !=  nullptr && bootp_reply->has_operation())
	|| (bootp_request !=  nullptr && bootp_request->has_operation())
	|| (decline !=  nullptr && decline->has_operation())
	|| (discover !=  nullptr && discover->has_operation())
	|| (inform !=  nullptr && inform->has_operation())
	|| (lease_active !=  nullptr && lease_active->has_operation())
	|| (lease_not_assigned !=  nullptr && lease_not_assigned->has_operation())
	|| (lease_query !=  nullptr && lease_query->has_operation())
	|| (lease_unknown !=  nullptr && lease_unknown->has_operation())
	|| (nak !=  nullptr && nak->has_operation())
	|| (offer !=  nullptr && offer->has_operation())
	|| (release !=  nullptr && release->has_operation())
	|| (request !=  nullptr && request->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "bootp-reply")
    {
        if(bootp_reply == nullptr)
        {
            bootp_reply = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply>();
        }
        return bootp_reply;
    }

    if(child_yang_name == "bootp-request")
    {
        if(bootp_request == nullptr)
        {
            bootp_request = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest>();
        }
        return bootp_request;
    }

    if(child_yang_name == "decline")
    {
        if(decline == nullptr)
        {
            decline = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline>();
        }
        return decline;
    }

    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "inform")
    {
        if(inform == nullptr)
        {
            inform = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform>();
        }
        return inform;
    }

    if(child_yang_name == "lease-active")
    {
        if(lease_active == nullptr)
        {
            lease_active = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive>();
        }
        return lease_active;
    }

    if(child_yang_name == "lease-not-assigned")
    {
        if(lease_not_assigned == nullptr)
        {
            lease_not_assigned = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned>();
        }
        return lease_not_assigned;
    }

    if(child_yang_name == "lease-query")
    {
        if(lease_query == nullptr)
        {
            lease_query = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery>();
        }
        return lease_query;
    }

    if(child_yang_name == "lease-unknown")
    {
        if(lease_unknown == nullptr)
        {
            lease_unknown = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown>();
        }
        return lease_unknown;
    }

    if(child_yang_name == "nak")
    {
        if(nak == nullptr)
        {
            nak = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak>();
        }
        return nak;
    }

    if(child_yang_name == "offer")
    {
        if(offer == nullptr)
        {
            offer = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer>();
        }
        return offer;
    }

    if(child_yang_name == "release")
    {
        if(release == nullptr)
        {
            release = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release>();
        }
        return release;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request>();
        }
        return request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ack != nullptr)
    {
        children["ack"] = ack;
    }

    if(bootp_reply != nullptr)
    {
        children["bootp-reply"] = bootp_reply;
    }

    if(bootp_request != nullptr)
    {
        children["bootp-request"] = bootp_request;
    }

    if(decline != nullptr)
    {
        children["decline"] = decline;
    }

    if(discover != nullptr)
    {
        children["discover"] = discover;
    }

    if(inform != nullptr)
    {
        children["inform"] = inform;
    }

    if(lease_active != nullptr)
    {
        children["lease-active"] = lease_active;
    }

    if(lease_not_assigned != nullptr)
    {
        children["lease-not-assigned"] = lease_not_assigned;
    }

    if(lease_query != nullptr)
    {
        children["lease-query"] = lease_query;
    }

    if(lease_unknown != nullptr)
    {
        children["lease-unknown"] = lease_unknown;
    }

    if(nak != nullptr)
    {
        children["nak"] = nak;
    }

    if(offer != nullptr)
    {
        children["offer"] = offer;
    }

    if(release != nullptr)
    {
        children["release"] = release;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover::Discover()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "discover"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover::~Discover()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discover' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Discover::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer::Offer()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "offer"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer::~Offer()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offer";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Offer' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Offer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::Request()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "request"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::~Request()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::Decline()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "decline"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::~Decline()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decline";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Decline' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack::Ack()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "ack"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack::~Ack()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ack' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Ack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak::Nak()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "nak"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak::~Nak()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nak";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nak' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Nak::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::Release()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "release"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::~Release()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "release";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Release' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::Inform()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "inform"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::~Inform()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inform' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::LeaseQuery()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::~LeaseQuery()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQuery' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned::LeaseNotAssigned()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-not-assigned"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned::~LeaseNotAssigned()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-not-assigned";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseNotAssigned' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseNotAssigned::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown::LeaseUnknown()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-unknown"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown::~LeaseUnknown()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-unknown";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseUnknown' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseUnknown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive::LeaseActive()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-active"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive::~LeaseActive()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-active";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseActive' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseActive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest::BootpRequest()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "bootp-request"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest::~BootpRequest()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootp-request";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BootpRequest' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply::BootpReply()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "bootp-reply"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply::~BootpReply()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootp-reply";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BootpReply' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::BootpReply::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profiles()
{
    yang_name = "profiles"; yang_parent_name = "proxy";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::~Profiles()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Profiles' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::Profile()
    :
    profile_name{YType::str, "profile-name"},
    gi_addr{YType::str, "gi-addr"},
    is_move_allowed{YType::boolean, "is-move-allowed"},
    is_relay_allow_untrusted_enabled{YType::boolean, "is-relay-allow-untrusted-enabled"},
    is_relay_check{YType::boolean, "is-relay-check"},
    is_relay_option_enabled{YType::boolean, "is-relay-option-enabled"},
    is_relay_optionvpn_enabled{YType::boolean, "is-relay-optionvpn-enabled"},
    profile_helper_address{YType::str, "profile-helper-address"},
    proxy_broadcast_flag_policy{YType::enumeration, "proxy-broadcast-flag-policy"},
    proxy_lease_limit_count{YType::uint32, "proxy-lease-limit-count"},
    proxy_lease_limit_type{YType::enumeration, "proxy-lease-limit-type"},
    proxy_profile_client_lease_time{YType::uint32, "proxy-profile-client-lease-time"},
    relay_authenticate{YType::enumeration, "relay-authenticate"},
    relay_optionvpn_enabled_mode{YType::enumeration, "relay-optionvpn-enabled-mode"},
    relay_policy{YType::enumeration, "relay-policy"},
    vrf_name{YType::str, "vrf-name"}
    	,
    interface_references(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences>())
	,vrf_references(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences>())
{
    interface_references->parent = this;

    vrf_references->parent = this;

    yang_name = "profile"; yang_parent_name = "profiles";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::~Profile()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::has_data() const
{
    for (auto const & leaf : gi_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : profile_helper_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : vrf_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return profile_name.is_set
	|| is_move_allowed.is_set
	|| is_relay_allow_untrusted_enabled.is_set
	|| is_relay_check.is_set
	|| is_relay_option_enabled.is_set
	|| is_relay_optionvpn_enabled.is_set
	|| proxy_broadcast_flag_policy.is_set
	|| proxy_lease_limit_count.is_set
	|| proxy_lease_limit_type.is_set
	|| proxy_profile_client_lease_time.is_set
	|| relay_authenticate.is_set
	|| relay_optionvpn_enabled_mode.is_set
	|| relay_policy.is_set
	|| (interface_references !=  nullptr && interface_references->has_data())
	|| (vrf_references !=  nullptr && vrf_references->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::has_operation() const
{
    for (auto const & leaf : gi_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : profile_helper_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : vrf_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(profile_name.operation)
	|| is_set(gi_addr.operation)
	|| is_set(is_move_allowed.operation)
	|| is_set(is_relay_allow_untrusted_enabled.operation)
	|| is_set(is_relay_check.operation)
	|| is_set(is_relay_option_enabled.operation)
	|| is_set(is_relay_optionvpn_enabled.operation)
	|| is_set(profile_helper_address.operation)
	|| is_set(proxy_broadcast_flag_policy.operation)
	|| is_set(proxy_lease_limit_count.operation)
	|| is_set(proxy_lease_limit_type.operation)
	|| is_set(proxy_profile_client_lease_time.operation)
	|| is_set(relay_authenticate.operation)
	|| is_set(relay_optionvpn_enabled_mode.operation)
	|| is_set(relay_policy.operation)
	|| is_set(vrf_name.operation)
	|| (interface_references !=  nullptr && interface_references->has_operation())
	|| (vrf_references !=  nullptr && vrf_references->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[profile-name='" <<profile_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Profile' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (is_move_allowed.is_set || is_set(is_move_allowed.operation)) leaf_name_data.push_back(is_move_allowed.get_name_leafdata());
    if (is_relay_allow_untrusted_enabled.is_set || is_set(is_relay_allow_untrusted_enabled.operation)) leaf_name_data.push_back(is_relay_allow_untrusted_enabled.get_name_leafdata());
    if (is_relay_check.is_set || is_set(is_relay_check.operation)) leaf_name_data.push_back(is_relay_check.get_name_leafdata());
    if (is_relay_option_enabled.is_set || is_set(is_relay_option_enabled.operation)) leaf_name_data.push_back(is_relay_option_enabled.get_name_leafdata());
    if (is_relay_optionvpn_enabled.is_set || is_set(is_relay_optionvpn_enabled.operation)) leaf_name_data.push_back(is_relay_optionvpn_enabled.get_name_leafdata());
    if (proxy_broadcast_flag_policy.is_set || is_set(proxy_broadcast_flag_policy.operation)) leaf_name_data.push_back(proxy_broadcast_flag_policy.get_name_leafdata());
    if (proxy_lease_limit_count.is_set || is_set(proxy_lease_limit_count.operation)) leaf_name_data.push_back(proxy_lease_limit_count.get_name_leafdata());
    if (proxy_lease_limit_type.is_set || is_set(proxy_lease_limit_type.operation)) leaf_name_data.push_back(proxy_lease_limit_type.get_name_leafdata());
    if (proxy_profile_client_lease_time.is_set || is_set(proxy_profile_client_lease_time.operation)) leaf_name_data.push_back(proxy_profile_client_lease_time.get_name_leafdata());
    if (relay_authenticate.is_set || is_set(relay_authenticate.operation)) leaf_name_data.push_back(relay_authenticate.get_name_leafdata());
    if (relay_optionvpn_enabled_mode.is_set || is_set(relay_optionvpn_enabled_mode.operation)) leaf_name_data.push_back(relay_optionvpn_enabled_mode.get_name_leafdata());
    if (relay_policy.is_set || is_set(relay_policy.operation)) leaf_name_data.push_back(relay_policy.get_name_leafdata());

    auto gi_addr_name_datas = gi_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), gi_addr_name_datas.begin(), gi_addr_name_datas.end());
    auto profile_helper_address_name_datas = profile_helper_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), profile_helper_address_name_datas.begin(), profile_helper_address_name_datas.end());
    auto vrf_name_name_datas = vrf_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vrf_name_name_datas.begin(), vrf_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-references")
    {
        if(interface_references == nullptr)
        {
            interface_references = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences>();
        }
        return interface_references;
    }

    if(child_yang_name == "vrf-references")
    {
        if(vrf_references == nullptr)
        {
            vrf_references = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences>();
        }
        return vrf_references;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_references != nullptr)
    {
        children["interface-references"] = interface_references;
    }

    if(vrf_references != nullptr)
    {
        children["vrf-references"] = vrf_references;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
    if(value_path == "gi-addr")
    {
        gi_addr.append(value);
    }
    if(value_path == "is-move-allowed")
    {
        is_move_allowed = value;
    }
    if(value_path == "is-relay-allow-untrusted-enabled")
    {
        is_relay_allow_untrusted_enabled = value;
    }
    if(value_path == "is-relay-check")
    {
        is_relay_check = value;
    }
    if(value_path == "is-relay-option-enabled")
    {
        is_relay_option_enabled = value;
    }
    if(value_path == "is-relay-optionvpn-enabled")
    {
        is_relay_optionvpn_enabled = value;
    }
    if(value_path == "profile-helper-address")
    {
        profile_helper_address.append(value);
    }
    if(value_path == "proxy-broadcast-flag-policy")
    {
        proxy_broadcast_flag_policy = value;
    }
    if(value_path == "proxy-lease-limit-count")
    {
        proxy_lease_limit_count = value;
    }
    if(value_path == "proxy-lease-limit-type")
    {
        proxy_lease_limit_type = value;
    }
    if(value_path == "proxy-profile-client-lease-time")
    {
        proxy_profile_client_lease_time = value;
    }
    if(value_path == "relay-authenticate")
    {
        relay_authenticate = value;
    }
    if(value_path == "relay-optionvpn-enabled-mode")
    {
        relay_optionvpn_enabled_mode = value;
    }
    if(value_path == "relay-policy")
    {
        relay_policy = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.append(value);
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::VrfReferences()
{
    yang_name = "vrf-references"; yang_parent_name = "profile";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::~VrfReferences()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::has_data() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_proxy_vrf_reference.size(); index++)
    {
        if(ipv4_dhcpd_proxy_vrf_reference[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::has_operation() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_proxy_vrf_reference.size(); index++)
    {
        if(ipv4_dhcpd_proxy_vrf_reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-references";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfReferences' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-dhcpd-proxy-vrf-reference")
    {
        for(auto const & c : ipv4_dhcpd_proxy_vrf_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference>();
        c->parent = this;
        ipv4_dhcpd_proxy_vrf_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_dhcpd_proxy_vrf_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference::Ipv4DhcpdProxyVrfReference()
    :
    proxy_reference_vrf_name{YType::str, "proxy-reference-vrf-name"}
{
    yang_name = "ipv4-dhcpd-proxy-vrf-reference"; yang_parent_name = "vrf-references";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference::~Ipv4DhcpdProxyVrfReference()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference::has_data() const
{
    return proxy_reference_vrf_name.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference::has_operation() const
{
    return is_set(operation)
	|| is_set(proxy_reference_vrf_name.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-dhcpd-proxy-vrf-reference";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4DhcpdProxyVrfReference' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_reference_vrf_name.is_set || is_set(proxy_reference_vrf_name.operation)) leaf_name_data.push_back(proxy_reference_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::VrfReferences::Ipv4DhcpdProxyVrfReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "proxy-reference-vrf-name")
    {
        proxy_reference_vrf_name = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::InterfaceReferences()
{
    yang_name = "interface-references"; yang_parent_name = "profile";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::~InterfaceReferences()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::has_data() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_proxy_interface_reference.size(); index++)
    {
        if(ipv4_dhcpd_proxy_interface_reference[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::has_operation() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_proxy_interface_reference.size(); index++)
    {
        if(ipv4_dhcpd_proxy_interface_reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-references";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceReferences' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-dhcpd-proxy-interface-reference")
    {
        for(auto const & c : ipv4_dhcpd_proxy_interface_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference>();
        c->parent = this;
        ipv4_dhcpd_proxy_interface_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_dhcpd_proxy_interface_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference::Ipv4DhcpdProxyInterfaceReference()
    :
    proxy_reference_interface_name{YType::str, "proxy-reference-interface-name"}
{
    yang_name = "ipv4-dhcpd-proxy-interface-reference"; yang_parent_name = "interface-references";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference::~Ipv4DhcpdProxyInterfaceReference()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference::has_data() const
{
    return proxy_reference_interface_name.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference::has_operation() const
{
    return is_set(operation)
	|| is_set(proxy_reference_interface_name.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-dhcpd-proxy-interface-reference";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4DhcpdProxyInterfaceReference' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_reference_interface_name.is_set || is_set(proxy_reference_interface_name.operation)) leaf_name_data.push_back(proxy_reference_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Profiles::Profile::InterfaceReferences::Ipv4DhcpdProxyInterfaceReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "proxy-reference-interface-name")
    {
        proxy_reference_interface_name = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "proxy";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::~Statistics()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::has_data() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_proxy_stat.size(); index++)
    {
        if(ipv4_dhcpd_proxy_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::has_operation() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_proxy_stat.size(); index++)
    {
        if(ipv4_dhcpd_proxy_stat[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-dhcpd-proxy-stat")
    {
        for(auto const & c : ipv4_dhcpd_proxy_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat>();
        c->parent = this;
        ipv4_dhcpd_proxy_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_dhcpd_proxy_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Ipv4DhcpdProxyStat()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    statistics(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_>())
{
    statistics->parent = this;

    yang_name = "ipv4-dhcpd-proxy-stat"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::~Ipv4DhcpdProxyStat()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::has_data() const
{
    return vrf_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-dhcpd-proxy-stat";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4DhcpdProxyStat' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_::Statistics_()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "statistics"; yang_parent_name = "ipv4-dhcpd-proxy-stat";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_::~Statistics_()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics_' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Statistics::Ipv4DhcpdProxyStat::Statistics_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Binding()
    :
    clients(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients>())
	,summary(std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary>())
{
    clients->parent = this;

    summary->parent = this;

    yang_name = "binding"; yang_parent_name = "proxy";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Binding::~Binding()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Binding::has_data() const
{
    return (clients !=  nullptr && clients->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Binding::has_operation() const
{
    return is_set(operation)
	|| (clients !=  nullptr && clients->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients>();
        }
        return clients;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clients != nullptr)
    {
        children["clients"] = clients;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Binding::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Clients()
{
    yang_name = "clients"; yang_parent_name = "binding";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::~Clients()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clients' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client::Client()
    :
    client_id{YType::str, "client-id"},
    access_vrf_name{YType::str, "access-vrf-name"},
    client_gi_addr{YType::str, "client-gi-addr"},
    client_id_xr{YType::str, "client-id-xr"},
    event_history{YType::uint32, "event-history"},
    interface_name{YType::str, "interface-name"},
    ip_address{YType::str, "ip-address"},
    is_auth_received{YType::boolean, "is-auth-received"},
    is_mbl_subscriber{YType::boolean, "is-mbl-subscriber"},
    is_nak_next_renew{YType::boolean, "is-nak-next-renew"},
    lease_time{YType::uint32, "lease-time"},
    mac_address{YType::str, "mac-address"},
    old_subscriber_label{YType::uint32, "old-subscriber-label"},
    param_request{YType::str, "param-request"},
    param_response{YType::str, "param-response"},
    profile_name{YType::str, "profile-name"},
    proxy_binding_inner_tag{YType::uint32, "proxy-binding-inner-tag"},
    proxy_binding_outer_tag{YType::uint32, "proxy-binding-outer-tag"},
    remaining_lease_time{YType::uint32, "remaining-lease-time"},
    reply_server_ip_address{YType::str, "reply-server-ip-address"},
    rx_circuit_id{YType::str, "rx-circuit-id"},
    rx_remote_id{YType::str, "rx-remote-id"},
    rx_vsiso{YType::str, "rx-vsiso"},
    server_ip_address{YType::str, "server-ip-address"},
    server_vrf_name{YType::str, "server-vrf-name"},
    session_start_time{YType::uint64, "session-start-time"},
    srg_state{YType::uint32, "srg-state"},
    state{YType::enumeration, "state"},
    subscriber_interface_name{YType::str, "subscriber-interface-name"},
    subscriber_label{YType::uint32, "subscriber-label"},
    to_server_gi_addr{YType::str, "to-server-gi-addr"},
    tx_circuit_id{YType::str, "tx-circuit-id"},
    tx_remote_id{YType::str, "tx-remote-id"},
    tx_vsiso{YType::str, "tx-vsiso"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "client"; yang_parent_name = "clients";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client::~Client()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client::has_data() const
{
    for (auto const & leaf : event_history.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return client_id.is_set
	|| access_vrf_name.is_set
	|| client_gi_addr.is_set
	|| client_id_xr.is_set
	|| interface_name.is_set
	|| ip_address.is_set
	|| is_auth_received.is_set
	|| is_mbl_subscriber.is_set
	|| is_nak_next_renew.is_set
	|| lease_time.is_set
	|| mac_address.is_set
	|| old_subscriber_label.is_set
	|| param_request.is_set
	|| param_response.is_set
	|| profile_name.is_set
	|| proxy_binding_inner_tag.is_set
	|| proxy_binding_outer_tag.is_set
	|| remaining_lease_time.is_set
	|| reply_server_ip_address.is_set
	|| rx_circuit_id.is_set
	|| rx_remote_id.is_set
	|| rx_vsiso.is_set
	|| server_ip_address.is_set
	|| server_vrf_name.is_set
	|| session_start_time.is_set
	|| srg_state.is_set
	|| state.is_set
	|| subscriber_interface_name.is_set
	|| subscriber_label.is_set
	|| to_server_gi_addr.is_set
	|| tx_circuit_id.is_set
	|| tx_remote_id.is_set
	|| tx_vsiso.is_set
	|| vrf_name.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client::has_operation() const
{
    for (auto const & leaf : event_history.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(client_id.operation)
	|| is_set(access_vrf_name.operation)
	|| is_set(client_gi_addr.operation)
	|| is_set(client_id_xr.operation)
	|| is_set(event_history.operation)
	|| is_set(interface_name.operation)
	|| is_set(ip_address.operation)
	|| is_set(is_auth_received.operation)
	|| is_set(is_mbl_subscriber.operation)
	|| is_set(is_nak_next_renew.operation)
	|| is_set(lease_time.operation)
	|| is_set(mac_address.operation)
	|| is_set(old_subscriber_label.operation)
	|| is_set(param_request.operation)
	|| is_set(param_response.operation)
	|| is_set(profile_name.operation)
	|| is_set(proxy_binding_inner_tag.operation)
	|| is_set(proxy_binding_outer_tag.operation)
	|| is_set(remaining_lease_time.operation)
	|| is_set(reply_server_ip_address.operation)
	|| is_set(rx_circuit_id.operation)
	|| is_set(rx_remote_id.operation)
	|| is_set(rx_vsiso.operation)
	|| is_set(server_ip_address.operation)
	|| is_set(server_vrf_name.operation)
	|| is_set(session_start_time.operation)
	|| is_set(srg_state.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_interface_name.operation)
	|| is_set(subscriber_label.operation)
	|| is_set(to_server_gi_addr.operation)
	|| is_set(tx_circuit_id.operation)
	|| is_set(tx_remote_id.operation)
	|| is_set(tx_vsiso.operation)
	|| is_set(vrf_name.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[client-id='" <<client_id <<"']";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (access_vrf_name.is_set || is_set(access_vrf_name.operation)) leaf_name_data.push_back(access_vrf_name.get_name_leafdata());
    if (client_gi_addr.is_set || is_set(client_gi_addr.operation)) leaf_name_data.push_back(client_gi_addr.get_name_leafdata());
    if (client_id_xr.is_set || is_set(client_id_xr.operation)) leaf_name_data.push_back(client_id_xr.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (is_auth_received.is_set || is_set(is_auth_received.operation)) leaf_name_data.push_back(is_auth_received.get_name_leafdata());
    if (is_mbl_subscriber.is_set || is_set(is_mbl_subscriber.operation)) leaf_name_data.push_back(is_mbl_subscriber.get_name_leafdata());
    if (is_nak_next_renew.is_set || is_set(is_nak_next_renew.operation)) leaf_name_data.push_back(is_nak_next_renew.get_name_leafdata());
    if (lease_time.is_set || is_set(lease_time.operation)) leaf_name_data.push_back(lease_time.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (old_subscriber_label.is_set || is_set(old_subscriber_label.operation)) leaf_name_data.push_back(old_subscriber_label.get_name_leafdata());
    if (param_request.is_set || is_set(param_request.operation)) leaf_name_data.push_back(param_request.get_name_leafdata());
    if (param_response.is_set || is_set(param_response.operation)) leaf_name_data.push_back(param_response.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (proxy_binding_inner_tag.is_set || is_set(proxy_binding_inner_tag.operation)) leaf_name_data.push_back(proxy_binding_inner_tag.get_name_leafdata());
    if (proxy_binding_outer_tag.is_set || is_set(proxy_binding_outer_tag.operation)) leaf_name_data.push_back(proxy_binding_outer_tag.get_name_leafdata());
    if (remaining_lease_time.is_set || is_set(remaining_lease_time.operation)) leaf_name_data.push_back(remaining_lease_time.get_name_leafdata());
    if (reply_server_ip_address.is_set || is_set(reply_server_ip_address.operation)) leaf_name_data.push_back(reply_server_ip_address.get_name_leafdata());
    if (rx_circuit_id.is_set || is_set(rx_circuit_id.operation)) leaf_name_data.push_back(rx_circuit_id.get_name_leafdata());
    if (rx_remote_id.is_set || is_set(rx_remote_id.operation)) leaf_name_data.push_back(rx_remote_id.get_name_leafdata());
    if (rx_vsiso.is_set || is_set(rx_vsiso.operation)) leaf_name_data.push_back(rx_vsiso.get_name_leafdata());
    if (server_ip_address.is_set || is_set(server_ip_address.operation)) leaf_name_data.push_back(server_ip_address.get_name_leafdata());
    if (server_vrf_name.is_set || is_set(server_vrf_name.operation)) leaf_name_data.push_back(server_vrf_name.get_name_leafdata());
    if (session_start_time.is_set || is_set(session_start_time.operation)) leaf_name_data.push_back(session_start_time.get_name_leafdata());
    if (srg_state.is_set || is_set(srg_state.operation)) leaf_name_data.push_back(srg_state.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_interface_name.is_set || is_set(subscriber_interface_name.operation)) leaf_name_data.push_back(subscriber_interface_name.get_name_leafdata());
    if (subscriber_label.is_set || is_set(subscriber_label.operation)) leaf_name_data.push_back(subscriber_label.get_name_leafdata());
    if (to_server_gi_addr.is_set || is_set(to_server_gi_addr.operation)) leaf_name_data.push_back(to_server_gi_addr.get_name_leafdata());
    if (tx_circuit_id.is_set || is_set(tx_circuit_id.operation)) leaf_name_data.push_back(tx_circuit_id.get_name_leafdata());
    if (tx_remote_id.is_set || is_set(tx_remote_id.operation)) leaf_name_data.push_back(tx_remote_id.get_name_leafdata());
    if (tx_vsiso.is_set || is_set(tx_vsiso.operation)) leaf_name_data.push_back(tx_vsiso.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    auto event_history_name_datas = event_history.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), event_history_name_datas.begin(), event_history_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Clients::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "access-vrf-name")
    {
        access_vrf_name = value;
    }
    if(value_path == "client-gi-addr")
    {
        client_gi_addr = value;
    }
    if(value_path == "client-id-xr")
    {
        client_id_xr = value;
    }
    if(value_path == "event-history")
    {
        event_history.append(value);
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "is-auth-received")
    {
        is_auth_received = value;
    }
    if(value_path == "is-mbl-subscriber")
    {
        is_mbl_subscriber = value;
    }
    if(value_path == "is-nak-next-renew")
    {
        is_nak_next_renew = value;
    }
    if(value_path == "lease-time")
    {
        lease_time = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "old-subscriber-label")
    {
        old_subscriber_label = value;
    }
    if(value_path == "param-request")
    {
        param_request = value;
    }
    if(value_path == "param-response")
    {
        param_response = value;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
    if(value_path == "proxy-binding-inner-tag")
    {
        proxy_binding_inner_tag = value;
    }
    if(value_path == "proxy-binding-outer-tag")
    {
        proxy_binding_outer_tag = value;
    }
    if(value_path == "remaining-lease-time")
    {
        remaining_lease_time = value;
    }
    if(value_path == "reply-server-ip-address")
    {
        reply_server_ip_address = value;
    }
    if(value_path == "rx-circuit-id")
    {
        rx_circuit_id = value;
    }
    if(value_path == "rx-remote-id")
    {
        rx_remote_id = value;
    }
    if(value_path == "rx-vsiso")
    {
        rx_vsiso = value;
    }
    if(value_path == "server-ip-address")
    {
        server_ip_address = value;
    }
    if(value_path == "server-vrf-name")
    {
        server_vrf_name = value;
    }
    if(value_path == "session-start-time")
    {
        session_start_time = value;
    }
    if(value_path == "srg-state")
    {
        srg_state = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-interface-name")
    {
        subscriber_interface_name = value;
    }
    if(value_path == "subscriber-label")
    {
        subscriber_label = value;
    }
    if(value_path == "to-server-gi-addr")
    {
        to_server_gi_addr = value;
    }
    if(value_path == "tx-circuit-id")
    {
        tx_circuit_id = value;
    }
    if(value_path == "tx-remote-id")
    {
        tx_remote_id = value;
    }
    if(value_path == "tx-vsiso")
    {
        tx_vsiso = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary::Summary()
    :
    ack_waiting_for_dpm{YType::uint32, "ack-waiting-for-dpm"},
    bound_clients{YType::uint32, "bound-clients"},
    clients{YType::uint32, "clients"},
    deleting_clients_d{YType::uint32, "deleting-clients-d"},
    disconnected_clients{YType::uint32, "disconnected-clients"},
    informing_clients{YType::uint32, "informing-clients"},
    initializing_clients{YType::uint32, "initializing-clients"},
    offer_sent_for_client{YType::uint32, "offer-sent-for-client"},
    reauthorizing_clients{YType::uint32, "reauthorizing-clients"},
    renewing_clients{YType::uint32, "renewing-clients"},
    request_waiting_for_dpm{YType::uint32, "request-waiting-for-dpm"},
    requesting_clients{YType::uint32, "requesting-clients"},
    restarting_clients{YType::uint32, "restarting-clients"},
    selecting_clients{YType::uint32, "selecting-clients"},
    waiting_for_daps_init{YType::uint32, "waiting-for-daps-init"},
    waiting_for_dpm_addr_change{YType::uint32, "waiting-for-dpm-addr-change"},
    waiting_for_dpm_disconnect{YType::uint32, "waiting-for-dpm-disconnect"},
    waiting_for_dpm_init{YType::uint32, "waiting-for-dpm-init"}
{
    yang_name = "summary"; yang_parent_name = "binding";
}

Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary::~Summary()
{
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary::has_data() const
{
    return ack_waiting_for_dpm.is_set
	|| bound_clients.is_set
	|| clients.is_set
	|| deleting_clients_d.is_set
	|| disconnected_clients.is_set
	|| informing_clients.is_set
	|| initializing_clients.is_set
	|| offer_sent_for_client.is_set
	|| reauthorizing_clients.is_set
	|| renewing_clients.is_set
	|| request_waiting_for_dpm.is_set
	|| requesting_clients.is_set
	|| restarting_clients.is_set
	|| selecting_clients.is_set
	|| waiting_for_daps_init.is_set
	|| waiting_for_dpm_addr_change.is_set
	|| waiting_for_dpm_disconnect.is_set
	|| waiting_for_dpm_init.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(ack_waiting_for_dpm.operation)
	|| is_set(bound_clients.operation)
	|| is_set(clients.operation)
	|| is_set(deleting_clients_d.operation)
	|| is_set(disconnected_clients.operation)
	|| is_set(informing_clients.operation)
	|| is_set(initializing_clients.operation)
	|| is_set(offer_sent_for_client.operation)
	|| is_set(reauthorizing_clients.operation)
	|| is_set(renewing_clients.operation)
	|| is_set(request_waiting_for_dpm.operation)
	|| is_set(requesting_clients.operation)
	|| is_set(restarting_clients.operation)
	|| is_set(selecting_clients.operation)
	|| is_set(waiting_for_daps_init.operation)
	|| is_set(waiting_for_dpm_addr_change.operation)
	|| is_set(waiting_for_dpm_disconnect.operation)
	|| is_set(waiting_for_dpm_init.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_waiting_for_dpm.is_set || is_set(ack_waiting_for_dpm.operation)) leaf_name_data.push_back(ack_waiting_for_dpm.get_name_leafdata());
    if (bound_clients.is_set || is_set(bound_clients.operation)) leaf_name_data.push_back(bound_clients.get_name_leafdata());
    if (clients.is_set || is_set(clients.operation)) leaf_name_data.push_back(clients.get_name_leafdata());
    if (deleting_clients_d.is_set || is_set(deleting_clients_d.operation)) leaf_name_data.push_back(deleting_clients_d.get_name_leafdata());
    if (disconnected_clients.is_set || is_set(disconnected_clients.operation)) leaf_name_data.push_back(disconnected_clients.get_name_leafdata());
    if (informing_clients.is_set || is_set(informing_clients.operation)) leaf_name_data.push_back(informing_clients.get_name_leafdata());
    if (initializing_clients.is_set || is_set(initializing_clients.operation)) leaf_name_data.push_back(initializing_clients.get_name_leafdata());
    if (offer_sent_for_client.is_set || is_set(offer_sent_for_client.operation)) leaf_name_data.push_back(offer_sent_for_client.get_name_leafdata());
    if (reauthorizing_clients.is_set || is_set(reauthorizing_clients.operation)) leaf_name_data.push_back(reauthorizing_clients.get_name_leafdata());
    if (renewing_clients.is_set || is_set(renewing_clients.operation)) leaf_name_data.push_back(renewing_clients.get_name_leafdata());
    if (request_waiting_for_dpm.is_set || is_set(request_waiting_for_dpm.operation)) leaf_name_data.push_back(request_waiting_for_dpm.get_name_leafdata());
    if (requesting_clients.is_set || is_set(requesting_clients.operation)) leaf_name_data.push_back(requesting_clients.get_name_leafdata());
    if (restarting_clients.is_set || is_set(restarting_clients.operation)) leaf_name_data.push_back(restarting_clients.get_name_leafdata());
    if (selecting_clients.is_set || is_set(selecting_clients.operation)) leaf_name_data.push_back(selecting_clients.get_name_leafdata());
    if (waiting_for_daps_init.is_set || is_set(waiting_for_daps_init.operation)) leaf_name_data.push_back(waiting_for_daps_init.get_name_leafdata());
    if (waiting_for_dpm_addr_change.is_set || is_set(waiting_for_dpm_addr_change.operation)) leaf_name_data.push_back(waiting_for_dpm_addr_change.get_name_leafdata());
    if (waiting_for_dpm_disconnect.is_set || is_set(waiting_for_dpm_disconnect.operation)) leaf_name_data.push_back(waiting_for_dpm_disconnect.get_name_leafdata());
    if (waiting_for_dpm_init.is_set || is_set(waiting_for_dpm_init.operation)) leaf_name_data.push_back(waiting_for_dpm_init.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Proxy::Binding::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack-waiting-for-dpm")
    {
        ack_waiting_for_dpm = value;
    }
    if(value_path == "bound-clients")
    {
        bound_clients = value;
    }
    if(value_path == "clients")
    {
        clients = value;
    }
    if(value_path == "deleting-clients-d")
    {
        deleting_clients_d = value;
    }
    if(value_path == "disconnected-clients")
    {
        disconnected_clients = value;
    }
    if(value_path == "informing-clients")
    {
        informing_clients = value;
    }
    if(value_path == "initializing-clients")
    {
        initializing_clients = value;
    }
    if(value_path == "offer-sent-for-client")
    {
        offer_sent_for_client = value;
    }
    if(value_path == "reauthorizing-clients")
    {
        reauthorizing_clients = value;
    }
    if(value_path == "renewing-clients")
    {
        renewing_clients = value;
    }
    if(value_path == "request-waiting-for-dpm")
    {
        request_waiting_for_dpm = value;
    }
    if(value_path == "requesting-clients")
    {
        requesting_clients = value;
    }
    if(value_path == "restarting-clients")
    {
        restarting_clients = value;
    }
    if(value_path == "selecting-clients")
    {
        selecting_clients = value;
    }
    if(value_path == "waiting-for-daps-init")
    {
        waiting_for_daps_init = value;
    }
    if(value_path == "waiting-for-dpm-addr-change")
    {
        waiting_for_dpm_addr_change = value;
    }
    if(value_path == "waiting-for-dpm-disconnect")
    {
        waiting_for_dpm_disconnect = value;
    }
    if(value_path == "waiting-for-dpm-init")
    {
        waiting_for_dpm_init = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "node";
}

Ipv4Dhcpd::Nodes::Node::Interfaces::~Interfaces()
{
}

bool Ipv4Dhcpd::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    intf_ifhandle{YType::uint32, "intf-ifhandle"},
    intf_is_ambiguous{YType::uint32, "intf-is-ambiguous"},
    intf_lease_limit_count{YType::uint32, "intf-lease-limit-count"},
    intf_lease_limit_type{YType::uint32, "intf-lease-limit-type"},
    intf_mode{YType::uint32, "intf-mode"},
    intf_profile_name{YType::str, "intf-profile-name"},
    mac_throttle{YType::boolean, "mac-throttle"},
    srg_role{YType::enumeration, "srg-role"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Ipv4Dhcpd::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool Ipv4Dhcpd::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| intf_ifhandle.is_set
	|| intf_is_ambiguous.is_set
	|| intf_lease_limit_count.is_set
	|| intf_lease_limit_type.is_set
	|| intf_mode.is_set
	|| intf_profile_name.is_set
	|| mac_throttle.is_set
	|| srg_role.is_set
	|| vrf_name.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(intf_ifhandle.operation)
	|| is_set(intf_is_ambiguous.operation)
	|| is_set(intf_lease_limit_count.operation)
	|| is_set(intf_lease_limit_type.operation)
	|| is_set(intf_mode.operation)
	|| is_set(intf_profile_name.operation)
	|| is_set(mac_throttle.operation)
	|| is_set(srg_role.operation)
	|| is_set(vrf_name.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (intf_ifhandle.is_set || is_set(intf_ifhandle.operation)) leaf_name_data.push_back(intf_ifhandle.get_name_leafdata());
    if (intf_is_ambiguous.is_set || is_set(intf_is_ambiguous.operation)) leaf_name_data.push_back(intf_is_ambiguous.get_name_leafdata());
    if (intf_lease_limit_count.is_set || is_set(intf_lease_limit_count.operation)) leaf_name_data.push_back(intf_lease_limit_count.get_name_leafdata());
    if (intf_lease_limit_type.is_set || is_set(intf_lease_limit_type.operation)) leaf_name_data.push_back(intf_lease_limit_type.get_name_leafdata());
    if (intf_mode.is_set || is_set(intf_mode.operation)) leaf_name_data.push_back(intf_mode.get_name_leafdata());
    if (intf_profile_name.is_set || is_set(intf_profile_name.operation)) leaf_name_data.push_back(intf_profile_name.get_name_leafdata());
    if (mac_throttle.is_set || is_set(mac_throttle.operation)) leaf_name_data.push_back(mac_throttle.get_name_leafdata());
    if (srg_role.is_set || is_set(srg_role.operation)) leaf_name_data.push_back(srg_role.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "intf-ifhandle")
    {
        intf_ifhandle = value;
    }
    if(value_path == "intf-is-ambiguous")
    {
        intf_is_ambiguous = value;
    }
    if(value_path == "intf-lease-limit-count")
    {
        intf_lease_limit_count = value;
    }
    if(value_path == "intf-lease-limit-type")
    {
        intf_lease_limit_type = value;
    }
    if(value_path == "intf-mode")
    {
        intf_mode = value;
    }
    if(value_path == "intf-profile-name")
    {
        intf_profile_name = value;
    }
    if(value_path == "mac-throttle")
    {
        mac_throttle = value;
    }
    if(value_path == "srg-role")
    {
        srg_role = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Base()
    :
    database(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Database>())
	,issu_status(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::IssuStatus>())
	,profiles(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Profiles>())
	,statistics(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Statistics>())
	,vrfs(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs>())
{
    database->parent = this;

    issu_status->parent = this;

    profiles->parent = this;

    statistics->parent = this;

    vrfs->parent = this;

    yang_name = "base"; yang_parent_name = "node";
}

Ipv4Dhcpd::Nodes::Node::Base::~Base()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::has_data() const
{
    return (database !=  nullptr && database->has_data())
	|| (issu_status !=  nullptr && issu_status->has_data())
	|| (profiles !=  nullptr && profiles->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Base::has_operation() const
{
    return is_set(operation)
	|| (database !=  nullptr && database->has_operation())
	|| (issu_status !=  nullptr && issu_status->has_operation())
	|| (profiles !=  nullptr && profiles->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Database>();
        }
        return database;
    }

    if(child_yang_name == "issu-status")
    {
        if(issu_status == nullptr)
        {
            issu_status = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::IssuStatus>();
        }
        return issu_status;
    }

    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Profiles>();
        }
        return profiles;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(issu_status != nullptr)
    {
        children["issu-status"] = issu_status;
    }

    if(profiles != nullptr)
    {
        children["profiles"] = profiles;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Base::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "base";
}

Ipv4Dhcpd::Nodes::Node::Base::Statistics::~Statistics()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Statistics::has_data() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_proxy_stat.size(); index++)
    {
        if(ipv4_dhcpd_proxy_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Statistics::has_operation() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_proxy_stat.size(); index++)
    {
        if(ipv4_dhcpd_proxy_stat[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-dhcpd-proxy-stat")
    {
        for(auto const & c : ipv4_dhcpd_proxy_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat>();
        c->parent = this;
        ipv4_dhcpd_proxy_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_dhcpd_proxy_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Ipv4DhcpdProxyStat()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    statistics(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_>())
{
    statistics->parent = this;

    yang_name = "ipv4-dhcpd-proxy-stat"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::~Ipv4DhcpdProxyStat()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::has_data() const
{
    return vrf_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-dhcpd-proxy-stat";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4DhcpdProxyStat' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_::Statistics_()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "statistics"; yang_parent_name = "ipv4-dhcpd-proxy-stat";
}

Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_::~Statistics_()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics_' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Statistics::Ipv4DhcpdProxyStat::Statistics_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::IssuStatus::IssuStatus()
    :
    big_bang_time{YType::uint64, "big-bang-time"},
    issu_ready_entries_replicate{YType::boolean, "issu-ready-entries-replicate"},
    issu_ready_issu_mgr_connection{YType::boolean, "issu-ready-issu-mgr-connection"},
    issu_ready_time{YType::uint64, "issu-ready-time"},
    issu_sync_complete_time{YType::uint64, "issu-sync-complete-time"},
    issu_sync_start_time{YType::uint64, "issu-sync-start-time"},
    phase{YType::enumeration, "phase"},
    primary_role_time{YType::uint64, "primary-role-time"},
    role{YType::enumeration, "role"},
    version{YType::enumeration, "version"}
{
    yang_name = "issu-status"; yang_parent_name = "base";
}

Ipv4Dhcpd::Nodes::Node::Base::IssuStatus::~IssuStatus()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::IssuStatus::has_data() const
{
    return big_bang_time.is_set
	|| issu_ready_entries_replicate.is_set
	|| issu_ready_issu_mgr_connection.is_set
	|| issu_ready_time.is_set
	|| issu_sync_complete_time.is_set
	|| issu_sync_start_time.is_set
	|| phase.is_set
	|| primary_role_time.is_set
	|| role.is_set
	|| version.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::IssuStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(big_bang_time.operation)
	|| is_set(issu_ready_entries_replicate.operation)
	|| is_set(issu_ready_issu_mgr_connection.operation)
	|| is_set(issu_ready_time.operation)
	|| is_set(issu_sync_complete_time.operation)
	|| is_set(issu_sync_start_time.operation)
	|| is_set(phase.operation)
	|| is_set(primary_role_time.operation)
	|| is_set(role.operation)
	|| is_set(version.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::IssuStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-status";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::IssuStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IssuStatus' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (big_bang_time.is_set || is_set(big_bang_time.operation)) leaf_name_data.push_back(big_bang_time.get_name_leafdata());
    if (issu_ready_entries_replicate.is_set || is_set(issu_ready_entries_replicate.operation)) leaf_name_data.push_back(issu_ready_entries_replicate.get_name_leafdata());
    if (issu_ready_issu_mgr_connection.is_set || is_set(issu_ready_issu_mgr_connection.operation)) leaf_name_data.push_back(issu_ready_issu_mgr_connection.get_name_leafdata());
    if (issu_ready_time.is_set || is_set(issu_ready_time.operation)) leaf_name_data.push_back(issu_ready_time.get_name_leafdata());
    if (issu_sync_complete_time.is_set || is_set(issu_sync_complete_time.operation)) leaf_name_data.push_back(issu_sync_complete_time.get_name_leafdata());
    if (issu_sync_start_time.is_set || is_set(issu_sync_start_time.operation)) leaf_name_data.push_back(issu_sync_start_time.get_name_leafdata());
    if (phase.is_set || is_set(phase.operation)) leaf_name_data.push_back(phase.get_name_leafdata());
    if (primary_role_time.is_set || is_set(primary_role_time.operation)) leaf_name_data.push_back(primary_role_time.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::IssuStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::IssuStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "big-bang-time")
    {
        big_bang_time = value;
    }
    if(value_path == "issu-ready-entries-replicate")
    {
        issu_ready_entries_replicate = value;
    }
    if(value_path == "issu-ready-issu-mgr-connection")
    {
        issu_ready_issu_mgr_connection = value;
    }
    if(value_path == "issu-ready-time")
    {
        issu_ready_time = value;
    }
    if(value_path == "issu-sync-complete-time")
    {
        issu_sync_complete_time = value;
    }
    if(value_path == "issu-sync-start-time")
    {
        issu_sync_start_time = value;
    }
    if(value_path == "phase")
    {
        phase = value;
    }
    if(value_path == "primary-role-time")
    {
        primary_role_time = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "base";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::~Vrfs()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    statistics(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics>())
{
    statistics->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Statistics()
    :
    ack(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack>())
	,bootp_reply(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply>())
	,bootp_request(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest>())
	,decline(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline>())
	,discover(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover>())
	,inform(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform>())
	,lease_active(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive>())
	,lease_not_assigned(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned>())
	,lease_query(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery>())
	,lease_unknown(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown>())
	,nak(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak>())
	,offer(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer>())
	,release(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release>())
	,request(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request>())
{
    ack->parent = this;

    bootp_reply->parent = this;

    bootp_request->parent = this;

    decline->parent = this;

    discover->parent = this;

    inform->parent = this;

    lease_active->parent = this;

    lease_not_assigned->parent = this;

    lease_query->parent = this;

    lease_unknown->parent = this;

    nak->parent = this;

    offer->parent = this;

    release->parent = this;

    request->parent = this;

    yang_name = "statistics"; yang_parent_name = "vrf";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::~Statistics()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::has_data() const
{
    return (ack !=  nullptr && ack->has_data())
	|| (bootp_reply !=  nullptr && bootp_reply->has_data())
	|| (bootp_request !=  nullptr && bootp_request->has_data())
	|| (decline !=  nullptr && decline->has_data())
	|| (discover !=  nullptr && discover->has_data())
	|| (inform !=  nullptr && inform->has_data())
	|| (lease_active !=  nullptr && lease_active->has_data())
	|| (lease_not_assigned !=  nullptr && lease_not_assigned->has_data())
	|| (lease_query !=  nullptr && lease_query->has_data())
	|| (lease_unknown !=  nullptr && lease_unknown->has_data())
	|| (nak !=  nullptr && nak->has_data())
	|| (offer !=  nullptr && offer->has_data())
	|| (release !=  nullptr && release->has_data())
	|| (request !=  nullptr && request->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::has_operation() const
{
    return is_set(operation)
	|| (ack !=  nullptr && ack->has_operation())
	|| (bootp_reply !=  nullptr && bootp_reply->has_operation())
	|| (bootp_request !=  nullptr && bootp_request->has_operation())
	|| (decline !=  nullptr && decline->has_operation())
	|| (discover !=  nullptr && discover->has_operation())
	|| (inform !=  nullptr && inform->has_operation())
	|| (lease_active !=  nullptr && lease_active->has_operation())
	|| (lease_not_assigned !=  nullptr && lease_not_assigned->has_operation())
	|| (lease_query !=  nullptr && lease_query->has_operation())
	|| (lease_unknown !=  nullptr && lease_unknown->has_operation())
	|| (nak !=  nullptr && nak->has_operation())
	|| (offer !=  nullptr && offer->has_operation())
	|| (release !=  nullptr && release->has_operation())
	|| (request !=  nullptr && request->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "bootp-reply")
    {
        if(bootp_reply == nullptr)
        {
            bootp_reply = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply>();
        }
        return bootp_reply;
    }

    if(child_yang_name == "bootp-request")
    {
        if(bootp_request == nullptr)
        {
            bootp_request = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest>();
        }
        return bootp_request;
    }

    if(child_yang_name == "decline")
    {
        if(decline == nullptr)
        {
            decline = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline>();
        }
        return decline;
    }

    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "inform")
    {
        if(inform == nullptr)
        {
            inform = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform>();
        }
        return inform;
    }

    if(child_yang_name == "lease-active")
    {
        if(lease_active == nullptr)
        {
            lease_active = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive>();
        }
        return lease_active;
    }

    if(child_yang_name == "lease-not-assigned")
    {
        if(lease_not_assigned == nullptr)
        {
            lease_not_assigned = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned>();
        }
        return lease_not_assigned;
    }

    if(child_yang_name == "lease-query")
    {
        if(lease_query == nullptr)
        {
            lease_query = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery>();
        }
        return lease_query;
    }

    if(child_yang_name == "lease-unknown")
    {
        if(lease_unknown == nullptr)
        {
            lease_unknown = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown>();
        }
        return lease_unknown;
    }

    if(child_yang_name == "nak")
    {
        if(nak == nullptr)
        {
            nak = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak>();
        }
        return nak;
    }

    if(child_yang_name == "offer")
    {
        if(offer == nullptr)
        {
            offer = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer>();
        }
        return offer;
    }

    if(child_yang_name == "release")
    {
        if(release == nullptr)
        {
            release = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release>();
        }
        return release;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request>();
        }
        return request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ack != nullptr)
    {
        children["ack"] = ack;
    }

    if(bootp_reply != nullptr)
    {
        children["bootp-reply"] = bootp_reply;
    }

    if(bootp_request != nullptr)
    {
        children["bootp-request"] = bootp_request;
    }

    if(decline != nullptr)
    {
        children["decline"] = decline;
    }

    if(discover != nullptr)
    {
        children["discover"] = discover;
    }

    if(inform != nullptr)
    {
        children["inform"] = inform;
    }

    if(lease_active != nullptr)
    {
        children["lease-active"] = lease_active;
    }

    if(lease_not_assigned != nullptr)
    {
        children["lease-not-assigned"] = lease_not_assigned;
    }

    if(lease_query != nullptr)
    {
        children["lease-query"] = lease_query;
    }

    if(lease_unknown != nullptr)
    {
        children["lease-unknown"] = lease_unknown;
    }

    if(nak != nullptr)
    {
        children["nak"] = nak;
    }

    if(offer != nullptr)
    {
        children["offer"] = offer;
    }

    if(release != nullptr)
    {
        children["release"] = release;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover::Discover()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "discover"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover::~Discover()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discover' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Discover::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer::Offer()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "offer"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer::~Offer()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offer";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Offer' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Offer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request::Request()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "request"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request::~Request()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Request::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline::Decline()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "decline"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline::~Decline()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decline";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Decline' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Decline::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack::Ack()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "ack"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack::~Ack()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ack' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Ack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak::Nak()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "nak"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak::~Nak()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nak";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nak' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Nak::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release::Release()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "release"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release::~Release()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "release";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Release' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Release::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform::Inform()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "inform"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform::~Inform()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inform' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::Inform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery::LeaseQuery()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery::~LeaseQuery()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQuery' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseQuery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned::LeaseNotAssigned()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-not-assigned"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned::~LeaseNotAssigned()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-not-assigned";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseNotAssigned' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseNotAssigned::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown::LeaseUnknown()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-unknown"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown::~LeaseUnknown()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-unknown";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseUnknown' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseUnknown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive::LeaseActive()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-active"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive::~LeaseActive()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-active";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseActive' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::LeaseActive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest::BootpRequest()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "bootp-request"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest::~BootpRequest()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootp-request";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BootpRequest' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply::BootpReply()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "bootp-reply"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply::~BootpReply()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootp-reply";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BootpReply' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Vrfs::Vrf::Statistics::BootpReply::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profiles()
{
    yang_name = "profiles"; yang_parent_name = "base";
}

Ipv4Dhcpd::Nodes::Node::Base::Profiles::~Profiles()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Profiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Profiles' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Profiles::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::Profile()
    :
    profile_name{YType::str, "profile-name"},
    base_default_profile_name{YType::str, "base-default-profile-name"},
    child_profile_count{YType::uint8, "child-profile-count"},
    default_profile_mode{YType::uint8, "default-profile-mode"},
    intf_ref_count{YType::uint8, "intf-ref-count"},
    relay_authenticate{YType::enumeration, "relay-authenticate"},
    remote_id{YType::str, "remote-id"}
    	,
    child_profile_info(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo>())
	,interface_references(std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences>())
{
    child_profile_info->parent = this;

    interface_references->parent = this;

    yang_name = "profile"; yang_parent_name = "profiles";
}

Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::~Profile()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::has_data() const
{
    return profile_name.is_set
	|| base_default_profile_name.is_set
	|| child_profile_count.is_set
	|| default_profile_mode.is_set
	|| intf_ref_count.is_set
	|| relay_authenticate.is_set
	|| remote_id.is_set
	|| (child_profile_info !=  nullptr && child_profile_info->has_data())
	|| (interface_references !=  nullptr && interface_references->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation)
	|| is_set(base_default_profile_name.operation)
	|| is_set(child_profile_count.operation)
	|| is_set(default_profile_mode.operation)
	|| is_set(intf_ref_count.operation)
	|| is_set(relay_authenticate.operation)
	|| is_set(remote_id.operation)
	|| (child_profile_info !=  nullptr && child_profile_info->has_operation())
	|| (interface_references !=  nullptr && interface_references->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[profile-name='" <<profile_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Profile' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (base_default_profile_name.is_set || is_set(base_default_profile_name.operation)) leaf_name_data.push_back(base_default_profile_name.get_name_leafdata());
    if (child_profile_count.is_set || is_set(child_profile_count.operation)) leaf_name_data.push_back(child_profile_count.get_name_leafdata());
    if (default_profile_mode.is_set || is_set(default_profile_mode.operation)) leaf_name_data.push_back(default_profile_mode.get_name_leafdata());
    if (intf_ref_count.is_set || is_set(intf_ref_count.operation)) leaf_name_data.push_back(intf_ref_count.get_name_leafdata());
    if (relay_authenticate.is_set || is_set(relay_authenticate.operation)) leaf_name_data.push_back(relay_authenticate.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.operation)) leaf_name_data.push_back(remote_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "child-profile-info")
    {
        if(child_profile_info == nullptr)
        {
            child_profile_info = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo>();
        }
        return child_profile_info;
    }

    if(child_yang_name == "interface-references")
    {
        if(interface_references == nullptr)
        {
            interface_references = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences>();
        }
        return interface_references;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(child_profile_info != nullptr)
    {
        children["child-profile-info"] = child_profile_info;
    }

    if(interface_references != nullptr)
    {
        children["interface-references"] = interface_references;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
    if(value_path == "base-default-profile-name")
    {
        base_default_profile_name = value;
    }
    if(value_path == "child-profile-count")
    {
        child_profile_count = value;
    }
    if(value_path == "default-profile-mode")
    {
        default_profile_mode = value;
    }
    if(value_path == "intf-ref-count")
    {
        intf_ref_count = value;
    }
    if(value_path == "relay-authenticate")
    {
        relay_authenticate = value;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::InterfaceReferences()
{
    yang_name = "interface-references"; yang_parent_name = "profile";
}

Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::~InterfaceReferences()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::has_data() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_base_interface_reference.size(); index++)
    {
        if(ipv4_dhcpd_base_interface_reference[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::has_operation() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_base_interface_reference.size(); index++)
    {
        if(ipv4_dhcpd_base_interface_reference[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-references";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceReferences' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-dhcpd-base-interface-reference")
    {
        for(auto const & c : ipv4_dhcpd_base_interface_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference>();
        c->parent = this;
        ipv4_dhcpd_base_interface_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_dhcpd_base_interface_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference::Ipv4DhcpdBaseInterfaceReference()
    :
    base_reference_interface_name{YType::str, "base-reference-interface-name"}
{
    yang_name = "ipv4-dhcpd-base-interface-reference"; yang_parent_name = "interface-references";
}

Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference::~Ipv4DhcpdBaseInterfaceReference()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference::has_data() const
{
    return base_reference_interface_name.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference::has_operation() const
{
    return is_set(operation)
	|| is_set(base_reference_interface_name.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-dhcpd-base-interface-reference";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4DhcpdBaseInterfaceReference' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (base_reference_interface_name.is_set || is_set(base_reference_interface_name.operation)) leaf_name_data.push_back(base_reference_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::InterfaceReferences::Ipv4DhcpdBaseInterfaceReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "base-reference-interface-name")
    {
        base_reference_interface_name = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::ChildProfileInfo()
{
    yang_name = "child-profile-info"; yang_parent_name = "profile";
}

Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::~ChildProfileInfo()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::has_data() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_base_child_profile_info.size(); index++)
    {
        if(ipv4_dhcpd_base_child_profile_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::has_operation() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_base_child_profile_info.size(); index++)
    {
        if(ipv4_dhcpd_base_child_profile_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-profile-info";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChildProfileInfo' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-dhcpd-base-child-profile-info")
    {
        for(auto const & c : ipv4_dhcpd_base_child_profile_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo>();
        c->parent = this;
        ipv4_dhcpd_base_child_profile_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_dhcpd_base_child_profile_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo()
    :
    base_child_profile_name{YType::str, "base-child-profile-name"},
    matched_option_code{YType::uint8, "matched-option-code"},
    matched_option_len{YType::uint8, "matched-option-len"},
    mode{YType::uint8, "mode"},
    option_data{YType::str, "option-data"}
{
    yang_name = "ipv4-dhcpd-base-child-profile-info"; yang_parent_name = "child-profile-info";
}

Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo::~Ipv4DhcpdBaseChildProfileInfo()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo::has_data() const
{
    return base_child_profile_name.is_set
	|| matched_option_code.is_set
	|| matched_option_len.is_set
	|| mode.is_set
	|| option_data.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(base_child_profile_name.operation)
	|| is_set(matched_option_code.operation)
	|| is_set(matched_option_len.operation)
	|| is_set(mode.operation)
	|| is_set(option_data.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-dhcpd-base-child-profile-info";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4DhcpdBaseChildProfileInfo' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (base_child_profile_name.is_set || is_set(base_child_profile_name.operation)) leaf_name_data.push_back(base_child_profile_name.get_name_leafdata());
    if (matched_option_code.is_set || is_set(matched_option_code.operation)) leaf_name_data.push_back(matched_option_code.get_name_leafdata());
    if (matched_option_len.is_set || is_set(matched_option_len.operation)) leaf_name_data.push_back(matched_option_len.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (option_data.is_set || is_set(option_data.operation)) leaf_name_data.push_back(option_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Profiles::Profile::ChildProfileInfo::Ipv4DhcpdBaseChildProfileInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "base-child-profile-name")
    {
        base_child_profile_name = value;
    }
    if(value_path == "matched-option-code")
    {
        matched_option_code = value;
    }
    if(value_path == "matched-option-len")
    {
        matched_option_len = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "option-data")
    {
        option_data = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Base::Database::Database()
    :
    configured{YType::boolean, "configured"},
    failed_full_file_write_count{YType::uint32, "failed-full-file-write-count"},
    failed_incremental_file_write_count{YType::uint32, "failed-incremental-file-write-count"},
    full_file_record_count{YType::uint32, "full-file-record-count"},
    full_file_write_count{YType::uint32, "full-file-write-count"},
    full_file_write_interval{YType::uint32, "full-file-write-interval"},
    incremental_file_record_count{YType::uint32, "incremental-file-record-count"},
    incremental_file_write_count{YType::uint32, "incremental-file-write-count"},
    incremental_file_write_interval{YType::uint32, "incremental-file-write-interval"},
    last_full_file_write_error_timestamp{YType::uint32, "last-full-file-write-error-timestamp"},
    last_full_write_file_name{YType::str, "last-full-write-file-name"},
    last_full_write_time{YType::uint32, "last-full-write-time"},
    last_incremental_file_write_error_timestamp{YType::uint32, "last-incremental-file-write-error-timestamp"},
    last_incremental_write_file_name{YType::str, "last-incremental-write-file-name"},
    last_incremental_write_time{YType::uint32, "last-incremental-write-time"},
    version{YType::uint32, "version"}
{
    yang_name = "database"; yang_parent_name = "base";
}

Ipv4Dhcpd::Nodes::Node::Base::Database::~Database()
{
}

bool Ipv4Dhcpd::Nodes::Node::Base::Database::has_data() const
{
    return configured.is_set
	|| failed_full_file_write_count.is_set
	|| failed_incremental_file_write_count.is_set
	|| full_file_record_count.is_set
	|| full_file_write_count.is_set
	|| full_file_write_interval.is_set
	|| incremental_file_record_count.is_set
	|| incremental_file_write_count.is_set
	|| incremental_file_write_interval.is_set
	|| last_full_file_write_error_timestamp.is_set
	|| last_full_write_file_name.is_set
	|| last_full_write_time.is_set
	|| last_incremental_file_write_error_timestamp.is_set
	|| last_incremental_write_file_name.is_set
	|| last_incremental_write_time.is_set
	|| version.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Base::Database::has_operation() const
{
    return is_set(operation)
	|| is_set(configured.operation)
	|| is_set(failed_full_file_write_count.operation)
	|| is_set(failed_incremental_file_write_count.operation)
	|| is_set(full_file_record_count.operation)
	|| is_set(full_file_write_count.operation)
	|| is_set(full_file_write_interval.operation)
	|| is_set(incremental_file_record_count.operation)
	|| is_set(incremental_file_write_count.operation)
	|| is_set(incremental_file_write_interval.operation)
	|| is_set(last_full_file_write_error_timestamp.operation)
	|| is_set(last_full_write_file_name.operation)
	|| is_set(last_full_write_time.operation)
	|| is_set(last_incremental_file_write_error_timestamp.operation)
	|| is_set(last_incremental_write_file_name.operation)
	|| is_set(last_incremental_write_time.operation)
	|| is_set(version.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Base::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Base::Database::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Database' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured.is_set || is_set(configured.operation)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (failed_full_file_write_count.is_set || is_set(failed_full_file_write_count.operation)) leaf_name_data.push_back(failed_full_file_write_count.get_name_leafdata());
    if (failed_incremental_file_write_count.is_set || is_set(failed_incremental_file_write_count.operation)) leaf_name_data.push_back(failed_incremental_file_write_count.get_name_leafdata());
    if (full_file_record_count.is_set || is_set(full_file_record_count.operation)) leaf_name_data.push_back(full_file_record_count.get_name_leafdata());
    if (full_file_write_count.is_set || is_set(full_file_write_count.operation)) leaf_name_data.push_back(full_file_write_count.get_name_leafdata());
    if (full_file_write_interval.is_set || is_set(full_file_write_interval.operation)) leaf_name_data.push_back(full_file_write_interval.get_name_leafdata());
    if (incremental_file_record_count.is_set || is_set(incremental_file_record_count.operation)) leaf_name_data.push_back(incremental_file_record_count.get_name_leafdata());
    if (incremental_file_write_count.is_set || is_set(incremental_file_write_count.operation)) leaf_name_data.push_back(incremental_file_write_count.get_name_leafdata());
    if (incremental_file_write_interval.is_set || is_set(incremental_file_write_interval.operation)) leaf_name_data.push_back(incremental_file_write_interval.get_name_leafdata());
    if (last_full_file_write_error_timestamp.is_set || is_set(last_full_file_write_error_timestamp.operation)) leaf_name_data.push_back(last_full_file_write_error_timestamp.get_name_leafdata());
    if (last_full_write_file_name.is_set || is_set(last_full_write_file_name.operation)) leaf_name_data.push_back(last_full_write_file_name.get_name_leafdata());
    if (last_full_write_time.is_set || is_set(last_full_write_time.operation)) leaf_name_data.push_back(last_full_write_time.get_name_leafdata());
    if (last_incremental_file_write_error_timestamp.is_set || is_set(last_incremental_file_write_error_timestamp.operation)) leaf_name_data.push_back(last_incremental_file_write_error_timestamp.get_name_leafdata());
    if (last_incremental_write_file_name.is_set || is_set(last_incremental_write_file_name.operation)) leaf_name_data.push_back(last_incremental_write_file_name.get_name_leafdata());
    if (last_incremental_write_time.is_set || is_set(last_incremental_write_time.operation)) leaf_name_data.push_back(last_incremental_write_time.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Base::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Base::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Base::Database::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured")
    {
        configured = value;
    }
    if(value_path == "failed-full-file-write-count")
    {
        failed_full_file_write_count = value;
    }
    if(value_path == "failed-incremental-file-write-count")
    {
        failed_incremental_file_write_count = value;
    }
    if(value_path == "full-file-record-count")
    {
        full_file_record_count = value;
    }
    if(value_path == "full-file-write-count")
    {
        full_file_write_count = value;
    }
    if(value_path == "full-file-write-interval")
    {
        full_file_write_interval = value;
    }
    if(value_path == "incremental-file-record-count")
    {
        incremental_file_record_count = value;
    }
    if(value_path == "incremental-file-write-count")
    {
        incremental_file_write_count = value;
    }
    if(value_path == "incremental-file-write-interval")
    {
        incremental_file_write_interval = value;
    }
    if(value_path == "last-full-file-write-error-timestamp")
    {
        last_full_file_write_error_timestamp = value;
    }
    if(value_path == "last-full-write-file-name")
    {
        last_full_write_file_name = value;
    }
    if(value_path == "last-full-write-time")
    {
        last_full_write_time = value;
    }
    if(value_path == "last-incremental-file-write-error-timestamp")
    {
        last_incremental_file_write_error_timestamp = value;
    }
    if(value_path == "last-incremental-write-file-name")
    {
        last_incremental_write_file_name = value;
    }
    if(value_path == "last-incremental-write-time")
    {
        last_incremental_write_time = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Server()
    :
    binding(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Binding>())
	,profiles(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Profiles>())
	,statistics(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Statistics>())
	,statistics_info(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo>())
	,vrfs(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs>())
{
    binding->parent = this;

    profiles->parent = this;

    statistics->parent = this;

    statistics_info->parent = this;

    vrfs->parent = this;

    yang_name = "server"; yang_parent_name = "node";
}

Ipv4Dhcpd::Nodes::Node::Server::~Server()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::has_data() const
{
    return (binding !=  nullptr && binding->has_data())
	|| (profiles !=  nullptr && profiles->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (statistics_info !=  nullptr && statistics_info->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Server::has_operation() const
{
    return is_set(operation)
	|| (binding !=  nullptr && binding->has_operation())
	|| (profiles !=  nullptr && profiles->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (statistics_info !=  nullptr && statistics_info->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        if(binding == nullptr)
        {
            binding = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Binding>();
        }
        return binding;
    }

    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Profiles>();
        }
        return profiles;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "statistics-info")
    {
        if(statistics_info == nullptr)
        {
            statistics_info = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo>();
        }
        return statistics_info;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(binding != nullptr)
    {
        children["binding"] = binding;
    }

    if(profiles != nullptr)
    {
        children["profiles"] = profiles;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(statistics_info != nullptr)
    {
        children["statistics-info"] = statistics_info;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profiles()
{
    yang_name = "profiles"; yang_parent_name = "server";
}

Ipv4Dhcpd::Nodes::Node::Server::Profiles::~Profiles()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Profiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Profiles' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Profiles::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile::Profile()
    :
    server_profile_name{YType::str, "server-profile-name"},
    bcast_policy{YType::uint8, "bcast-policy"},
    duplicate_ip_address_check{YType::boolean, "duplicate-ip-address-check"},
    duplicate_mac_address_check{YType::boolean, "duplicate-mac-address-check"},
    giaddr_policy{YType::uint8, "giaddr-policy"},
    is_move_allowed{YType::boolean, "is-move-allowed"},
    lease_limit_count{YType::uint32, "lease-limit-count"},
    lease_limit_type{YType::uint8, "lease-limit-type"},
    requested_address_check{YType::boolean, "requested-address-check"},
    secure_arp{YType::boolean, "secure-arp"},
    server_bootfile_name{YType::str, "server-bootfile-name"},
    server_domain_name{YType::str, "server-domain-name"},
    server_id_check{YType::boolean, "server-id-check"},
    server_pool_name{YType::str, "server-pool-name"},
    server_profile_default_router{YType::str, "server-profile-default-router"},
    server_profile_dns{YType::str, "server-profile-dns"},
    server_profile_lease{YType::uint32, "server-profile-lease"},
    server_profile_name_xr{YType::str, "server-profile-name-xr"},
    server_profile_netbios_name_svr_count{YType::uint8, "server-profile-netbios-name-svr-count"},
    server_profile_netbios_node_type{YType::uint8, "server-profile-netbios-node-type"},
    server_profile_netbious_name_server{YType::str, "server-profile-netbious-name-server"},
    server_profile_server_dns_count{YType::uint8, "server-profile-server-dns-count"},
    server_profile_time_server{YType::str, "server-profile-time-server"},
    server_profile_time_svr_count{YType::uint8, "server-profile-time-svr-count"},
    server_profiledefault_router_count{YType::uint8, "server-profiledefault-router-count"},
    server_profileiedge_check{YType::uint8, "server-profileiedge-check"},
    subnet_mask{YType::str, "subnet-mask"}
{
    yang_name = "profile"; yang_parent_name = "profiles";
}

Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile::~Profile()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile::has_data() const
{
    for (auto const & leaf : server_profile_default_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_profile_dns.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_profile_netbious_name_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : server_profile_time_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return server_profile_name.is_set
	|| bcast_policy.is_set
	|| duplicate_ip_address_check.is_set
	|| duplicate_mac_address_check.is_set
	|| giaddr_policy.is_set
	|| is_move_allowed.is_set
	|| lease_limit_count.is_set
	|| lease_limit_type.is_set
	|| requested_address_check.is_set
	|| secure_arp.is_set
	|| server_bootfile_name.is_set
	|| server_domain_name.is_set
	|| server_id_check.is_set
	|| server_pool_name.is_set
	|| server_profile_lease.is_set
	|| server_profile_name_xr.is_set
	|| server_profile_netbios_name_svr_count.is_set
	|| server_profile_netbios_node_type.is_set
	|| server_profile_server_dns_count.is_set
	|| server_profile_time_svr_count.is_set
	|| server_profiledefault_router_count.is_set
	|| server_profileiedge_check.is_set
	|| subnet_mask.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile::has_operation() const
{
    for (auto const & leaf : server_profile_default_router.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_profile_dns.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_profile_netbious_name_server.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : server_profile_time_server.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(server_profile_name.operation)
	|| is_set(bcast_policy.operation)
	|| is_set(duplicate_ip_address_check.operation)
	|| is_set(duplicate_mac_address_check.operation)
	|| is_set(giaddr_policy.operation)
	|| is_set(is_move_allowed.operation)
	|| is_set(lease_limit_count.operation)
	|| is_set(lease_limit_type.operation)
	|| is_set(requested_address_check.operation)
	|| is_set(secure_arp.operation)
	|| is_set(server_bootfile_name.operation)
	|| is_set(server_domain_name.operation)
	|| is_set(server_id_check.operation)
	|| is_set(server_pool_name.operation)
	|| is_set(server_profile_default_router.operation)
	|| is_set(server_profile_dns.operation)
	|| is_set(server_profile_lease.operation)
	|| is_set(server_profile_name_xr.operation)
	|| is_set(server_profile_netbios_name_svr_count.operation)
	|| is_set(server_profile_netbios_node_type.operation)
	|| is_set(server_profile_netbious_name_server.operation)
	|| is_set(server_profile_server_dns_count.operation)
	|| is_set(server_profile_time_server.operation)
	|| is_set(server_profile_time_svr_count.operation)
	|| is_set(server_profiledefault_router_count.operation)
	|| is_set(server_profileiedge_check.operation)
	|| is_set(subnet_mask.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[server-profile-name='" <<server_profile_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Profile' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_profile_name.is_set || is_set(server_profile_name.operation)) leaf_name_data.push_back(server_profile_name.get_name_leafdata());
    if (bcast_policy.is_set || is_set(bcast_policy.operation)) leaf_name_data.push_back(bcast_policy.get_name_leafdata());
    if (duplicate_ip_address_check.is_set || is_set(duplicate_ip_address_check.operation)) leaf_name_data.push_back(duplicate_ip_address_check.get_name_leafdata());
    if (duplicate_mac_address_check.is_set || is_set(duplicate_mac_address_check.operation)) leaf_name_data.push_back(duplicate_mac_address_check.get_name_leafdata());
    if (giaddr_policy.is_set || is_set(giaddr_policy.operation)) leaf_name_data.push_back(giaddr_policy.get_name_leafdata());
    if (is_move_allowed.is_set || is_set(is_move_allowed.operation)) leaf_name_data.push_back(is_move_allowed.get_name_leafdata());
    if (lease_limit_count.is_set || is_set(lease_limit_count.operation)) leaf_name_data.push_back(lease_limit_count.get_name_leafdata());
    if (lease_limit_type.is_set || is_set(lease_limit_type.operation)) leaf_name_data.push_back(lease_limit_type.get_name_leafdata());
    if (requested_address_check.is_set || is_set(requested_address_check.operation)) leaf_name_data.push_back(requested_address_check.get_name_leafdata());
    if (secure_arp.is_set || is_set(secure_arp.operation)) leaf_name_data.push_back(secure_arp.get_name_leafdata());
    if (server_bootfile_name.is_set || is_set(server_bootfile_name.operation)) leaf_name_data.push_back(server_bootfile_name.get_name_leafdata());
    if (server_domain_name.is_set || is_set(server_domain_name.operation)) leaf_name_data.push_back(server_domain_name.get_name_leafdata());
    if (server_id_check.is_set || is_set(server_id_check.operation)) leaf_name_data.push_back(server_id_check.get_name_leafdata());
    if (server_pool_name.is_set || is_set(server_pool_name.operation)) leaf_name_data.push_back(server_pool_name.get_name_leafdata());
    if (server_profile_lease.is_set || is_set(server_profile_lease.operation)) leaf_name_data.push_back(server_profile_lease.get_name_leafdata());
    if (server_profile_name_xr.is_set || is_set(server_profile_name_xr.operation)) leaf_name_data.push_back(server_profile_name_xr.get_name_leafdata());
    if (server_profile_netbios_name_svr_count.is_set || is_set(server_profile_netbios_name_svr_count.operation)) leaf_name_data.push_back(server_profile_netbios_name_svr_count.get_name_leafdata());
    if (server_profile_netbios_node_type.is_set || is_set(server_profile_netbios_node_type.operation)) leaf_name_data.push_back(server_profile_netbios_node_type.get_name_leafdata());
    if (server_profile_server_dns_count.is_set || is_set(server_profile_server_dns_count.operation)) leaf_name_data.push_back(server_profile_server_dns_count.get_name_leafdata());
    if (server_profile_time_svr_count.is_set || is_set(server_profile_time_svr_count.operation)) leaf_name_data.push_back(server_profile_time_svr_count.get_name_leafdata());
    if (server_profiledefault_router_count.is_set || is_set(server_profiledefault_router_count.operation)) leaf_name_data.push_back(server_profiledefault_router_count.get_name_leafdata());
    if (server_profileiedge_check.is_set || is_set(server_profileiedge_check.operation)) leaf_name_data.push_back(server_profileiedge_check.get_name_leafdata());
    if (subnet_mask.is_set || is_set(subnet_mask.operation)) leaf_name_data.push_back(subnet_mask.get_name_leafdata());

    auto server_profile_default_router_name_datas = server_profile_default_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_profile_default_router_name_datas.begin(), server_profile_default_router_name_datas.end());
    auto server_profile_dns_name_datas = server_profile_dns.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_profile_dns_name_datas.begin(), server_profile_dns_name_datas.end());
    auto server_profile_netbious_name_server_name_datas = server_profile_netbious_name_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_profile_netbious_name_server_name_datas.begin(), server_profile_netbious_name_server_name_datas.end());
    auto server_profile_time_server_name_datas = server_profile_time_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), server_profile_time_server_name_datas.begin(), server_profile_time_server_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Profiles::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-profile-name")
    {
        server_profile_name = value;
    }
    if(value_path == "bcast-policy")
    {
        bcast_policy = value;
    }
    if(value_path == "duplicate-ip-address-check")
    {
        duplicate_ip_address_check = value;
    }
    if(value_path == "duplicate-mac-address-check")
    {
        duplicate_mac_address_check = value;
    }
    if(value_path == "giaddr-policy")
    {
        giaddr_policy = value;
    }
    if(value_path == "is-move-allowed")
    {
        is_move_allowed = value;
    }
    if(value_path == "lease-limit-count")
    {
        lease_limit_count = value;
    }
    if(value_path == "lease-limit-type")
    {
        lease_limit_type = value;
    }
    if(value_path == "requested-address-check")
    {
        requested_address_check = value;
    }
    if(value_path == "secure-arp")
    {
        secure_arp = value;
    }
    if(value_path == "server-bootfile-name")
    {
        server_bootfile_name = value;
    }
    if(value_path == "server-domain-name")
    {
        server_domain_name = value;
    }
    if(value_path == "server-id-check")
    {
        server_id_check = value;
    }
    if(value_path == "server-pool-name")
    {
        server_pool_name = value;
    }
    if(value_path == "server-profile-default-router")
    {
        server_profile_default_router.append(value);
    }
    if(value_path == "server-profile-dns")
    {
        server_profile_dns.append(value);
    }
    if(value_path == "server-profile-lease")
    {
        server_profile_lease = value;
    }
    if(value_path == "server-profile-name-xr")
    {
        server_profile_name_xr = value;
    }
    if(value_path == "server-profile-netbios-name-svr-count")
    {
        server_profile_netbios_name_svr_count = value;
    }
    if(value_path == "server-profile-netbios-node-type")
    {
        server_profile_netbios_node_type = value;
    }
    if(value_path == "server-profile-netbious-name-server")
    {
        server_profile_netbious_name_server.append(value);
    }
    if(value_path == "server-profile-server-dns-count")
    {
        server_profile_server_dns_count = value;
    }
    if(value_path == "server-profile-time-server")
    {
        server_profile_time_server.append(value);
    }
    if(value_path == "server-profile-time-svr-count")
    {
        server_profile_time_svr_count = value;
    }
    if(value_path == "server-profiledefault-router-count")
    {
        server_profiledefault_router_count = value;
    }
    if(value_path == "server-profileiedge-check")
    {
        server_profileiedge_check = value;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "server";
}

Ipv4Dhcpd::Nodes::Node::Server::Statistics::~Statistics()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Statistics::has_data() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_proxy_stat.size(); index++)
    {
        if(ipv4_dhcpd_proxy_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Statistics::has_operation() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_proxy_stat.size(); index++)
    {
        if(ipv4_dhcpd_proxy_stat[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-dhcpd-proxy-stat")
    {
        for(auto const & c : ipv4_dhcpd_proxy_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat>();
        c->parent = this;
        ipv4_dhcpd_proxy_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_dhcpd_proxy_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Ipv4DhcpdProxyStat()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    statistics(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_>())
{
    statistics->parent = this;

    yang_name = "ipv4-dhcpd-proxy-stat"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::~Ipv4DhcpdProxyStat()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::has_data() const
{
    return vrf_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-dhcpd-proxy-stat";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4DhcpdProxyStat' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_::Statistics_()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "statistics"; yang_parent_name = "ipv4-dhcpd-proxy-stat";
}

Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_::~Statistics_()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics_' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Statistics::Ipv4DhcpdProxyStat::Statistics_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Binding::Binding()
    :
    clients(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients>())
	,summary(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary>())
{
    clients->parent = this;

    summary->parent = this;

    yang_name = "binding"; yang_parent_name = "server";
}

Ipv4Dhcpd::Nodes::Node::Server::Binding::~Binding()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Binding::has_data() const
{
    return (clients !=  nullptr && clients->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Server::Binding::has_operation() const
{
    return is_set(operation)
	|| (clients !=  nullptr && clients->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients>();
        }
        return clients;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clients != nullptr)
    {
        children["clients"] = clients;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Binding::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary::Summary()
    :
    ack_waiting_for_dpm{YType::uint32, "ack-waiting-for-dpm"},
    bound_clients{YType::uint32, "bound-clients"},
    clients{YType::uint32, "clients"},
    deleting_clients_d{YType::uint32, "deleting-clients-d"},
    disconnected_clients{YType::uint32, "disconnected-clients"},
    informing_clients{YType::uint32, "informing-clients"},
    initializing_clients{YType::uint32, "initializing-clients"},
    offer_sent_for_client{YType::uint32, "offer-sent-for-client"},
    reauthorizing_clients{YType::uint32, "reauthorizing-clients"},
    renewing_clients{YType::uint32, "renewing-clients"},
    request_waiting_for_dpm{YType::uint32, "request-waiting-for-dpm"},
    requesting_clients{YType::uint32, "requesting-clients"},
    restarting_clients{YType::uint32, "restarting-clients"},
    selecting_clients{YType::uint32, "selecting-clients"},
    waiting_for_daps_init{YType::uint32, "waiting-for-daps-init"},
    waiting_for_dpm_addr_change{YType::uint32, "waiting-for-dpm-addr-change"},
    waiting_for_dpm_disconnect{YType::uint32, "waiting-for-dpm-disconnect"},
    waiting_for_dpm_init{YType::uint32, "waiting-for-dpm-init"}
{
    yang_name = "summary"; yang_parent_name = "binding";
}

Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary::~Summary()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary::has_data() const
{
    return ack_waiting_for_dpm.is_set
	|| bound_clients.is_set
	|| clients.is_set
	|| deleting_clients_d.is_set
	|| disconnected_clients.is_set
	|| informing_clients.is_set
	|| initializing_clients.is_set
	|| offer_sent_for_client.is_set
	|| reauthorizing_clients.is_set
	|| renewing_clients.is_set
	|| request_waiting_for_dpm.is_set
	|| requesting_clients.is_set
	|| restarting_clients.is_set
	|| selecting_clients.is_set
	|| waiting_for_daps_init.is_set
	|| waiting_for_dpm_addr_change.is_set
	|| waiting_for_dpm_disconnect.is_set
	|| waiting_for_dpm_init.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(ack_waiting_for_dpm.operation)
	|| is_set(bound_clients.operation)
	|| is_set(clients.operation)
	|| is_set(deleting_clients_d.operation)
	|| is_set(disconnected_clients.operation)
	|| is_set(informing_clients.operation)
	|| is_set(initializing_clients.operation)
	|| is_set(offer_sent_for_client.operation)
	|| is_set(reauthorizing_clients.operation)
	|| is_set(renewing_clients.operation)
	|| is_set(request_waiting_for_dpm.operation)
	|| is_set(requesting_clients.operation)
	|| is_set(restarting_clients.operation)
	|| is_set(selecting_clients.operation)
	|| is_set(waiting_for_daps_init.operation)
	|| is_set(waiting_for_dpm_addr_change.operation)
	|| is_set(waiting_for_dpm_disconnect.operation)
	|| is_set(waiting_for_dpm_init.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_waiting_for_dpm.is_set || is_set(ack_waiting_for_dpm.operation)) leaf_name_data.push_back(ack_waiting_for_dpm.get_name_leafdata());
    if (bound_clients.is_set || is_set(bound_clients.operation)) leaf_name_data.push_back(bound_clients.get_name_leafdata());
    if (clients.is_set || is_set(clients.operation)) leaf_name_data.push_back(clients.get_name_leafdata());
    if (deleting_clients_d.is_set || is_set(deleting_clients_d.operation)) leaf_name_data.push_back(deleting_clients_d.get_name_leafdata());
    if (disconnected_clients.is_set || is_set(disconnected_clients.operation)) leaf_name_data.push_back(disconnected_clients.get_name_leafdata());
    if (informing_clients.is_set || is_set(informing_clients.operation)) leaf_name_data.push_back(informing_clients.get_name_leafdata());
    if (initializing_clients.is_set || is_set(initializing_clients.operation)) leaf_name_data.push_back(initializing_clients.get_name_leafdata());
    if (offer_sent_for_client.is_set || is_set(offer_sent_for_client.operation)) leaf_name_data.push_back(offer_sent_for_client.get_name_leafdata());
    if (reauthorizing_clients.is_set || is_set(reauthorizing_clients.operation)) leaf_name_data.push_back(reauthorizing_clients.get_name_leafdata());
    if (renewing_clients.is_set || is_set(renewing_clients.operation)) leaf_name_data.push_back(renewing_clients.get_name_leafdata());
    if (request_waiting_for_dpm.is_set || is_set(request_waiting_for_dpm.operation)) leaf_name_data.push_back(request_waiting_for_dpm.get_name_leafdata());
    if (requesting_clients.is_set || is_set(requesting_clients.operation)) leaf_name_data.push_back(requesting_clients.get_name_leafdata());
    if (restarting_clients.is_set || is_set(restarting_clients.operation)) leaf_name_data.push_back(restarting_clients.get_name_leafdata());
    if (selecting_clients.is_set || is_set(selecting_clients.operation)) leaf_name_data.push_back(selecting_clients.get_name_leafdata());
    if (waiting_for_daps_init.is_set || is_set(waiting_for_daps_init.operation)) leaf_name_data.push_back(waiting_for_daps_init.get_name_leafdata());
    if (waiting_for_dpm_addr_change.is_set || is_set(waiting_for_dpm_addr_change.operation)) leaf_name_data.push_back(waiting_for_dpm_addr_change.get_name_leafdata());
    if (waiting_for_dpm_disconnect.is_set || is_set(waiting_for_dpm_disconnect.operation)) leaf_name_data.push_back(waiting_for_dpm_disconnect.get_name_leafdata());
    if (waiting_for_dpm_init.is_set || is_set(waiting_for_dpm_init.operation)) leaf_name_data.push_back(waiting_for_dpm_init.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Binding::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack-waiting-for-dpm")
    {
        ack_waiting_for_dpm = value;
    }
    if(value_path == "bound-clients")
    {
        bound_clients = value;
    }
    if(value_path == "clients")
    {
        clients = value;
    }
    if(value_path == "deleting-clients-d")
    {
        deleting_clients_d = value;
    }
    if(value_path == "disconnected-clients")
    {
        disconnected_clients = value;
    }
    if(value_path == "informing-clients")
    {
        informing_clients = value;
    }
    if(value_path == "initializing-clients")
    {
        initializing_clients = value;
    }
    if(value_path == "offer-sent-for-client")
    {
        offer_sent_for_client = value;
    }
    if(value_path == "reauthorizing-clients")
    {
        reauthorizing_clients = value;
    }
    if(value_path == "renewing-clients")
    {
        renewing_clients = value;
    }
    if(value_path == "request-waiting-for-dpm")
    {
        request_waiting_for_dpm = value;
    }
    if(value_path == "requesting-clients")
    {
        requesting_clients = value;
    }
    if(value_path == "restarting-clients")
    {
        restarting_clients = value;
    }
    if(value_path == "selecting-clients")
    {
        selecting_clients = value;
    }
    if(value_path == "waiting-for-daps-init")
    {
        waiting_for_daps_init = value;
    }
    if(value_path == "waiting-for-dpm-addr-change")
    {
        waiting_for_dpm_addr_change = value;
    }
    if(value_path == "waiting-for-dpm-disconnect")
    {
        waiting_for_dpm_disconnect = value;
    }
    if(value_path == "waiting-for-dpm-init")
    {
        waiting_for_dpm_init = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Clients()
{
    yang_name = "clients"; yang_parent_name = "binding";
}

Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::~Clients()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clients' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client::Client()
    :
    client_id{YType::str, "client-id"},
    access_vrf_name{YType::str, "access-vrf-name"},
    client_gi_addr{YType::str, "client-gi-addr"},
    client_id_xr{YType::str, "client-id-xr"},
    event_history{YType::uint32, "event-history"},
    interface_name{YType::str, "interface-name"},
    ip_address{YType::str, "ip-address"},
    is_auth_received{YType::boolean, "is-auth-received"},
    is_mbl_subscriber{YType::boolean, "is-mbl-subscriber"},
    is_nak_next_renew{YType::boolean, "is-nak-next-renew"},
    lease_time{YType::uint32, "lease-time"},
    mac_address{YType::str, "mac-address"},
    old_subscriber_label{YType::uint32, "old-subscriber-label"},
    param_request{YType::str, "param-request"},
    param_response{YType::str, "param-response"},
    profile_name{YType::str, "profile-name"},
    proxy_binding_inner_tag{YType::uint32, "proxy-binding-inner-tag"},
    proxy_binding_outer_tag{YType::uint32, "proxy-binding-outer-tag"},
    remaining_lease_time{YType::uint32, "remaining-lease-time"},
    reply_server_ip_address{YType::str, "reply-server-ip-address"},
    rx_circuit_id{YType::str, "rx-circuit-id"},
    rx_remote_id{YType::str, "rx-remote-id"},
    rx_vsiso{YType::str, "rx-vsiso"},
    server_ip_address{YType::str, "server-ip-address"},
    server_vrf_name{YType::str, "server-vrf-name"},
    session_start_time{YType::uint64, "session-start-time"},
    srg_state{YType::uint32, "srg-state"},
    state{YType::enumeration, "state"},
    subscriber_interface_name{YType::str, "subscriber-interface-name"},
    subscriber_label{YType::uint32, "subscriber-label"},
    to_server_gi_addr{YType::str, "to-server-gi-addr"},
    tx_circuit_id{YType::str, "tx-circuit-id"},
    tx_remote_id{YType::str, "tx-remote-id"},
    tx_vsiso{YType::str, "tx-vsiso"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "client"; yang_parent_name = "clients";
}

Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client::~Client()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client::has_data() const
{
    for (auto const & leaf : event_history.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return client_id.is_set
	|| access_vrf_name.is_set
	|| client_gi_addr.is_set
	|| client_id_xr.is_set
	|| interface_name.is_set
	|| ip_address.is_set
	|| is_auth_received.is_set
	|| is_mbl_subscriber.is_set
	|| is_nak_next_renew.is_set
	|| lease_time.is_set
	|| mac_address.is_set
	|| old_subscriber_label.is_set
	|| param_request.is_set
	|| param_response.is_set
	|| profile_name.is_set
	|| proxy_binding_inner_tag.is_set
	|| proxy_binding_outer_tag.is_set
	|| remaining_lease_time.is_set
	|| reply_server_ip_address.is_set
	|| rx_circuit_id.is_set
	|| rx_remote_id.is_set
	|| rx_vsiso.is_set
	|| server_ip_address.is_set
	|| server_vrf_name.is_set
	|| session_start_time.is_set
	|| srg_state.is_set
	|| state.is_set
	|| subscriber_interface_name.is_set
	|| subscriber_label.is_set
	|| to_server_gi_addr.is_set
	|| tx_circuit_id.is_set
	|| tx_remote_id.is_set
	|| tx_vsiso.is_set
	|| vrf_name.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client::has_operation() const
{
    for (auto const & leaf : event_history.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(client_id.operation)
	|| is_set(access_vrf_name.operation)
	|| is_set(client_gi_addr.operation)
	|| is_set(client_id_xr.operation)
	|| is_set(event_history.operation)
	|| is_set(interface_name.operation)
	|| is_set(ip_address.operation)
	|| is_set(is_auth_received.operation)
	|| is_set(is_mbl_subscriber.operation)
	|| is_set(is_nak_next_renew.operation)
	|| is_set(lease_time.operation)
	|| is_set(mac_address.operation)
	|| is_set(old_subscriber_label.operation)
	|| is_set(param_request.operation)
	|| is_set(param_response.operation)
	|| is_set(profile_name.operation)
	|| is_set(proxy_binding_inner_tag.operation)
	|| is_set(proxy_binding_outer_tag.operation)
	|| is_set(remaining_lease_time.operation)
	|| is_set(reply_server_ip_address.operation)
	|| is_set(rx_circuit_id.operation)
	|| is_set(rx_remote_id.operation)
	|| is_set(rx_vsiso.operation)
	|| is_set(server_ip_address.operation)
	|| is_set(server_vrf_name.operation)
	|| is_set(session_start_time.operation)
	|| is_set(srg_state.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_interface_name.operation)
	|| is_set(subscriber_label.operation)
	|| is_set(to_server_gi_addr.operation)
	|| is_set(tx_circuit_id.operation)
	|| is_set(tx_remote_id.operation)
	|| is_set(tx_vsiso.operation)
	|| is_set(vrf_name.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[client-id='" <<client_id <<"']";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (access_vrf_name.is_set || is_set(access_vrf_name.operation)) leaf_name_data.push_back(access_vrf_name.get_name_leafdata());
    if (client_gi_addr.is_set || is_set(client_gi_addr.operation)) leaf_name_data.push_back(client_gi_addr.get_name_leafdata());
    if (client_id_xr.is_set || is_set(client_id_xr.operation)) leaf_name_data.push_back(client_id_xr.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (is_auth_received.is_set || is_set(is_auth_received.operation)) leaf_name_data.push_back(is_auth_received.get_name_leafdata());
    if (is_mbl_subscriber.is_set || is_set(is_mbl_subscriber.operation)) leaf_name_data.push_back(is_mbl_subscriber.get_name_leafdata());
    if (is_nak_next_renew.is_set || is_set(is_nak_next_renew.operation)) leaf_name_data.push_back(is_nak_next_renew.get_name_leafdata());
    if (lease_time.is_set || is_set(lease_time.operation)) leaf_name_data.push_back(lease_time.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (old_subscriber_label.is_set || is_set(old_subscriber_label.operation)) leaf_name_data.push_back(old_subscriber_label.get_name_leafdata());
    if (param_request.is_set || is_set(param_request.operation)) leaf_name_data.push_back(param_request.get_name_leafdata());
    if (param_response.is_set || is_set(param_response.operation)) leaf_name_data.push_back(param_response.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (proxy_binding_inner_tag.is_set || is_set(proxy_binding_inner_tag.operation)) leaf_name_data.push_back(proxy_binding_inner_tag.get_name_leafdata());
    if (proxy_binding_outer_tag.is_set || is_set(proxy_binding_outer_tag.operation)) leaf_name_data.push_back(proxy_binding_outer_tag.get_name_leafdata());
    if (remaining_lease_time.is_set || is_set(remaining_lease_time.operation)) leaf_name_data.push_back(remaining_lease_time.get_name_leafdata());
    if (reply_server_ip_address.is_set || is_set(reply_server_ip_address.operation)) leaf_name_data.push_back(reply_server_ip_address.get_name_leafdata());
    if (rx_circuit_id.is_set || is_set(rx_circuit_id.operation)) leaf_name_data.push_back(rx_circuit_id.get_name_leafdata());
    if (rx_remote_id.is_set || is_set(rx_remote_id.operation)) leaf_name_data.push_back(rx_remote_id.get_name_leafdata());
    if (rx_vsiso.is_set || is_set(rx_vsiso.operation)) leaf_name_data.push_back(rx_vsiso.get_name_leafdata());
    if (server_ip_address.is_set || is_set(server_ip_address.operation)) leaf_name_data.push_back(server_ip_address.get_name_leafdata());
    if (server_vrf_name.is_set || is_set(server_vrf_name.operation)) leaf_name_data.push_back(server_vrf_name.get_name_leafdata());
    if (session_start_time.is_set || is_set(session_start_time.operation)) leaf_name_data.push_back(session_start_time.get_name_leafdata());
    if (srg_state.is_set || is_set(srg_state.operation)) leaf_name_data.push_back(srg_state.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_interface_name.is_set || is_set(subscriber_interface_name.operation)) leaf_name_data.push_back(subscriber_interface_name.get_name_leafdata());
    if (subscriber_label.is_set || is_set(subscriber_label.operation)) leaf_name_data.push_back(subscriber_label.get_name_leafdata());
    if (to_server_gi_addr.is_set || is_set(to_server_gi_addr.operation)) leaf_name_data.push_back(to_server_gi_addr.get_name_leafdata());
    if (tx_circuit_id.is_set || is_set(tx_circuit_id.operation)) leaf_name_data.push_back(tx_circuit_id.get_name_leafdata());
    if (tx_remote_id.is_set || is_set(tx_remote_id.operation)) leaf_name_data.push_back(tx_remote_id.get_name_leafdata());
    if (tx_vsiso.is_set || is_set(tx_vsiso.operation)) leaf_name_data.push_back(tx_vsiso.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    auto event_history_name_datas = event_history.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), event_history_name_datas.begin(), event_history_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Binding::Clients::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "access-vrf-name")
    {
        access_vrf_name = value;
    }
    if(value_path == "client-gi-addr")
    {
        client_gi_addr = value;
    }
    if(value_path == "client-id-xr")
    {
        client_id_xr = value;
    }
    if(value_path == "event-history")
    {
        event_history.append(value);
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "is-auth-received")
    {
        is_auth_received = value;
    }
    if(value_path == "is-mbl-subscriber")
    {
        is_mbl_subscriber = value;
    }
    if(value_path == "is-nak-next-renew")
    {
        is_nak_next_renew = value;
    }
    if(value_path == "lease-time")
    {
        lease_time = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "old-subscriber-label")
    {
        old_subscriber_label = value;
    }
    if(value_path == "param-request")
    {
        param_request = value;
    }
    if(value_path == "param-response")
    {
        param_response = value;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
    if(value_path == "proxy-binding-inner-tag")
    {
        proxy_binding_inner_tag = value;
    }
    if(value_path == "proxy-binding-outer-tag")
    {
        proxy_binding_outer_tag = value;
    }
    if(value_path == "remaining-lease-time")
    {
        remaining_lease_time = value;
    }
    if(value_path == "reply-server-ip-address")
    {
        reply_server_ip_address = value;
    }
    if(value_path == "rx-circuit-id")
    {
        rx_circuit_id = value;
    }
    if(value_path == "rx-remote-id")
    {
        rx_remote_id = value;
    }
    if(value_path == "rx-vsiso")
    {
        rx_vsiso = value;
    }
    if(value_path == "server-ip-address")
    {
        server_ip_address = value;
    }
    if(value_path == "server-vrf-name")
    {
        server_vrf_name = value;
    }
    if(value_path == "session-start-time")
    {
        session_start_time = value;
    }
    if(value_path == "srg-state")
    {
        srg_state = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-interface-name")
    {
        subscriber_interface_name = value;
    }
    if(value_path == "subscriber-label")
    {
        subscriber_label = value;
    }
    if(value_path == "to-server-gi-addr")
    {
        to_server_gi_addr = value;
    }
    if(value_path == "tx-circuit-id")
    {
        tx_circuit_id = value;
    }
    if(value_path == "tx-remote-id")
    {
        tx_remote_id = value;
    }
    if(value_path == "tx-vsiso")
    {
        tx_vsiso = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo::StatisticsInfo()
    :
    proxy_stats_timestamp{YType::uint32, "proxy-stats-timestamp"}
{
    yang_name = "statistics-info"; yang_parent_name = "server";
}

Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo::~StatisticsInfo()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo::has_data() const
{
    return proxy_stats_timestamp.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(proxy_stats_timestamp.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-info";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatisticsInfo' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_stats_timestamp.is_set || is_set(proxy_stats_timestamp.operation)) leaf_name_data.push_back(proxy_stats_timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::StatisticsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "proxy-stats-timestamp")
    {
        proxy_stats_timestamp = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "server";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::~Vrfs()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    statistics(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics>())
{
    statistics->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Statistics()
    :
    ack(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack>())
	,bootp_reply(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply>())
	,bootp_request(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest>())
	,decline(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline>())
	,discover(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover>())
	,inform(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform>())
	,lease_active(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive>())
	,lease_not_assigned(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned>())
	,lease_query(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery>())
	,lease_unknown(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown>())
	,nak(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak>())
	,offer(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer>())
	,release(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release>())
	,request(std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request>())
{
    ack->parent = this;

    bootp_reply->parent = this;

    bootp_request->parent = this;

    decline->parent = this;

    discover->parent = this;

    inform->parent = this;

    lease_active->parent = this;

    lease_not_assigned->parent = this;

    lease_query->parent = this;

    lease_unknown->parent = this;

    nak->parent = this;

    offer->parent = this;

    release->parent = this;

    request->parent = this;

    yang_name = "statistics"; yang_parent_name = "vrf";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::~Statistics()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::has_data() const
{
    return (ack !=  nullptr && ack->has_data())
	|| (bootp_reply !=  nullptr && bootp_reply->has_data())
	|| (bootp_request !=  nullptr && bootp_request->has_data())
	|| (decline !=  nullptr && decline->has_data())
	|| (discover !=  nullptr && discover->has_data())
	|| (inform !=  nullptr && inform->has_data())
	|| (lease_active !=  nullptr && lease_active->has_data())
	|| (lease_not_assigned !=  nullptr && lease_not_assigned->has_data())
	|| (lease_query !=  nullptr && lease_query->has_data())
	|| (lease_unknown !=  nullptr && lease_unknown->has_data())
	|| (nak !=  nullptr && nak->has_data())
	|| (offer !=  nullptr && offer->has_data())
	|| (release !=  nullptr && release->has_data())
	|| (request !=  nullptr && request->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::has_operation() const
{
    return is_set(operation)
	|| (ack !=  nullptr && ack->has_operation())
	|| (bootp_reply !=  nullptr && bootp_reply->has_operation())
	|| (bootp_request !=  nullptr && bootp_request->has_operation())
	|| (decline !=  nullptr && decline->has_operation())
	|| (discover !=  nullptr && discover->has_operation())
	|| (inform !=  nullptr && inform->has_operation())
	|| (lease_active !=  nullptr && lease_active->has_operation())
	|| (lease_not_assigned !=  nullptr && lease_not_assigned->has_operation())
	|| (lease_query !=  nullptr && lease_query->has_operation())
	|| (lease_unknown !=  nullptr && lease_unknown->has_operation())
	|| (nak !=  nullptr && nak->has_operation())
	|| (offer !=  nullptr && offer->has_operation())
	|| (release !=  nullptr && release->has_operation())
	|| (request !=  nullptr && request->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "bootp-reply")
    {
        if(bootp_reply == nullptr)
        {
            bootp_reply = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply>();
        }
        return bootp_reply;
    }

    if(child_yang_name == "bootp-request")
    {
        if(bootp_request == nullptr)
        {
            bootp_request = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest>();
        }
        return bootp_request;
    }

    if(child_yang_name == "decline")
    {
        if(decline == nullptr)
        {
            decline = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline>();
        }
        return decline;
    }

    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "inform")
    {
        if(inform == nullptr)
        {
            inform = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform>();
        }
        return inform;
    }

    if(child_yang_name == "lease-active")
    {
        if(lease_active == nullptr)
        {
            lease_active = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive>();
        }
        return lease_active;
    }

    if(child_yang_name == "lease-not-assigned")
    {
        if(lease_not_assigned == nullptr)
        {
            lease_not_assigned = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned>();
        }
        return lease_not_assigned;
    }

    if(child_yang_name == "lease-query")
    {
        if(lease_query == nullptr)
        {
            lease_query = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery>();
        }
        return lease_query;
    }

    if(child_yang_name == "lease-unknown")
    {
        if(lease_unknown == nullptr)
        {
            lease_unknown = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown>();
        }
        return lease_unknown;
    }

    if(child_yang_name == "nak")
    {
        if(nak == nullptr)
        {
            nak = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak>();
        }
        return nak;
    }

    if(child_yang_name == "offer")
    {
        if(offer == nullptr)
        {
            offer = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer>();
        }
        return offer;
    }

    if(child_yang_name == "release")
    {
        if(release == nullptr)
        {
            release = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release>();
        }
        return release;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request>();
        }
        return request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ack != nullptr)
    {
        children["ack"] = ack;
    }

    if(bootp_reply != nullptr)
    {
        children["bootp-reply"] = bootp_reply;
    }

    if(bootp_request != nullptr)
    {
        children["bootp-request"] = bootp_request;
    }

    if(decline != nullptr)
    {
        children["decline"] = decline;
    }

    if(discover != nullptr)
    {
        children["discover"] = discover;
    }

    if(inform != nullptr)
    {
        children["inform"] = inform;
    }

    if(lease_active != nullptr)
    {
        children["lease-active"] = lease_active;
    }

    if(lease_not_assigned != nullptr)
    {
        children["lease-not-assigned"] = lease_not_assigned;
    }

    if(lease_query != nullptr)
    {
        children["lease-query"] = lease_query;
    }

    if(lease_unknown != nullptr)
    {
        children["lease-unknown"] = lease_unknown;
    }

    if(nak != nullptr)
    {
        children["nak"] = nak;
    }

    if(offer != nullptr)
    {
        children["offer"] = offer;
    }

    if(release != nullptr)
    {
        children["release"] = release;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover::Discover()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "discover"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover::~Discover()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discover' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Discover::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer::Offer()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "offer"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer::~Offer()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offer";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Offer' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Offer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::Request()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "request"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::~Request()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::Decline()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "decline"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::~Decline()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decline";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Decline' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack::Ack()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "ack"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack::~Ack()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ack' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Ack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak::Nak()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "nak"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak::~Nak()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nak";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nak' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Nak::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::Release()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "release"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::~Release()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "release";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Release' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::Inform()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "inform"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::~Inform()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inform' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::LeaseQuery()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::~LeaseQuery()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQuery' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned::LeaseNotAssigned()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-not-assigned"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned::~LeaseNotAssigned()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-not-assigned";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseNotAssigned' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseNotAssigned::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown::LeaseUnknown()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-unknown"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown::~LeaseUnknown()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-unknown";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseUnknown' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseUnknown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive::LeaseActive()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-active"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive::~LeaseActive()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-active";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseActive' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseActive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest::BootpRequest()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "bootp-request"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest::~BootpRequest()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootp-request";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BootpRequest' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply::BootpReply()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "bootp-reply"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply::~BootpReply()
{
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootp-reply";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BootpReply' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Server::Vrfs::Vrf::Statistics::BootpReply::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Relay()
    :
    profiles(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Profiles>())
	,statistics(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Statistics>())
	,statistics_info(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo>())
	,vrfs(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs>())
{
    profiles->parent = this;

    statistics->parent = this;

    statistics_info->parent = this;

    vrfs->parent = this;

    yang_name = "relay"; yang_parent_name = "node";
}

Ipv4Dhcpd::Nodes::Node::Relay::~Relay()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::has_data() const
{
    return (profiles !=  nullptr && profiles->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (statistics_info !=  nullptr && statistics_info->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Relay::has_operation() const
{
    return is_set(operation)
	|| (profiles !=  nullptr && profiles->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (statistics_info !=  nullptr && statistics_info->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Relay' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Profiles>();
        }
        return profiles;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "statistics-info")
    {
        if(statistics_info == nullptr)
        {
            statistics_info = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo>();
        }
        return statistics_info;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profiles != nullptr)
    {
        children["profiles"] = profiles;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(statistics_info != nullptr)
    {
        children["statistics-info"] = statistics_info;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profiles()
{
    yang_name = "profiles"; yang_parent_name = "relay";
}

Ipv4Dhcpd::Nodes::Node::Relay::Profiles::~Profiles()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Profiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Profiles' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Profiles::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile::Profile()
    :
    profile_name{YType::str, "profile-name"},
    relay_profile_broadcast_flag_policy{YType::uint8, "relay-profile-broadcast-flag-policy"},
    relay_profile_gi_addr{YType::str, "relay-profile-gi-addr"},
    relay_profile_gi_addr_policy{YType::uint8, "relay-profile-gi-addr-policy"},
    relay_profile_helper_address{YType::str, "relay-profile-helper-address"},
    relay_profile_helper_count{YType::uint8, "relay-profile-helper-count"},
    relay_profile_helper_vrf{YType::str, "relay-profile-helper-vrf"},
    relay_profile_name{YType::str, "relay-profile-name"},
    relay_profile_relay_info_allow_untrusted{YType::uint8, "relay-profile-relay-info-allow-untrusted"},
    relay_profile_relay_info_check{YType::uint8, "relay-profile-relay-info-check"},
    relay_profile_relay_info_option{YType::uint8, "relay-profile-relay-info-option"},
    relay_profile_relay_info_optionvpn{YType::uint8, "relay-profile-relay-info-optionvpn"},
    relay_profile_relay_info_optionvpn_mode{YType::enumeration, "relay-profile-relay-info-optionvpn-mode"},
    relay_profile_relay_info_policy{YType::uint8, "relay-profile-relay-info-policy"},
    relay_profile_uid{YType::uint32, "relay-profile-uid"}
{
    yang_name = "profile"; yang_parent_name = "profiles";
}

Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile::~Profile()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile::has_data() const
{
    for (auto const & leaf : relay_profile_gi_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : relay_profile_helper_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : relay_profile_helper_vrf.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return profile_name.is_set
	|| relay_profile_broadcast_flag_policy.is_set
	|| relay_profile_gi_addr_policy.is_set
	|| relay_profile_helper_count.is_set
	|| relay_profile_name.is_set
	|| relay_profile_relay_info_allow_untrusted.is_set
	|| relay_profile_relay_info_check.is_set
	|| relay_profile_relay_info_option.is_set
	|| relay_profile_relay_info_optionvpn.is_set
	|| relay_profile_relay_info_optionvpn_mode.is_set
	|| relay_profile_relay_info_policy.is_set
	|| relay_profile_uid.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile::has_operation() const
{
    for (auto const & leaf : relay_profile_gi_addr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : relay_profile_helper_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : relay_profile_helper_vrf.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(profile_name.operation)
	|| is_set(relay_profile_broadcast_flag_policy.operation)
	|| is_set(relay_profile_gi_addr.operation)
	|| is_set(relay_profile_gi_addr_policy.operation)
	|| is_set(relay_profile_helper_address.operation)
	|| is_set(relay_profile_helper_count.operation)
	|| is_set(relay_profile_helper_vrf.operation)
	|| is_set(relay_profile_name.operation)
	|| is_set(relay_profile_relay_info_allow_untrusted.operation)
	|| is_set(relay_profile_relay_info_check.operation)
	|| is_set(relay_profile_relay_info_option.operation)
	|| is_set(relay_profile_relay_info_optionvpn.operation)
	|| is_set(relay_profile_relay_info_optionvpn_mode.operation)
	|| is_set(relay_profile_relay_info_policy.operation)
	|| is_set(relay_profile_uid.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[profile-name='" <<profile_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Profile' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (relay_profile_broadcast_flag_policy.is_set || is_set(relay_profile_broadcast_flag_policy.operation)) leaf_name_data.push_back(relay_profile_broadcast_flag_policy.get_name_leafdata());
    if (relay_profile_gi_addr_policy.is_set || is_set(relay_profile_gi_addr_policy.operation)) leaf_name_data.push_back(relay_profile_gi_addr_policy.get_name_leafdata());
    if (relay_profile_helper_count.is_set || is_set(relay_profile_helper_count.operation)) leaf_name_data.push_back(relay_profile_helper_count.get_name_leafdata());
    if (relay_profile_name.is_set || is_set(relay_profile_name.operation)) leaf_name_data.push_back(relay_profile_name.get_name_leafdata());
    if (relay_profile_relay_info_allow_untrusted.is_set || is_set(relay_profile_relay_info_allow_untrusted.operation)) leaf_name_data.push_back(relay_profile_relay_info_allow_untrusted.get_name_leafdata());
    if (relay_profile_relay_info_check.is_set || is_set(relay_profile_relay_info_check.operation)) leaf_name_data.push_back(relay_profile_relay_info_check.get_name_leafdata());
    if (relay_profile_relay_info_option.is_set || is_set(relay_profile_relay_info_option.operation)) leaf_name_data.push_back(relay_profile_relay_info_option.get_name_leafdata());
    if (relay_profile_relay_info_optionvpn.is_set || is_set(relay_profile_relay_info_optionvpn.operation)) leaf_name_data.push_back(relay_profile_relay_info_optionvpn.get_name_leafdata());
    if (relay_profile_relay_info_optionvpn_mode.is_set || is_set(relay_profile_relay_info_optionvpn_mode.operation)) leaf_name_data.push_back(relay_profile_relay_info_optionvpn_mode.get_name_leafdata());
    if (relay_profile_relay_info_policy.is_set || is_set(relay_profile_relay_info_policy.operation)) leaf_name_data.push_back(relay_profile_relay_info_policy.get_name_leafdata());
    if (relay_profile_uid.is_set || is_set(relay_profile_uid.operation)) leaf_name_data.push_back(relay_profile_uid.get_name_leafdata());

    auto relay_profile_gi_addr_name_datas = relay_profile_gi_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), relay_profile_gi_addr_name_datas.begin(), relay_profile_gi_addr_name_datas.end());
    auto relay_profile_helper_address_name_datas = relay_profile_helper_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), relay_profile_helper_address_name_datas.begin(), relay_profile_helper_address_name_datas.end());
    auto relay_profile_helper_vrf_name_datas = relay_profile_helper_vrf.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), relay_profile_helper_vrf_name_datas.begin(), relay_profile_helper_vrf_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Profiles::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
    if(value_path == "relay-profile-broadcast-flag-policy")
    {
        relay_profile_broadcast_flag_policy = value;
    }
    if(value_path == "relay-profile-gi-addr")
    {
        relay_profile_gi_addr.append(value);
    }
    if(value_path == "relay-profile-gi-addr-policy")
    {
        relay_profile_gi_addr_policy = value;
    }
    if(value_path == "relay-profile-helper-address")
    {
        relay_profile_helper_address.append(value);
    }
    if(value_path == "relay-profile-helper-count")
    {
        relay_profile_helper_count = value;
    }
    if(value_path == "relay-profile-helper-vrf")
    {
        relay_profile_helper_vrf.append(value);
    }
    if(value_path == "relay-profile-name")
    {
        relay_profile_name = value;
    }
    if(value_path == "relay-profile-relay-info-allow-untrusted")
    {
        relay_profile_relay_info_allow_untrusted = value;
    }
    if(value_path == "relay-profile-relay-info-check")
    {
        relay_profile_relay_info_check = value;
    }
    if(value_path == "relay-profile-relay-info-option")
    {
        relay_profile_relay_info_option = value;
    }
    if(value_path == "relay-profile-relay-info-optionvpn")
    {
        relay_profile_relay_info_optionvpn = value;
    }
    if(value_path == "relay-profile-relay-info-optionvpn-mode")
    {
        relay_profile_relay_info_optionvpn_mode = value;
    }
    if(value_path == "relay-profile-relay-info-policy")
    {
        relay_profile_relay_info_policy = value;
    }
    if(value_path == "relay-profile-uid")
    {
        relay_profile_uid = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo::StatisticsInfo()
    :
    relay_stats_timestamp{YType::uint32, "relay-stats-timestamp"}
{
    yang_name = "statistics-info"; yang_parent_name = "relay";
}

Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo::~StatisticsInfo()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo::has_data() const
{
    return relay_stats_timestamp.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(relay_stats_timestamp.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-info";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatisticsInfo' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relay_stats_timestamp.is_set || is_set(relay_stats_timestamp.operation)) leaf_name_data.push_back(relay_stats_timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::StatisticsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "relay-stats-timestamp")
    {
        relay_stats_timestamp = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "relay";
}

Ipv4Dhcpd::Nodes::Node::Relay::Statistics::~Statistics()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Statistics::has_data() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_relay_stat.size(); index++)
    {
        if(ipv4_dhcpd_relay_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Statistics::has_operation() const
{
    for (std::size_t index=0; index<ipv4_dhcpd_relay_stat.size(); index++)
    {
        if(ipv4_dhcpd_relay_stat[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-dhcpd-relay-stat")
    {
        for(auto const & c : ipv4_dhcpd_relay_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat>();
        c->parent = this;
        ipv4_dhcpd_relay_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_dhcpd_relay_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Ipv4DhcpdRelayStat()
    :
    relay_statistics_vrf_name{YType::str, "relay-statistics-vrf-name"}
    	,
    statistics(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_>())
{
    statistics->parent = this;

    yang_name = "ipv4-dhcpd-relay-stat"; yang_parent_name = "statistics";
}

Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::~Ipv4DhcpdRelayStat()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::has_data() const
{
    return relay_statistics_vrf_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::has_operation() const
{
    return is_set(operation)
	|| is_set(relay_statistics_vrf_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-dhcpd-relay-stat";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4DhcpdRelayStat' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relay_statistics_vrf_name.is_set || is_set(relay_statistics_vrf_name.operation)) leaf_name_data.push_back(relay_statistics_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "relay-statistics-vrf-name")
    {
        relay_statistics_vrf_name = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_::Statistics_()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "statistics"; yang_parent_name = "ipv4-dhcpd-relay-stat";
}

Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_::~Statistics_()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics_' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Statistics::Ipv4DhcpdRelayStat::Statistics_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "relay";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::~Vrfs()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    vrf_statistics(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics>())
{
    vrf_statistics->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (vrf_statistics !=  nullptr && vrf_statistics->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (vrf_statistics !=  nullptr && vrf_statistics->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-statistics")
    {
        if(vrf_statistics == nullptr)
        {
            vrf_statistics = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics>();
        }
        return vrf_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf_statistics != nullptr)
    {
        children["vrf-statistics"] = vrf_statistics;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::VrfStatistics()
    :
    ack(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack>())
	,bootp_reply(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply>())
	,bootp_request(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest>())
	,decline(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline>())
	,discover(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover>())
	,inform(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform>())
	,lease_active(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive>())
	,lease_not_assigned(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned>())
	,lease_query(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery>())
	,lease_unknown(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown>())
	,nak(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak>())
	,offer(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer>())
	,release(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release>())
	,request(std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request>())
{
    ack->parent = this;

    bootp_reply->parent = this;

    bootp_request->parent = this;

    decline->parent = this;

    discover->parent = this;

    inform->parent = this;

    lease_active->parent = this;

    lease_not_assigned->parent = this;

    lease_query->parent = this;

    lease_unknown->parent = this;

    nak->parent = this;

    offer->parent = this;

    release->parent = this;

    request->parent = this;

    yang_name = "vrf-statistics"; yang_parent_name = "vrf";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::~VrfStatistics()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::has_data() const
{
    return (ack !=  nullptr && ack->has_data())
	|| (bootp_reply !=  nullptr && bootp_reply->has_data())
	|| (bootp_request !=  nullptr && bootp_request->has_data())
	|| (decline !=  nullptr && decline->has_data())
	|| (discover !=  nullptr && discover->has_data())
	|| (inform !=  nullptr && inform->has_data())
	|| (lease_active !=  nullptr && lease_active->has_data())
	|| (lease_not_assigned !=  nullptr && lease_not_assigned->has_data())
	|| (lease_query !=  nullptr && lease_query->has_data())
	|| (lease_unknown !=  nullptr && lease_unknown->has_data())
	|| (nak !=  nullptr && nak->has_data())
	|| (offer !=  nullptr && offer->has_data())
	|| (release !=  nullptr && release->has_data())
	|| (request !=  nullptr && request->has_data());
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::has_operation() const
{
    return is_set(operation)
	|| (ack !=  nullptr && ack->has_operation())
	|| (bootp_reply !=  nullptr && bootp_reply->has_operation())
	|| (bootp_request !=  nullptr && bootp_request->has_operation())
	|| (decline !=  nullptr && decline->has_operation())
	|| (discover !=  nullptr && discover->has_operation())
	|| (inform !=  nullptr && inform->has_operation())
	|| (lease_active !=  nullptr && lease_active->has_operation())
	|| (lease_not_assigned !=  nullptr && lease_not_assigned->has_operation())
	|| (lease_query !=  nullptr && lease_query->has_operation())
	|| (lease_unknown !=  nullptr && lease_unknown->has_operation())
	|| (nak !=  nullptr && nak->has_operation())
	|| (offer !=  nullptr && offer->has_operation())
	|| (release !=  nullptr && release->has_operation())
	|| (request !=  nullptr && request->has_operation());
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-statistics";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfStatistics' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "bootp-reply")
    {
        if(bootp_reply == nullptr)
        {
            bootp_reply = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply>();
        }
        return bootp_reply;
    }

    if(child_yang_name == "bootp-request")
    {
        if(bootp_request == nullptr)
        {
            bootp_request = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest>();
        }
        return bootp_request;
    }

    if(child_yang_name == "decline")
    {
        if(decline == nullptr)
        {
            decline = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline>();
        }
        return decline;
    }

    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "inform")
    {
        if(inform == nullptr)
        {
            inform = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform>();
        }
        return inform;
    }

    if(child_yang_name == "lease-active")
    {
        if(lease_active == nullptr)
        {
            lease_active = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive>();
        }
        return lease_active;
    }

    if(child_yang_name == "lease-not-assigned")
    {
        if(lease_not_assigned == nullptr)
        {
            lease_not_assigned = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned>();
        }
        return lease_not_assigned;
    }

    if(child_yang_name == "lease-query")
    {
        if(lease_query == nullptr)
        {
            lease_query = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery>();
        }
        return lease_query;
    }

    if(child_yang_name == "lease-unknown")
    {
        if(lease_unknown == nullptr)
        {
            lease_unknown = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown>();
        }
        return lease_unknown;
    }

    if(child_yang_name == "nak")
    {
        if(nak == nullptr)
        {
            nak = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak>();
        }
        return nak;
    }

    if(child_yang_name == "offer")
    {
        if(offer == nullptr)
        {
            offer = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer>();
        }
        return offer;
    }

    if(child_yang_name == "release")
    {
        if(release == nullptr)
        {
            release = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release>();
        }
        return release;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request>();
        }
        return request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ack != nullptr)
    {
        children["ack"] = ack;
    }

    if(bootp_reply != nullptr)
    {
        children["bootp-reply"] = bootp_reply;
    }

    if(bootp_request != nullptr)
    {
        children["bootp-request"] = bootp_request;
    }

    if(decline != nullptr)
    {
        children["decline"] = decline;
    }

    if(discover != nullptr)
    {
        children["discover"] = discover;
    }

    if(inform != nullptr)
    {
        children["inform"] = inform;
    }

    if(lease_active != nullptr)
    {
        children["lease-active"] = lease_active;
    }

    if(lease_not_assigned != nullptr)
    {
        children["lease-not-assigned"] = lease_not_assigned;
    }

    if(lease_query != nullptr)
    {
        children["lease-query"] = lease_query;
    }

    if(lease_unknown != nullptr)
    {
        children["lease-unknown"] = lease_unknown;
    }

    if(nak != nullptr)
    {
        children["nak"] = nak;
    }

    if(offer != nullptr)
    {
        children["offer"] = offer;
    }

    if(release != nullptr)
    {
        children["release"] = release;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover::Discover()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "discover"; yang_parent_name = "vrf-statistics";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover::~Discover()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discover' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Discover::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer::Offer()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "offer"; yang_parent_name = "vrf-statistics";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer::~Offer()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offer";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Offer' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Offer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request::Request()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "request"; yang_parent_name = "vrf-statistics";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request::~Request()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Request::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline::Decline()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "decline"; yang_parent_name = "vrf-statistics";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline::~Decline()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decline";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Decline' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Decline::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack::Ack()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "ack"; yang_parent_name = "vrf-statistics";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack::~Ack()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ack' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Ack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak::Nak()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "nak"; yang_parent_name = "vrf-statistics";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak::~Nak()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nak";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nak' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Nak::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release::Release()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "release"; yang_parent_name = "vrf-statistics";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release::~Release()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "release";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Release' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Release::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform::Inform()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "inform"; yang_parent_name = "vrf-statistics";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform::~Inform()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inform";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inform' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::Inform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery::LeaseQuery()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-query"; yang_parent_name = "vrf-statistics";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery::~LeaseQuery()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-query";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseQuery' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseQuery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned::LeaseNotAssigned()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-not-assigned"; yang_parent_name = "vrf-statistics";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned::~LeaseNotAssigned()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-not-assigned";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseNotAssigned' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseNotAssigned::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown::LeaseUnknown()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-unknown"; yang_parent_name = "vrf-statistics";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown::~LeaseUnknown()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-unknown";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseUnknown' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseUnknown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive::LeaseActive()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "lease-active"; yang_parent_name = "vrf-statistics";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive::~LeaseActive()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-active";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeaseActive' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::LeaseActive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest::BootpRequest()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "bootp-request"; yang_parent_name = "vrf-statistics";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest::~BootpRequest()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootp-request";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BootpRequest' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply::BootpReply()
    :
    dropped_packets{YType::uint64, "dropped-packets"},
    received_packets{YType::uint64, "received-packets"},
    transmitted_packets{YType::uint64, "transmitted-packets"}
{
    yang_name = "bootp-reply"; yang_parent_name = "vrf-statistics";
}

Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply::~BootpReply()
{
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply::has_data() const
{
    return dropped_packets.is_set
	|| received_packets.is_set
	|| transmitted_packets.is_set;
}

bool Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(transmitted_packets.operation);
}

std::string Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootp-reply";

    return path_buffer.str();

}

const EntityPath Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BootpReply' in Cisco_IOS_XR_ipv4_dhcpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Dhcpd::Nodes::Node::Relay::Vrfs::Vrf::VrfStatistics::BootpReply::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
}

const Enum::YLeaf DhcpIssuVersionEnum::version1 {0, "version1"};
const Enum::YLeaf DhcpIssuVersionEnum::version2 {1, "version2"};

const Enum::YLeaf DhcpIssuRoleEnum::role_primary {0, "role-primary"};
const Enum::YLeaf DhcpIssuRoleEnum::role_secondary {1, "role-secondary"};

const Enum::YLeaf ProxyLeaseLimitEnum::none {0, "none"};
const Enum::YLeaf ProxyLeaseLimitEnum::interface {1, "interface"};
const Enum::YLeaf ProxyLeaseLimitEnum::circuit_id {2, "circuit-id"};
const Enum::YLeaf ProxyLeaseLimitEnum::remote_id {3, "remote-id"};
const Enum::YLeaf ProxyLeaseLimitEnum::remote_id_circuit_id {4, "remote-id-circuit-id"};

const Enum::YLeaf DhcpIssuPhaseEnum::phase_not_started {0, "phase-not-started"};
const Enum::YLeaf DhcpIssuPhaseEnum::phase_load {1, "phase-load"};
const Enum::YLeaf DhcpIssuPhaseEnum::phase_run {2, "phase-run"};
const Enum::YLeaf DhcpIssuPhaseEnum::phase_completed {3, "phase-completed"};
const Enum::YLeaf DhcpIssuPhaseEnum::phase_aborted {4, "phase-aborted"};

const Enum::YLeaf RelayInfoPolicyEnum::replace {0, "replace"};
const Enum::YLeaf RelayInfoPolicyEnum::keep {1, "keep"};
const Enum::YLeaf RelayInfoPolicyEnum::drop {2, "drop"};
const Enum::YLeaf RelayInfoPolicyEnum::encapsulate {3, "encapsulate"};

const Enum::YLeaf BagDhcpdIntfSrgRoleEnum::none {0, "none"};
const Enum::YLeaf BagDhcpdIntfSrgRoleEnum::master {1, "master"};
const Enum::YLeaf BagDhcpdIntfSrgRoleEnum::slave {2, "slave"};

const Enum::YLeaf DhcpcIpv4StateEnum::init {0, "init"};
const Enum::YLeaf DhcpcIpv4StateEnum::init_reboot {1, "init-reboot"};
const Enum::YLeaf DhcpcIpv4StateEnum::rebooting {2, "rebooting"};
const Enum::YLeaf DhcpcIpv4StateEnum::selecting {3, "selecting"};
const Enum::YLeaf DhcpcIpv4StateEnum::requesting {4, "requesting"};
const Enum::YLeaf DhcpcIpv4StateEnum::bound {5, "bound"};
const Enum::YLeaf DhcpcIpv4StateEnum::renewing {6, "renewing"};
const Enum::YLeaf DhcpcIpv4StateEnum::rebinding {7, "rebinding"};
const Enum::YLeaf DhcpcIpv4StateEnum::invalid {8, "invalid"};

const Enum::YLeaf BagDhcpdProxyStateEnum::initializing {0, "initializing"};
const Enum::YLeaf BagDhcpdProxyStateEnum::selecting {1, "selecting"};
const Enum::YLeaf BagDhcpdProxyStateEnum::requesting {2, "requesting"};
const Enum::YLeaf BagDhcpdProxyStateEnum::bound {3, "bound"};
const Enum::YLeaf BagDhcpdProxyStateEnum::renewing {4, "renewing"};
const Enum::YLeaf BagDhcpdProxyStateEnum::informing {5, "informing"};
const Enum::YLeaf BagDhcpdProxyStateEnum::deleting {6, "deleting"};
const Enum::YLeaf BagDhcpdProxyStateEnum::create_dpm {7, "create-dpm"};
const Enum::YLeaf BagDhcpdProxyStateEnum::offer_sent {8, "offer-sent"};
const Enum::YLeaf BagDhcpdProxyStateEnum::update_dpm {9, "update-dpm"};
const Enum::YLeaf BagDhcpdProxyStateEnum::route_install {10, "route-install"};
const Enum::YLeaf BagDhcpdProxyStateEnum::disc_dpm {11, "disc-dpm"};
const Enum::YLeaf BagDhcpdProxyStateEnum::renew_new_intf {12, "renew-new-intf"};
const Enum::YLeaf BagDhcpdProxyStateEnum::other_intf_dpm {13, "other-intf-dpm"};
const Enum::YLeaf BagDhcpdProxyStateEnum::request_dpm {14, "request-dpm"};
const Enum::YLeaf BagDhcpdProxyStateEnum::change_addr_dpm {15, "change-addr-dpm"};
const Enum::YLeaf BagDhcpdProxyStateEnum::max {16, "max"};

const Enum::YLeaf RelayInfoVpnModeEnum::rfc {0, "rfc"};
const Enum::YLeaf RelayInfoVpnModeEnum::cisco {1, "cisco"};

const Enum::YLeaf RelayInfoAuthenticateEnum::received {0, "received"};
const Enum::YLeaf RelayInfoAuthenticateEnum::inserted {1, "inserted"};

const Enum::YLeaf BroadcastFlagEnum::ignore {0, "ignore"};
const Enum::YLeaf BroadcastFlagEnum::check {1, "check"};
const Enum::YLeaf BroadcastFlagEnum::unicast_always {2, "unicast-always"};


}
}

