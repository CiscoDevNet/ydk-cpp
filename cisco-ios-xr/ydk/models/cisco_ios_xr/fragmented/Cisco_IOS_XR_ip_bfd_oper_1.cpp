
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper_1.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_bfd_oper {

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::Ipv6MultiHopSessionDetail()
    :
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    source_address{YType::str, "source-address"},
    vrf_name{YType::str, "vrf-name"}
    	,
    lsp_ping_info(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo>())
	,mp_download_state(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState>())
	,status_information(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation>())
{
    lsp_ping_info->parent = this;
    children["lsp-ping-info"] = lsp_ping_info;

    mp_download_state->parent = this;
    children["mp-download-state"] = mp_download_state;

    status_information->parent = this;
    children["status-information"] = status_information;

    yang_name = "ipv6-multi-hop-session-detail"; yang_parent_name = "ipv6-multi-hop-session-details";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::~Ipv6MultiHopSessionDetail()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::has_data() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| location.is_set
	|| source_address.is_set
	|| vrf_name.is_set
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (status_information !=  nullptr && status_information->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(location.operation)
	|| is_set(source_address.operation)
	|| is_set(vrf_name.operation)
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (status_information !=  nullptr && status_information->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-session-detail";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(std::move(c));
        children[segment_path] = association_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info != nullptr)
        {
            children["lsp-ping-info"] = lsp_ping_info;
        }
        else
        {
            lsp_ping_info = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo>();
            lsp_ping_info->parent = this;
            children["lsp-ping-info"] = lsp_ping_info;
        }
        return children.at("lsp-ping-info");
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state != nullptr)
        {
            children["mp-download-state"] = mp_download_state;
        }
        else
        {
            mp_download_state = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState>();
            mp_download_state->parent = this;
            children["mp-download-state"] = mp_download_state;
        }
        return children.at("mp-download-state");
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(std::move(c));
        children[segment_path] = owner_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "status-information")
    {
        if(status_information != nullptr)
        {
            children["status-information"] = status_information;
        }
        else
        {
            status_information = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation>();
            status_information->parent = this;
            children["status-information"] = status_information;
        }
        return children.at("status-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::get_children()
{
    for (auto const & c : association_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("lsp-ping-info") == children.end())
    {
        if(lsp_ping_info != nullptr)
        {
            children["lsp-ping-info"] = lsp_ping_info;
        }
    }

    if(children.find("mp-download-state") == children.end())
    {
        if(mp_download_state != nullptr)
        {
            children["mp-download-state"] = mp_download_state;
        }
    }

    for (auto const & c : owner_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("status-information") == children.end())
    {
        if(status_information != nullptr)
        {
            children["status-information"] = status_information;
        }
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusInformation()
    :
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    internal_label{YType::uint32, "internal-label"},
    latency_average{YType::uint32, "latency-average"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_number{YType::uint32, "latency-number"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    session_subtype{YType::str, "session-subtype"},
    sessiontype{YType::enumeration, "sessiontype"},
    state{YType::enumeration, "state"},
    to_up_state_count{YType::uint32, "to-up-state-count"}
    	,
    async_receive_statistics(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,async_transmit_statistics(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics>())
	,last_state_change(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange>())
	,receive_packet(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket>())
	,source_address(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress>())
	,status_brief_information(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation>())
	,transmit_packet(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket>())
{
    async_receive_statistics->parent = this;
    children["async-receive-statistics"] = async_receive_statistics;

    async_transmit_statistics->parent = this;
    children["async-transmit-statistics"] = async_transmit_statistics;

    echo_received_statistics->parent = this;
    children["echo-received-statistics"] = echo_received_statistics;

    echo_transmit_statistics->parent = this;
    children["echo-transmit-statistics"] = echo_transmit_statistics;

    last_state_change->parent = this;
    children["last-state-change"] = last_state_change;

    receive_packet->parent = this;
    children["receive-packet"] = receive_packet;

    source_address->parent = this;
    children["source-address"] = source_address;

    status_brief_information->parent = this;
    children["status-brief-information"] = status_brief_information;

    transmit_packet->parent = this;
    children["transmit-packet"] = transmit_packet;

    yang_name = "status-information"; yang_parent_name = "ipv6-multi-hop-session-detail";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::has_data() const
{
    return desired_minimum_echo_transmit_interval.is_set
	|| internal_label.is_set
	|| latency_average.is_set
	|| latency_maximum.is_set
	|| latency_minimum.is_set
	|| latency_number.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| remote_discriminator.is_set
	|| remote_negotiated_interval.is_set
	|| session_subtype.is_set
	|| sessiontype.is_set
	|| state.is_set
	|| to_up_state_count.is_set
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(desired_minimum_echo_transmit_interval.operation)
	|| is_set(internal_label.operation)
	|| is_set(latency_average.operation)
	|| is_set(latency_maximum.operation)
	|| is_set(latency_minimum.operation)
	|| is_set(latency_number.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(node_id.operation)
	|| is_set(remote_discriminator.operation)
	|| is_set(remote_negotiated_interval.operation)
	|| is_set(session_subtype.operation)
	|| is_set(sessiontype.operation)
	|| is_set(state.operation)
	|| is_set(to_up_state_count.operation)
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.operation)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.operation)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.operation)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.operation)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.operation)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.operation)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.operation)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics != nullptr)
        {
            children["async-receive-statistics"] = async_receive_statistics;
        }
        else
        {
            async_receive_statistics = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics>();
            async_receive_statistics->parent = this;
            children["async-receive-statistics"] = async_receive_statistics;
        }
        return children.at("async-receive-statistics");
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics != nullptr)
        {
            children["async-transmit-statistics"] = async_transmit_statistics;
        }
        else
        {
            async_transmit_statistics = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics>();
            async_transmit_statistics->parent = this;
            children["async-transmit-statistics"] = async_transmit_statistics;
        }
        return children.at("async-transmit-statistics");
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics != nullptr)
        {
            children["echo-received-statistics"] = echo_received_statistics;
        }
        else
        {
            echo_received_statistics = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics>();
            echo_received_statistics->parent = this;
            children["echo-received-statistics"] = echo_received_statistics;
        }
        return children.at("echo-received-statistics");
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics != nullptr)
        {
            children["echo-transmit-statistics"] = echo_transmit_statistics;
        }
        else
        {
            echo_transmit_statistics = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics>();
            echo_transmit_statistics->parent = this;
            children["echo-transmit-statistics"] = echo_transmit_statistics;
        }
        return children.at("echo-transmit-statistics");
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change != nullptr)
        {
            children["last-state-change"] = last_state_change;
        }
        else
        {
            last_state_change = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange>();
            last_state_change->parent = this;
            children["last-state-change"] = last_state_change;
        }
        return children.at("last-state-change");
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet != nullptr)
        {
            children["receive-packet"] = receive_packet;
        }
        else
        {
            receive_packet = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket>();
            receive_packet->parent = this;
            children["receive-packet"] = receive_packet;
        }
        return children.at("receive-packet");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
        else
        {
            status_brief_information = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation>();
            status_brief_information->parent = this;
            children["status-brief-information"] = status_brief_information;
        }
        return children.at("status-brief-information");
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet != nullptr)
        {
            children["transmit-packet"] = transmit_packet;
        }
        else
        {
            transmit_packet = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket>();
            transmit_packet->parent = this;
            children["transmit-packet"] = transmit_packet;
        }
        return children.at("transmit-packet");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::get_children()
{
    if(children.find("async-receive-statistics") == children.end())
    {
        if(async_receive_statistics != nullptr)
        {
            children["async-receive-statistics"] = async_receive_statistics;
        }
    }

    if(children.find("async-transmit-statistics") == children.end())
    {
        if(async_transmit_statistics != nullptr)
        {
            children["async-transmit-statistics"] = async_transmit_statistics;
        }
    }

    if(children.find("echo-received-statistics") == children.end())
    {
        if(echo_received_statistics != nullptr)
        {
            children["echo-received-statistics"] = echo_received_statistics;
        }
    }

    if(children.find("echo-transmit-statistics") == children.end())
    {
        if(echo_transmit_statistics != nullptr)
        {
            children["echo-transmit-statistics"] = echo_transmit_statistics;
        }
    }

    if(children.find("last-state-change") == children.end())
    {
        if(last_state_change != nullptr)
        {
            children["last-state-change"] = last_state_change;
        }
    }

    if(children.find("receive-packet") == children.end())
    {
        if(receive_packet != nullptr)
        {
            children["receive-packet"] = receive_packet;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    if(children.find("status-brief-information") == children.end())
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
    }

    if(children.find("transmit-packet") == children.end())
    {
        if(transmit_packet != nullptr)
        {
            children["transmit-packet"] = transmit_packet;
        }
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "source-address"; yang_parent_name = "status-information";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "last-state-change"; yang_parent_name = "status-information";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(minutes.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "transmit-packet"; yang_parent_name = "status-information";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "receive-packet"; yang_parent_name = "status-information";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    children["async-interval-multiplier"] = async_interval_multiplier;

    echo_interval_multiplier->parent = this;
    children["echo-interval-multiplier"] = echo_interval_multiplier;

    yang_name = "status-brief-information"; yang_parent_name = "status-information";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        else
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
            async_interval_multiplier->parent = this;
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        return children.at("async-interval-multiplier");
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        else
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
            echo_interval_multiplier->parent = this;
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        return children.at("echo-interval-multiplier");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_children()
{
    if(children.find("async-interval-multiplier") == children.end())
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
    }

    if(children.find("echo-interval-multiplier") == children.end())
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-receive-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-received-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;
    children["change-time"] = change_time;

    yang_name = "mp-download-state"; yang_parent_name = "ipv6-multi-hop-session-detail";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(operation)
	|| is_set(mp_download_state.operation)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.operation)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "change-time")
    {
        if(change_time != nullptr)
        {
            children["change-time"] = change_time;
        }
        else
        {
            change_time = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime>();
            change_time->parent = this;
            children["change-time"] = change_time;
        }
        return children.at("change-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::get_children()
{
    if(children.find("change-time") == children.end())
    {
        if(change_time != nullptr)
        {
            children["change-time"] = change_time;
        }
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "change-time"; yang_parent_name = "mp-download-state";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/mp-download-state/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, std::string value)
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

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"}
    	,
    lsp_ping_rx_last_time(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_tx_last_time(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime>())
{
    lsp_ping_rx_last_time->parent = this;
    children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;

    lsp_ping_tx_last_error_time->parent = this;
    children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;

    lsp_ping_tx_last_time->parent = this;
    children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;

    yang_name = "lsp-ping-info"; yang_parent_name = "ipv6-multi-hop-session-detail";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_last_output.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_ping_rx_count.operation)
	|| is_set(lsp_ping_rx_last_code.operation)
	|| is_set(lsp_ping_rx_last_discr.operation)
	|| is_set(lsp_ping_rx_last_output.operation)
	|| is_set(lsp_ping_rx_last_subcode.operation)
	|| is_set(lsp_ping_tx_count.operation)
	|| is_set(lsp_ping_tx_error_count.operation)
	|| is_set(lsp_ping_tx_last_error_rc.operation)
	|| is_set(lsp_ping_tx_last_rc.operation)
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.operation)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.operation)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.operation)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.operation)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.operation)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.operation)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.operation)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time != nullptr)
        {
            children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
        }
        else
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime>();
            lsp_ping_rx_last_time->parent = this;
            children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
        }
        return children.at("lsp-ping-rx-last-time");
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time != nullptr)
        {
            children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
        }
        else
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
            lsp_ping_tx_last_error_time->parent = this;
            children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
        }
        return children.at("lsp-ping-tx-last-error-time");
    }

    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time != nullptr)
        {
            children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
        }
        else
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime>();
            lsp_ping_tx_last_time->parent = this;
            children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
        }
        return children.at("lsp-ping-tx-last-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::get_children()
{
    if(children.find("lsp-ping-rx-last-time") == children.end())
    {
        if(lsp_ping_rx_last_time != nullptr)
        {
            children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
        }
    }

    if(children.find("lsp-ping-tx-last-error-time") == children.end())
    {
        if(lsp_ping_tx_last_error_time != nullptr)
        {
            children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
        }
    }

    if(children.find("lsp-ping-tx-last-time") == children.end())
    {
        if(lsp_ping_tx_last_time != nullptr)
        {
            children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
        }
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/lsp-ping-info/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, std::string value)
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

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/lsp-ping-info/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, std::string value)
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

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/lsp-ping-info/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, std::string value)
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

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "ipv6-multi-hop-session-detail";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::AssociationInformation()
    :
    local_discriminator{YType::uint32, "local-discriminator"},
    sessiontype{YType::enumeration, "sessiontype"}
    	,
    session_key(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey>())
{
    session_key->parent = this;
    children["session-key"] = session_key;

    yang_name = "association-information"; yang_parent_name = "ipv6-multi-hop-session-detail";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return local_discriminator.is_set
	|| sessiontype.is_set
	|| (session_key !=  nullptr && session_key->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_discriminator.operation)
	|| is_set(sessiontype.operation)
	|| (session_key !=  nullptr && session_key->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(std::move(c));
        children[segment_path] = owner_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "session-key")
    {
        if(session_key != nullptr)
        {
            children["session-key"] = session_key;
        }
        else
        {
            session_key = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey>();
            session_key->parent = this;
            children["session-key"] = session_key;
        }
        return children.at("session-key");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::get_children()
{
    for (auto const & c : owner_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("session-key") == children.end())
    {
        if(session_key != nullptr)
        {
            children["session-key"] = session_key;
        }
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::SessionKey()
    :
    incoming_label{YType::uint32, "incoming-label"},
    interface_name{YType::str, "interface-name"},
    sbfd_enabled{YType::int32, "sbfd-enabled"},
    sbfd_target_type{YType::uint32, "sbfd-target-type"},
    session_key_type{YType::uint32, "session-key-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    bfdfec(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec>())
	,ip_destination_address(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>())
	,ip_source_address(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress>())
	,target_address(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress>())
{
    bfdfec->parent = this;
    children["bfdfec"] = bfdfec;

    ip_destination_address->parent = this;
    children["ip-destination-address"] = ip_destination_address;

    ip_source_address->parent = this;
    children["ip-source-address"] = ip_source_address;

    target_address->parent = this;
    children["target-address"] = target_address;

    yang_name = "session-key"; yang_parent_name = "association-information";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::~SessionKey()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::has_data() const
{
    return incoming_label.is_set
	|| interface_name.is_set
	|| sbfd_enabled.is_set
	|| sbfd_target_type.is_set
	|| session_key_type.is_set
	|| vrf_name.is_set
	|| (bfdfec !=  nullptr && bfdfec->has_data())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data())
	|| (ip_source_address !=  nullptr && ip_source_address->has_data())
	|| (target_address !=  nullptr && target_address->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(sbfd_enabled.operation)
	|| is_set(sbfd_target_type.operation)
	|| is_set(session_key_type.operation)
	|| is_set(vrf_name.operation)
	|| (bfdfec !=  nullptr && bfdfec->has_operation())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation())
	|| (ip_source_address !=  nullptr && ip_source_address->has_operation())
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-key";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sbfd_enabled.is_set || is_set(sbfd_enabled.operation)) leaf_name_data.push_back(sbfd_enabled.get_name_leafdata());
    if (sbfd_target_type.is_set || is_set(sbfd_target_type.operation)) leaf_name_data.push_back(sbfd_target_type.get_name_leafdata());
    if (session_key_type.is_set || is_set(session_key_type.operation)) leaf_name_data.push_back(session_key_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfdfec")
    {
        if(bfdfec != nullptr)
        {
            children["bfdfec"] = bfdfec;
        }
        else
        {
            bfdfec = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec>();
            bfdfec->parent = this;
            children["bfdfec"] = bfdfec;
        }
        return children.at("bfdfec");
    }

    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address != nullptr)
        {
            children["ip-destination-address"] = ip_destination_address;
        }
        else
        {
            ip_destination_address = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>();
            ip_destination_address->parent = this;
            children["ip-destination-address"] = ip_destination_address;
        }
        return children.at("ip-destination-address");
    }

    if(child_yang_name == "ip-source-address")
    {
        if(ip_source_address != nullptr)
        {
            children["ip-source-address"] = ip_source_address;
        }
        else
        {
            ip_source_address = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress>();
            ip_source_address->parent = this;
            children["ip-source-address"] = ip_source_address;
        }
        return children.at("ip-source-address");
    }

    if(child_yang_name == "target-address")
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
        else
        {
            target_address = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress>();
            target_address->parent = this;
            children["target-address"] = target_address;
        }
        return children.at("target-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::get_children()
{
    if(children.find("bfdfec") == children.end())
    {
        if(bfdfec != nullptr)
        {
            children["bfdfec"] = bfdfec;
        }
    }

    if(children.find("ip-destination-address") == children.end())
    {
        if(ip_destination_address != nullptr)
        {
            children["ip-destination-address"] = ip_destination_address;
        }
    }

    if(children.find("ip-source-address") == children.end())
    {
        if(ip_source_address != nullptr)
        {
            children["ip-source-address"] = ip_source_address;
        }
    }

    if(children.find("target-address") == children.end())
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "sbfd-enabled")
    {
        sbfd_enabled = value;
    }
    if(value_path == "sbfd-target-type")
    {
        sbfd_target_type = value;
    }
    if(value_path == "session-key-type")
    {
        session_key_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-destination-address"; yang_parent_name = "session-key";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::IpSourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-source-address"; yang_parent_name = "session-key";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::~IpSourceAddress()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-address";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Bfdfec()
    :
    bfdfe_ctype{YType::enumeration, "bfdfe-ctype"}
    	,
    dummy(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>())
	,te_s2l_fec(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>())
{
    dummy->parent = this;
    children["dummy"] = dummy;

    te_s2l_fec->parent = this;
    children["te-s2l-fec"] = te_s2l_fec;

    yang_name = "bfdfec"; yang_parent_name = "session-key";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::~Bfdfec()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::has_data() const
{
    return bfdfe_ctype.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::has_operation() const
{
    return is_set(operation)
	|| is_set(bfdfe_ctype.operation)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfdfec";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfdfe_ctype.is_set || is_set(bfdfe_ctype.operation)) leaf_name_data.push_back(bfdfe_ctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dummy")
    {
        if(dummy != nullptr)
        {
            children["dummy"] = dummy;
        }
        else
        {
            dummy = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>();
            dummy->parent = this;
            children["dummy"] = dummy;
        }
        return children.at("dummy");
    }

    if(child_yang_name == "te-s2l-fec")
    {
        if(te_s2l_fec != nullptr)
        {
            children["te-s2l-fec"] = te_s2l_fec;
        }
        else
        {
            te_s2l_fec = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>();
            te_s2l_fec->parent = this;
            children["te-s2l-fec"] = te_s2l_fec;
        }
        return children.at("te-s2l-fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_children()
{
    if(children.find("dummy") == children.end())
    {
        if(dummy != nullptr)
        {
            children["dummy"] = dummy;
        }
    }

    if(children.find("te-s2l-fec") == children.end())
    {
        if(te_s2l_fec != nullptr)
        {
            children["te-s2l-fec"] = te_s2l_fec;
        }
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfdfe-ctype")
    {
        bfdfe_ctype = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::Dummy()
    :
    dummy{YType::str, "dummy"}
{
    yang_name = "dummy"; yang_parent_name = "bfdfec";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::~Dummy()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_data() const
{
    return dummy.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_operation() const
{
    return is_set(operation)
	|| is_set(dummy.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dummy")
    {
        dummy = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::TeS2LFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{
    yang_name = "te-s2l-fec"; yang_parent_name = "bfdfec";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::~TeS2LFec()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_fec_ctype.operation)
	|| is_set(s2l_fec_dest.operation)
	|| is_set(s2l_fec_extended_tunnel_id.operation)
	|| is_set(s2l_fec_lsp_id.operation)
	|| is_set(s2l_fec_p2mp_id.operation)
	|| is_set(s2l_fec_source.operation)
	|| is_set(s2l_fec_subgroup_id.operation)
	|| is_set(s2l_fec_subgroup_originator.operation)
	|| is_set(s2l_fec_tunnel_id.operation)
	|| is_set(s2l_fec_vrf.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-s2l-fec";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.operation)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.operation)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.operation)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.operation)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.operation)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.operation)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.operation)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.operation)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::TargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target-address"; yang_parent_name = "session-key";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::~TargetAddress()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "association-information";
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPaths()
{
    yang_name = "ipv6-multi-hop-multi-paths"; yang_parent_name = "bfd";
}

Bfd::Ipv6MultiHopMultiPaths::~Ipv6MultiHopMultiPaths()
{
}

bool Bfd::Ipv6MultiHopMultiPaths::has_data() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_multi_path.size(); index++)
    {
        if(ipv6_multi_hop_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6MultiHopMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_multi_path.size(); index++)
    {
        if(ipv6_multi_hop_multi_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv6MultiHopMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-multi-paths";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopMultiPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-multi-hop-multi-path")
    {
        for(auto const & c : ipv6_multi_hop_multi_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath>();
        c->parent = this;
        ipv6_multi_hop_multi_path.push_back(std::move(c));
        children[segment_path] = ipv6_multi_hop_multi_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopMultiPaths::get_children()
{
    for (auto const & c : ipv6_multi_hop_multi_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv6MultiHopMultiPaths::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::Ipv6MultiHopMultiPath()
    :
    destination_address{YType::str, "destination-address"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    local_discriminator{YType::uint32, "local-discriminator"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_interface_name{YType::str, "session-interface-name"},
    session_subtype{YType::str, "session-subtype"},
    source_address{YType::str, "source-address"},
    state{YType::enumeration, "state"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv6-multi-hop-multi-path"; yang_parent_name = "ipv6-multi-hop-multi-paths";
}

Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::~Ipv6MultiHopMultiPath()
{
}

bool Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::has_data() const
{
    return destination_address.is_set
	|| incoming_label_xr.is_set
	|| local_discriminator.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_interface_name.is_set
	|| session_subtype.is_set
	|| source_address.is_set
	|| state.is_set
	|| vrf_name.is_set;
}

bool Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(incoming_label_xr.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(location.operation)
	|| is_set(node_id.operation)
	|| is_set(session_interface_name.operation)
	|| is_set(session_subtype.operation)
	|| is_set(source_address.operation)
	|| is_set(state.operation)
	|| is_set(vrf_name.operation);
}

std::string Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-multi-path";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-multi-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.operation)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.operation)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadCounters()
    :
    ipv4bf_do_mplste_head_packet_counters(std::make_shared<Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters>())
{
    ipv4bf_do_mplste_head_packet_counters->parent = this;
    children["ipv4bf-do-mplste-head-packet-counters"] = ipv4bf_do_mplste_head_packet_counters;

    yang_name = "ipv4bf-do-mplste-head-counters"; yang_parent_name = "bfd";
}

Bfd::Ipv4BfDoMplsteHeadCounters::~Ipv4BfDoMplsteHeadCounters()
{
}

bool Bfd::Ipv4BfDoMplsteHeadCounters::has_data() const
{
    return (ipv4bf_do_mplste_head_packet_counters !=  nullptr && ipv4bf_do_mplste_head_packet_counters->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadCounters::has_operation() const
{
    return is_set(operation)
	|| (ipv4bf_do_mplste_head_packet_counters !=  nullptr && ipv4bf_do_mplste_head_packet_counters->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-counters";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4bf-do-mplste-head-packet-counters")
    {
        if(ipv4bf_do_mplste_head_packet_counters != nullptr)
        {
            children["ipv4bf-do-mplste-head-packet-counters"] = ipv4bf_do_mplste_head_packet_counters;
        }
        else
        {
            ipv4bf_do_mplste_head_packet_counters = std::make_shared<Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters>();
            ipv4bf_do_mplste_head_packet_counters->parent = this;
            children["ipv4bf-do-mplste-head-packet-counters"] = ipv4bf_do_mplste_head_packet_counters;
        }
        return children.at("ipv4bf-do-mplste-head-packet-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadCounters::get_children()
{
    if(children.find("ipv4bf-do-mplste-head-packet-counters") == children.end())
    {
        if(ipv4bf_do_mplste_head_packet_counters != nullptr)
        {
            children["ipv4bf-do-mplste-head-packet-counters"] = ipv4bf_do_mplste_head_packet_counters;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadCounters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounters()
{
    yang_name = "ipv4bf-do-mplste-head-packet-counters"; yang_parent_name = "ipv4bf-do-mplste-head-counters";
}

Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::~Ipv4BfDoMplsteHeadPacketCounters()
{
}

bool Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::has_data() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_packet_counter.size(); index++)
    {
        if(ipv4bf_do_mplste_head_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_packet_counter.size(); index++)
    {
        if(ipv4bf_do_mplste_head_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-packet-counters";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4bf-do-mplste-head-packet-counter")
    {
        for(auto const & c : ipv4bf_do_mplste_head_packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter>();
        c->parent = this;
        ipv4bf_do_mplste_head_packet_counter.push_back(std::move(c));
        children[segment_path] = ipv4bf_do_mplste_head_packet_counter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::get_children()
{
    for (auto const & c : ipv4bf_do_mplste_head_packet_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::Ipv4BfDoMplsteHeadPacketCounter()
    :
    display_type{YType::enumeration, "display-type"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"}
{
    yang_name = "ipv4bf-do-mplste-head-packet-counter"; yang_parent_name = "ipv4bf-do-mplste-head-packet-counters";
}

Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::~Ipv4BfDoMplsteHeadPacketCounter()
{
}

bool Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::has_data() const
{
    return display_type.is_set
	|| echo_receive_count.is_set
	|| echo_transmit_count.is_set
	|| hello_receive_count.is_set
	|| hello_transmit_count.is_set
	|| interface_name.is_set
	|| location.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::has_operation() const
{
    return is_set(operation)
	|| is_set(display_type.operation)
	|| is_set(echo_receive_count.operation)
	|| is_set(echo_transmit_count.operation)
	|| is_set(hello_receive_count.operation)
	|| is_set(hello_transmit_count.operation)
	|| is_set(interface_name.operation)
	|| is_set(location.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-packet-counter";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-counters/ipv4bf-do-mplste-head-packet-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display_type.is_set || is_set(display_type.operation)) leaf_name_data.push_back(display_type.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.operation)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.operation)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.operation)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.operation)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "display-type")
    {
        display_type = value;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count = value;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count = value;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count = value;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
}

Bfd::SessionMibs::SessionMibs()
{
    yang_name = "session-mibs"; yang_parent_name = "bfd";
}

Bfd::SessionMibs::~SessionMibs()
{
}

bool Bfd::SessionMibs::has_data() const
{
    for (std::size_t index=0; index<session_mib.size(); index++)
    {
        if(session_mib[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::SessionMibs::has_operation() const
{
    for (std::size_t index=0; index<session_mib.size(); index++)
    {
        if(session_mib[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::SessionMibs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-mibs";

    return path_buffer.str();

}

EntityPath Bfd::SessionMibs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionMibs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-mib")
    {
        for(auto const & c : session_mib)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::SessionMibs::SessionMib>();
        c->parent = this;
        session_mib.push_back(std::move(c));
        children[segment_path] = session_mib.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionMibs::get_children()
{
    for (auto const & c : session_mib)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::SessionMibs::set_value(const std::string & value_path, std::string value)
{
}

Bfd::SessionMibs::SessionMib::SessionMib()
    :
    discriminator{YType::int32, "discriminator"},
    desired_min_tx_interval{YType::uint32, "desired-min-tx-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    int_handle{YType::uint32, "int-handle"},
    interface_name{YType::str, "interface-name"},
    last_down_diag{YType::enumeration, "last-down-diag"},
    last_down_time_nsec{YType::uint32, "last-down-time-nsec"},
    last_down_time_sec{YType::uint64, "last-down-time-sec"},
    last_time_cached{YType::uint64, "last-time-cached"},
    last_up_time_nsec{YType::uint32, "last-up-time-nsec"},
    last_up_time_sec{YType::uint64, "last-up-time-sec"},
    local_discriminator{YType::uint32, "local-discriminator"},
    pkt_in{YType::uint64, "pkt-in"},
    pkt_out{YType::uint64, "pkt-out"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    required_min_rx_echo_interval{YType::uint32, "required-min-rx-echo-interval"},
    required_min_rx_interval{YType::uint32, "required-min-rx-interval"},
    session_state{YType::uint32, "session-state"},
    sessionversion{YType::uint32, "sessionversion"},
    trap_bitmap{YType::uint32, "trap-bitmap"},
    up_counter{YType::uint32, "up-counter"}
    	,
    dest_address(std::make_shared<Bfd::SessionMibs::SessionMib::DestAddress>())
{
    dest_address->parent = this;
    children["dest-address"] = dest_address;

    yang_name = "session-mib"; yang_parent_name = "session-mibs";
}

Bfd::SessionMibs::SessionMib::~SessionMib()
{
}

bool Bfd::SessionMibs::SessionMib::has_data() const
{
    return discriminator.is_set
	|| desired_min_tx_interval.is_set
	|| detection_multiplier.is_set
	|| int_handle.is_set
	|| interface_name.is_set
	|| last_down_diag.is_set
	|| last_down_time_nsec.is_set
	|| last_down_time_sec.is_set
	|| last_time_cached.is_set
	|| last_up_time_nsec.is_set
	|| last_up_time_sec.is_set
	|| local_discriminator.is_set
	|| pkt_in.is_set
	|| pkt_out.is_set
	|| remote_discriminator.is_set
	|| required_min_rx_echo_interval.is_set
	|| required_min_rx_interval.is_set
	|| session_state.is_set
	|| sessionversion.is_set
	|| trap_bitmap.is_set
	|| up_counter.is_set
	|| (dest_address !=  nullptr && dest_address->has_data());
}

bool Bfd::SessionMibs::SessionMib::has_operation() const
{
    return is_set(operation)
	|| is_set(discriminator.operation)
	|| is_set(desired_min_tx_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(int_handle.operation)
	|| is_set(interface_name.operation)
	|| is_set(last_down_diag.operation)
	|| is_set(last_down_time_nsec.operation)
	|| is_set(last_down_time_sec.operation)
	|| is_set(last_time_cached.operation)
	|| is_set(last_up_time_nsec.operation)
	|| is_set(last_up_time_sec.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(pkt_in.operation)
	|| is_set(pkt_out.operation)
	|| is_set(remote_discriminator.operation)
	|| is_set(required_min_rx_echo_interval.operation)
	|| is_set(required_min_rx_interval.operation)
	|| is_set(session_state.operation)
	|| is_set(sessionversion.operation)
	|| is_set(trap_bitmap.operation)
	|| is_set(up_counter.operation)
	|| (dest_address !=  nullptr && dest_address->has_operation());
}

std::string Bfd::SessionMibs::SessionMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-mib" <<"[discriminator='" <<discriminator <<"']";

    return path_buffer.str();

}

EntityPath Bfd::SessionMibs::SessionMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-mibs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminator.is_set || is_set(discriminator.operation)) leaf_name_data.push_back(discriminator.get_name_leafdata());
    if (desired_min_tx_interval.is_set || is_set(desired_min_tx_interval.operation)) leaf_name_data.push_back(desired_min_tx_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (int_handle.is_set || is_set(int_handle.operation)) leaf_name_data.push_back(int_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (last_down_diag.is_set || is_set(last_down_diag.operation)) leaf_name_data.push_back(last_down_diag.get_name_leafdata());
    if (last_down_time_nsec.is_set || is_set(last_down_time_nsec.operation)) leaf_name_data.push_back(last_down_time_nsec.get_name_leafdata());
    if (last_down_time_sec.is_set || is_set(last_down_time_sec.operation)) leaf_name_data.push_back(last_down_time_sec.get_name_leafdata());
    if (last_time_cached.is_set || is_set(last_time_cached.operation)) leaf_name_data.push_back(last_time_cached.get_name_leafdata());
    if (last_up_time_nsec.is_set || is_set(last_up_time_nsec.operation)) leaf_name_data.push_back(last_up_time_nsec.get_name_leafdata());
    if (last_up_time_sec.is_set || is_set(last_up_time_sec.operation)) leaf_name_data.push_back(last_up_time_sec.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (pkt_in.is_set || is_set(pkt_in.operation)) leaf_name_data.push_back(pkt_in.get_name_leafdata());
    if (pkt_out.is_set || is_set(pkt_out.operation)) leaf_name_data.push_back(pkt_out.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.operation)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (required_min_rx_echo_interval.is_set || is_set(required_min_rx_echo_interval.operation)) leaf_name_data.push_back(required_min_rx_echo_interval.get_name_leafdata());
    if (required_min_rx_interval.is_set || is_set(required_min_rx_interval.operation)) leaf_name_data.push_back(required_min_rx_interval.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.operation)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (sessionversion.is_set || is_set(sessionversion.operation)) leaf_name_data.push_back(sessionversion.get_name_leafdata());
    if (trap_bitmap.is_set || is_set(trap_bitmap.operation)) leaf_name_data.push_back(trap_bitmap.get_name_leafdata());
    if (up_counter.is_set || is_set(up_counter.operation)) leaf_name_data.push_back(up_counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionMibs::SessionMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dest-address")
    {
        if(dest_address != nullptr)
        {
            children["dest-address"] = dest_address;
        }
        else
        {
            dest_address = std::make_shared<Bfd::SessionMibs::SessionMib::DestAddress>();
            dest_address->parent = this;
            children["dest-address"] = dest_address;
        }
        return children.at("dest-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionMibs::SessionMib::get_children()
{
    if(children.find("dest-address") == children.end())
    {
        if(dest_address != nullptr)
        {
            children["dest-address"] = dest_address;
        }
    }

    return children;
}

void Bfd::SessionMibs::SessionMib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discriminator")
    {
        discriminator = value;
    }
    if(value_path == "desired-min-tx-interval")
    {
        desired_min_tx_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "int-handle")
    {
        int_handle = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "last-down-diag")
    {
        last_down_diag = value;
    }
    if(value_path == "last-down-time-nsec")
    {
        last_down_time_nsec = value;
    }
    if(value_path == "last-down-time-sec")
    {
        last_down_time_sec = value;
    }
    if(value_path == "last-time-cached")
    {
        last_time_cached = value;
    }
    if(value_path == "last-up-time-nsec")
    {
        last_up_time_nsec = value;
    }
    if(value_path == "last-up-time-sec")
    {
        last_up_time_sec = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "pkt-in")
    {
        pkt_in = value;
    }
    if(value_path == "pkt-out")
    {
        pkt_out = value;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
    }
    if(value_path == "required-min-rx-echo-interval")
    {
        required_min_rx_echo_interval = value;
    }
    if(value_path == "required-min-rx-interval")
    {
        required_min_rx_interval = value;
    }
    if(value_path == "session-state")
    {
        session_state = value;
    }
    if(value_path == "sessionversion")
    {
        sessionversion = value;
    }
    if(value_path == "trap-bitmap")
    {
        trap_bitmap = value;
    }
    if(value_path == "up-counter")
    {
        up_counter = value;
    }
}

Bfd::SessionMibs::SessionMib::DestAddress::DestAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "dest-address"; yang_parent_name = "session-mib";
}

Bfd::SessionMibs::SessionMib::DestAddress::~DestAddress()
{
}

bool Bfd::SessionMibs::SessionMib::DestAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::SessionMibs::SessionMib::DestAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::SessionMibs::SessionMib::DestAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-address";

    return path_buffer.str();

}

EntityPath Bfd::SessionMibs::SessionMib::DestAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestAddress' in Cisco_IOS_XR_ip_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionMibs::SessionMib::DestAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionMibs::SessionMib::DestAddress::get_children()
{
    return children;
}

void Bfd::SessionMibs::SessionMib::DestAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv6MultiHopSummary::Ipv6MultiHopSummary()
    :
    session_state(std::make_shared<Bfd::Ipv6MultiHopSummary::SessionState>())
{
    session_state->parent = this;
    children["session-state"] = session_state;

    yang_name = "ipv6-multi-hop-summary"; yang_parent_name = "bfd";
}

Bfd::Ipv6MultiHopSummary::~Ipv6MultiHopSummary()
{
}

bool Bfd::Ipv6MultiHopSummary::has_data() const
{
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv6MultiHopSummary::has_operation() const
{
    return is_set(operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv6MultiHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-summary";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-state")
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
        else
        {
            session_state = std::make_shared<Bfd::Ipv6MultiHopSummary::SessionState>();
            session_state->parent = this;
            children["session-state"] = session_state;
        }
        return children.at("session-state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSummary::get_children()
{
    if(children.find("session-state") == children.end())
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
    }

    return children;
}

void Bfd::Ipv6MultiHopSummary::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6MultiHopSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "ipv6-multi-hop-summary";
}

Bfd::Ipv6MultiHopSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv6MultiHopSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv6MultiHopSummary::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::Ipv6MultiHopSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSummary::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSummary::SessionState::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSummary::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::LabelSummaryNodes::LabelSummaryNodes()
{
    yang_name = "label-summary-nodes"; yang_parent_name = "bfd";
}

Bfd::LabelSummaryNodes::~LabelSummaryNodes()
{
}

bool Bfd::LabelSummaryNodes::has_data() const
{
    for (std::size_t index=0; index<label_summary_node.size(); index++)
    {
        if(label_summary_node[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::LabelSummaryNodes::has_operation() const
{
    for (std::size_t index=0; index<label_summary_node.size(); index++)
    {
        if(label_summary_node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::LabelSummaryNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-nodes";

    return path_buffer.str();

}

EntityPath Bfd::LabelSummaryNodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSummaryNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-summary-node")
    {
        for(auto const & c : label_summary_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::LabelSummaryNodes::LabelSummaryNode>();
        c->parent = this;
        label_summary_node.push_back(std::move(c));
        children[segment_path] = label_summary_node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSummaryNodes::get_children()
{
    for (auto const & c : label_summary_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::LabelSummaryNodes::set_value(const std::string & value_path, std::string value)
{
}

Bfd::LabelSummaryNodes::LabelSummaryNode::LabelSummaryNode()
    :
    location_name{YType::str, "location-name"}
    	,
    session_state(std::make_shared<Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState>())
{
    session_state->parent = this;
    children["session-state"] = session_state;

    yang_name = "label-summary-node"; yang_parent_name = "label-summary-nodes";
}

Bfd::LabelSummaryNodes::LabelSummaryNode::~LabelSummaryNode()
{
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::has_data() const
{
    return location_name.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::has_operation() const
{
    return is_set(operation)
	|| is_set(location_name.operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::LabelSummaryNodes::LabelSummaryNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-node" <<"[location-name='" <<location_name <<"']";

    return path_buffer.str();

}

EntityPath Bfd::LabelSummaryNodes::LabelSummaryNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-summary-nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.operation)) leaf_name_data.push_back(location_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSummaryNodes::LabelSummaryNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-state")
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
        else
        {
            session_state = std::make_shared<Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState>();
            session_state->parent = this;
            children["session-state"] = session_state;
        }
        return children.at("session-state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSummaryNodes::LabelSummaryNode::get_children()
{
    if(children.find("session-state") == children.end())
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
    }

    return children;
}

void Bfd::LabelSummaryNodes::LabelSummaryNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location-name")
    {
        location_name = value;
    }
}

Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "label-summary-node";
}

Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::~SessionState()
{
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::has_data() const
{
    return down_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(retry_count.operation)
	|| is_set(standby_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

EntityPath Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionState' in Cisco_IOS_XR_ip_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.operation)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.operation)) leaf_name_data.push_back(standby_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::get_children()
{
    return children;
}

void Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBriefs()
{
    yang_name = "ipv6-multi-hop-session-briefs"; yang_parent_name = "bfd";
}

Bfd::Ipv6MultiHopSessionBriefs::~Ipv6MultiHopSessionBriefs()
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::has_data() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_session_brief.size(); index++)
    {
        if(ipv6_multi_hop_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6MultiHopSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_session_brief.size(); index++)
    {
        if(ipv6_multi_hop_session_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv6MultiHopSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-session-briefs";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-multi-hop-session-brief")
    {
        for(auto const & c : ipv6_multi_hop_session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief>();
        c->parent = this;
        ipv6_multi_hop_session_brief.push_back(std::move(c));
        children[segment_path] = ipv6_multi_hop_session_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionBriefs::get_children()
{
    for (auto const & c : ipv6_multi_hop_session_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionBriefs::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::Ipv6MultiHopSessionBrief()
    :
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_flags{YType::uint32, "session-flags"},
    session_subtype{YType::str, "session-subtype"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    state{YType::enumeration, "state"},
    vrf_name{YType::str, "vrf-name"}
    	,
    status_brief_information(std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;
    children["status-brief-information"] = status_brief_information;

    yang_name = "ipv6-multi-hop-session-brief"; yang_parent_name = "ipv6-multi-hop-session-briefs";
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::~Ipv6MultiHopSessionBrief()
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::has_data() const
{
    return destination_address.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_flags.is_set
	|| session_subtype.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| state.is_set
	|| vrf_name.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(location.operation)
	|| is_set(node_id.operation)
	|| is_set(session_flags.operation)
	|| is_set(session_subtype.operation)
	|| is_set(session_type.operation)
	|| is_set(source_address.operation)
	|| is_set(state.operation)
	|| is_set(vrf_name.operation)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-session-brief";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.operation)) leaf_name_data.push_back(session_flags.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
        else
        {
            status_brief_information = std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation>();
            status_brief_information->parent = this;
            children["status-brief-information"] = status_brief_information;
        }
        return children.at("status-brief-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::get_children()
{
    if(children.find("status-brief-information") == children.end())
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    children["async-interval-multiplier"] = async_interval_multiplier;

    echo_interval_multiplier->parent = this;
    children["echo-interval-multiplier"] = echo_interval_multiplier;

    yang_name = "status-brief-information"; yang_parent_name = "ipv6-multi-hop-session-brief";
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-briefs/ipv6-multi-hop-session-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        else
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
            async_interval_multiplier->parent = this;
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        return children.at("async-interval-multiplier");
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        else
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
            echo_interval_multiplier->parent = this;
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        return children.at("echo-interval-multiplier");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::get_children()
{
    if(children.find("async-interval-multiplier") == children.end())
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
    }

    if(children.find("echo-interval-multiplier") == children.end())
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-briefs/ipv6-multi-hop-session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-briefs/ipv6-multi-hop-session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::SessionBriefs::SessionBriefs()
{
    yang_name = "session-briefs"; yang_parent_name = "bfd";
}

Bfd::SessionBriefs::~SessionBriefs()
{
}

bool Bfd::SessionBriefs::has_data() const
{
    for (std::size_t index=0; index<session_brief.size(); index++)
    {
        if(session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::SessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<session_brief.size(); index++)
    {
        if(session_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::SessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-briefs";

    return path_buffer.str();

}

EntityPath Bfd::SessionBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-brief")
    {
        for(auto const & c : session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::SessionBriefs::SessionBrief>();
        c->parent = this;
        session_brief.push_back(std::move(c));
        children[segment_path] = session_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionBriefs::get_children()
{
    for (auto const & c : session_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::SessionBriefs::set_value(const std::string & value_path, std::string value)
{
}

Bfd::SessionBriefs::SessionBrief::SessionBrief()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_flags{YType::uint32, "session-flags"},
    session_subtype{YType::str, "session-subtype"},
    session_type{YType::enumeration, "session-type"},
    state{YType::enumeration, "state"}
    	,
    status_brief_information(std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;
    children["status-brief-information"] = status_brief_information;

    yang_name = "session-brief"; yang_parent_name = "session-briefs";
}

Bfd::SessionBriefs::SessionBrief::~SessionBrief()
{
}

bool Bfd::SessionBriefs::SessionBrief::has_data() const
{
    return destination_address.is_set
	|| interface_name.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_flags.is_set
	|| session_subtype.is_set
	|| session_type.is_set
	|| state.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::SessionBriefs::SessionBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(location.operation)
	|| is_set(node_id.operation)
	|| is_set(session_flags.operation)
	|| is_set(session_subtype.operation)
	|| is_set(session_type.operation)
	|| is_set(state.operation)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::SessionBriefs::SessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-brief";

    return path_buffer.str();

}

EntityPath Bfd::SessionBriefs::SessionBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.operation)) leaf_name_data.push_back(session_flags.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionBriefs::SessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
        else
        {
            status_brief_information = std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation>();
            status_brief_information->parent = this;
            children["status-brief-information"] = status_brief_information;
        }
        return children.at("status-brief-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionBriefs::SessionBrief::get_children()
{
    if(children.find("status-brief-information") == children.end())
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
    }

    return children;
}

void Bfd::SessionBriefs::SessionBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    children["async-interval-multiplier"] = async_interval_multiplier;

    echo_interval_multiplier->parent = this;
    children["echo-interval-multiplier"] = echo_interval_multiplier;

    yang_name = "status-brief-information"; yang_parent_name = "session-brief";
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

EntityPath Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-briefs/session-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        else
        {
            async_interval_multiplier = std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
            async_interval_multiplier->parent = this;
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        return children.at("async-interval-multiplier");
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        else
        {
            echo_interval_multiplier = std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
            echo_interval_multiplier->parent = this;
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        return children.at("echo-interval-multiplier");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::get_children()
{
    if(children.find("async-interval-multiplier") == children.end())
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
    }

    if(children.find("echo-interval-multiplier") == children.end())
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
    }

    return children;
}

void Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-briefs/session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-briefs/session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummaries()
{
    yang_name = "ipv6-single-hop-node-location-summaries"; yang_parent_name = "bfd";
}

Bfd::Ipv6SingleHopNodeLocationSummaries::~Ipv6SingleHopNodeLocationSummaries()
{
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv6_single_hop_node_location_summary.size(); index++)
    {
        if(ipv6_single_hop_node_location_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_node_location_summary.size(); index++)
    {
        if(ipv6_single_hop_node_location_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv6SingleHopNodeLocationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-node-location-summaries";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopNodeLocationSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopNodeLocationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-single-hop-node-location-summary")
    {
        for(auto const & c : ipv6_single_hop_node_location_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary>();
        c->parent = this;
        ipv6_single_hop_node_location_summary.push_back(std::move(c));
        children[segment_path] = ipv6_single_hop_node_location_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopNodeLocationSummaries::get_children()
{
    for (auto const & c : ipv6_single_hop_node_location_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopNodeLocationSummaries::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::Ipv6SingleHopNodeLocationSummary()
    :
    location{YType::str, "location"}
    	,
    session_state(std::make_shared<Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState>())
{
    session_state->parent = this;
    children["session-state"] = session_state;

    yang_name = "ipv6-single-hop-node-location-summary"; yang_parent_name = "ipv6-single-hop-node-location-summaries";
}

Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::~Ipv6SingleHopNodeLocationSummary()
{
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::has_data() const
{
    return location.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(location.operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-node-location-summary" <<"[location='" <<location <<"']";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-node-location-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-state")
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
        else
        {
            session_state = std::make_shared<Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState>();
            session_state->parent = this;
            children["session-state"] = session_state;
        }
        return children.at("session-state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::get_children()
{
    if(children.find("session-state") == children.end())
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location")
    {
        location = value;
    }
}

Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "ipv6-single-hop-node-location-summary";
}

Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(retry_count.operation)
	|| is_set(standby_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionState' in Cisco_IOS_XR_ip_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.operation)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.operation)) leaf_name_data.push_back(standby_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::Summary::Summary()
    :
    session_state(std::make_shared<Bfd::Summary::SessionState>())
{
    session_state->parent = this;
    children["session-state"] = session_state;

    yang_name = "summary"; yang_parent_name = "bfd";
}

Bfd::Summary::~Summary()
{
}

bool Bfd::Summary::has_data() const
{
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Summary::has_operation() const
{
    return is_set(operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Bfd::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-state")
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
        else
        {
            session_state = std::make_shared<Bfd::Summary::SessionState>();
            session_state->parent = this;
            children["session-state"] = session_state;
        }
        return children.at("session-state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Summary::get_children()
{
    if(children.find("session-state") == children.end())
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
    }

    return children;
}

void Bfd::Summary::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Summary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "summary";
}

Bfd::Summary::SessionState::~SessionState()
{
}

bool Bfd::Summary::SessionState::has_data() const
{
    return down_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Summary::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::Summary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

EntityPath Bfd::Summary::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Summary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Summary::SessionState::get_children()
{
    return children;
}

void Bfd::Summary::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummaries()
{
    yang_name = "ipv4bfd-mplste-tail-node-summaries"; yang_parent_name = "bfd";
}

Bfd::Ipv4BfdMplsteTailNodeSummaries::~Ipv4BfdMplsteTailNodeSummaries()
{
}

bool Bfd::Ipv4BfdMplsteTailNodeSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv4bfd_mplste_tail_node_summary.size(); index++)
    {
        if(ipv4bfd_mplste_tail_node_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4BfdMplsteTailNodeSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4bfd_mplste_tail_node_summary.size(); index++)
    {
        if(ipv4bfd_mplste_tail_node_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4BfdMplsteTailNodeSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bfd-mplste-tail-node-summaries";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfdMplsteTailNodeSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfdMplsteTailNodeSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4bfd-mplste-tail-node-summary")
    {
        for(auto const & c : ipv4bfd_mplste_tail_node_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary>();
        c->parent = this;
        ipv4bfd_mplste_tail_node_summary.push_back(std::move(c));
        children[segment_path] = ipv4bfd_mplste_tail_node_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfdMplsteTailNodeSummaries::get_children()
{
    for (auto const & c : ipv4bfd_mplste_tail_node_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv4BfdMplsteTailNodeSummaries::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::Ipv4BfdMplsteTailNodeSummary()
    :
    location_name{YType::str, "location-name"}
    	,
    session_state(std::make_shared<Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState>())
{
    session_state->parent = this;
    children["session-state"] = session_state;

    yang_name = "ipv4bfd-mplste-tail-node-summary"; yang_parent_name = "ipv4bfd-mplste-tail-node-summaries";
}

Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::~Ipv4BfdMplsteTailNodeSummary()
{
}

bool Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::has_data() const
{
    return location_name.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(location_name.operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bfd-mplste-tail-node-summary" <<"[location-name='" <<location_name <<"']";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bfd-mplste-tail-node-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.operation)) leaf_name_data.push_back(location_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-state")
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
        else
        {
            session_state = std::make_shared<Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState>();
            session_state->parent = this;
            children["session-state"] = session_state;
        }
        return children.at("session-state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::get_children()
{
    if(children.find("session-state") == children.end())
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
    }

    return children;
}

void Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location-name")
    {
        location_name = value;
    }
}

Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "ipv4bfd-mplste-tail-node-summary";
}

Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(retry_count.operation)
	|| is_set(standby_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionState' in Cisco_IOS_XR_ip_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.operation)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.operation)) leaf_name_data.push_back(standby_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::get_children()
{
    return children;
}

void Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummaries()
{
    yang_name = "ipv4-single-hop-location-summaries"; yang_parent_name = "bfd";
}

Bfd::Ipv4SingleHopLocationSummaries::~Ipv4SingleHopLocationSummaries()
{
}

bool Bfd::Ipv4SingleHopLocationSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv4_single_hop_location_summary.size(); index++)
    {
        if(ipv4_single_hop_location_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4SingleHopLocationSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4_single_hop_location_summary.size(); index++)
    {
        if(ipv4_single_hop_location_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4SingleHopLocationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-location-summaries";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4SingleHopLocationSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopLocationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-single-hop-location-summary")
    {
        for(auto const & c : ipv4_single_hop_location_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary>();
        c->parent = this;
        ipv4_single_hop_location_summary.push_back(std::move(c));
        children[segment_path] = ipv4_single_hop_location_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4SingleHopLocationSummaries::get_children()
{
    for (auto const & c : ipv4_single_hop_location_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv4SingleHopLocationSummaries::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::Ipv4SingleHopLocationSummary()
    :
    location_name{YType::str, "location-name"}
    	,
    session_state(std::make_shared<Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState>())
{
    session_state->parent = this;
    children["session-state"] = session_state;

    yang_name = "ipv4-single-hop-location-summary"; yang_parent_name = "ipv4-single-hop-location-summaries";
}

Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::~Ipv4SingleHopLocationSummary()
{
}

bool Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::has_data() const
{
    return location_name.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(location_name.operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-location-summary" <<"[location-name='" <<location_name <<"']";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-location-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.operation)) leaf_name_data.push_back(location_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-state")
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
        else
        {
            session_state = std::make_shared<Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState>();
            session_state->parent = this;
            children["session-state"] = session_state;
        }
        return children.at("session-state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::get_children()
{
    if(children.find("session-state") == children.end())
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
    }

    return children;
}

void Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location-name")
    {
        location_name = value;
    }
}

Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "ipv4-single-hop-location-summary";
}

Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(retry_count.operation)
	|| is_set(standby_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionState' in Cisco_IOS_XR_ip_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.operation)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.operation)) leaf_name_data.push_back(standby_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::get_children()
{
    return children;
}

void Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNodes()
{
    yang_name = "ipv4bfd-mplste-head-summary-nodes"; yang_parent_name = "bfd";
}

Bfd::Ipv4BfdMplsteHeadSummaryNodes::~Ipv4BfdMplsteHeadSummaryNodes()
{
}

bool Bfd::Ipv4BfdMplsteHeadSummaryNodes::has_data() const
{
    for (std::size_t index=0; index<ipv4bfd_mplste_head_summary_node.size(); index++)
    {
        if(ipv4bfd_mplste_head_summary_node[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4BfdMplsteHeadSummaryNodes::has_operation() const
{
    for (std::size_t index=0; index<ipv4bfd_mplste_head_summary_node.size(); index++)
    {
        if(ipv4bfd_mplste_head_summary_node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4BfdMplsteHeadSummaryNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bfd-mplste-head-summary-nodes";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfdMplsteHeadSummaryNodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfdMplsteHeadSummaryNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4bfd-mplste-head-summary-node")
    {
        for(auto const & c : ipv4bfd_mplste_head_summary_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode>();
        c->parent = this;
        ipv4bfd_mplste_head_summary_node.push_back(std::move(c));
        children[segment_path] = ipv4bfd_mplste_head_summary_node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfdMplsteHeadSummaryNodes::get_children()
{
    for (auto const & c : ipv4bfd_mplste_head_summary_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv4BfdMplsteHeadSummaryNodes::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::Ipv4BfdMplsteHeadSummaryNode()
    :
    location_name{YType::str, "location-name"}
    	,
    session_state(std::make_shared<Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState>())
{
    session_state->parent = this;
    children["session-state"] = session_state;

    yang_name = "ipv4bfd-mplste-head-summary-node"; yang_parent_name = "ipv4bfd-mplste-head-summary-nodes";
}

Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::~Ipv4BfdMplsteHeadSummaryNode()
{
}

bool Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::has_data() const
{
    return location_name.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::has_operation() const
{
    return is_set(operation)
	|| is_set(location_name.operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bfd-mplste-head-summary-node" <<"[location-name='" <<location_name <<"']";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bfd-mplste-head-summary-nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.operation)) leaf_name_data.push_back(location_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-state")
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
        else
        {
            session_state = std::make_shared<Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState>();
            session_state->parent = this;
            children["session-state"] = session_state;
        }
        return children.at("session-state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::get_children()
{
    if(children.find("session-state") == children.end())
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
    }

    return children;
}

void Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location-name")
    {
        location_name = value;
    }
}

Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "ipv4bfd-mplste-head-summary-node";
}

Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::~SessionState()
{
}

bool Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::has_data() const
{
    return down_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(retry_count.operation)
	|| is_set(standby_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionState' in Cisco_IOS_XR_ip_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.operation)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.operation)) leaf_name_data.push_back(standby_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::get_children()
{
    return children;
}

void Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetails()
{
    yang_name = "label-session-details"; yang_parent_name = "bfd";
}

Bfd::LabelSessionDetails::~LabelSessionDetails()
{
}

bool Bfd::LabelSessionDetails::has_data() const
{
    for (std::size_t index=0; index<label_session_detail.size(); index++)
    {
        if(label_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::LabelSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<label_session_detail.size(); index++)
    {
        if(label_session_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::LabelSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-session-details";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-session-detail")
    {
        for(auto const & c : label_session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail>();
        c->parent = this;
        label_session_detail.push_back(std::move(c));
        children[segment_path] = label_session_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::get_children()
{
    for (auto const & c : label_session_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::LabelSessionDetails::set_value(const std::string & value_path, std::string value)
{
}

Bfd::LabelSessionDetails::LabelSessionDetail::LabelSessionDetail()
    :
    incoming_label{YType::int32, "incoming-label"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"}
    	,
    lsp_ping_info(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo>())
	,mp_download_state(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState>())
	,status_information(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation>())
{
    lsp_ping_info->parent = this;
    children["lsp-ping-info"] = lsp_ping_info;

    mp_download_state->parent = this;
    children["mp-download-state"] = mp_download_state;

    status_information->parent = this;
    children["status-information"] = status_information;

    yang_name = "label-session-detail"; yang_parent_name = "label-session-details";
}

Bfd::LabelSessionDetails::LabelSessionDetail::~LabelSessionDetail()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::has_data() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return incoming_label.is_set
	|| interface_name.is_set
	|| location.is_set
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (status_information !=  nullptr && status_information->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(incoming_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(location.operation)
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (status_information !=  nullptr && status_information->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-session-detail";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(std::move(c));
        children[segment_path] = association_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info != nullptr)
        {
            children["lsp-ping-info"] = lsp_ping_info;
        }
        else
        {
            lsp_ping_info = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo>();
            lsp_ping_info->parent = this;
            children["lsp-ping-info"] = lsp_ping_info;
        }
        return children.at("lsp-ping-info");
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state != nullptr)
        {
            children["mp-download-state"] = mp_download_state;
        }
        else
        {
            mp_download_state = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState>();
            mp_download_state->parent = this;
            children["mp-download-state"] = mp_download_state;
        }
        return children.at("mp-download-state");
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(std::move(c));
        children[segment_path] = owner_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "status-information")
    {
        if(status_information != nullptr)
        {
            children["status-information"] = status_information;
        }
        else
        {
            status_information = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation>();
            status_information->parent = this;
            children["status-information"] = status_information;
        }
        return children.at("status-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::get_children()
{
    for (auto const & c : association_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("lsp-ping-info") == children.end())
    {
        if(lsp_ping_info != nullptr)
        {
            children["lsp-ping-info"] = lsp_ping_info;
        }
    }

    if(children.find("mp-download-state") == children.end())
    {
        if(mp_download_state != nullptr)
        {
            children["mp-download-state"] = mp_download_state;
        }
    }

    for (auto const & c : owner_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("status-information") == children.end())
    {
        if(status_information != nullptr)
        {
            children["status-information"] = status_information;
        }
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusInformation()
    :
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    internal_label{YType::uint32, "internal-label"},
    latency_average{YType::uint32, "latency-average"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_number{YType::uint32, "latency-number"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    session_subtype{YType::str, "session-subtype"},
    sessiontype{YType::enumeration, "sessiontype"},
    state{YType::enumeration, "state"},
    to_up_state_count{YType::uint32, "to-up-state-count"}
    	,
    async_receive_statistics(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,async_transmit_statistics(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics>())
	,last_state_change(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange>())
	,receive_packet(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket>())
	,source_address(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress>())
	,status_brief_information(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation>())
	,transmit_packet(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket>())
{
    async_receive_statistics->parent = this;
    children["async-receive-statistics"] = async_receive_statistics;

    async_transmit_statistics->parent = this;
    children["async-transmit-statistics"] = async_transmit_statistics;

    echo_received_statistics->parent = this;
    children["echo-received-statistics"] = echo_received_statistics;

    echo_transmit_statistics->parent = this;
    children["echo-transmit-statistics"] = echo_transmit_statistics;

    last_state_change->parent = this;
    children["last-state-change"] = last_state_change;

    receive_packet->parent = this;
    children["receive-packet"] = receive_packet;

    source_address->parent = this;
    children["source-address"] = source_address;

    status_brief_information->parent = this;
    children["status-brief-information"] = status_brief_information;

    transmit_packet->parent = this;
    children["transmit-packet"] = transmit_packet;

    yang_name = "status-information"; yang_parent_name = "label-session-detail";
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::has_data() const
{
    return desired_minimum_echo_transmit_interval.is_set
	|| internal_label.is_set
	|| latency_average.is_set
	|| latency_maximum.is_set
	|| latency_minimum.is_set
	|| latency_number.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| remote_discriminator.is_set
	|| remote_negotiated_interval.is_set
	|| session_subtype.is_set
	|| sessiontype.is_set
	|| state.is_set
	|| to_up_state_count.is_set
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(desired_minimum_echo_transmit_interval.operation)
	|| is_set(internal_label.operation)
	|| is_set(latency_average.operation)
	|| is_set(latency_maximum.operation)
	|| is_set(latency_minimum.operation)
	|| is_set(latency_number.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(node_id.operation)
	|| is_set(remote_discriminator.operation)
	|| is_set(remote_negotiated_interval.operation)
	|| is_set(session_subtype.operation)
	|| is_set(sessiontype.operation)
	|| is_set(state.operation)
	|| is_set(to_up_state_count.operation)
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.operation)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.operation)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.operation)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.operation)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.operation)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.operation)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.operation)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics != nullptr)
        {
            children["async-receive-statistics"] = async_receive_statistics;
        }
        else
        {
            async_receive_statistics = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics>();
            async_receive_statistics->parent = this;
            children["async-receive-statistics"] = async_receive_statistics;
        }
        return children.at("async-receive-statistics");
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics != nullptr)
        {
            children["async-transmit-statistics"] = async_transmit_statistics;
        }
        else
        {
            async_transmit_statistics = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics>();
            async_transmit_statistics->parent = this;
            children["async-transmit-statistics"] = async_transmit_statistics;
        }
        return children.at("async-transmit-statistics");
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics != nullptr)
        {
            children["echo-received-statistics"] = echo_received_statistics;
        }
        else
        {
            echo_received_statistics = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics>();
            echo_received_statistics->parent = this;
            children["echo-received-statistics"] = echo_received_statistics;
        }
        return children.at("echo-received-statistics");
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics != nullptr)
        {
            children["echo-transmit-statistics"] = echo_transmit_statistics;
        }
        else
        {
            echo_transmit_statistics = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics>();
            echo_transmit_statistics->parent = this;
            children["echo-transmit-statistics"] = echo_transmit_statistics;
        }
        return children.at("echo-transmit-statistics");
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change != nullptr)
        {
            children["last-state-change"] = last_state_change;
        }
        else
        {
            last_state_change = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange>();
            last_state_change->parent = this;
            children["last-state-change"] = last_state_change;
        }
        return children.at("last-state-change");
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet != nullptr)
        {
            children["receive-packet"] = receive_packet;
        }
        else
        {
            receive_packet = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket>();
            receive_packet->parent = this;
            children["receive-packet"] = receive_packet;
        }
        return children.at("receive-packet");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
        else
        {
            status_brief_information = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation>();
            status_brief_information->parent = this;
            children["status-brief-information"] = status_brief_information;
        }
        return children.at("status-brief-information");
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet != nullptr)
        {
            children["transmit-packet"] = transmit_packet;
        }
        else
        {
            transmit_packet = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket>();
            transmit_packet->parent = this;
            children["transmit-packet"] = transmit_packet;
        }
        return children.at("transmit-packet");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::get_children()
{
    if(children.find("async-receive-statistics") == children.end())
    {
        if(async_receive_statistics != nullptr)
        {
            children["async-receive-statistics"] = async_receive_statistics;
        }
    }

    if(children.find("async-transmit-statistics") == children.end())
    {
        if(async_transmit_statistics != nullptr)
        {
            children["async-transmit-statistics"] = async_transmit_statistics;
        }
    }

    if(children.find("echo-received-statistics") == children.end())
    {
        if(echo_received_statistics != nullptr)
        {
            children["echo-received-statistics"] = echo_received_statistics;
        }
    }

    if(children.find("echo-transmit-statistics") == children.end())
    {
        if(echo_transmit_statistics != nullptr)
        {
            children["echo-transmit-statistics"] = echo_transmit_statistics;
        }
    }

    if(children.find("last-state-change") == children.end())
    {
        if(last_state_change != nullptr)
        {
            children["last-state-change"] = last_state_change;
        }
    }

    if(children.find("receive-packet") == children.end())
    {
        if(receive_packet != nullptr)
        {
            children["receive-packet"] = receive_packet;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    if(children.find("status-brief-information") == children.end())
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
    }

    if(children.find("transmit-packet") == children.end())
    {
        if(transmit_packet != nullptr)
        {
            children["transmit-packet"] = transmit_packet;
        }
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "source-address"; yang_parent_name = "status-information";
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "last-state-change"; yang_parent_name = "status-information";
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(minutes.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "transmit-packet"; yang_parent_name = "status-information";
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "receive-packet"; yang_parent_name = "status-information";
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    children["async-interval-multiplier"] = async_interval_multiplier;

    echo_interval_multiplier->parent = this;
    children["echo-interval-multiplier"] = echo_interval_multiplier;

    yang_name = "status-brief-information"; yang_parent_name = "status-information";
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        else
        {
            async_interval_multiplier = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
            async_interval_multiplier->parent = this;
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        return children.at("async-interval-multiplier");
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        else
        {
            echo_interval_multiplier = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
            echo_interval_multiplier->parent = this;
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        return children.at("echo-interval-multiplier");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::get_children()
{
    if(children.find("async-interval-multiplier") == children.end())
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
    }

    if(children.find("echo-interval-multiplier") == children.end())
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-receive-statistics"; yang_parent_name = "status-information";
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-received-statistics"; yang_parent_name = "status-information";
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;
    children["change-time"] = change_time;

    yang_name = "mp-download-state"; yang_parent_name = "label-session-detail";
}

Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(operation)
	|| is_set(mp_download_state.operation)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.operation)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "change-time")
    {
        if(change_time != nullptr)
        {
            children["change-time"] = change_time;
        }
        else
        {
            change_time = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime>();
            change_time->parent = this;
            children["change-time"] = change_time;
        }
        return children.at("change-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::get_children()
{
    if(children.find("change-time") == children.end())
    {
        if(change_time != nullptr)
        {
            children["change-time"] = change_time;
        }
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "change-time"; yang_parent_name = "mp-download-state";
}

Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/mp-download-state/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, std::string value)
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

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"}
    	,
    lsp_ping_rx_last_time(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_tx_last_time(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime>())
{
    lsp_ping_rx_last_time->parent = this;
    children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;

    lsp_ping_tx_last_error_time->parent = this;
    children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;

    lsp_ping_tx_last_time->parent = this;
    children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;

    yang_name = "lsp-ping-info"; yang_parent_name = "label-session-detail";
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_last_output.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_ping_rx_count.operation)
	|| is_set(lsp_ping_rx_last_code.operation)
	|| is_set(lsp_ping_rx_last_discr.operation)
	|| is_set(lsp_ping_rx_last_output.operation)
	|| is_set(lsp_ping_rx_last_subcode.operation)
	|| is_set(lsp_ping_tx_count.operation)
	|| is_set(lsp_ping_tx_error_count.operation)
	|| is_set(lsp_ping_tx_last_error_rc.operation)
	|| is_set(lsp_ping_tx_last_rc.operation)
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.operation)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.operation)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.operation)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.operation)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.operation)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.operation)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.operation)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time != nullptr)
        {
            children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
        }
        else
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime>();
            lsp_ping_rx_last_time->parent = this;
            children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
        }
        return children.at("lsp-ping-rx-last-time");
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time != nullptr)
        {
            children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
        }
        else
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
            lsp_ping_tx_last_error_time->parent = this;
            children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
        }
        return children.at("lsp-ping-tx-last-error-time");
    }

    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time != nullptr)
        {
            children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
        }
        else
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime>();
            lsp_ping_tx_last_time->parent = this;
            children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
        }
        return children.at("lsp-ping-tx-last-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::get_children()
{
    if(children.find("lsp-ping-rx-last-time") == children.end())
    {
        if(lsp_ping_rx_last_time != nullptr)
        {
            children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
        }
    }

    if(children.find("lsp-ping-tx-last-error-time") == children.end())
    {
        if(lsp_ping_tx_last_error_time != nullptr)
        {
            children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
        }
    }

    if(children.find("lsp-ping-tx-last-time") == children.end())
    {
        if(lsp_ping_tx_last_time != nullptr)
        {
            children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
        }
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/lsp-ping-info/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, std::string value)
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

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/lsp-ping-info/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, std::string value)
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

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/lsp-ping-info/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, std::string value)
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

Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "label-session-detail";
}

Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::AssociationInformation()
    :
    local_discriminator{YType::uint32, "local-discriminator"},
    sessiontype{YType::enumeration, "sessiontype"}
    	,
    session_key(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey>())
{
    session_key->parent = this;
    children["session-key"] = session_key;

    yang_name = "association-information"; yang_parent_name = "label-session-detail";
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return local_discriminator.is_set
	|| sessiontype.is_set
	|| (session_key !=  nullptr && session_key->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_discriminator.operation)
	|| is_set(sessiontype.operation)
	|| (session_key !=  nullptr && session_key->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(std::move(c));
        children[segment_path] = owner_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "session-key")
    {
        if(session_key != nullptr)
        {
            children["session-key"] = session_key;
        }
        else
        {
            session_key = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey>();
            session_key->parent = this;
            children["session-key"] = session_key;
        }
        return children.at("session-key");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::get_children()
{
    for (auto const & c : owner_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("session-key") == children.end())
    {
        if(session_key != nullptr)
        {
            children["session-key"] = session_key;
        }
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::SessionKey()
    :
    incoming_label{YType::uint32, "incoming-label"},
    interface_name{YType::str, "interface-name"},
    sbfd_enabled{YType::int32, "sbfd-enabled"},
    sbfd_target_type{YType::uint32, "sbfd-target-type"},
    session_key_type{YType::uint32, "session-key-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    bfdfec(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec>())
	,ip_destination_address(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>())
	,ip_source_address(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress>())
	,target_address(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress>())
{
    bfdfec->parent = this;
    children["bfdfec"] = bfdfec;

    ip_destination_address->parent = this;
    children["ip-destination-address"] = ip_destination_address;

    ip_source_address->parent = this;
    children["ip-source-address"] = ip_source_address;

    target_address->parent = this;
    children["target-address"] = target_address;

    yang_name = "session-key"; yang_parent_name = "association-information";
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::~SessionKey()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::has_data() const
{
    return incoming_label.is_set
	|| interface_name.is_set
	|| sbfd_enabled.is_set
	|| sbfd_target_type.is_set
	|| session_key_type.is_set
	|| vrf_name.is_set
	|| (bfdfec !=  nullptr && bfdfec->has_data())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data())
	|| (ip_source_address !=  nullptr && ip_source_address->has_data())
	|| (target_address !=  nullptr && target_address->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(sbfd_enabled.operation)
	|| is_set(sbfd_target_type.operation)
	|| is_set(session_key_type.operation)
	|| is_set(vrf_name.operation)
	|| (bfdfec !=  nullptr && bfdfec->has_operation())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation())
	|| (ip_source_address !=  nullptr && ip_source_address->has_operation())
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-key";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sbfd_enabled.is_set || is_set(sbfd_enabled.operation)) leaf_name_data.push_back(sbfd_enabled.get_name_leafdata());
    if (sbfd_target_type.is_set || is_set(sbfd_target_type.operation)) leaf_name_data.push_back(sbfd_target_type.get_name_leafdata());
    if (session_key_type.is_set || is_set(session_key_type.operation)) leaf_name_data.push_back(session_key_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfdfec")
    {
        if(bfdfec != nullptr)
        {
            children["bfdfec"] = bfdfec;
        }
        else
        {
            bfdfec = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec>();
            bfdfec->parent = this;
            children["bfdfec"] = bfdfec;
        }
        return children.at("bfdfec");
    }

    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address != nullptr)
        {
            children["ip-destination-address"] = ip_destination_address;
        }
        else
        {
            ip_destination_address = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>();
            ip_destination_address->parent = this;
            children["ip-destination-address"] = ip_destination_address;
        }
        return children.at("ip-destination-address");
    }

    if(child_yang_name == "ip-source-address")
    {
        if(ip_source_address != nullptr)
        {
            children["ip-source-address"] = ip_source_address;
        }
        else
        {
            ip_source_address = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress>();
            ip_source_address->parent = this;
            children["ip-source-address"] = ip_source_address;
        }
        return children.at("ip-source-address");
    }

    if(child_yang_name == "target-address")
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
        else
        {
            target_address = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress>();
            target_address->parent = this;
            children["target-address"] = target_address;
        }
        return children.at("target-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::get_children()
{
    if(children.find("bfdfec") == children.end())
    {
        if(bfdfec != nullptr)
        {
            children["bfdfec"] = bfdfec;
        }
    }

    if(children.find("ip-destination-address") == children.end())
    {
        if(ip_destination_address != nullptr)
        {
            children["ip-destination-address"] = ip_destination_address;
        }
    }

    if(children.find("ip-source-address") == children.end())
    {
        if(ip_source_address != nullptr)
        {
            children["ip-source-address"] = ip_source_address;
        }
    }

    if(children.find("target-address") == children.end())
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "sbfd-enabled")
    {
        sbfd_enabled = value;
    }
    if(value_path == "sbfd-target-type")
    {
        sbfd_target_type = value;
    }
    if(value_path == "session-key-type")
    {
        session_key_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-destination-address"; yang_parent_name = "session-key";
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::IpSourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-source-address"; yang_parent_name = "session-key";
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::~IpSourceAddress()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-address";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Bfdfec()
    :
    bfdfe_ctype{YType::enumeration, "bfdfe-ctype"}
    	,
    dummy(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>())
	,te_s2l_fec(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>())
{
    dummy->parent = this;
    children["dummy"] = dummy;

    te_s2l_fec->parent = this;
    children["te-s2l-fec"] = te_s2l_fec;

    yang_name = "bfdfec"; yang_parent_name = "session-key";
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::~Bfdfec()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::has_data() const
{
    return bfdfe_ctype.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::has_operation() const
{
    return is_set(operation)
	|| is_set(bfdfe_ctype.operation)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfdfec";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfdfe_ctype.is_set || is_set(bfdfe_ctype.operation)) leaf_name_data.push_back(bfdfe_ctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dummy")
    {
        if(dummy != nullptr)
        {
            children["dummy"] = dummy;
        }
        else
        {
            dummy = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>();
            dummy->parent = this;
            children["dummy"] = dummy;
        }
        return children.at("dummy");
    }

    if(child_yang_name == "te-s2l-fec")
    {
        if(te_s2l_fec != nullptr)
        {
            children["te-s2l-fec"] = te_s2l_fec;
        }
        else
        {
            te_s2l_fec = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>();
            te_s2l_fec->parent = this;
            children["te-s2l-fec"] = te_s2l_fec;
        }
        return children.at("te-s2l-fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_children()
{
    if(children.find("dummy") == children.end())
    {
        if(dummy != nullptr)
        {
            children["dummy"] = dummy;
        }
    }

    if(children.find("te-s2l-fec") == children.end())
    {
        if(te_s2l_fec != nullptr)
        {
            children["te-s2l-fec"] = te_s2l_fec;
        }
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfdfe-ctype")
    {
        bfdfe_ctype = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::Dummy()
    :
    dummy{YType::str, "dummy"}
{
    yang_name = "dummy"; yang_parent_name = "bfdfec";
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::~Dummy()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_data() const
{
    return dummy.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_operation() const
{
    return is_set(operation)
	|| is_set(dummy.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dummy")
    {
        dummy = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::TeS2LFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{
    yang_name = "te-s2l-fec"; yang_parent_name = "bfdfec";
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::~TeS2LFec()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_fec_ctype.operation)
	|| is_set(s2l_fec_dest.operation)
	|| is_set(s2l_fec_extended_tunnel_id.operation)
	|| is_set(s2l_fec_lsp_id.operation)
	|| is_set(s2l_fec_p2mp_id.operation)
	|| is_set(s2l_fec_source.operation)
	|| is_set(s2l_fec_subgroup_id.operation)
	|| is_set(s2l_fec_subgroup_originator.operation)
	|| is_set(s2l_fec_tunnel_id.operation)
	|| is_set(s2l_fec_vrf.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-s2l-fec";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.operation)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.operation)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.operation)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.operation)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.operation)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.operation)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.operation)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.operation)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress::TargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target-address"; yang_parent_name = "session-key";
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress::~TargetAddress()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "association-information";
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

EntityPath Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::get_children()
{
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetails()
{
    yang_name = "ipv6-single-hop-session-details"; yang_parent_name = "bfd";
}

Bfd::Ipv6SingleHopSessionDetails::~Ipv6SingleHopSessionDetails()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::has_data() const
{
    for (std::size_t index=0; index<ipv6_single_hop_session_detail.size(); index++)
    {
        if(ipv6_single_hop_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_session_detail.size(); index++)
    {
        if(ipv6_single_hop_session_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-session-details";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-single-hop-session-detail")
    {
        for(auto const & c : ipv6_single_hop_session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail>();
        c->parent = this;
        ipv6_single_hop_session_detail.push_back(std::move(c));
        children[segment_path] = ipv6_single_hop_session_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::get_children()
{
    for (auto const & c : ipv6_single_hop_session_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::Ipv6SingleHopSessionDetail()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"}
    	,
    lsp_ping_info(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo>())
	,mp_download_state(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState>())
	,status_information(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation>())
{
    lsp_ping_info->parent = this;
    children["lsp-ping-info"] = lsp_ping_info;

    mp_download_state->parent = this;
    children["mp-download-state"] = mp_download_state;

    status_information->parent = this;
    children["status-information"] = status_information;

    yang_name = "ipv6-single-hop-session-detail"; yang_parent_name = "ipv6-single-hop-session-details";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::~Ipv6SingleHopSessionDetail()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::has_data() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| interface_name.is_set
	|| location.is_set
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (status_information !=  nullptr && status_information->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(location.operation)
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (status_information !=  nullptr && status_information->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-session-detail";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(std::move(c));
        children[segment_path] = association_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info != nullptr)
        {
            children["lsp-ping-info"] = lsp_ping_info;
        }
        else
        {
            lsp_ping_info = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo>();
            lsp_ping_info->parent = this;
            children["lsp-ping-info"] = lsp_ping_info;
        }
        return children.at("lsp-ping-info");
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state != nullptr)
        {
            children["mp-download-state"] = mp_download_state;
        }
        else
        {
            mp_download_state = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState>();
            mp_download_state->parent = this;
            children["mp-download-state"] = mp_download_state;
        }
        return children.at("mp-download-state");
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(std::move(c));
        children[segment_path] = owner_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "status-information")
    {
        if(status_information != nullptr)
        {
            children["status-information"] = status_information;
        }
        else
        {
            status_information = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation>();
            status_information->parent = this;
            children["status-information"] = status_information;
        }
        return children.at("status-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::get_children()
{
    for (auto const & c : association_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("lsp-ping-info") == children.end())
    {
        if(lsp_ping_info != nullptr)
        {
            children["lsp-ping-info"] = lsp_ping_info;
        }
    }

    if(children.find("mp-download-state") == children.end())
    {
        if(mp_download_state != nullptr)
        {
            children["mp-download-state"] = mp_download_state;
        }
    }

    for (auto const & c : owner_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("status-information") == children.end())
    {
        if(status_information != nullptr)
        {
            children["status-information"] = status_information;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusInformation()
    :
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    internal_label{YType::uint32, "internal-label"},
    latency_average{YType::uint32, "latency-average"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_number{YType::uint32, "latency-number"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    session_subtype{YType::str, "session-subtype"},
    sessiontype{YType::enumeration, "sessiontype"},
    state{YType::enumeration, "state"},
    to_up_state_count{YType::uint32, "to-up-state-count"}
    	,
    async_receive_statistics(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,async_transmit_statistics(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics>())
	,last_state_change(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange>())
	,receive_packet(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket>())
	,source_address(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress>())
	,status_brief_information(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation>())
	,transmit_packet(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket>())
{
    async_receive_statistics->parent = this;
    children["async-receive-statistics"] = async_receive_statistics;

    async_transmit_statistics->parent = this;
    children["async-transmit-statistics"] = async_transmit_statistics;

    echo_received_statistics->parent = this;
    children["echo-received-statistics"] = echo_received_statistics;

    echo_transmit_statistics->parent = this;
    children["echo-transmit-statistics"] = echo_transmit_statistics;

    last_state_change->parent = this;
    children["last-state-change"] = last_state_change;

    receive_packet->parent = this;
    children["receive-packet"] = receive_packet;

    source_address->parent = this;
    children["source-address"] = source_address;

    status_brief_information->parent = this;
    children["status-brief-information"] = status_brief_information;

    transmit_packet->parent = this;
    children["transmit-packet"] = transmit_packet;

    yang_name = "status-information"; yang_parent_name = "ipv6-single-hop-session-detail";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::has_data() const
{
    return desired_minimum_echo_transmit_interval.is_set
	|| internal_label.is_set
	|| latency_average.is_set
	|| latency_maximum.is_set
	|| latency_minimum.is_set
	|| latency_number.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| remote_discriminator.is_set
	|| remote_negotiated_interval.is_set
	|| session_subtype.is_set
	|| sessiontype.is_set
	|| state.is_set
	|| to_up_state_count.is_set
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(desired_minimum_echo_transmit_interval.operation)
	|| is_set(internal_label.operation)
	|| is_set(latency_average.operation)
	|| is_set(latency_maximum.operation)
	|| is_set(latency_minimum.operation)
	|| is_set(latency_number.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(node_id.operation)
	|| is_set(remote_discriminator.operation)
	|| is_set(remote_negotiated_interval.operation)
	|| is_set(session_subtype.operation)
	|| is_set(sessiontype.operation)
	|| is_set(state.operation)
	|| is_set(to_up_state_count.operation)
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.operation)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.operation)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.operation)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.operation)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.operation)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.operation)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.operation)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics != nullptr)
        {
            children["async-receive-statistics"] = async_receive_statistics;
        }
        else
        {
            async_receive_statistics = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics>();
            async_receive_statistics->parent = this;
            children["async-receive-statistics"] = async_receive_statistics;
        }
        return children.at("async-receive-statistics");
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics != nullptr)
        {
            children["async-transmit-statistics"] = async_transmit_statistics;
        }
        else
        {
            async_transmit_statistics = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics>();
            async_transmit_statistics->parent = this;
            children["async-transmit-statistics"] = async_transmit_statistics;
        }
        return children.at("async-transmit-statistics");
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics != nullptr)
        {
            children["echo-received-statistics"] = echo_received_statistics;
        }
        else
        {
            echo_received_statistics = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics>();
            echo_received_statistics->parent = this;
            children["echo-received-statistics"] = echo_received_statistics;
        }
        return children.at("echo-received-statistics");
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics != nullptr)
        {
            children["echo-transmit-statistics"] = echo_transmit_statistics;
        }
        else
        {
            echo_transmit_statistics = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics>();
            echo_transmit_statistics->parent = this;
            children["echo-transmit-statistics"] = echo_transmit_statistics;
        }
        return children.at("echo-transmit-statistics");
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change != nullptr)
        {
            children["last-state-change"] = last_state_change;
        }
        else
        {
            last_state_change = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange>();
            last_state_change->parent = this;
            children["last-state-change"] = last_state_change;
        }
        return children.at("last-state-change");
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet != nullptr)
        {
            children["receive-packet"] = receive_packet;
        }
        else
        {
            receive_packet = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket>();
            receive_packet->parent = this;
            children["receive-packet"] = receive_packet;
        }
        return children.at("receive-packet");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
        else
        {
            status_brief_information = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation>();
            status_brief_information->parent = this;
            children["status-brief-information"] = status_brief_information;
        }
        return children.at("status-brief-information");
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet != nullptr)
        {
            children["transmit-packet"] = transmit_packet;
        }
        else
        {
            transmit_packet = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket>();
            transmit_packet->parent = this;
            children["transmit-packet"] = transmit_packet;
        }
        return children.at("transmit-packet");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::get_children()
{
    if(children.find("async-receive-statistics") == children.end())
    {
        if(async_receive_statistics != nullptr)
        {
            children["async-receive-statistics"] = async_receive_statistics;
        }
    }

    if(children.find("async-transmit-statistics") == children.end())
    {
        if(async_transmit_statistics != nullptr)
        {
            children["async-transmit-statistics"] = async_transmit_statistics;
        }
    }

    if(children.find("echo-received-statistics") == children.end())
    {
        if(echo_received_statistics != nullptr)
        {
            children["echo-received-statistics"] = echo_received_statistics;
        }
    }

    if(children.find("echo-transmit-statistics") == children.end())
    {
        if(echo_transmit_statistics != nullptr)
        {
            children["echo-transmit-statistics"] = echo_transmit_statistics;
        }
    }

    if(children.find("last-state-change") == children.end())
    {
        if(last_state_change != nullptr)
        {
            children["last-state-change"] = last_state_change;
        }
    }

    if(children.find("receive-packet") == children.end())
    {
        if(receive_packet != nullptr)
        {
            children["receive-packet"] = receive_packet;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    if(children.find("status-brief-information") == children.end())
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
    }

    if(children.find("transmit-packet") == children.end())
    {
        if(transmit_packet != nullptr)
        {
            children["transmit-packet"] = transmit_packet;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "source-address"; yang_parent_name = "status-information";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "last-state-change"; yang_parent_name = "status-information";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(minutes.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "transmit-packet"; yang_parent_name = "status-information";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "receive-packet"; yang_parent_name = "status-information";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    children["async-interval-multiplier"] = async_interval_multiplier;

    echo_interval_multiplier->parent = this;
    children["echo-interval-multiplier"] = echo_interval_multiplier;

    yang_name = "status-brief-information"; yang_parent_name = "status-information";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        else
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
            async_interval_multiplier->parent = this;
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        return children.at("async-interval-multiplier");
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        else
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
            echo_interval_multiplier->parent = this;
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        return children.at("echo-interval-multiplier");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_children()
{
    if(children.find("async-interval-multiplier") == children.end())
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
    }

    if(children.find("echo-interval-multiplier") == children.end())
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-receive-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-received-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;
    children["change-time"] = change_time;

    yang_name = "mp-download-state"; yang_parent_name = "ipv6-single-hop-session-detail";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(operation)
	|| is_set(mp_download_state.operation)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.operation)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "change-time")
    {
        if(change_time != nullptr)
        {
            children["change-time"] = change_time;
        }
        else
        {
            change_time = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime>();
            change_time->parent = this;
            children["change-time"] = change_time;
        }
        return children.at("change-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::get_children()
{
    if(children.find("change-time") == children.end())
    {
        if(change_time != nullptr)
        {
            children["change-time"] = change_time;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "change-time"; yang_parent_name = "mp-download-state";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/mp-download-state/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, std::string value)
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

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"}
    	,
    lsp_ping_rx_last_time(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_tx_last_time(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime>())
{
    lsp_ping_rx_last_time->parent = this;
    children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;

    lsp_ping_tx_last_error_time->parent = this;
    children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;

    lsp_ping_tx_last_time->parent = this;
    children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;

    yang_name = "lsp-ping-info"; yang_parent_name = "ipv6-single-hop-session-detail";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_last_output.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_ping_rx_count.operation)
	|| is_set(lsp_ping_rx_last_code.operation)
	|| is_set(lsp_ping_rx_last_discr.operation)
	|| is_set(lsp_ping_rx_last_output.operation)
	|| is_set(lsp_ping_rx_last_subcode.operation)
	|| is_set(lsp_ping_tx_count.operation)
	|| is_set(lsp_ping_tx_error_count.operation)
	|| is_set(lsp_ping_tx_last_error_rc.operation)
	|| is_set(lsp_ping_tx_last_rc.operation)
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.operation)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.operation)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.operation)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.operation)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.operation)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.operation)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.operation)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time != nullptr)
        {
            children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
        }
        else
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime>();
            lsp_ping_rx_last_time->parent = this;
            children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
        }
        return children.at("lsp-ping-rx-last-time");
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time != nullptr)
        {
            children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
        }
        else
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
            lsp_ping_tx_last_error_time->parent = this;
            children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
        }
        return children.at("lsp-ping-tx-last-error-time");
    }

    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time != nullptr)
        {
            children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
        }
        else
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime>();
            lsp_ping_tx_last_time->parent = this;
            children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
        }
        return children.at("lsp-ping-tx-last-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::get_children()
{
    if(children.find("lsp-ping-rx-last-time") == children.end())
    {
        if(lsp_ping_rx_last_time != nullptr)
        {
            children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
        }
    }

    if(children.find("lsp-ping-tx-last-error-time") == children.end())
    {
        if(lsp_ping_tx_last_error_time != nullptr)
        {
            children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
        }
    }

    if(children.find("lsp-ping-tx-last-time") == children.end())
    {
        if(lsp_ping_tx_last_time != nullptr)
        {
            children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, std::string value)
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

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, std::string value)
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

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, std::string value)
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

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "ipv6-single-hop-session-detail";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::AssociationInformation()
    :
    local_discriminator{YType::uint32, "local-discriminator"},
    sessiontype{YType::enumeration, "sessiontype"}
    	,
    session_key(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey>())
{
    session_key->parent = this;
    children["session-key"] = session_key;

    yang_name = "association-information"; yang_parent_name = "ipv6-single-hop-session-detail";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return local_discriminator.is_set
	|| sessiontype.is_set
	|| (session_key !=  nullptr && session_key->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_discriminator.operation)
	|| is_set(sessiontype.operation)
	|| (session_key !=  nullptr && session_key->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(std::move(c));
        children[segment_path] = owner_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "session-key")
    {
        if(session_key != nullptr)
        {
            children["session-key"] = session_key;
        }
        else
        {
            session_key = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey>();
            session_key->parent = this;
            children["session-key"] = session_key;
        }
        return children.at("session-key");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::get_children()
{
    for (auto const & c : owner_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("session-key") == children.end())
    {
        if(session_key != nullptr)
        {
            children["session-key"] = session_key;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::SessionKey()
    :
    incoming_label{YType::uint32, "incoming-label"},
    interface_name{YType::str, "interface-name"},
    sbfd_enabled{YType::int32, "sbfd-enabled"},
    sbfd_target_type{YType::uint32, "sbfd-target-type"},
    session_key_type{YType::uint32, "session-key-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    bfdfec(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec>())
	,ip_destination_address(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>())
	,ip_source_address(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress>())
	,target_address(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress>())
{
    bfdfec->parent = this;
    children["bfdfec"] = bfdfec;

    ip_destination_address->parent = this;
    children["ip-destination-address"] = ip_destination_address;

    ip_source_address->parent = this;
    children["ip-source-address"] = ip_source_address;

    target_address->parent = this;
    children["target-address"] = target_address;

    yang_name = "session-key"; yang_parent_name = "association-information";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::~SessionKey()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::has_data() const
{
    return incoming_label.is_set
	|| interface_name.is_set
	|| sbfd_enabled.is_set
	|| sbfd_target_type.is_set
	|| session_key_type.is_set
	|| vrf_name.is_set
	|| (bfdfec !=  nullptr && bfdfec->has_data())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data())
	|| (ip_source_address !=  nullptr && ip_source_address->has_data())
	|| (target_address !=  nullptr && target_address->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(sbfd_enabled.operation)
	|| is_set(sbfd_target_type.operation)
	|| is_set(session_key_type.operation)
	|| is_set(vrf_name.operation)
	|| (bfdfec !=  nullptr && bfdfec->has_operation())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation())
	|| (ip_source_address !=  nullptr && ip_source_address->has_operation())
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-key";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sbfd_enabled.is_set || is_set(sbfd_enabled.operation)) leaf_name_data.push_back(sbfd_enabled.get_name_leafdata());
    if (sbfd_target_type.is_set || is_set(sbfd_target_type.operation)) leaf_name_data.push_back(sbfd_target_type.get_name_leafdata());
    if (session_key_type.is_set || is_set(session_key_type.operation)) leaf_name_data.push_back(session_key_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfdfec")
    {
        if(bfdfec != nullptr)
        {
            children["bfdfec"] = bfdfec;
        }
        else
        {
            bfdfec = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec>();
            bfdfec->parent = this;
            children["bfdfec"] = bfdfec;
        }
        return children.at("bfdfec");
    }

    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address != nullptr)
        {
            children["ip-destination-address"] = ip_destination_address;
        }
        else
        {
            ip_destination_address = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>();
            ip_destination_address->parent = this;
            children["ip-destination-address"] = ip_destination_address;
        }
        return children.at("ip-destination-address");
    }

    if(child_yang_name == "ip-source-address")
    {
        if(ip_source_address != nullptr)
        {
            children["ip-source-address"] = ip_source_address;
        }
        else
        {
            ip_source_address = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress>();
            ip_source_address->parent = this;
            children["ip-source-address"] = ip_source_address;
        }
        return children.at("ip-source-address");
    }

    if(child_yang_name == "target-address")
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
        else
        {
            target_address = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress>();
            target_address->parent = this;
            children["target-address"] = target_address;
        }
        return children.at("target-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::get_children()
{
    if(children.find("bfdfec") == children.end())
    {
        if(bfdfec != nullptr)
        {
            children["bfdfec"] = bfdfec;
        }
    }

    if(children.find("ip-destination-address") == children.end())
    {
        if(ip_destination_address != nullptr)
        {
            children["ip-destination-address"] = ip_destination_address;
        }
    }

    if(children.find("ip-source-address") == children.end())
    {
        if(ip_source_address != nullptr)
        {
            children["ip-source-address"] = ip_source_address;
        }
    }

    if(children.find("target-address") == children.end())
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "sbfd-enabled")
    {
        sbfd_enabled = value;
    }
    if(value_path == "sbfd-target-type")
    {
        sbfd_target_type = value;
    }
    if(value_path == "session-key-type")
    {
        session_key_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-destination-address"; yang_parent_name = "session-key";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::IpSourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-source-address"; yang_parent_name = "session-key";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::~IpSourceAddress()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-address";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Bfdfec()
    :
    bfdfe_ctype{YType::enumeration, "bfdfe-ctype"}
    	,
    dummy(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>())
	,te_s2l_fec(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>())
{
    dummy->parent = this;
    children["dummy"] = dummy;

    te_s2l_fec->parent = this;
    children["te-s2l-fec"] = te_s2l_fec;

    yang_name = "bfdfec"; yang_parent_name = "session-key";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::~Bfdfec()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::has_data() const
{
    return bfdfe_ctype.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::has_operation() const
{
    return is_set(operation)
	|| is_set(bfdfe_ctype.operation)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfdfec";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfdfe_ctype.is_set || is_set(bfdfe_ctype.operation)) leaf_name_data.push_back(bfdfe_ctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dummy")
    {
        if(dummy != nullptr)
        {
            children["dummy"] = dummy;
        }
        else
        {
            dummy = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>();
            dummy->parent = this;
            children["dummy"] = dummy;
        }
        return children.at("dummy");
    }

    if(child_yang_name == "te-s2l-fec")
    {
        if(te_s2l_fec != nullptr)
        {
            children["te-s2l-fec"] = te_s2l_fec;
        }
        else
        {
            te_s2l_fec = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>();
            te_s2l_fec->parent = this;
            children["te-s2l-fec"] = te_s2l_fec;
        }
        return children.at("te-s2l-fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_children()
{
    if(children.find("dummy") == children.end())
    {
        if(dummy != nullptr)
        {
            children["dummy"] = dummy;
        }
    }

    if(children.find("te-s2l-fec") == children.end())
    {
        if(te_s2l_fec != nullptr)
        {
            children["te-s2l-fec"] = te_s2l_fec;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfdfe-ctype")
    {
        bfdfe_ctype = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::Dummy()
    :
    dummy{YType::str, "dummy"}
{
    yang_name = "dummy"; yang_parent_name = "bfdfec";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::~Dummy()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_data() const
{
    return dummy.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_operation() const
{
    return is_set(operation)
	|| is_set(dummy.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dummy")
    {
        dummy = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::TeS2LFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{
    yang_name = "te-s2l-fec"; yang_parent_name = "bfdfec";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::~TeS2LFec()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_fec_ctype.operation)
	|| is_set(s2l_fec_dest.operation)
	|| is_set(s2l_fec_extended_tunnel_id.operation)
	|| is_set(s2l_fec_lsp_id.operation)
	|| is_set(s2l_fec_p2mp_id.operation)
	|| is_set(s2l_fec_source.operation)
	|| is_set(s2l_fec_subgroup_id.operation)
	|| is_set(s2l_fec_subgroup_originator.operation)
	|| is_set(s2l_fec_tunnel_id.operation)
	|| is_set(s2l_fec_vrf.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-s2l-fec";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.operation)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.operation)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.operation)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.operation)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.operation)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.operation)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.operation)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.operation)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::TargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target-address"; yang_parent_name = "session-key";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::~TargetAddress()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "association-information";
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::Ipv4MultiHopCounters::Ipv4MultiHopCounters()
    :
    ipv4_multi_hop_packet_counters(std::make_shared<Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters>())
{
    ipv4_multi_hop_packet_counters->parent = this;
    children["ipv4-multi-hop-packet-counters"] = ipv4_multi_hop_packet_counters;

    yang_name = "ipv4-multi-hop-counters"; yang_parent_name = "bfd";
}

Bfd::Ipv4MultiHopCounters::~Ipv4MultiHopCounters()
{
}

bool Bfd::Ipv4MultiHopCounters::has_data() const
{
    return (ipv4_multi_hop_packet_counters !=  nullptr && ipv4_multi_hop_packet_counters->has_data());
}

bool Bfd::Ipv4MultiHopCounters::has_operation() const
{
    return is_set(operation)
	|| (ipv4_multi_hop_packet_counters !=  nullptr && ipv4_multi_hop_packet_counters->has_operation());
}

std::string Bfd::Ipv4MultiHopCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-counters";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4MultiHopCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-multi-hop-packet-counters")
    {
        if(ipv4_multi_hop_packet_counters != nullptr)
        {
            children["ipv4-multi-hop-packet-counters"] = ipv4_multi_hop_packet_counters;
        }
        else
        {
            ipv4_multi_hop_packet_counters = std::make_shared<Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters>();
            ipv4_multi_hop_packet_counters->parent = this;
            children["ipv4-multi-hop-packet-counters"] = ipv4_multi_hop_packet_counters;
        }
        return children.at("ipv4-multi-hop-packet-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4MultiHopCounters::get_children()
{
    if(children.find("ipv4-multi-hop-packet-counters") == children.end())
    {
        if(ipv4_multi_hop_packet_counters != nullptr)
        {
            children["ipv4-multi-hop-packet-counters"] = ipv4_multi_hop_packet_counters;
        }
    }

    return children;
}

void Bfd::Ipv4MultiHopCounters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounters()
{
    yang_name = "ipv4-multi-hop-packet-counters"; yang_parent_name = "ipv4-multi-hop-counters";
}

Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::~Ipv4MultiHopPacketCounters()
{
}

bool Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::has_data() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_packet_counter.size(); index++)
    {
        if(ipv4_multi_hop_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_packet_counter.size(); index++)
    {
        if(ipv4_multi_hop_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-packet-counters";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-multi-hop-packet-counter")
    {
        for(auto const & c : ipv4_multi_hop_packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter>();
        c->parent = this;
        ipv4_multi_hop_packet_counter.push_back(std::move(c));
        children[segment_path] = ipv4_multi_hop_packet_counter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::get_children()
{
    for (auto const & c : ipv4_multi_hop_packet_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::Ipv4MultiHopPacketCounter()
    :
    destination_address{YType::str, "destination-address"},
    display_type{YType::enumeration, "display-type"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"},
    location{YType::str, "location"},
    source_address{YType::str, "source-address"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv4-multi-hop-packet-counter"; yang_parent_name = "ipv4-multi-hop-packet-counters";
}

Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::~Ipv4MultiHopPacketCounter()
{
}

bool Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::has_data() const
{
    return destination_address.is_set
	|| display_type.is_set
	|| echo_receive_count.is_set
	|| echo_transmit_count.is_set
	|| hello_receive_count.is_set
	|| hello_transmit_count.is_set
	|| location.is_set
	|| source_address.is_set
	|| vrf_name.is_set;
}

bool Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(display_type.operation)
	|| is_set(echo_receive_count.operation)
	|| is_set(echo_transmit_count.operation)
	|| is_set(hello_receive_count.operation)
	|| is_set(hello_transmit_count.operation)
	|| is_set(location.operation)
	|| is_set(source_address.operation)
	|| is_set(vrf_name.operation);
}

std::string Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-packet-counter";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-counters/ipv4-multi-hop-packet-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (display_type.is_set || is_set(display_type.operation)) leaf_name_data.push_back(display_type.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.operation)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.operation)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.operation)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.operation)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::get_children()
{
    return children;
}

void Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "display-type")
    {
        display_type = value;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count = value;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count = value;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count = value;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::SessionDetails::SessionDetails()
{
    yang_name = "session-details"; yang_parent_name = "bfd";
}

Bfd::SessionDetails::~SessionDetails()
{
}

bool Bfd::SessionDetails::has_data() const
{
    for (std::size_t index=0; index<session_detail.size(); index++)
    {
        if(session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::SessionDetails::has_operation() const
{
    for (std::size_t index=0; index<session_detail.size(); index++)
    {
        if(session_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::SessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-details";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-detail")
    {
        for(auto const & c : session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::SessionDetails::SessionDetail>();
        c->parent = this;
        session_detail.push_back(std::move(c));
        children[segment_path] = session_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::get_children()
{
    for (auto const & c : session_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::SessionDetails::set_value(const std::string & value_path, std::string value)
{
}

Bfd::SessionDetails::SessionDetail::SessionDetail()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"}
    	,
    lsp_ping_info(std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo>())
	,mp_download_state(std::make_shared<Bfd::SessionDetails::SessionDetail::MpDownloadState>())
	,status_information(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation>())
{
    lsp_ping_info->parent = this;
    children["lsp-ping-info"] = lsp_ping_info;

    mp_download_state->parent = this;
    children["mp-download-state"] = mp_download_state;

    status_information->parent = this;
    children["status-information"] = status_information;

    yang_name = "session-detail"; yang_parent_name = "session-details";
}

Bfd::SessionDetails::SessionDetail::~SessionDetail()
{
}

bool Bfd::SessionDetails::SessionDetail::has_data() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| interface_name.is_set
	|| location.is_set
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (status_information !=  nullptr && status_information->has_data());
}

bool Bfd::SessionDetails::SessionDetail::has_operation() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(location.operation)
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (status_information !=  nullptr && status_information->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(std::move(c));
        children[segment_path] = association_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info != nullptr)
        {
            children["lsp-ping-info"] = lsp_ping_info;
        }
        else
        {
            lsp_ping_info = std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo>();
            lsp_ping_info->parent = this;
            children["lsp-ping-info"] = lsp_ping_info;
        }
        return children.at("lsp-ping-info");
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state != nullptr)
        {
            children["mp-download-state"] = mp_download_state;
        }
        else
        {
            mp_download_state = std::make_shared<Bfd::SessionDetails::SessionDetail::MpDownloadState>();
            mp_download_state->parent = this;
            children["mp-download-state"] = mp_download_state;
        }
        return children.at("mp-download-state");
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::SessionDetails::SessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(std::move(c));
        children[segment_path] = owner_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "status-information")
    {
        if(status_information != nullptr)
        {
            children["status-information"] = status_information;
        }
        else
        {
            status_information = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation>();
            status_information->parent = this;
            children["status-information"] = status_information;
        }
        return children.at("status-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::get_children()
{
    for (auto const & c : association_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("lsp-ping-info") == children.end())
    {
        if(lsp_ping_info != nullptr)
        {
            children["lsp-ping-info"] = lsp_ping_info;
        }
    }

    if(children.find("mp-download-state") == children.end())
    {
        if(mp_download_state != nullptr)
        {
            children["mp-download-state"] = mp_download_state;
        }
    }

    for (auto const & c : owner_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("status-information") == children.end())
    {
        if(status_information != nullptr)
        {
            children["status-information"] = status_information;
        }
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusInformation()
    :
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    internal_label{YType::uint32, "internal-label"},
    latency_average{YType::uint32, "latency-average"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_number{YType::uint32, "latency-number"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    session_subtype{YType::str, "session-subtype"},
    sessiontype{YType::enumeration, "sessiontype"},
    state{YType::enumeration, "state"},
    to_up_state_count{YType::uint32, "to-up-state-count"}
    	,
    async_receive_statistics(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,async_transmit_statistics(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics>())
	,last_state_change(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange>())
	,receive_packet(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket>())
	,source_address(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress>())
	,status_brief_information(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation>())
	,transmit_packet(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket>())
{
    async_receive_statistics->parent = this;
    children["async-receive-statistics"] = async_receive_statistics;

    async_transmit_statistics->parent = this;
    children["async-transmit-statistics"] = async_transmit_statistics;

    echo_received_statistics->parent = this;
    children["echo-received-statistics"] = echo_received_statistics;

    echo_transmit_statistics->parent = this;
    children["echo-transmit-statistics"] = echo_transmit_statistics;

    last_state_change->parent = this;
    children["last-state-change"] = last_state_change;

    receive_packet->parent = this;
    children["receive-packet"] = receive_packet;

    source_address->parent = this;
    children["source-address"] = source_address;

    status_brief_information->parent = this;
    children["status-brief-information"] = status_brief_information;

    transmit_packet->parent = this;
    children["transmit-packet"] = transmit_packet;

    yang_name = "status-information"; yang_parent_name = "session-detail";
}

Bfd::SessionDetails::SessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::has_data() const
{
    return desired_minimum_echo_transmit_interval.is_set
	|| internal_label.is_set
	|| latency_average.is_set
	|| latency_maximum.is_set
	|| latency_minimum.is_set
	|| latency_number.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| remote_discriminator.is_set
	|| remote_negotiated_interval.is_set
	|| session_subtype.is_set
	|| sessiontype.is_set
	|| state.is_set
	|| to_up_state_count.is_set
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data());
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(desired_minimum_echo_transmit_interval.operation)
	|| is_set(internal_label.operation)
	|| is_set(latency_average.operation)
	|| is_set(latency_maximum.operation)
	|| is_set(latency_minimum.operation)
	|| is_set(latency_number.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(node_id.operation)
	|| is_set(remote_discriminator.operation)
	|| is_set(remote_negotiated_interval.operation)
	|| is_set(session_subtype.operation)
	|| is_set(sessiontype.operation)
	|| is_set(state.operation)
	|| is_set(to_up_state_count.operation)
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::StatusInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.operation)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.operation)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.operation)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.operation)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.operation)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.operation)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.operation)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics != nullptr)
        {
            children["async-receive-statistics"] = async_receive_statistics;
        }
        else
        {
            async_receive_statistics = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics>();
            async_receive_statistics->parent = this;
            children["async-receive-statistics"] = async_receive_statistics;
        }
        return children.at("async-receive-statistics");
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics != nullptr)
        {
            children["async-transmit-statistics"] = async_transmit_statistics;
        }
        else
        {
            async_transmit_statistics = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics>();
            async_transmit_statistics->parent = this;
            children["async-transmit-statistics"] = async_transmit_statistics;
        }
        return children.at("async-transmit-statistics");
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics != nullptr)
        {
            children["echo-received-statistics"] = echo_received_statistics;
        }
        else
        {
            echo_received_statistics = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics>();
            echo_received_statistics->parent = this;
            children["echo-received-statistics"] = echo_received_statistics;
        }
        return children.at("echo-received-statistics");
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics != nullptr)
        {
            children["echo-transmit-statistics"] = echo_transmit_statistics;
        }
        else
        {
            echo_transmit_statistics = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics>();
            echo_transmit_statistics->parent = this;
            children["echo-transmit-statistics"] = echo_transmit_statistics;
        }
        return children.at("echo-transmit-statistics");
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change != nullptr)
        {
            children["last-state-change"] = last_state_change;
        }
        else
        {
            last_state_change = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange>();
            last_state_change->parent = this;
            children["last-state-change"] = last_state_change;
        }
        return children.at("last-state-change");
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet != nullptr)
        {
            children["receive-packet"] = receive_packet;
        }
        else
        {
            receive_packet = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket>();
            receive_packet->parent = this;
            children["receive-packet"] = receive_packet;
        }
        return children.at("receive-packet");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
        else
        {
            status_brief_information = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation>();
            status_brief_information->parent = this;
            children["status-brief-information"] = status_brief_information;
        }
        return children.at("status-brief-information");
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet != nullptr)
        {
            children["transmit-packet"] = transmit_packet;
        }
        else
        {
            transmit_packet = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket>();
            transmit_packet->parent = this;
            children["transmit-packet"] = transmit_packet;
        }
        return children.at("transmit-packet");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::StatusInformation::get_children()
{
    if(children.find("async-receive-statistics") == children.end())
    {
        if(async_receive_statistics != nullptr)
        {
            children["async-receive-statistics"] = async_receive_statistics;
        }
    }

    if(children.find("async-transmit-statistics") == children.end())
    {
        if(async_transmit_statistics != nullptr)
        {
            children["async-transmit-statistics"] = async_transmit_statistics;
        }
    }

    if(children.find("echo-received-statistics") == children.end())
    {
        if(echo_received_statistics != nullptr)
        {
            children["echo-received-statistics"] = echo_received_statistics;
        }
    }

    if(children.find("echo-transmit-statistics") == children.end())
    {
        if(echo_transmit_statistics != nullptr)
        {
            children["echo-transmit-statistics"] = echo_transmit_statistics;
        }
    }

    if(children.find("last-state-change") == children.end())
    {
        if(last_state_change != nullptr)
        {
            children["last-state-change"] = last_state_change;
        }
    }

    if(children.find("receive-packet") == children.end())
    {
        if(receive_packet != nullptr)
        {
            children["receive-packet"] = receive_packet;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    if(children.find("status-brief-information") == children.end())
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
    }

    if(children.find("transmit-packet") == children.end())
    {
        if(transmit_packet != nullptr)
        {
            children["transmit-packet"] = transmit_packet;
        }
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
    }
}

Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "source-address"; yang_parent_name = "status-information";
}

Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "last-state-change"; yang_parent_name = "status-information";
}

Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(minutes.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "transmit-packet"; yang_parent_name = "status-information";
}

Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "receive-packet"; yang_parent_name = "status-information";
}

Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    children["async-interval-multiplier"] = async_interval_multiplier;

    echo_interval_multiplier->parent = this;
    children["echo-interval-multiplier"] = echo_interval_multiplier;

    yang_name = "status-brief-information"; yang_parent_name = "status-information";
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        else
        {
            async_interval_multiplier = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
            async_interval_multiplier->parent = this;
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        return children.at("async-interval-multiplier");
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        else
        {
            echo_interval_multiplier = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
            echo_interval_multiplier->parent = this;
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        return children.at("echo-interval-multiplier");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::get_children()
{
    if(children.find("async-interval-multiplier") == children.end())
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
    }

    if(children.find("echo-interval-multiplier") == children.end())
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-receive-statistics"; yang_parent_name = "status-information";
}

Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-received-statistics"; yang_parent_name = "status-information";
}

Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::SessionDetails::SessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;
    children["change-time"] = change_time;

    yang_name = "mp-download-state"; yang_parent_name = "session-detail";
}

Bfd::SessionDetails::SessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::has_operation() const
{
    return is_set(operation)
	|| is_set(mp_download_state.operation)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::MpDownloadState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.operation)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "change-time")
    {
        if(change_time != nullptr)
        {
            children["change-time"] = change_time;
        }
        else
        {
            change_time = std::make_shared<Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime>();
            change_time->parent = this;
            children["change-time"] = change_time;
        }
        return children.at("change-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::MpDownloadState::get_children()
{
    if(children.find("change-time") == children.end())
    {
        if(change_time != nullptr)
        {
            children["change-time"] = change_time;
        }
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::MpDownloadState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
    }
}

Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "change-time"; yang_parent_name = "mp-download-state";
}

Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/mp-download-state/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, std::string value)
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

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"}
    	,
    lsp_ping_rx_last_time(std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_tx_last_time(std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime>())
{
    lsp_ping_rx_last_time->parent = this;
    children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;

    lsp_ping_tx_last_error_time->parent = this;
    children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;

    lsp_ping_tx_last_time->parent = this;
    children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;

    yang_name = "lsp-ping-info"; yang_parent_name = "session-detail";
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_last_output.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data());
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_ping_rx_count.operation)
	|| is_set(lsp_ping_rx_last_code.operation)
	|| is_set(lsp_ping_rx_last_discr.operation)
	|| is_set(lsp_ping_rx_last_output.operation)
	|| is_set(lsp_ping_rx_last_subcode.operation)
	|| is_set(lsp_ping_tx_count.operation)
	|| is_set(lsp_ping_tx_error_count.operation)
	|| is_set(lsp_ping_tx_last_error_rc.operation)
	|| is_set(lsp_ping_tx_last_rc.operation)
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::LspPingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.operation)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.operation)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.operation)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.operation)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.operation)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.operation)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.operation)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time != nullptr)
        {
            children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
        }
        else
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime>();
            lsp_ping_rx_last_time->parent = this;
            children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
        }
        return children.at("lsp-ping-rx-last-time");
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time != nullptr)
        {
            children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
        }
        else
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
            lsp_ping_tx_last_error_time->parent = this;
            children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
        }
        return children.at("lsp-ping-tx-last-error-time");
    }

    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time != nullptr)
        {
            children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
        }
        else
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime>();
            lsp_ping_tx_last_time->parent = this;
            children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
        }
        return children.at("lsp-ping-tx-last-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::LspPingInfo::get_children()
{
    if(children.find("lsp-ping-rx-last-time") == children.end())
    {
        if(lsp_ping_rx_last_time != nullptr)
        {
            children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
        }
    }

    if(children.find("lsp-ping-tx-last-error-time") == children.end())
    {
        if(lsp_ping_tx_last_error_time != nullptr)
        {
            children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
        }
    }

    if(children.find("lsp-ping-tx-last-time") == children.end())
    {
        if(lsp_ping_tx_last_time != nullptr)
        {
            children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
        }
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
    }
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/lsp-ping-info/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, std::string value)
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

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/lsp-ping-info/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, std::string value)
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

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/lsp-ping-info/" << get_segment_path();
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

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, std::string value)
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

Bfd::SessionDetails::SessionDetail::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "session-detail";
}

Bfd::SessionDetails::SessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::SessionDetails::SessionDetail::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::SessionDetails::SessionDetail::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::SessionDetails::SessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::OwnerInformation::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}


}
}

